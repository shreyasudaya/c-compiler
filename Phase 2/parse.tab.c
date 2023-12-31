/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parse.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];


#line 93 "parse.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parse.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_MAIN = 14,                      /* MAIN  */
  YYSYMBOL_VOID = 15,                      /* VOID  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_DO = 18,                        /* DO  */
  YYSYMBOL_BREAK = 19,                     /* BREAK  */
  YYSYMBOL_ENDIF = 20,                     /* ENDIF  */
  YYSYMBOL_IDENTIFIER = 21,                /* IDENTIFIER  */
  YYSYMBOL_integer_constant = 22,          /* integer_constant  */
  YYSYMBOL_string_constant = 23,           /* string_constant  */
  YYSYMBOL_float_constant = 24,            /* float_constant  */
  YYSYMBOL_character_constant = 25,        /* character_constant  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_XOR_ASSIGN = 27,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 28,                 /* OR_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 29,                /* AND_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 30,                /* MOD_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 31,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 32,                /* DIV_ASSIGN  */
  YYSYMBOL_PLUS_ASSIGN = 33,               /* PLUS_ASSIGN  */
  YYSYMBOL_MINUS_ASSIGN = 34,              /* MINUS_ASSIGN  */
  YYSYMBOL_assignment_operator = 35,       /* assignment_operator  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_AND = 37,                       /* AND  */
  YYSYMBOL_PIPE = 38,                      /* PIPE  */
  YYSYMBOL_XOR = 39,                       /* XOR  */
  YYSYMBOL_AMP = 40,                       /* AMP  */
  YYSYMBOL_EQ = 41,                        /* EQ  */
  YYSYMBOL_NOT_EQ = 42,                    /* NOT_EQ  */
  YYSYMBOL_LESS_THAN_EQ = 43,              /* LESS_THAN_EQ  */
  YYSYMBOL_LESS_THAN = 44,                 /* LESS_THAN  */
  YYSYMBOL_GR_THAN_EQ = 45,                /* GR_THAN_EQ  */
  YYSYMBOL_GR_THAN = 46,                   /* GR_THAN  */
  YYSYMBOL_LSHIFT = 47,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 48,                    /* RSHIFT  */
  YYSYMBOL_PLUS = 49,                      /* PLUS  */
  YYSYMBOL_MINUS = 50,                     /* MINUS  */
  YYSYMBOL_MUL = 51,                       /* MUL  */
  YYSYMBOL_DIV = 52,                       /* DIV  */
  YYSYMBOL_MOD = 53,                       /* MOD  */
  YYSYMBOL_SIZEOF = 54,                    /* SIZEOF  */
  YYSYMBOL_TAB = 55,                       /* TAB  */
  YYSYMBOL_EXC = 56,                       /* EXC  */
  YYSYMBOL_INCREMENT = 57,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 58,                 /* DECREMENT  */
  YYSYMBOL_59_ = 59,                       /* ';'  */
  YYSYMBOL_60_ = 60,                       /* ','  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* ']'  */
  YYSYMBOL_63_ = 63,                       /* '{'  */
  YYSYMBOL_64_ = 64,                       /* '}'  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_program = 69,                   /* program  */
  YYSYMBOL_declaration_list = 70,          /* declaration_list  */
  YYSYMBOL_D = 71,                         /* D  */
  YYSYMBOL_declaration = 72,               /* declaration  */
  YYSYMBOL_variable_declaration = 73,      /* variable_declaration  */
  YYSYMBOL_variable_declaration_list = 74, /* variable_declaration_list  */
  YYSYMBOL_V = 75,                         /* V  */
  YYSYMBOL_variable_declaration_identifier = 76, /* variable_declaration_identifier  */
  YYSYMBOL_77_1 = 77,                      /* $@1  */
  YYSYMBOL_vdi = 78,                       /* vdi  */
  YYSYMBOL_identifier_array_type = 79,     /* identifier_array_type  */
  YYSYMBOL_initilization_params = 80,      /* initilization_params  */
  YYSYMBOL_initilization = 81,             /* initilization  */
  YYSYMBOL_type_specifier = 82,            /* type_specifier  */
  YYSYMBOL_unsigned_grammar = 83,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 84,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 85,              /* long_grammar  */
  YYSYMBOL_short_grammar = 86,             /* short_grammar  */
  YYSYMBOL_structure_definition = 87,      /* structure_definition  */
  YYSYMBOL_88_2 = 88,                      /* $@2  */
  YYSYMBOL_V1 = 89,                        /* V1  */
  YYSYMBOL_structure_declaration = 90,     /* structure_declaration  */
  YYSYMBOL_function_declaration = 91,      /* function_declaration  */
  YYSYMBOL_function_declaration_type = 92, /* function_declaration_type  */
  YYSYMBOL_function_declaration_param_statement = 93, /* function_declaration_param_statement  */
  YYSYMBOL_params = 94,                    /* params  */
  YYSYMBOL_parameters_list = 95,           /* parameters_list  */
  YYSYMBOL_parameters_identifier_list = 96, /* parameters_identifier_list  */
  YYSYMBOL_parameters_identifier_list_breakup = 97, /* parameters_identifier_list_breakup  */
  YYSYMBOL_param_identifier = 98,          /* param_identifier  */
  YYSYMBOL_99_3 = 99,                      /* $@3  */
  YYSYMBOL_param_identifier_breakup = 100, /* param_identifier_breakup  */
  YYSYMBOL_statement = 101,                /* statement  */
  YYSYMBOL_compound_statement = 102,       /* compound_statement  */
  YYSYMBOL_statment_list = 103,            /* statment_list  */
  YYSYMBOL_expression_statment = 104,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 105,   /* conditional_statements  */
  YYSYMBOL_conditional_statements_breakup = 106, /* conditional_statements_breakup  */
  YYSYMBOL_iterative_statements = 107,     /* iterative_statements  */
  YYSYMBOL_return_statement = 108,         /* return_statement  */
  YYSYMBOL_return_statement_breakup = 109, /* return_statement_breakup  */
  YYSYMBOL_break_statement = 110,          /* break_statement  */
  YYSYMBOL_string_initilization = 111,     /* string_initilization  */
  YYSYMBOL_array_initialization = 112,     /* array_initialization  */
  YYSYMBOL_array_int_declarations = 113,   /* array_int_declarations  */
  YYSYMBOL_array_int_declarations_breakup = 114, /* array_int_declarations_breakup  */
  YYSYMBOL_expression = 115,               /* expression  */
  YYSYMBOL_expression_breakup = 116,       /* expression_breakup  */
  YYSYMBOL_simple_expression = 117,        /* simple_expression  */
  YYSYMBOL_simple_expression_breakup = 118, /* simple_expression_breakup  */
  YYSYMBOL_and_expression = 119,           /* and_expression  */
  YYSYMBOL_and_expression_breakup = 120,   /* and_expression_breakup  */
  YYSYMBOL_unary_relation_expression = 121, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 122,       /* regular_expression  */
  YYSYMBOL_regular_expression_breakup = 123, /* regular_expression_breakup  */
  YYSYMBOL_relational_operators = 124,     /* relational_operators  */
  YYSYMBOL_sum_expression = 125,           /* sum_expression  */
  YYSYMBOL_sum_operators = 126,            /* sum_operators  */
  YYSYMBOL_term = 127,                     /* term  */
  YYSYMBOL_MULOP = 128,                    /* MULOP  */
  YYSYMBOL_factor = 129,                   /* factor  */
  YYSYMBOL_mutable = 130,                  /* mutable  */
  YYSYMBOL_mutable_breakup = 131,          /* mutable_breakup  */
  YYSYMBOL_immutable = 132,                /* immutable  */
  YYSYMBOL_call = 133,                     /* call  */
  YYSYMBOL_arguments = 134,                /* arguments  */
  YYSYMBOL_arguments_list = 135,           /* arguments_list  */
  YYSYMBOL_A = 136,                        /* A  */
  YYSYMBOL_constant = 137                  /* constant  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   228

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  228

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,    66,     2,     2,    60,     2,    67,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    66,    69,    70,    73,    74,    75,    78,
      79,    82,    85,    86,    89,    89,    91,    91,    94,    95,
      98,    99,   102,   103,   104,   107,   107,   107,   107,   108,
     109,   110,   111,   112,   115,   115,   115,   115,   118,   118,
     118,   118,   121,   121,   124,   124,   127,   127,   129,   129,
     132,   136,   139,   142,   145,   145,   148,   151,   154,   155,
     158,   158,   161,   162,   165,   165,   166,   166,   167,   167,
     168,   171,   174,   175,   178,   179,   182,   185,   186,   189,
     190,   191,   194,   197,   198,   201,   204,   207,   210,   213,
     214,   217,   218,   221,   222,   223,   224,   225,   226,   227,
     228,   231,   234,   234,   237,   240,   241,   244,   245,   248,
     251,   252,   255,   255,   255,   256,   256,   256,   259,   260,
     263,   264,   267,   268,   271,   271,   271,   274,   274,   277,
     278,   281,   282,   285,   286,   286,   289,   292,   292,   295,
     298,   299,   302,   303,   304,   305
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF",
  "IDENTIFIER", "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "XOR_ASSIGN", "OR_ASSIGN", "AND_ASSIGN",
  "MOD_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN",
  "assignment_operator", "OR", "AND", "PIPE", "XOR", "AMP", "EQ", "NOT_EQ",
  "LESS_THAN_EQ", "LESS_THAN", "GR_THAN_EQ", "GR_THAN", "LSHIFT", "RSHIFT",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "SIZEOF", "TAB", "EXC",
  "INCREMENT", "DECREMENT", "';'", "','", "'['", "']'", "'{'", "'}'",
  "'('", "')'", "'.'", "$accept", "program", "declaration_list", "D",
  "declaration", "variable_declaration", "variable_declaration_list", "V",
  "variable_declaration_identifier", "$@1", "vdi", "identifier_array_type",
  "initilization_params", "initilization", "type_specifier",
  "unsigned_grammar", "signed_grammar", "long_grammar", "short_grammar",
  "structure_definition", "$@2", "V1", "structure_declaration",
  "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "parameters_identifier_list", "parameters_identifier_list_breakup",
  "param_identifier", "$@3", "param_identifier_breakup", "statement",
  "compound_statement", "statment_list", "expression_statment",
  "conditional_statements", "conditional_statements_breakup",
  "iterative_statements", "return_statement", "return_statement_breakup",
  "break_statement", "string_initilization", "array_initialization",
  "array_int_declarations", "array_int_declarations_breakup", "expression",
  "expression_breakup", "simple_expression", "simple_expression_breakup",
  "and_expression", "and_expression_breakup", "unary_relation_expression",
  "regular_expression", "regular_expression_breakup",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "mutable_breakup", "immutable", "call",
  "arguments", "arguments_list", "A", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,  -101,  -101,  -101,  -101,     5,     8,    30,    46,     0,
    -101,    24,  -101,   104,  -101,    28,  -101,  -101,  -101,   180,
    -101,  -101,  -101,  -101,  -101,     5,     8,  -101,  -101,     5,
       8,  -101,    37,  -101,  -101,  -101,   -29,    11,   -13,    38,
    -101,     9,  -101,  -101,  -101,  -101,  -101,  -101,  -101,    14,
    -101,   -24,  -101,    37,  -101,  -101,  -101,    12,   158,   140,
       6,   -16,  -101,  -101,  -101,    13,   180,  -101,    21,    57,
      20,    23,    31,   158,    36,    33,  -101,  -101,  -101,  -101,
       6,  -101,   158,     6,  -101,    37,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    58,  -101,    82,    85,  -101,   155,    15,
    -101,    71,  -101,  -101,  -101,   140,    61,  -101,    64,    88,
    -101,    65,  -101,  -101,     6,    37,  -101,  -101,    72,     6,
       6,   114,  -101,     6,  -101,   -45,   158,    69,    68,  -101,
       6,  -101,     6,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    59,    59,  -101,  -101,  -101,    59,     6,
       6,     6,     6,     6,     6,  -101,  -101,     6,   115,  -101,
    -101,  -101,    76,   102,   116,  -101,  -101,    74,  -101,    87,
      95,    91,    98,    93,  -101,  -101,  -101,  -101,    82,    85,
     -17,    15,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   110,
    -101,  -101,   -15,  -101,  -101,  -101,  -101,   158,   158,     6,
       6,     6,  -101,  -101,  -101,  -101,  -101,   156,   166,  -101,
     134,   128,    98,   142,   139,   158,  -101,     6,   147,  -101,
     156,  -101,  -101,  -101,   141,  -101,  -101,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,    27,    28,    43,    45,    41,    37,     0,
      33,     0,     2,     5,     6,     0,     8,    10,     7,    55,
      42,    29,    44,    30,    38,    43,    45,    32,    34,    43,
      45,    31,    46,     1,     4,     3,    14,     0,    13,     0,
      51,     0,    54,    39,    40,    35,    36,    14,    50,     0,
      52,    19,     9,     0,    11,    60,    56,    59,     0,    49,
       0,     0,    15,    16,    12,    63,     0,    57,     0,     0,
       0,     0,     0,     0,     0,   129,   142,   143,   144,   145,
       0,    75,    73,     0,    70,     0,    53,    65,    64,    66,
      67,    68,    69,     0,    92,   103,   106,   108,   111,   119,
     123,   128,   127,   134,   135,    49,     0,    17,     0,     0,
      18,     0,    61,    58,     0,     0,    83,    82,     0,     0,
       0,     0,    85,   138,   107,   128,    73,     0,     0,    74,
       0,   101,     0,   104,   116,   117,   113,   115,   112,   114,
     120,   121,   109,     0,     0,   124,   125,   126,     0,     0,
       0,     0,     0,     0,     0,    99,   100,     0,     0,    91,
     130,    48,     0,    24,     0,    21,    62,     0,    84,     0,
       0,     0,   141,     0,   137,    72,    71,   133,   103,   106,
     110,   118,   122,    98,    96,    97,    94,    95,    93,     0,
     132,    47,     0,    20,    22,    23,    86,     0,     0,     0,
       0,     0,   139,   136,   102,   105,   131,     0,    78,    79,
       0,     0,   141,    90,     0,     0,    76,     0,     0,   140,
       0,    88,    87,    77,     0,    81,    89,    80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,   195,  -101,  -101,     2,   -28,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,     7,  -101,  -101,   -12,    26,  -101,
    -101,   105,  -101,  -101,  -101,  -101,  -101,   143,  -101,  -101,
    -101,  -101,  -101,   -55,  -101,    86,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,    48,  -101,    -7,  -101,   -60,  -101,  -100,
      40,    89,    41,   -75,  -101,  -101,  -101,    73,  -101,    78,
    -101,    67,   -79,  -101,  -101,  -101,  -101,  -101,    16,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    35,    13,    84,    37,    54,    38,    51,
      62,    63,   110,   193,    85,    31,    27,    21,    23,    16,
      49,   106,    17,    18,    19,    40,    41,    42,    56,    67,
      57,    65,   112,   126,    87,   127,    88,    89,   216,    90,
      91,   117,    92,   165,   195,   214,   221,    93,   159,    94,
     131,    95,   133,    96,    97,   142,   143,    98,   144,    99,
     148,   100,   101,   160,   102,   103,   173,   174,   202,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     107,   125,    14,    86,    48,   124,   108,    15,   196,    20,
     118,    60,    22,    43,   167,    14,   157,    45,   121,   169,
      15,    32,   158,   128,    33,    64,    39,    75,    76,    77,
      78,    79,   140,   141,    24,   125,    50,    61,    25,    26,
     125,    75,    76,    77,    78,    79,   109,    53,   207,    36,
      28,   125,    44,   125,    29,    30,    46,   179,    47,    55,
     170,   105,    80,   172,   125,   125,   145,   146,   147,   125,
      52,    83,    66,    39,   111,    58,    80,    59,   115,   116,
      75,    76,    77,    78,    79,    83,   114,    48,   119,   183,
     184,   185,   186,   187,   188,   122,   120,   189,   123,   210,
     211,   149,   150,   151,   152,   153,   154,   105,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   129,   130,    10,
     125,   125,   132,   164,    83,   162,   163,   166,   155,   156,
     171,   168,   157,   176,   177,   191,   190,   192,   158,   196,
     197,   212,   208,   209,     1,     2,     3,     4,     5,     6,
       7,     8,    69,   198,   199,    10,   200,   224,   201,   203,
     223,    68,     1,     2,     3,     4,     5,     6,     7,     8,
      69,    70,   206,    10,    71,    72,    73,    74,   213,    75,
      76,    77,    78,    79,     1,     2,     3,     4,     5,     6,
       7,     8,   215,   217,   218,    10,   134,   135,   136,   137,
     138,   139,   220,   222,   140,   141,   225,   227,    34,   113,
     161,   194,   175,   226,    80,   182,   180,    81,   204,   178,
     205,    82,   181,    83,     0,     0,     0,     0,   219
};

static const yytype_int16 yycheck[] =
{
      60,    80,     0,    58,    32,    80,    22,     0,    23,     4,
      70,    35,     4,    25,   114,    13,    61,    29,    73,   119,
      13,    21,    67,    83,     0,    53,    19,    21,    22,    23,
      24,    25,    49,    50,     4,   114,    65,    61,     8,     9,
     119,    21,    22,    23,    24,    25,    62,    60,    63,    21,
       4,   130,    26,   132,     8,     9,    30,   132,    21,    21,
     120,    59,    56,   123,   143,   144,    51,    52,    53,   148,
      59,    65,    60,    66,    61,    66,    56,    63,    21,    59,
      21,    22,    23,    24,    25,    65,    65,   115,    65,   149,
     150,   151,   152,   153,   154,    59,    65,   157,    65,   199,
     200,    30,    31,    32,    33,    34,    35,   105,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    59,    36,    15,
     199,   200,    37,    35,    65,    64,    62,    62,    57,    58,
      16,    59,    61,    64,    66,    59,    21,    35,    67,    23,
      66,   201,   197,   198,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    66,    59,    15,    65,   217,    60,    66,
     215,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    62,    15,    16,    17,    18,    19,    22,    21,
      22,    23,    24,    25,     4,     5,     6,     7,     8,     9,
      10,    11,    26,    59,    66,    15,    41,    42,    43,    44,
      45,    46,    60,    64,    49,    50,    59,    66,    13,    66,
     105,   163,   126,   220,    56,   148,   143,    59,   178,   130,
     179,    63,   144,    65,    -1,    -1,    -1,    -1,   212
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    69,    70,    72,    73,    82,    87,    90,    91,    92,
       4,    85,     4,    86,     4,     8,     9,    84,     4,     8,
       9,    83,    21,     0,    70,    71,    21,    74,    76,    82,
      93,    94,    95,    85,    86,    85,    86,    21,    74,    88,
      65,    77,    59,    60,    75,    21,    96,    98,    66,    63,
      35,    61,    78,    79,    74,    99,    60,    97,     3,    12,
      13,    16,    17,    18,    19,    21,    22,    23,    24,    25,
      56,    59,    63,    65,    73,    82,   101,   102,   104,   105,
     107,   108,   110,   115,   117,   119,   121,   122,   125,   127,
     129,   130,   132,   133,   137,    73,    89,   115,    22,    62,
      80,    61,   100,    95,    65,    21,    59,   109,   115,    65,
      65,   101,    59,    65,   121,   130,   101,   103,   115,    59,
      36,   118,    37,   120,    41,    42,    43,    44,    45,    46,
      49,    50,   123,   124,   126,    51,    52,    53,   128,    30,
      31,    32,    33,    34,    35,    57,    58,    61,    67,   116,
     131,    89,    64,    62,    35,   111,    62,   117,    59,   117,
     115,    16,   115,   134,   135,   103,    64,    66,   119,   121,
     125,   127,   129,   115,   115,   115,   115,   115,   115,   115,
      21,    59,    35,    81,   111,   112,    23,    66,    66,    59,
      65,    60,   136,    66,   118,   120,    62,    63,   101,   101,
     117,   117,   115,    22,   113,    26,   106,    59,    66,   136,
      60,   114,    64,   101,   115,    59,   113,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    71,    71,    72,    72,    72,    73,
      73,    74,    75,    75,    77,    76,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    86,    88,    87,    89,    89,
      90,    91,    92,    93,    94,    94,    95,    96,    97,    97,
      99,    98,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   102,   103,   103,   104,   104,   105,   106,   106,   107,
     107,   107,   108,   109,   109,   110,   111,   112,   113,   114,
     114,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     123,   123,   124,   124,   124,   124,   124,   124,   125,   125,
     126,   126,   127,   127,   128,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   133,   134,   134,   135,
     136,   136,   137,   137,   137,   137
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     1,     3,
       1,     2,     2,     0,     0,     3,     1,     2,     2,     0,
       3,     2,     1,     1,     0,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     2,     2,     0,     1,     2,
       2,     0,     1,     0,     1,     0,     0,     7,     2,     0,
       3,     2,     3,     3,     1,     0,     2,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     2,     1,     6,     2,     0,     5,
       8,     7,     2,     1,     2,     2,     2,     4,     2,     2,
       0,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     3,     0,     2,     3,     0,     2,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     1,     1,     4,     1,     0,     2,
       3,     0,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 14: /* $@1: %empty  */
