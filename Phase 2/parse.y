%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	extern char current_id[20];
	extern char current_type[20];
	extern char current_val[20];

%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT PREPROC ALPHA
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK
%token ENDIF
%expect 2

%token IDENTIFIER
%token INT_CONSTANT STRING_CONSTANT FLOAT_CONSTANT CHAR_CONSTANT

%nonassoc ELSE

%right LSHIFT_ASSIGN RSHIFT_ASSIGN
%right XOR_ASSIGN OR_ASSIGN
%right AND_ASSIGN MOD_ASSIGN
%right MUL_ASSIGN DIV_ASSIGN
%right PLUS_ASSIGN MINUS_ASSIGN
%right assignment_op

%left OR
%left AND
%left '|'
%left '&'
%left '^'
%left EQ NOT_EQ
%left LESS_THAN_EQ '<' GR_THAN_EQ '>'
%left LSHIFT RSHIFT 
%left '+' '-'
%left '*' '/' '%'

%right SIZEOF
%right '~' '!'
%left INCREMENT DECREMENT 


%start program

%%
program
			: declaration_list
			| PREPROC '<' ALPHA '.' 'h' '>' program
;


declaration_list
			: declaration D 

D
			: declaration_list
			| ;

declaration
			: variable_declaration 
			| function_declaration
			| structure_definition;

variable_declaration
			: type_specifier variable_declaration_list ';' 
			| structure_declaration;

variable_declaration_list
			: variable_declaration_identifier V;

V
			: ',' variable_declaration_list 
			| ;

variable_declaration_identifier 
			: IDENTIFIER { ins(); } vdi;

vdi : identifier_array_type | assignment_op expression ; 

identifier_array_type
			: '[' initilization_params
			| ;

initilization_params
			: INT_CONSTANT ']' initilization
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

type_specifier 
			: INT | CHAR | FLOAT | DOUBLE 
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT | ;

short_grammar 
			: INT | ;

structure_definition
			: STRUCT IDENTIFIER { ins(); } '{' V1  '}' ';';

V1 : variable_declaration V1 | ;

structure_declaration 
			: STRUCT IDENTIFIER variable_declaration_list;


function_declaration
			: function_declaration_type function_declaration_param_statement;

function_declaration_type
			: type_specifier IDENTIFIER '('  { ins();};

function_declaration_param_statement
			: params ')' statement;

params 
			: parameters_list | ;

parameters_list 
			: type_specifier parameters_identifier_list;

parameters_identifier_list 
			: param_identifier parameters_identifier_list_breakup;

parameters_identifier_list_breakup
			: ',' parameters_list 
			| ;

param_identifier 
			: IDENTIFIER { ins(); } param_identifier_breakup;

param_identifier_breakup
			: '[' ']'
			| ;

statement 
			: expression_statment | compound_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_declaration;

compound_statement 
			: '{' statment_list '}' ;

statment_list 
			: statement statment_list 
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' statement conditional_statements_breakup;

conditional_statements_breakup
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' simple_expression ')' statement 
			| FOR '(' expression ';' simple_expression ';' expression ')' 
			| DO statement WHILE '(' simple_expression ')' ';';

return_statement 
			: RETURN return_statement_breakup;

return_statement_breakup
			: ';' 
			| expression ';' ;

break_statement 
			: BREAK ';' ;

string_initilization
			: assignment_op STRING_CONSTANT { insV(); };

array_initialization
			: assignment_op '{' array_int_declarations '}';

array_int_declarations
			: INT_CONSTANT array_int_declarations_breakup;

array_int_declarations_breakup
			: ',' array_int_declarations 
			| ;

expression 
			: mutable expression_breakup
			| simple_expression ;

expression_breakup
			: assignment_op expression 
			| PLUS_ASSIGN expression 
			| MINUS_ASSIGN expression 
			| MUL_ASSIGN expression 
			| DIV_ASSIGN expression 
			| MOD_ASSIGN expression 
			| INCREMENT 
			| DECREMENT ;

simple_expression 
			: and_expression simple_expression_breakup;

simple_expression_breakup 
			: OR and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup;

and_expression_breakup
			: AND unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: '!' unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_breakup;

regular_expression_breakup
			: relational_ops sum_expression 
			| ;

relational_ops 
			: GR_THAN_EQ | LESS_THAN_EQ | '>' 
			| '<' | EQ | NOT_EQ ;

sum_expression 
			: sum_expression sum_ops term 
			| term ;

sum_ops 
			: '+' 
			| '-' ;

term
			: term MULOP factor 
			| factor ;

MULOP 
			: '*' | '/' | '%' ;

factor 
			: immutable | mutable ;

mutable 
			: IDENTIFIER 
			| mutable mutable_breakup;

mutable_breakup
			: '[' expression ']' 
			| '.' IDENTIFIER;

immutable 
			: '(' expression ')' 
			| call | constant;

call
			: IDENTIFIER '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression A;

A
			: ',' expression A 
			| ;

constant 
			: INT_CONSTANT 	{ insV(); } 
			| STRING_CONSTANT	{ insV(); } 
			| FLOAT_CONSTANT	{ insV(); } 
			| CHAR_CONSTANT{ insV(); };

%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	extern FILE *yyin;
	yyin = fopen("test input/input9.c", "r");
	yyparse();

	if(flag == 0)
	{
		printf("Parsing Successful\n");
		printST();

		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf("Parsing Failed\n");
}

void ins()
{
	insert_type(current_id,current_type);
}

void insV()
{
	insert_value(current_id,current_val);
}
