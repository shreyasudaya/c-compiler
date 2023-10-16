%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdint.h>
	#include <limits.h>
	#include <ctype.h>
	int yylex(void);
	
	entry_make** symbol_table;
    entry_make** constant_table;
	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	int current_dtype;
	extern char *yytext;
	int yyerror(char *msg);
	int yylineno;
	
%}

%union
{
	double dval;
	entry_make* entry;
	int ival;
}


%token <entry> IDENTIFIER

%token <dval> DEC_CONSTANT HEX_CONSTANT
%token STRING

%token SHORT INT LONG LONG_LONG FLOAT DOUBLE CHAR SIGNED UNSIGNED CONST 
%token IF FOR WHILE CONTINUE BREAK RETURN
%token LOGICAL_AND LOGICAL_OR LESS_THAN_EQ GR_THAN_EQ EQ NOT_EQ INCREMENT DECREMENT 

%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN PLUS_ASSIGN MINUS_ASSIGN


%type <dval> expression
%type <dval> sub_expr
%type <dval> constant
%type <dval> unary_expr
%type <dval> arithmetic_expr
%type <dval> assignment_expr
%type <entry> lhs
%type <ival> assign_op

%start start

%left ','
%right '='
%left LOGICAL_OR
%left LOGICAL_AND
%left EQ NOT_EQ
%left '<' '>' LESS_THAN_EQ GR_THAN_EQ
%left '+' '-'
%left '*' '/' '%'
%right '!'


%nonassoc UMINUS
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE


%%
//C program has many build blocks
start: start build
	|build
;

//build can be func or declaration
build: function
	 |declaration
;
//function
function: type IDENTIFIER '(' arg_list ')' compound_stmt;
//data type
type: data_type pointer
	|data_type;

pointer: '*' pointer	
	   |'*'
;

data_type: sign_spec type_spec
		|type_spec
;
//all possible combinations
sign_spec :SIGNED
	|UNSIGNED
	;

type_spec:INT {current_dtype=INT;}
	|SHORT INT {current_dtype=SHORT;}
	|SHORT     {current_dtype=SHORT;}
	|LONG	{current_dtype=LONG;}
	|LONG_LONG {current_dtype=LONG_LONG;}
	|LONG INT {current_dtype=LONG;}
	|LONG_LONG INT {current_dtype=LONG_LONG;}
	|FLOAT	{current_dtype=FLOAT;}
	|CHAR	{current_dtype=CHAR;}
	|DOUBLE {current_dtype=DOUBLE;}
	|LONG FLOAT    {current_dtype=LONG;}
	|LONG_LONG FLOAT {current_dtype=LONG_LONG;}
	;
//arguments
arg_list: arguments|
;
arguments: arguments ',' arg
		|arg
		;
arg: type IDENTIFIER;

stmt: compound_stmt
	|single_stmt
	;

compound_stmt:'{'statements'}'
;
statements:statements stmt|
;
single_stmt: if_block
	|for_loop
	|while_loop
	|declaration
	|function_call ';'
		|RETURN ';'
		|CONTINUE ';'
		|BREAK ';'
		|RETURN sub_expr ';'
	;

for_loop:FOR '('expression_stmt expression_stmt ')' stmt
		|FOR '(' expression_stmt expression_stmt expression ')' stmt
		;

if_block:IF '(' expression ')' stmt %prec LOWER_THAN_ELSE
				|IF '(' expression ')' stmt ELSE stmt
    ;

while_loop:WHILE '(' expression	')' stmt
		;

declaration: type declaration_list ';'
			|declaration_list ';'
			|unary_expr ';'

declaration_list:declaration_list ',' sub_decl
				|sub_decl;

sub_decl: assignment_expr
    |IDENTIFIER                     {$1 -> data_type = current_dtype;}
    |array_index
    ;

expression_stmt:expression ';'
			|';'
			;

expression:
	 expression ',' sub_expr								{$$ = $1,$3;}
    |sub_expr		                                    {$$ = $1;}
		;

