%option noyywrap
%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	struct symbol_table
	{
		char name[100];
		char class[100];
		char type[100];
		char value[100];
		int lineno;
		int length;
	}ST[1001];

	struct constant_table
	{
		char name[100];
		char type[100];
		int length;
	}CT[1001];

	uint32_t hash(char *str)
	{
		size_t i;
	uint32_t hash=0;
	for(int i=0;i<strlen(str);i++){
		hash+=str[i];
		hash+=(hash<<10);
		hash^=(hash>>6);
	}
	hash+=(hash<<3);
	hash^=(hash>>11);
	hash+=(hash<<15);
	return hash%1001;
	}

	int search(char *str)
	{
		int value = hash(str);
		if(ST[value].length == 0) return 0;
		else if(strcmp(ST[value].name,str)==0) return 1;
		else {
			for(int i = value + 1 ; i!=value ; i = (i+1)%1001) {
				if(strcmp(ST[i].name,str)==0) return 1;
			}
			return 0;
		}
	}

	int search_CT(char *str)
	{
		int value = hash(str);
		if(CT[value].length == 0) return 0;
		else if(strcmp(CT[value].name,str)==0) return 1;
		else {
			for(int i = value + 1 ; i!=value ; i = (i+1)%1001)
				if(strcmp(CT[i].name,str)==0) return 1;
			return 0;
		}
	}

	

	void insert_type(char *str1, char *str2)
	{
		for(int i = 0 ; i < 1001 ; i++)
			if(strcmp(ST[i].name,str1)==0) strcpy(ST[i].type,str2);
        }

	void insert_value(char *str1, char *str2)
	{
		for(int i = 0 ; i < 1001 ; i++)
		        if(strcmp(ST[i].name,str1)==0) strcpy(ST[i].value,str2);
	}

	void insert_line(char *str1, int line)
	{
		for(int i = 0 ; i < 1001 ; i++)
		    if(strcmp(ST[i].name,str1)==0) ST[i].lineno = line;
	}

	void insert_CT(char *str1, char *str2)
	{
		if(search_CT(str1)) return;
		else {
			int value = hash(str1);
			if(CT[value].length == 0) {
				strcpy(CT[value].name,str1);
				strcpy(CT[value].type,str2);
				CT[value].length = strlen(str1);
				return;
			}
			int pos = 0;
			for (int i = value + 1 ; i!=value ; i = (i+1)%1001) {
				if(CT[i].length == 0) {
					pos = i;
					break;
				}
			}
			strcpy(CT[pos].name,str1);
			strcpy(CT[pos].type,str2);
			CT[pos].length = strlen(str1);
		}
	}

        void insert(char *str1, char *str2) {
		if(search(str1)) return;
		else {
			int value = hash(str1);
			if(ST[value].length == 0) {
				strcpy(ST[value].name,str1);
				strcpy(ST[value].class,str2);
				ST[value].length = strlen(str1);
				insert_line(str1,yylineno);
				return;
			}
			int pos = 0;
			for (int i = value + 1 ; i!=value ; i = (i+1)%1001) {
				if(ST[i].length == 0) {
					pos = i;
					break;
				}
			}
			strcpy(ST[pos].name,str1);
			strcpy(ST[pos].class,str2);
			ST[pos].length = strlen(str1);
		}
	}
	void printST() {
                printf("%30s SYMBOL TABLE\n", " ");
                for(int i=0;i<55;i++) printf("-");
                printf("\n");
		printf("%10s | %15s | %10s | %10s |\n","SYMBOL", "CLASS", "TYPE", "LINE NO");
		for(int i=0;i<55;i++) printf("-");
		printf("\n");
		for(int i = 0 ; i < 1001 ; i++) {
			if(ST[i].length == 0) continue;
			printf("%10s | %15s | %10s | %10d |\n",ST[i].name, ST[i].class, ST[i].type, ST[i].lineno);
		}
                for(int i=0;i<55;i++) printf("-");
		printf("\n");
    }


	void printCT()
	{
                printf("\n\n%30s CONSTANT TABLE\n", " ");
                for(int i=0;i<44;i++) printf("-");
                printf("\n");
		printf("%20s | %20s |\n","NAME", "TYPE");
		for(int i=0;i<44;i++) printf("-");
		printf("\n");
		for(int i = 0 ; i < 1001 ; i++) {
			if(CT[i].length == 0) continue;
			printf("%20s | %20s |\n",CT[i].name, CT[i].type);
		}
                for(int i=0;i<44;i++) printf("-");
		printf("\n");
	}
	char current_id[20];
	char current_type[20];
	char current_val[20];

%}

DE "define"
IN "#include"

