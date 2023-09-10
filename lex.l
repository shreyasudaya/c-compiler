%option noyywrap
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
sp [ \t\r\f\v]

%x COMM
%x PREPROC

%%
"int" {printf("\t%s : %d\n",yytext,INT);}
"long" {printf("\t%s : %d\n",yytext,LONG);}
"long long" {printf("\t%s : %d\n",yytext,LONG_LONG);}
"short" {printf("\t%s : %d\n",yytext,SHORT);}
"signed" {printf("\t%s : %d\n",yytext,SIGNED);}
"unsigned" {printf("\t%s : %d\n",yytext,UNSIGNED);}
"for" {printf("\t%s : %d\n",yytext,FOR);}
"break" {printf("\t%s : %d\n",yytext,BREAK);}
"continue" {printf("\t%s : %d\n",yytext,CONTINUE);}
"return" {printf("\t%s : %d\n",yytext,RETURN);}
"float" {printf("\t%s : %d\n",yytext,FLOAT);}
"double" {printf("\t%s : %d\n",yytext,DOUBLE);}
"char" {printf("\t%s : %d\n",yytext,CHAR);}
"if" {printf("\t%s : %d\n",yytext,IF);}
"else" {printf("\t%s : %d\n",yytext,ELSE);}

{identifier} {printf("\t%s : %d\n",yytext,IDENTIFIER);
	      insert(symbol_table,yytext,IDENTIFIER);}
{sp} ;
"/*"		{comment=yylineno;BEGIN COMM;}
<COMM>.|{sp}    ;
<COMM>"*/"      {BEGIN INITIAL;}
<COMM>"/*"	{printf("Line %d: Nested Comments not valid!\n",yylineno);}
^"#include"	{BEGIN PREPROC;}
<PREPROC>"<"[^<>\n]+">"            {printf("\t%s : %d\n",yytext,HEADER_FILE);}
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
"--"			                {printf("\t%s : %d\n",yytext,DECREMENT);}
"++"			                {printf("\t%s : %d\n",yytext,INCREMENT);}
"->"			                {printf("\t%s : %d\n",yytext,PTR_SELECT);}
"&&"			                {printf("\t%s : %d\n",yytext,LOGICAL_AND);}
"||"			                {printf("\t%s : %d\n",yytext,LOGICAL_OR);}
"<"			                    {printf("\t%s : %d\n",yytext,LS_THAN);}
">"			                    {printf("\t%s : %d\n",yytext,GR_THAN);}
"<="			                {printf("\t%s : %d\n",yytext,LS_THAN_EQ);}
">="			                {printf("\t%s : %d\n",yytext,GR_THAN_EQ);}
"=="			                {printf("\t%s : %d\n",yytext,EQ);}
"!="		                    {printf("\t%s : %d\n",yytext,NOT_EQ);}
";"			                    {printf("\t%s : %d\n",yytext,SEMICOLON);}
"{"                             {printf("\t%s : %d\n",yytext,OPEN_FLOWER);}
"}"                             {printf("\t%s : %d\n",yytext,CLOSE_FLOWER);}
","			                    {printf("\t%s : %d\n",yytext,COMMA);}
"="			                    {printf("\t%s : %d\n",yytext,ASSIGN);}
"("			                    {printf("\t%s : %d\n",yytext,OPEN_CURLY);}
")"			                    {printf("\t%s : %d\n",yytext,CLOSE_CURLY);}
"["                             {printf("\t%s : %d\n",yytext,OPEN_SQUARE);}
"]"                             {printf("\t%s : %d\n",yytext,CLOSE_SQUARE);}
"-"			                    {printf("\t%s : %d\n",yytext,MINUS);}
"+"			                    {printf("\t%s : %d\n",yytext,PLUS);}
"*"			                    {printf("\t%s : %d\n",yytext,ASTERISK);}
"/"		                        {printf("\t%s : %d\n",yytext,FW_SLASH);}
"%"			                    {printf("\t%s : %d\n",yytext,MODULO);}

.                               {printf("Line %3d: Illegal character %s\n",yylineno,yytext);}
%%
int main(){
	yyin=fopen("test input/input1.c","r");
	symbol_table=create_table();
	constant_table=create_table();
	yylex();
	printf("\n\tSymbol Table:");
	print_table(symbol_table);
	printf("\n\tConstant Table:");
	print_table(constant_table);
}