sub_expr:sub_expr '>' sub_expr						{$$ = ($1 > $3);}
    |sub_expr '<' sub_expr						{$$ = ($1 < $3);}
    |sub_expr EQ sub_expr						{$$ = ($1 == $3);}
    |sub_expr NOT_EQ sub_expr                   {$$ = ($1 != $3);}
    |sub_expr LESS_THAN_EQ sub_expr                    {$$ = ($1 <= $3);}
    |sub_expr GR_THAN_EQ sub_expr                    {$$ = ($1 >= $3);}
	|sub_expr LOGICAL_AND sub_expr              {$$ = ($1 && $3);}
	|sub_expr LOGICAL_OR sub_expr               {$$ = ($1 || $3);}
	|'!' sub_expr                               {$$ = (!$2);}
	|arithmetic_expr							{$$ = $1;}
    |assignment_expr                            {$$ = $1;}
	|unary_expr                                 {$$ = $1;}
    ;



assignment_expr :lhs assign_op arithmetic_expr     {$$ = $1->token_val = Evaluate($1->token_val,$2,$3);}
    |lhs assign_op array_index                     {$$ = 0;}
    |lhs assign_op function_call                   {$$ = 0;}
	|lhs assign_op unary_expr                      {$$ = $1->token_val = Evaluate($1->token_val,$2,$3);}
	|unary_expr assign_op unary_expr               {$$ = 0;}
    ;


unary_expr:	lhs INCREMENT                          {$$ = $1->token_val = ($1->token_val)++;}
	|lhs DECREMENT                                 {$$ = $1->token_val = ($1->token_val)--;}
	|DECREMENT lhs                                 {$$ = $2->token_val = --($2->token_val);}
	|INCREMENT lhs                                 {$$ = $2->token_val = ++($2->token_val);}

lhs:IDENTIFIER 
	;

assign_op:'='                                      {$$ = '=';}
    |PLUS_ASSIGN                                {$$ = PLUS_ASSIGN;}
    |MINUS_ASSIGN                                  {$$ = MINUS_ASSIGN;}
    |MUL_ASSIGN                                    {$$ = MUL_ASSIGN;}
    |DIV_ASSIGN                                    {$$ = DIV_ASSIGN;}
    |MOD_ASSIGN                                    {$$ = MOD_ASSIGN;}
    ;

arithmetic_expr: arithmetic_expr '+' arithmetic_expr    {$$ = $1 + $3;}
    |arithmetic_expr '-' arithmetic_expr                {$$ = $1 - $3;}
    |arithmetic_expr '*' arithmetic_expr                {$$ = $1 * $3;}
    |arithmetic_expr '/' arithmetic_expr                {$$ = ($3 == 0) ? yyerror("Divide by 0!") : ($1 / $3);}
	|arithmetic_expr '%' arithmetic_expr                {$$ = (int)$1 % (int)$3;}
	|'(' arithmetic_expr ')'                            {$$ = $2;}
    |'-' arithmetic_expr %prec UMINUS                   {$$ = -$2;}
    |IDENTIFIER                                         {$$ = $1 -> token_val;}
    |constant                                           {$$ = $1;}
    ;

constant: DEC_CONSTANT                                  {$$ = $1;}
    |HEX_CONSTANT                                       {$$ = $1;}
    ;

array_index: IDENTIFIER '[' sub_expr ']'

function_call: IDENTIFIER '(' parameter_list ')'
             |IDENTIFIER '(' ')'
             ;

parameter_list:
              parameter_list ','  parameter
              |parameter
              ;

parameter: sub_expr
					|STRING

        ;
%%



double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
		case '=': return rhs_value;
		case PLUS_ASSIGN: return (lhs_value + rhs_value);
		case MINUS_ASSIGN: return (lhs_value - rhs_value);
		case MUL_ASSIGN: return (lhs_value * rhs_value);
		case DIV_ASSIGN: return (lhs_value / rhs_value);
		case MOD_ASSIGN: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(){
	symbol_table=create_table();
	constant_table=create_table();
	extern FILE *yyin;
	yyin=fopen("test input/input1.c","r");
	yylex();
	yyparse();
	printf("\n\tSymbol table");
	display(symbol_table);


	return 0;
}

int yyerror(char *msg)
{
	printf("Line no: %d Error message: %s Token: %s\n", yylineno, msg, yytext);
}
