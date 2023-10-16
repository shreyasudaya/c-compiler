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
    IF = 258,                      /* IF  */
    INT = 259,                     /* INT  */
    CHAR = 260,                    /* CHAR  */
    FLOAT = 261,                   /* FLOAT  */
    DOUBLE = 262,                  /* DOUBLE  */
    LONG = 263,                    /* LONG  */
    SHORT = 264,                   /* SHORT  */
    SIGNED = 265,                  /* SIGNED  */
    UNSIGNED = 266,                /* UNSIGNED  */
    STRUCT = 267,                  /* STRUCT  */
    PREPROC = 268,                 /* PREPROC  */
    ALPHA = 269,                   /* ALPHA  */
    RETURN = 270,                  /* RETURN  */
    MAIN = 271,                    /* MAIN  */
    VOID = 272,                    /* VOID  */
    WHILE = 273,                   /* WHILE  */
    FOR = 274,                     /* FOR  */
    DO = 275,                      /* DO  */
    BREAK = 276,                   /* BREAK  */
    ENDIF = 277,                   /* ENDIF  */
    IDENTIFIER = 278,              /* IDENTIFIER  */
    INT_CONSTANT = 279,            /* INT_CONSTANT  */
    STRING_CONSTANT = 280,         /* STRING_CONSTANT  */
    FLOAT_CONSTANT = 281,          /* FLOAT_CONSTANT  */
    CHAR_CONSTANT = 282,           /* CHAR_CONSTANT  */
    ELSE = 283,                    /* ELSE  */
    LSHIFT_ASSIGN = 284,           /* LSHIFT_ASSIGN  */
    RSHIFT_ASSIGN = 285,           /* RSHIFT_ASSIGN  */
    XOR_ASSIGN = 286,              /* XOR_ASSIGN  */
    OR_ASSIGN = 287,               /* OR_ASSIGN  */
    AND_ASSIGN = 288,              /* AND_ASSIGN  */
    MOD_ASSIGN = 289,              /* MOD_ASSIGN  */
    MUL_ASSIGN = 290,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 291,              /* DIV_ASSIGN  */
    PLUS_ASSIGN = 292,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 293,            /* MINUS_ASSIGN  */
    assignment_op = 294,           /* assignment_op  */
    OR = 295,                      /* OR  */
    AND = 296,                     /* AND  */
    EQ = 297,                      /* EQ  */
    NOT_EQ = 298,                  /* NOT_EQ  */
    LESS_THAN_EQ = 299,            /* LESS_THAN_EQ  */
    GR_THAN_EQ = 300,              /* GR_THAN_EQ  */
    LSHIFT = 301,                  /* LSHIFT  */
    RSHIFT = 302,                  /* RSHIFT  */
    SIZEOF = 303,                  /* SIZEOF  */
    INCREMENT = 304,               /* INCREMENT  */
    DECREMENT = 305                /* DECREMENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define PREPROC 268
#define ALPHA 269
#define RETURN 270
#define MAIN 271
#define VOID 272
#define WHILE 273
#define FOR 274
#define DO 275
#define BREAK 276
#define ENDIF 277
#define IDENTIFIER 278
#define INT_CONSTANT 279
#define STRING_CONSTANT 280
#define FLOAT_CONSTANT 281
#define CHAR_CONSTANT 282
#define ELSE 283
#define LSHIFT_ASSIGN 284
#define RSHIFT_ASSIGN 285
#define XOR_ASSIGN 286
#define OR_ASSIGN 287
#define AND_ASSIGN 288
#define MOD_ASSIGN 289
#define MUL_ASSIGN 290
#define DIV_ASSIGN 291
#define PLUS_ASSIGN 292
#define MINUS_ASSIGN 293
#define assignment_op 294
#define OR 295
#define AND 296
#define EQ 297
#define NOT_EQ 298
#define LESS_THAN_EQ 299
#define GR_THAN_EQ 300
#define LSHIFT 301
#define RSHIFT 302
#define SIZEOF 303
#define INCREMENT 304
#define DECREMENT 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
