%{
#include <stdio.h>
#include <stdlib.h>
#include "symbol.h"
#include "tokens.h"

entry_make** symbol_table;
entry_make** constant_table;
int comment=0;
%}

alpha [a-zA-Z]
digit [0-9]
identifier (_|{alpha})({alpha}|{digit}|_){0,32}
hex [0-9a-f]

%x COMM
%x PREPROCESSOR

%%
"int" {printf("\t%s : %d
%%
int main(){
	yyin=fopen("test input/","r");
	symbol_table=create_table();
	constant_table=create_table();
	yylex();
	printf("\n\tSymbol Table:");
	print_table(symbol_table);
	printf("\n\tConstant Table:");
	print_table(constant_table);
}
