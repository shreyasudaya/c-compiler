%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lineno=1;
void return_print(char *token_type);
void yyerror();

%}
%x L_COMMENT
alpha [a-zA-Z]
digit [0-9]
alphanum {alpha}|{digit}
print [ -~]
ID {alpha}+{alnum}*
INT_CONST "0"|[0-9]{digit}*
FLOAT_CONST "0"|{digit}*"."{digit}+
%%

"//".* {printf("Comment at line %d",lineno);}

"/*" {printf("Comment at line %d",BEGIN(L_COMMENT));}
<L_COMMENT>"*/" {printf(" to line %d",BEGIN(INITIAL));}
<L_COMMENT>"\n" {lineno+=1;}

"char" {return_print("CHAR");}
"int" {return_print("INT");}
"float" {return_print("FLOAT");}
"double" {return_print("DOUBLE");}
void yyerror(char *message){
	printf("Error in "%s" in line %d. Token = %s",message,lineno,yytext);
}
int main(){
	yylex();
}

int yywrap(){
	return 1;
}