#line 89 "parse.y"
                                     { ins(); }
#line 1402 "parse.tab.c"
    break;

  case 46: /* $@2: %empty  */
#line 127 "parse.y"
                                            { ins(); }
#line 1408 "parse.tab.c"
    break;

  case 52: /* function_declaration_type: type_specifier IDENTIFIER '('  */
#line 139 "parse.y"
                                                         { ins();}
#line 1414 "parse.tab.c"
    break;

  case 60: /* $@3: %empty  */
#line 158 "parse.y"
                                     { ins(); }
#line 1420 "parse.tab.c"
    break;

  case 86: /* string_initilization: assignment_operator string_constant  */
#line 204 "parse.y"
                                                              { insV(); }
#line 1426 "parse.tab.c"
    break;

  case 142: /* constant: integer_constant  */
#line 302 "parse.y"
                                                { insV(); }
#line 1432 "parse.tab.c"
    break;

  case 143: /* constant: string_constant  */
#line 303 "parse.y"
                                                { insV(); }
#line 1438 "parse.tab.c"
    break;

  case 144: /* constant: float_constant  */
#line 304 "parse.y"
                                                { insV(); }
#line 1444 "parse.tab.c"
    break;

  case 145: /* constant: character_constant  */
#line 305 "parse.y"
                                            { insV(); }
#line 1450 "parse.tab.c"
    break;


#line 1454 "parse.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 307 "parse.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(ANSI_COLOR_RED "Status: Parsing Failed - Invalid\n" ANSI_COLOR_RESET);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
