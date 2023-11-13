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
    UNION = 268,                   /* UNION  */
    VOLATILE = 269,                /* VOLATILE  */
    ENUM = 270,                    /* ENUM  */
    ELLIPSIS = 271,                /* ELLIPSIS  */
    RETURN = 272,                  /* RETURN  */
    MAIN = 273,                    /* MAIN  */
    VOID = 274,                    /* VOID  */
    WHILE = 275,                   /* WHILE  */
    FOR = 276,                     /* FOR  */
    DO = 277,                      /* DO  */
    BREAK = 278,                   /* BREAK  */
    ENDIF = 279,                   /* ENDIF  */
    CASE = 280,                    /* CASE  */
    DEFAULT = 281,                 /* DEFAULT  */
    SWITCH = 282,                  /* SWITCH  */
    GOTO = 283,                    /* GOTO  */
    CONTINUE = 284,                /* CONTINUE  */
    identifier = 285,              /* identifier  */
    array_identifier = 286,        /* array_identifier  */
    func_identifier = 287,         /* func_identifier  */
    integer_constant = 288,        /* integer_constant  */
    string_constant = 289,         /* string_constant  */
    float_constant = 290,          /* float_constant  */
    character_constant = 291,      /* character_constant  */
    SIZEOF = 292,                  /* SIZEOF  */
    CONST = 293,                   /* CONST  */
    ELSE = 294,                    /* ELSE  */
    LEFT_ASSIGN = 295,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 296,            /* RIGHT_ASSIGN  */
    XOR_ASSIGN = 297,              /* XOR_ASSIGN  */
    OR_ASSIGN = 298,               /* OR_ASSIGN  */
    AND_ASSIGN = 299,              /* AND_ASSIGN  */
    MOD_ASSIGN = 300,              /* MOD_ASSIGN  */
    MUL_ASSIGN = 301,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 302,              /* DIV_ASSIGN  */
    PLUS_ASSIGN = 303,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 304,            /* MINUS_ASSIGN  */
    assignment_operator = 305,     /* assignment_operator  */
    OR = 306,                      /* OR  */
    AND = 307,                     /* AND  */
    PIPE = 308,                    /* PIPE  */
    TYPEDEF = 309,                 /* TYPEDEF  */
    EXTERN = 310,                  /* EXTERN  */
    STATIC = 311,                  /* STATIC  */
    AUTO = 312,                    /* AUTO  */
    REGISTER = 313,                /* REGISTER  */
    EQ = 314,                      /* EQ  */
    NOT_EQ = 315,                  /* NOT_EQ  */
    LESS_THAN_EQ = 316,            /* LESS_THAN_EQ  */
    GR_THAN_EQ = 317,              /* GR_THAN_EQ  */
    LEFT_OP = 318,                 /* LEFT_OP  */
    RIGHT_OP = 319,                /* RIGHT_OP  */
    INCREMENT = 320,               /* INCREMENT  */
    DECREMENT = 321                /* DECREMENT  */
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
#define UNION 268
#define VOLATILE 269
#define ENUM 270
#define ELLIPSIS 271
#define RETURN 272
#define MAIN 273
#define VOID 274
#define WHILE 275
#define FOR 276
#define DO 277
#define BREAK 278
#define ENDIF 279
#define CASE 280
#define DEFAULT 281
#define SWITCH 282
#define GOTO 283
#define CONTINUE 284
#define identifier 285
#define array_identifier 286
#define func_identifier 287
#define integer_constant 288
#define string_constant 289
#define float_constant 290
#define character_constant 291
#define SIZEOF 292
#define CONST 293
#define ELSE 294
#define LEFT_ASSIGN 295
#define RIGHT_ASSIGN 296
#define XOR_ASSIGN 297
#define OR_ASSIGN 298
#define AND_ASSIGN 299
#define MOD_ASSIGN 300
#define MUL_ASSIGN 301
#define DIV_ASSIGN 302
#define PLUS_ASSIGN 303
#define MINUS_ASSIGN 304
#define assignment_operator 305
#define OR 306
#define AND 307
#define PIPE 308
#define TYPEDEF 309
#define EXTERN 310
#define STATIC 311
#define AUTO 312
#define REGISTER 313
#define EQ 314
#define NOT_EQ 315
#define LESS_THAN_EQ 316
#define GR_THAN_EQ 317
#define LEFT_OP 318
#define RIGHT_OP 319
#define INCREMENT 320
#define DECREMENT 321

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
