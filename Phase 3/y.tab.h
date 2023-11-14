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
    VOLATILE = 267,                /* VOLATILE  */
    CONST = 268,                   /* CONST  */
    STRUCT = 269,                  /* STRUCT  */
    UNION = 270,                   /* UNION  */
    ENUM = 271,                    /* ENUM  */
    ELLIPSIS = 272,                /* ELLIPSIS  */
    RETURN = 273,                  /* RETURN  */
    MAIN = 274,                    /* MAIN  */
    VOID = 275,                    /* VOID  */
    WHILE = 276,                   /* WHILE  */
    FOR = 277,                     /* FOR  */
    DO = 278,                      /* DO  */
    BREAK = 279,                   /* BREAK  */
    ENDIF = 280,                   /* ENDIF  */
    IDENTIFIER = 281,              /* IDENTIFIER  */
    array_identifier = 282,        /* array_identifier  */
    func_identifier = 283,         /* func_identifier  */
    integer_constant = 284,        /* integer_constant  */
    string_constant = 285,         /* string_constant  */
    float_constant = 286,          /* float_constant  */
    character_constant = 287,      /* character_constant  */
    CASE = 288,                    /* CASE  */
    DEFAULT = 289,                 /* DEFAULT  */
    SWITCH = 290,                  /* SWITCH  */
    GOTO = 291,                    /* GOTO  */
    CONTINUE = 292,                /* CONTINUE  */
    ELSE = 293,                    /* ELSE  */
    XOR_ASSIGN = 294,              /* XOR_ASSIGN  */
    OR_ASSIGN = 295,               /* OR_ASSIGN  */
    AND_ASSIGN = 296,              /* AND_ASSIGN  */
    MOD_ASSIGN = 297,              /* MOD_ASSIGN  */
    MUL_ASSIGN = 298,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 299,              /* DIV_ASSIGN  */
    PLUS_ASSIGN = 300,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 301,            /* MINUS_ASSIGN  */
    assignment_operator = 302,     /* assignment_operator  */
    OR = 303,                      /* OR  */
    AND = 304,                     /* AND  */
    PIPE = 305,                    /* PIPE  */
    TYPEDEF = 306,                 /* TYPEDEF  */
    EXTERN = 307,                  /* EXTERN  */
    STATIC = 308,                  /* STATIC  */
    AUTO = 309,                    /* AUTO  */
    XOR = 310,                     /* XOR  */
    AMP = 311,                     /* AMP  */
    EQ = 312,                      /* EQ  */
    NOT_EQ = 313,                  /* NOT_EQ  */
    LESS_THAN_EQ = 314,            /* LESS_THAN_EQ  */
    LESS_THAN = 315,               /* LESS_THAN  */
    GR_THAN_EQ = 316,              /* GR_THAN_EQ  */
    GR_THAN = 317,                 /* GR_THAN  */
    LEFT_OP = 318,                 /* LEFT_OP  */
    RIGHT_OP = 319,                /* RIGHT_OP  */
    LEFT_ASSIGN = 320,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 321,            /* RIGHT_ASSIGN  */
    LSHIFT = 322,                  /* LSHIFT  */
    RSHIFT = 323,                  /* RSHIFT  */
    PLUS = 324,                    /* PLUS  */
    MINUS = 325,                   /* MINUS  */
    MUL = 326,                     /* MUL  */
    DIV = 327,                     /* DIV  */
    MOD = 328,                     /* MOD  */
    SIZEOF = 329,                  /* SIZEOF  */
    TAB = 330,                     /* TAB  */
    EXC = 331,                     /* EXC  */
    INCREMENT = 332,               /* INCREMENT  */
    DECREMENT = 333                /* DECREMENT  */
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
#define VOLATILE 267
#define CONST 268
#define STRUCT 269
#define UNION 270
#define ENUM 271
#define ELLIPSIS 272
#define RETURN 273
#define MAIN 274
#define VOID 275
#define WHILE 276
#define FOR 277
#define DO 278
#define BREAK 279
#define ENDIF 280
#define IDENTIFIER 281
#define array_identifier 282
#define func_identifier 283
#define integer_constant 284
#define string_constant 285
#define float_constant 286
#define character_constant 287
#define CASE 288
#define DEFAULT 289
#define SWITCH 290
#define GOTO 291
#define CONTINUE 292
#define ELSE 293
#define XOR_ASSIGN 294
#define OR_ASSIGN 295
#define AND_ASSIGN 296
#define MOD_ASSIGN 297
#define MUL_ASSIGN 298
#define DIV_ASSIGN 299
#define PLUS_ASSIGN 300
#define MINUS_ASSIGN 301
#define assignment_operator 302
#define OR 303
#define AND 304
#define PIPE 305
#define TYPEDEF 306
#define EXTERN 307
#define STATIC 308
#define AUTO 309
#define XOR 310
#define AMP 311
#define EQ 312
#define NOT_EQ 313
#define LESS_THAN_EQ 314
#define LESS_THAN 315
#define GR_THAN_EQ 316
#define GR_THAN 317
#define LEFT_OP 318
#define RIGHT_OP 319
#define LEFT_ASSIGN 320
#define RIGHT_ASSIGN 321
#define LSHIFT 322
#define RSHIFT 323
#define PLUS 324
#define MINUS 325
#define MUL 326
#define DIV 327
#define MOD 328
#define SIZEOF 329
#define TAB 330
#define EXC 331
#define INCREMENT 332
#define DECREMENT 333

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
