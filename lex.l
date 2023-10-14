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
"int" {printf("\t%d: %s : %d\n",yylineno,yytext,INT);}
"long" {printf("\t%d: %s : %d\n",yylineno,yytext,LONG);}
"long long" {printf("\t%d: %s : %d\n",yylineno,yytext,LONG_LONG);}
"short" {printf("\t%d: %s : %d\n",yylineno,yytext,SHORT);}
"signed" {printf("\t%d: %s : %d\n",yylineno,yytext,SIGNED);}
"unsigned" {printf("\t%d: %s : %d\n",yylineno,yytext,UNSIGNED);}
"for" {printf("\t%d: %s : %d\n",yylineno,yytext,FOR);}
"break" {printf("\t%d: %s : %d\n",yylineno,yytext,BREAK);}
"continue" {printf("\t%d: %s : %d\n",yylineno,yytext,CONTINUE);}
"return" {printf("\t%d: %s : %d\n",yylineno,yytext,RETURN);}
"float" {printf("\t%d: %s : %d\n",yylineno,yytext,FLOAT);}
"double" {printf("\t%d: %s : %d\n",yylineno,yytext,DOUBLE);}
"char" {printf("\t%d: %s : %d\n",yylineno,yytext,CHAR);}
"if" {printf("\t%d: %s : %d\n",yylineno,yytext,IF);}
"else" {printf("\t%d: %s : %d\n",yylineno,yytext,ELSE);}

{identifier} {printf("\t%d: %s : %d\n",yylineno,yytext,IDENTIFIER);
	      insert(symbol_table,yytext,IDENTIFIER);}
{sp} ;
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
"--"			                {printf("\t%d: %s : %d\n",yylineno,yytext,DECREMENT);}
"++"			                {printf("\t%d: %s : %d\n",yylineno,yytext,INCREMENT);}
"->"			                {printf("\t%d: %s : %d\n",yylineno,yytext,PTR_SELECT);}
"&&"			                {printf("\t%d: %s : %d\n",yylineno,yytext,LOGICAL_AND);}
"||"			                {printf("\t%d: %s : %d\n",yylineno,yytext,LOGICAL_OR);}
"<"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,LS_THAN);}
">"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,GR_THAN);}
"<="			                {printf("\t%d: %s : %d\n",yylineno,yytext,LS_THAN_EQ);}
">="			                {printf("\t%d: %s : %d\n",yylineno,yytext,GR_THAN_EQ);}
"=="			                {printf("\t%d: %s : %d\n",yylineno,yytext,EQ);}
"!="		                    {printf("\t%d: %s : %d\n",yylineno,yytext,NOT_EQ);}
";"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,SEMICOLON);}
"{"                             {printf("\t%d: %s : %d\n",yylineno,yytext,OPEN_FLOWER);}
"}"                             {printf("\t%d: %s : %d\n",yylineno,yytext,CLOSE_FLOWER);}
","			                    {printf("\t%d: %s : %d\n",yylineno,yytext,COMMA);}
"="			                    {printf("\t%d: %s : %d\n",yylineno,yytext,ASSIGN);}
"("			                    {printf("\t%d: %s : %d\n",yylineno,yytext,OPEN_CURLY);}
")"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,CLOSE_CURLY);}
"["                             {printf("\t%d: %s : %d\n",yylineno,yytext,OPEN_SQUARE);}
"]"                             {printf("\t%d: %s : %d\n",yylineno,yytext,CLOSE_SQUARE);}
"-"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,MINUS);}
"+"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,PLUS);}
"*"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,ASTERISK);}
"/"		                        {printf("\t%d: %s : %d\n",yylineno,yytext,FW_SLASH);}
"%"			                    {printf("\t%d: %s : %d\n",yylineno,yytext,MODULO);}

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
