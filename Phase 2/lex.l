%option noyywrap
%{
#include <stdio.h>
#include <stdlib.h>

//#include "symbol.h"
#include <limits.h>
#include "y.tab.h"
/*entry_make** symbol_table;
entry_make** constant_table;*/
int comment=0;
%}

alpha [a-zA-Z]
digit [0-9]
identifier (_|{alpha})({alpha}|{digit}|_){0,32}
hex [0-9a-f]
sp [ \t\r\f\v]+

%x COMM
%x PREPROC

%%
"int" {return INT;}
"long" {return LONG;}
"long long" {return LONG_LONG;}
"short" {return SHORT;}
"signed" {return SIGNED}
"unsigned" {return UNSIGNED}
"for" {return FOR}
"break" {return BREAK}
"continue" {return CONTINUE;}
"return" {return RETURN;}
"float" {return FLOAT;}
"double" {return DOUBLE;}
"char" {return CHAR;}
"if" {return IF;}
"else" {return ELSE;}

{identifier} {yylval.entry = insert(symbol_table, yytext, INT_MAX);return IDENTIFIER;}
{sp} ;
[+\-]?[0][x|X]{hex}+[lLuU]? {yylval.dval=(int)strtol(yytext, NULL, 16); return  HEX_CONSTANT;}
[+\-]?[0][x|X]{digit}+[lLuU]? {yylval.dval=atoi(yytext); return  DEC_CONSTANT;}
"/*"		{comment=yylineno;BEGIN COMM;}
<COMM>.|{sp}    ;
<COMM>"*/"      {BEGIN INITIAL;}
<COMM>"/*"	{printf("Line %d: Nested Comments not valid!\n",yylineno);}
^"#include"	{BEGIN PREPROC;}
<PREPROC>"<"[^<>\n]+">"            {printf("\t%d: %s : %d\n",yylineno,yytext,HEADER_FILE);}
<PREPROC>{sp}                       ;
<PREPROC>\"[^"\n]+\"              {printf("\t%-30s : %3d\n",yytext,HEADER_FILE);}
<PREPROC>\n                       {yylineno++; BEGIN INITIAL;}
<PREPROC>.                        {printf("Line %3d: Illegal header file format \n",yylineno);}
"//".*                            ;
\"[^\"\n]*\"     {

  if(yytext[yyleng-2]=='\\') // check if it was an escaped quote
  {
    yyless(yyleng-1);      
    yymore();
  }
  else
  insert( constant_table,yytext,STRING);
 }
\"[^\"\n]*$                     {printf("Line %3d: Unterminated string %s\n",yylineno,yytext);}
\n                              {yylineno++;}
"--"			                {return DECREMENT;}
"++"			                {return INCREMENT;}
"->"			                {return PTR_SELECT;}
"&&"			                {return LOGICAL_AND;}
"||"			                {return LOGICAL_OR;}
"<="			                {return LESS_THAN_EQ;}
">="			                {return GR_THAN_EQ}
"=="			                {return EQ;}
"!="		                    {return NOT_EQ;}


"-="			                    {return MINUS_ASSIGN;}
"+="			                    {return PLUS_ASSIGN;}
"*="			                    {return MUL_ASSIGN;}
"/="		                        {return DIV_ASSIGN;}
"%="			                    {return MOD_ASSIGN;}

.                               {return yytext[0];}
%%