%%
\n 	{yylineno++;}
([#][" "]*({IN})[ ]*([<]?)([A-Za-z]+)[.]?([A-Za-z]*)([>]?))/["\n"|\/|" "|"\t"]	{ }
([#][" "]*({DE})[" "]*([A-Za-z]+)(" ")*[0-9]+)/["\n"|\/|" "|"\t"]	        { } 
\/\/(.*)									{ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/					{ }
[ \n\t] ;
";"				{ return(';'); }
","				{ return(','); }
("{")			{ return('{'); }
("}")			{ return('}'); }
"("				{ return('('); }
")"				{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>") 		{ return(']'); }
":"				{ return(':'); }
"."				{ return('.'); }

"char"			{ strcpy(current_type,yytext); insert(yytext, "Keyword"); return CHAR;}
"double"		{ strcpy(current_type,yytext); insert(yytext, "Keyword"); return DOUBLE;}
"else"			{ insert_line(yytext, yylineno); insert(yytext, "Keyword"); return ELSE;}
"float"			{ strcpy(current_type,yytext); insert(yytext, "Keyword");return FLOAT;}
"while"			{ insert(yytext, "Keyword"); return WHILE;}
"do"			{ insert(yytext, "Keyword"); return DO;}
"for"			{ insert(yytext, "Keyword"); return FOR;}
"if"			{ insert(yytext, "Keyword"); return IF;}
"int"			{ strcpy(current_type,yytext); insert(yytext, "Keyword");return INT;}
"long"			{ strcpy(current_type,yytext); insert(yytext, "Keyword");  return LONG;}
"return"		{ insert(yytext, "Keyword");  return RETURN;}
"short"			{ strcpy(current_type,yytext); insert(yytext, "Keyword");  return SHORT;}
"signed"		{ strcpy(current_type,yytext); insert(yytext, "Keyword");  return SIGNED;}
"sizeof" 		{ insert(yytext, "Keyword");  return SIZEOF;}
"struct"		{ strcpy(current_type,yytext); insert(yytext, "Keyword");  return STRUCT;}
"unsigned"		{ insert(yytext, "Keyword");  return UNSIGNED;}
"void"			{ strcpy(current_type,yytext); insert(yytext, "Keyword");  return VOID;}
"break"			{ insert(yytext, "Keyword");  return BREAK;}
[a-z]+ {return ALPHA;}
"#include"	{return PREPROC;}
"++"			{ return INCREMENT; }
"--"			{ return DECREMENT; }
"<<"			{ return LSHIFT; }
">>"			{ return RSHIFT; }
"<="			{ return LESS_THAN_EQ; }
">="			{ return GR_THAN_EQ; }
"=="			{ return EQ; }
"!="			{ return NOT_EQ; }
"&&"			{ return AND; }
"||"			{ return OR; }
"*="			{ return MUL_ASSIGN; }
"/="			{ return DIV_ASSIGN; }
"%="			{ return MOD_ASSIGN; }
"+="			{ return PLUS_ASSIGN; }
"-="			{ return MINUS_ASSIGN; }
"<<="			{ return LSHIFT_ASSIGN; }
">>="			{ return RSHIFT_ASSIGN; }
"&="			{ return AND_ASSIGN; }
"^="			{ return XOR_ASSIGN; }
"|="			{ return OR_ASSIGN; }
\=				{ return assignment_op;}

\"[^\n]*\"/[;|,|\)] 			{strcpy(current_val,yytext); insert_CT(yytext,"String Constant"); return STRING_CONSTANT;}
\'[A-Z|a-z]\'/[;|,|\)|:] 		{strcpy(current_val,yytext); insert_CT(yytext,"Character Constant"); return CHAR_CONSTANT;}
[a-z|A-Z]([a-z|A-Z]|[0-9])*/\[ 	{strcpy(current_id,yytext); insert(yytext, "Array Identifier");  return IDENTIFIER;}
[1-9][0-9]*|0/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\]|\}|:|\n|\t|\^] 	{strcpy(current_val,yytext); insert_CT(yytext, "Number Constant"); return INT_CONSTANT;}
([0-9]*)\.([0-9]+)/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\n|\t|\^] 	{strcpy(current_val,yytext); insert_CT(yytext, "Floating Constant"); return FLOAT_CONSTANT;}
[A-Za-z_][A-Za-z_0-9]* {strcpy(current_id,yytext);insert(yytext,"Identifier");  return IDENTIFIER;}

(.?) {
		if(yytext[0]=='#')
		{
			printf("Error in Pre-Processor directive at line no. %d\n",yylineno);
		}
		else if(yytext[0]=='/')
		{
			printf("ERR_UNMATCHED_COMMENT at line no. %d\n",yylineno);
		}
		else if(yytext[0]=='"')
		{
			printf("ERR_INCOMPLETE_STRING at line no. %d\n",yylineno);
		}
		else
		{
			printf("ERROR at line no. %d\n",yylineno);
		}
		printf("%s\n", yytext);
		return 0;
}

%%