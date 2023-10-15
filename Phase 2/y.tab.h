/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    DEC_CONSTANT = 259,            /* DEC_CONSTANT  */
    HEX_CONSTANT = 260,            /* HEX_CONSTANT  */
    STRING = 261,                  /* STRING  */
    SHORT = 262,                   /* SHORT  */
    INT = 263,                     /* INT  */
    LONG = 264,                    /* LONG  */
    LONG_LONG = 265,               /* LONG_LONG  */
    FLOAT = 266,                   /* FLOAT  */
    DOUBLE = 267,                  /* DOUBLE  */
    CHAR = 268,                    /* CHAR  */
    SIGNED = 269,                  /* SIGNED  */
    UNSIGNED = 270,                /* UNSIGNED  */
    CONST = 271,                   /* CONST  */
    IF = 272,                      /* IF  */
    FOR = 273,                     /* FOR  */
    WHILE = 274,                   /* WHILE  */
    CONTINUE = 275,                /* CONTINUE  */
    BREAK = 276,                   /* BREAK  */
    RETURN = 277,                  /* RETURN  */
    LOGICAL_AND = 278,             /* LOGICAL_AND  */
    LOGICAL_OR = 279,              /* LOGICAL_OR  */
    LESS_THAN_EQ = 280,            /* LESS_THAN_EQ  */
    GR_THAN_EQ = 281,              /* GR_THAN_EQ  */
    EQ = 282,                      /* EQ  */
    NOT_EQ = 283,                  /* NOT_EQ  */
    INCREMENT = 284,               /* INCREMENT  */
    DECREMENT = 285,               /* DECREMENT  */
    MUL_ASSIGN = 286,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 287,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 288,              /* MOD_ASSIGN  */
    PLUS_ASSIGN = 289,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 290,            /* MINUS_ASSIGN  */
    UMINUS = 291,                  /* UMINUS  */
    LOWER_THAN_ELSE = 292,         /* LOWER_THAN_ELSE  */
    ELSE = 293                     /* ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define DEC_CONSTANT 259
#define HEX_CONSTANT 260
#define STRING 261
#define SHORT 262
#define INT 263
#define LONG 264
#define LONG_LONG 265
#define FLOAT 266
#define DOUBLE 267
#define CHAR 268
#define SIGNED 269
#define UNSIGNED 270
#define CONST 271
#define IF 272
#define FOR 273
#define WHILE 274
#define CONTINUE 275
#define BREAK 276
#define RETURN 277
#define LOGICAL_AND 278
#define LOGICAL_OR 279
#define LESS_THAN_EQ 280
#define GR_THAN_EQ 281
#define EQ 282
#define NOT_EQ 283
#define INCREMENT 284
#define DECREMENT 285
#define MUL_ASSIGN 286
#define DIV_ASSIGN 287
#define MOD_ASSIGN 288
#define PLUS_ASSIGN 289
#define MINUS_ASSIGN 290
#define UMINUS 291
#define LOWER_THAN_ELSE 292
#define ELSE 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parse.y"

	double dval;
	entry_make* entry;
	int ival;

#line 149 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
