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

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    RETURN = 268,                  /* RETURN  */
    MAIN = 269,                    /* MAIN  */
    VOID = 270,                    /* VOID  */
    WHILE = 271,                   /* WHILE  */
    FOR = 272,                     /* FOR  */
    DO = 273,                      /* DO  */
    BREAK = 274,                   /* BREAK  */
    ENDIF = 275,                   /* ENDIF  */
    IDENTIFIER = 276,              /* IDENTIFIER  */
    integer_constant = 277,        /* integer_constant  */
    string_constant = 278,         /* string_constant  */
    float_constant = 279,          /* float_constant  */
    character_constant = 280,      /* character_constant  */
    ELSE = 281,                    /* ELSE  */
    XOR_ASSIGN = 282,              /* XOR_ASSIGN  */
    OR_ASSIGN = 283,               /* OR_ASSIGN  */
    AND_ASSIGN = 284,              /* AND_ASSIGN  */
    MOD_ASSIGN = 285,              /* MOD_ASSIGN  */
    MUL_ASSIGN = 286,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 287,              /* DIV_ASSIGN  */
    PLUS_ASSIGN = 288,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 289,            /* MINUS_ASSIGN  */
    assignment_operator = 290,     /* assignment_operator  */
    OR = 291,                      /* OR  */
    AND = 292,                     /* AND  */
    PIPE = 293,                    /* PIPE  */
    XOR = 294,                     /* XOR  */
    AMP = 295,                     /* AMP  */
    EQ = 296,                      /* EQ  */
    NOT_EQ = 297,                  /* NOT_EQ  */
    LESS_THAN_EQ = 298,            /* LESS_THAN_EQ  */
    LESS_THAN = 299,               /* LESS_THAN  */
    GR_THAN_EQ = 300,              /* GR_THAN_EQ  */
    GR_THAN = 301,                 /* GR_THAN  */
    LSHIFT = 302,                  /* LSHIFT  */
    RSHIFT = 303,                  /* RSHIFT  */
    PLUS = 304,                    /* PLUS  */
    MINUS = 305,                   /* MINUS  */
    MUL = 306,                     /* MUL  */
    DIV = 307,                     /* DIV  */
    MOD = 308,                     /* MOD  */
    SIZEOF = 309,                  /* SIZEOF  */
    TAB = 310,                     /* TAB  */
    EXC = 311,                     /* EXC  */
    INCREMENT = 312,               /* INCREMENT  */
    DECREMENT = 313                /* DECREMENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
