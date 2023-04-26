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
#line 1 "exprtree.y"

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	extern FILE *yyin;
	int yylex(void);
	int yyerror();
	FILE* fp;
	int binding = 4095;
	int flabel = 0;
	struct Gsymbol *gst;
	struct Lsymbol *lst;
	struct Paramstruct *para; 

#line 88 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    MAIN = 258,                    /* MAIN  */
    RET = 259,                     /* RET  */
    DECL = 260,                    /* DECL  */
    ENDDECL = 261,                 /* ENDDECL  */
    INTTYPE = 262,                 /* INTTYPE  */
    STRTYPE = 263,                 /* STRTYPE  */
    READ = 264,                    /* READ  */
    WRITE = 265,                   /* WRITE  */
    NUM = 266,                     /* NUM  */
    ID = 267,                      /* ID  */
    WORD = 268,                    /* WORD  */
    EQUAL = 269,                   /* EQUAL  */
    PLUS = 270,                    /* PLUS  */
    MINUS = 271,                   /* MINUS  */
    MUL = 272,                     /* MUL  */
    DIV = 273,                     /* DIV  */
    MOD = 274,                     /* MOD  */
    END = 275,                     /* END  */
    BEG = 276,                     /* BEG  */
    LT = 277,                      /* LT  */
    LTEQ = 278,                    /* LTEQ  */
    GT = 279,                      /* GT  */
    GTEQ = 280,                    /* GTEQ  */
    EQEQ = 281,                    /* EQEQ  */
    NOEQ = 282,                    /* NOEQ  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    IF = 285,                      /* IF  */
    THEN = 286,                    /* THEN  */
    ELSE = 287,                    /* ELSE  */
    ENDIF = 288,                   /* ENDIF  */
    WHILE = 289,                   /* WHILE  */
    DO = 290,                      /* DO  */
    ENDWHILE = 291,                /* ENDWHILE  */
    CONTINUE = 292,                /* CONTINUE  */
    BREAK = 293,                   /* BREAK  */
    REPEAT = 294,                  /* REPEAT  */
    UNTIL = 295                    /* UNTIL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MAIN 258
#define RET 259
#define DECL 260
#define ENDDECL 261
#define INTTYPE 262
#define STRTYPE 263
#define READ 264
#define WRITE 265
#define NUM 266
#define ID 267
#define WORD 268
#define EQUAL 269
#define PLUS 270
#define MINUS 271
#define MUL 272
#define DIV 273
#define MOD 274
#define END 275
#define BEG 276
#define LT 277
#define LTEQ 278
#define GT 279
#define GTEQ 280
#define EQEQ 281
#define NOEQ 282
#define AND 283
#define OR 284
#define IF 285
#define THEN 286
#define ELSE 287
#define ENDIF 288
#define WHILE 289
#define DO 290
#define ENDWHILE 291
#define CONTINUE 292
#define BREAK 293
#define REPEAT 294
#define UNTIL 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "exprtree.y"

	struct tnode *no;
	struct Gsymbol *Symbols;
	struct Lsymbol *Lsymbols;
	struct Paramstruct *parameter; 
	int number;
	char* name;

#line 230 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_RET = 4,                        /* RET  */
  YYSYMBOL_DECL = 5,                       /* DECL  */
  YYSYMBOL_ENDDECL = 6,                    /* ENDDECL  */
  YYSYMBOL_INTTYPE = 7,                    /* INTTYPE  */
  YYSYMBOL_STRTYPE = 8,                    /* STRTYPE  */
  YYSYMBOL_READ = 9,                       /* READ  */
  YYSYMBOL_WRITE = 10,                     /* WRITE  */
  YYSYMBOL_NUM = 11,                       /* NUM  */
  YYSYMBOL_ID = 12,                        /* ID  */
  YYSYMBOL_WORD = 13,                      /* WORD  */
  YYSYMBOL_EQUAL = 14,                     /* EQUAL  */
  YYSYMBOL_PLUS = 15,                      /* PLUS  */
  YYSYMBOL_MINUS = 16,                     /* MINUS  */
  YYSYMBOL_MUL = 17,                       /* MUL  */
  YYSYMBOL_DIV = 18,                       /* DIV  */
  YYSYMBOL_MOD = 19,                       /* MOD  */
  YYSYMBOL_END = 20,                       /* END  */
  YYSYMBOL_BEG = 21,                       /* BEG  */
  YYSYMBOL_LT = 22,                        /* LT  */
  YYSYMBOL_LTEQ = 23,                      /* LTEQ  */
  YYSYMBOL_GT = 24,                        /* GT  */
  YYSYMBOL_GTEQ = 25,                      /* GTEQ  */
  YYSYMBOL_EQEQ = 26,                      /* EQEQ  */
  YYSYMBOL_NOEQ = 27,                      /* NOEQ  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_THEN = 31,                      /* THEN  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_ENDIF = 33,                     /* ENDIF  */
  YYSYMBOL_WHILE = 34,                     /* WHILE  */
  YYSYMBOL_DO = 35,                        /* DO  */
  YYSYMBOL_ENDWHILE = 36,                  /* ENDWHILE  */
  YYSYMBOL_CONTINUE = 37,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 38,                     /* BREAK  */
  YYSYMBOL_REPEAT = 39,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 40,                     /* UNTIL  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_45_ = 45,                       /* ';'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_47_ = 47,                       /* '['  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_program = 50,                   /* program  */
  YYSYMBOL_MainBlock = 51,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 52,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 53,                      /* Fdef  */
  YYSYMBOL_Body = 54,                      /* Body  */
  YYSYMBOL_Retstmtc = 55,                  /* Retstmtc  */
  YYSYMBOL_Slist = 56,                     /* Slist  */
  YYSYMBOL_Stmt = 57,                      /* Stmt  */
  YYSYMBOL_Ifstmt = 58,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 59,                 /* Whilestmt  */
  YYSYMBOL_InputStmt = 60,                 /* InputStmt  */
  YYSYMBOL_OuptputStmt = 61,               /* OuptputStmt  */
  YYSYMBOL_AsgStmt = 62,                   /* AsgStmt  */
  YYSYMBOL_Word = 63,                      /* Word  */
  YYSYMBOL_Continue = 64,                  /* Continue  */
  YYSYMBOL_Break = 65,                     /* Break  */
  YYSYMBOL_GDeclarations = 66,             /* GDeclarations  */
  YYSYMBOL_LDeclarations = 67,             /* LDeclarations  */
  YYSYMBOL_GDeclList = 68,                 /* GDeclList  */
  YYSYMBOL_LDeclList = 69,                 /* LDeclList  */
  YYSYMBOL_GDecl = 70,                     /* GDecl  */
  YYSYMBOL_LDecl = 71,                     /* LDecl  */
  YYSYMBOL_GidList = 72,                   /* GidList  */
  YYSYMBOL_LidList = 73,                   /* LidList  */
  YYSYMBOL_Gid = 74,                       /* Gid  */
  YYSYMBOL_ParamList = 75,                 /* ParamList  */
  YYSYMBOL_Param = 76,                     /* Param  */
  YYSYMBOL_Type = 77,                      /* Type  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_IDENTIFIER = 79,                /* IDENTIFIER  */
  YYSYMBOL_E = 80,                         /* E  */
  YYSYMBOL_ArgList = 81                    /* ArgList  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   409

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
      41,    42,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    45,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,   101,   108,   109,   112,   115,
     118,   119,   122,   123,   126,   127,   128,   129,   130,   131,
     132,   135,   136,   139,   140,   141,   144,   147,   148,   151,
     152,   155,   158,   161,   164,   171,   174,   183,   190,   199,
     200,   203,   204,   207,   218,   229,   230,   233,   234,   237,
     238,   239,   240,   243,   244,   247,   250,   251,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   272,   273,   288,   289,   292,
     298,   299
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
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "RET", "DECL",
  "ENDDECL", "INTTYPE", "STRTYPE", "READ", "WRITE", "NUM", "ID", "WORD",
  "EQUAL", "PLUS", "MINUS", "MUL", "DIV", "MOD", "END", "BEG", "LT",
  "LTEQ", "GT", "GTEQ", "EQEQ", "NOEQ", "AND", "OR", "IF", "THEN", "ELSE",
  "ENDIF", "WHILE", "DO", "ENDWHILE", "CONTINUE", "BREAK", "REPEAT",
  "UNTIL", "'('", "')'", "'{'", "'}'", "';'", "','", "'['", "']'",
  "$accept", "program", "MainBlock", "FDefBlock", "Fdef", "Body",
  "Retstmtc", "Slist", "Stmt", "Ifstmt", "Whilestmt", "InputStmt",
  "OuptputStmt", "AsgStmt", "Word", "Continue", "Break", "GDeclarations",
  "LDeclarations", "GDeclList", "LDeclList", "GDecl", "LDecl", "GidList",
  "LidList", "Gid", "ParamList", "Param", "Type", "expr", "IDENTIFIER",
  "E", "ArgList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     120,   125,    20,    31,   -84,     0,   -84,   -84,   -84,   176,
     -84,    24,    -2,   -84,    20,   -84,     0,   -84,    41,   -84,
     -84,   -22,    42,   -84,    25,   -84,   -84,    44,    19,    89,
     -84,    24,    60,   139,   -84,    55,   -84,    99,    68,   -84,
     123,    75,   -84,   139,   -84,   -84,   228,   115,   131,   -84,
     -84,   231,   -84,   164,   210,   133,   123,   -84,   -84,   -84,
     116,   144,   146,   143,   151,   153,   210,   135,   165,   210,
      56,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   197,
     -84,   115,   -84,   203,   209,    43,    63,    63,    63,   216,
     -84,   -84,   100,    43,   204,   -84,    43,   183,   -84,   181,
     -84,    51,   -84,    63,   219,   241,   -84,   -84,    54,   262,
     283,   211,   221,   226,   126,   -84,   227,   141,   -84,   229,
      21,   304,   230,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,   237,   -84,   242,   257,
      63,    63,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   367,
      80,   -84,   -84,   224,   224,   -84,   -84,   -84,   214,   214,
     214,   214,   214,   214,   382,   382,   -84,   210,   210,   325,
     346,   -84,    63,   163,   169,   -34,   248,   367,   210,   -84,
     -84,   -84,   -84,   179,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     4,     0,    35,    56,    57,     0,
      40,     0,     0,     1,    56,     3,     0,     7,     0,    34,
      39,    52,     0,    46,     0,     2,     6,     0,     0,     0,
      43,     0,     0,     0,    51,     0,    54,     0,     0,    45,
      38,     0,    50,     0,    55,    49,     0,     0,     0,    53,
      37,     0,    42,     0,     0,     0,    38,    36,    41,    48,
       0,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,    13,    17,    18,    14,    15,    16,    19,    20,     0,
       5,     0,    44,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    12,     0,     0,    47,     0,
      72,    75,    31,     0,     0,     0,    73,    74,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,    11,    10,    30,    29,    26,    77,    81,    80,
       0,    71,    28,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    27,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,    79,     0,    21,
      23,    24,    25,     0,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,    12,   -84,   260,   213,   -84,   -60,   -68,   -84,
     -84,   -84,   -84,   -84,     3,   -84,   -84,   -84,   239,   -84,
     -84,   287,   246,   -84,   -84,   272,   280,   271,    13,   -83,
     -54,   -84,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    16,    17,    55,    94,    70,    71,    72,
      73,    74,    75,    76,   104,    77,    78,     5,    47,     9,
      51,    10,    52,    22,    60,    23,    35,    36,    37,   105,
     106,   107,   150
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      79,   168,    95,   108,   109,   110,    89,    14,     8,    92,
     114,   181,    79,   117,    11,    79,    79,    15,    18,    28,
     121,    95,    11,    12,    95,    29,     7,     8,    25,    18,
      99,    13,   100,   101,   102,    79,    21,   149,    79,    24,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    27,   100,   101,   102,   169,   170,    53,
      93,    34,   103,   147,    53,    61,    62,    32,    63,   123,
     124,   125,   126,   127,   100,   101,   128,   129,   130,   131,
     132,   133,   134,   135,   103,    33,    64,    30,    31,   177,
      65,    66,   120,    67,    68,    69,   113,    42,    86,   116,
      38,    43,   137,    40,   103,    95,    95,   173,   174,    61,
      62,    44,    63,    79,    79,    95,    45,    48,   183,    79,
      79,    43,   171,   148,    79,     1,   172,     2,    46,    79,
      64,     6,     7,     8,    65,    66,    54,    67,    68,    69,
     112,   123,   124,   125,   126,   127,     7,     8,   128,   129,
     130,   131,   132,   133,   134,   135,   123,   124,   125,   126,
     127,    82,    83,   128,   129,   130,   131,   132,   133,   134,
     135,   143,    61,    62,    56,    63,    59,    80,    61,    62,
      90,    63,    19,     7,     8,    84,   145,    85,    61,    62,
      86,    63,    87,    64,    88,   178,   179,    65,    66,    64,
      67,    68,    69,    65,    66,   180,    67,    68,    69,    64,
      91,    96,   184,    65,    66,    98,    67,    68,    69,    61,
      62,    63,    63,   119,   115,    61,    62,   118,    63,   123,
     124,   125,   126,   127,    50,     7,     8,    57,     7,     8,
      64,   125,   126,   127,    65,    66,    64,    67,    68,    69,
     111,    66,   140,    67,    68,    69,   123,   124,   125,   126,
     127,   122,   141,   128,   129,   130,   131,   132,   133,   134,
     135,   142,   144,   167,   146,   152,    26,   123,   124,   125,
     126,   127,   166,   136,   128,   129,   130,   131,   132,   133,
     134,   135,   168,   182,    97,    81,    20,    58,   123,   124,
     125,   126,   127,    39,   138,   128,   129,   130,   131,   132,
     133,   134,   135,    41,    49,     0,     0,     0,     0,   123,
     124,   125,   126,   127,     0,   139,   128,   129,   130,   131,
     132,   133,   134,   135,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   127,     0,   151,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   127,     0,   175,   128,   129,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,   123,   124,   125,   126,   127,     0,   176,   128,
     129,   130,   131,   132,   133,   134,   135,   123,   124,   125,
     126,   127,     0,     0,   128,   129,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
      54,    35,    70,    86,    87,    88,    66,     7,     8,    69,
      93,    45,    66,    96,     1,    69,    70,     5,     5,    41,
     103,    89,     9,     3,    92,    47,     7,     8,    16,    16,
      84,     0,    11,    12,    13,    89,    12,   120,    92,    41,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,    12,    11,    12,    13,   140,   141,    46,
       4,    42,    41,    42,    51,     9,    10,    42,    12,    15,
      16,    17,    18,    19,    11,    12,    22,    23,    24,    25,
      26,    27,    28,    29,    41,    41,    30,    45,    46,   172,
      34,    35,    41,    37,    38,    39,    93,    42,    47,    96,
      11,    46,    48,    43,    41,   173,   174,   167,   168,     9,
      10,    12,    12,   167,   168,   183,    48,    42,   178,   173,
     174,    46,    42,   120,   178,     5,    46,     7,     5,   183,
      30,     6,     7,     8,    34,    35,    21,    37,    38,    39,
      40,    15,    16,    17,    18,    19,     7,     8,    22,    23,
      24,    25,    26,    27,    28,    29,    15,    16,    17,    18,
      19,    45,    46,    22,    23,    24,    25,    26,    27,    28,
      29,    45,     9,    10,    43,    12,    12,    44,     9,    10,
      45,    12,     6,     7,     8,    41,    45,    41,     9,    10,
      47,    12,    41,    30,    41,    32,    33,    34,    35,    30,
      37,    38,    39,    34,    35,    36,    37,    38,    39,    30,
      45,    14,    33,    34,    35,    12,    37,    38,    39,     9,
      10,    12,    12,    42,    20,     9,    10,    44,    12,    15,
      16,    17,    18,    19,     6,     7,     8,     6,     7,     8,
      30,    17,    18,    19,    34,    35,    30,    37,    38,    39,
      34,    35,    41,    37,    38,    39,    15,    16,    17,    18,
      19,    42,    41,    22,    23,    24,    25,    26,    27,    28,
      29,    45,    45,    31,    45,    45,    16,    15,    16,    17,
      18,    19,    45,    42,    22,    23,    24,    25,    26,    27,
      28,    29,    35,    45,    81,    56,     9,    51,    15,    16,
      17,    18,    19,    31,    42,    22,    23,    24,    25,    26,
      27,    28,    29,    33,    43,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    42,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    42,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    42,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    42,    22,
      23,    24,    25,    26,    27,    28,    29,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,    50,    51,    66,     6,     7,     8,    68,
      70,    77,     3,     0,     7,    51,    52,    53,    77,     6,
      70,    12,    72,    74,    41,    51,    53,    12,    41,    47,
      45,    46,    42,    41,    42,    75,    76,    77,    11,    74,
      43,    75,    42,    46,    12,    48,     5,    67,    42,    76,
       6,    69,    71,    77,    21,    54,    43,     6,    71,    12,
      73,     9,    10,    12,    30,    34,    35,    37,    38,    39,
      56,    57,    58,    59,    60,    61,    62,    64,    65,    79,
      44,    67,    45,    46,    41,    41,    47,    41,    41,    56,
      45,    45,    56,     4,    55,    57,    14,    54,    12,    79,
      11,    12,    13,    41,    63,    78,    79,    80,    78,    78,
      78,    34,    40,    63,    78,    20,    63,    78,    44,    42,
      41,    78,    42,    15,    16,    17,    18,    19,    22,    23,
      24,    25,    26,    27,    28,    29,    42,    48,    42,    42,
      41,    41,    45,    45,    45,    45,    45,    42,    63,    78,
      81,    42,    45,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    45,    31,    35,    78,
      78,    42,    46,    56,    56,    42,    42,    78,    32,    33,
      36,    45,    45,    56,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    50,    51,    52,    52,    53,    54,
      55,    55,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    60,    61,    61,    62,
      62,    63,    64,    65,    66,    66,    67,    67,    67,    68,
      68,    69,    69,    70,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    81,
      81,    81
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     8,     2,     1,     9,     4,
       3,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     9,     7,     7,     7,     5,     5,     5,     4,
       4,     1,     2,     2,     3,     2,     3,     2,     0,     2,
       1,     2,     1,     3,     3,     3,     1,     3,     1,     4,
       4,     3,     1,     3,     1,     2,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     4,     3,     4,     3,
       1,     1
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
  case 2: /* program: GDeclarations FDefBlock MainBlock  */
#line 96 "exprtree.y"
                                            {exit(1);}
#line 1454 "y.tab.c"
    break;

  case 3: /* program: GDeclarations MainBlock  */
#line 97 "exprtree.y"
                                            {exit(1);}
#line 1460 "y.tab.c"
    break;

  case 4: /* program: MainBlock  */
#line 98 "exprtree.y"
                                         {exit(1);}
#line 1466 "y.tab.c"
    break;

  case 5: /* MainBlock: INTTYPE MAIN '(' ')' '{' LDeclarations Body '}'  */
#line 101 "exprtree.y"
                                                              { fprintf(fp, "F0:\n");
																fprintf(fp, "MOV BP,%d\n", binding);
																FunASTgen("main",1,NULL,(yyvsp[-2].Lsymbols),(yyvsp[-1].no),fp); (yyval.no) = (yyvsp[-1].no);
																fclose(fp);												  	
															  }
#line 1476 "y.tab.c"
    break;

  case 6: /* FDefBlock: FDefBlock Fdef  */
#line 108 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1482 "y.tab.c"
    break;

  case 7: /* FDefBlock: Fdef  */
#line 109 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1488 "y.tab.c"
    break;

  case 8: /* Fdef: Type ID '(' ParamList ')' '{' LDeclarations Body '}'  */
#line 112 "exprtree.y"
                                                             { FunASTgen((yyvsp[-7].name),(yyvsp[-8].number),(yyvsp[-5].parameter),(yyvsp[-2].Lsymbols),(yyvsp[-1].no),fp); (yyval.no) = (yyvsp[-1].no);}
#line 1494 "y.tab.c"
    break;

  case 9: /* Body: BEG Slist Retstmtc END  */
#line 115 "exprtree.y"
                                      { (yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1500 "y.tab.c"
    break;

  case 10: /* Retstmtc: RET expr ';'  */
#line 118 "exprtree.y"
                                      { (yyval.no) = createTree(-1,RETURN_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1506 "y.tab.c"
    break;

  case 11: /* Retstmtc: RET Word ';'  */
#line 119 "exprtree.y"
                                      { (yyval.no) = createTree(-1,RETURN_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1512 "y.tab.c"
    break;

  case 12: /* Slist: Slist Stmt  */
#line 122 "exprtree.y"
                   {(yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1518 "y.tab.c"
    break;

  case 13: /* Slist: Stmt  */
#line 123 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1524 "y.tab.c"
    break;

  case 14: /* Stmt: InputStmt  */
#line 126 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1530 "y.tab.c"
    break;

  case 15: /* Stmt: OuptputStmt  */
#line 127 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1536 "y.tab.c"
    break;

  case 16: /* Stmt: AsgStmt  */
#line 128 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1542 "y.tab.c"
    break;

  case 17: /* Stmt: Ifstmt  */
#line 129 "exprtree.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1548 "y.tab.c"
    break;

  case 18: /* Stmt: Whilestmt  */
#line 130 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1554 "y.tab.c"
    break;

  case 19: /* Stmt: Continue  */
#line 131 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1560 "y.tab.c"
    break;

  case 20: /* Stmt: Break  */
#line 132 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1566 "y.tab.c"
    break;

  case 21: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF  */
#line 135 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1572 "y.tab.c"
    break;

  case 22: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF  */
#line 136 "exprtree.y"
                                                     { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1578 "y.tab.c"
    break;

  case 23: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE  */
#line 139 "exprtree.y"
                                                             { (yyval.no) = createTree(-1,WHILE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1584 "y.tab.c"
    break;

  case 24: /* Whilestmt: DO Slist WHILE '(' expr ')' ';'  */
#line 140 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1590 "y.tab.c"
    break;

  case 25: /* Whilestmt: REPEAT Slist UNTIL '(' expr ')' ';'  */
#line 141 "exprtree.y"
                                                                         { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1596 "y.tab.c"
    break;

  case 26: /* InputStmt: READ '(' IDENTIFIER ')' ';'  */
#line 144 "exprtree.y"
                                               { (yyval.no) = createTree(-1,READ_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1602 "y.tab.c"
    break;

  case 27: /* OuptputStmt: WRITE '(' expr ')' ';'  */
#line 147 "exprtree.y"
                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1608 "y.tab.c"
    break;

  case 28: /* OuptputStmt: WRITE '(' Word ')' ';'  */
#line 148 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1614 "y.tab.c"
    break;

  case 29: /* AsgStmt: IDENTIFIER EQUAL expr ';'  */
#line 151 "exprtree.y"
                                               { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1620 "y.tab.c"
    break;

  case 30: /* AsgStmt: IDENTIFIER EQUAL Word ';'  */
#line 152 "exprtree.y"
                                                       { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1626 "y.tab.c"
    break;

  case 31: /* Word: WORD  */
#line 155 "exprtree.y"
                                               { (yyval.no) = createTree(-1,STRING_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1632 "y.tab.c"
    break;

  case 32: /* Continue: CONTINUE ';'  */
#line 158 "exprtree.y"
                                                         { (yyval.no) = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
#line 1638 "y.tab.c"
    break;

  case 33: /* Break: BREAK ';'  */
#line 161 "exprtree.y"
                                               { (yyval.no) = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
#line 1644 "y.tab.c"
    break;

  case 34: /* GDeclarations: DECL GDeclList ENDDECL  */
#line 164 "exprtree.y"
                                                      { findID((yyvsp[-1].Symbols));
														printsymboltable((yyvsp[-1].Symbols)); 
                                                    	gst=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
														gst->next = (yyvsp[-1].Symbols);
														gst = gst->next;
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													  }
#line 1656 "y.tab.c"
    break;

  case 35: /* GDeclarations: DECL ENDDECL  */
#line 171 "exprtree.y"
                                                                 { gst = NULL; (yyval.Symbols) = NULL;}
#line 1662 "y.tab.c"
    break;

  case 36: /* LDeclarations: DECL LDeclList ENDDECL  */
#line 174 "exprtree.y"
                                                      { lst = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
														lst->next = (yyvsp[-1].Lsymbols);
														lst = lst->next;
														lst = localdecal(lst,para);
														(yyvsp[-1].Lsymbols) = lst;
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = (yyvsp[-1].Lsymbols);
													  }
#line 1676 "y.tab.c"
    break;

  case 37: /* LDeclarations: DECL ENDDECL  */
#line 183 "exprtree.y"
                                                                  { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = lst;
													  }
#line 1688 "y.tab.c"
    break;

  case 38: /* LDeclarations: %empty  */
#line 190 "exprtree.y"
                                                                  { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = lst;
													  }
#line 1700 "y.tab.c"
    break;

  case 39: /* GDeclList: GDeclList GDecl  */
#line 199 "exprtree.y"
                                                      { (yyval.Symbols) = joinnode((yyvsp[-1].Symbols),(yyvsp[0].Symbols));}
#line 1706 "y.tab.c"
    break;

  case 40: /* GDeclList: GDecl  */
#line 200 "exprtree.y"
                                                              { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1712 "y.tab.c"
    break;

  case 41: /* LDeclList: LDeclList LDecl  */
#line 203 "exprtree.y"
                                                     { (yyval.Lsymbols) = joinLVnode((yyvsp[-1].Lsymbols),(yyvsp[0].Lsymbols));}
#line 1718 "y.tab.c"
    break;

  case 42: /* LDeclList: LDecl  */
#line 204 "exprtree.y"
                                                     { (yyval.Lsymbols) = (yyvsp[0].Lsymbols);}
#line 1724 "y.tab.c"
    break;

  case 43: /* GDecl: Type GidList ';'  */
#line 207 "exprtree.y"
                                                                        {
														struct Gsymbol* t = (yyvsp[-1].Symbols);
														while(t != NULL)
														{
															t->type = (yyvsp[-2].number);
											               	t = t->next;
														}
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													}
#line 1738 "y.tab.c"
    break;

  case 44: /* LDecl: Type LidList ';'  */
#line 218 "exprtree.y"
                                                   {
													struct Lsymbol* t = (yyvsp[-1].Lsymbols);
													while(t != NULL)
														{
															t->type = (yyvsp[-2].number);
											               	t = t->next;
														}
													(yyval.Lsymbols) = (yyvsp[-1].Lsymbols);
												   }
#line 1752 "y.tab.c"
    break;

  case 45: /* GidList: GidList ',' Gid  */
#line 229 "exprtree.y"
                                                                        { (yyval.Symbols) = joinnode((yyvsp[-2].Symbols),(yyvsp[0].Symbols));}
#line 1758 "y.tab.c"
    break;

  case 46: /* GidList: Gid  */
#line 230 "exprtree.y"
                                                                    { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1764 "y.tab.c"
    break;

  case 47: /* LidList: LidList ',' ID  */
#line 233 "exprtree.y"
                                                { (yyval.Lsymbols) = joinLVnode((yyvsp[-2].Lsymbols), LInstall((yyvsp[0].name), inttype)); }
#line 1770 "y.tab.c"
    break;

  case 48: /* LidList: ID  */
#line 234 "exprtree.y"
                                                { (yyval.Lsymbols) = LInstall((yyvsp[0].name), inttype);}
#line 1776 "y.tab.c"
    break;

  case 49: /* Gid: ID '[' NUM ']'  */
#line 237 "exprtree.y"
                                                                                { (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,(yyvsp[-1].number),++binding,NULL,-1); binding += (yyvsp[-1].number) - 1;}
#line 1782 "y.tab.c"
    break;

  case 50: /* Gid: ID '(' ParamList ')'  */
#line 238 "exprtree.y"
                                                                        { findparam((yyvsp[-1].parameter)); (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,0,0,(yyvsp[-1].parameter),flabel++);}
#line 1788 "y.tab.c"
    break;

  case 51: /* Gid: ID '(' ')'  */
#line 239 "exprtree.y"
                                                                        { (yyval.Symbols) = createVarList((yyvsp[-2].name),inttype,0,0,NULL,flabel++);}
#line 1794 "y.tab.c"
    break;

  case 52: /* Gid: ID  */
#line 240 "exprtree.y"
                                                    { (yyval.Symbols) = createVarList((yyvsp[0].name),inttype,1,++binding,NULL,-1);}
#line 1800 "y.tab.c"
    break;

  case 53: /* ParamList: ParamList ',' Param  */
#line 243 "exprtree.y"
                                                { (yyval.parameter) = para = AppendParamlist((yyvsp[-2].parameter),(yyvsp[0].parameter));}
#line 1806 "y.tab.c"
    break;

  case 54: /* ParamList: Param  */
#line 244 "exprtree.y"
                                                { (yyval.parameter) = para = (yyvsp[0].parameter);}
#line 1812 "y.tab.c"
    break;

  case 55: /* Param: Type ID  */
#line 247 "exprtree.y"
                                                { (yyval.parameter) = CreateParamlist((yyvsp[-1].number),(yyvsp[0].name));}
#line 1818 "y.tab.c"
    break;

  case 56: /* Type: INTTYPE  */
#line 250 "exprtree.y"
                                                { (yyval.number) = inttype;}
#line 1824 "y.tab.c"
    break;

  case 57: /* Type: STRTYPE  */
#line 251 "exprtree.y"
                                                { (yyval.number) = strtype;}
#line 1830 "y.tab.c"
    break;

  case 58: /* expr: expr PLUS expr  */
#line 254 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1836 "y.tab.c"
    break;

  case 59: /* expr: expr MINUS expr  */
#line 255 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1842 "y.tab.c"
    break;

  case 60: /* expr: expr MUL expr  */
#line 256 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1848 "y.tab.c"
    break;

  case 61: /* expr: expr DIV expr  */
#line 257 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1854 "y.tab.c"
    break;

  case 62: /* expr: expr MOD expr  */
#line 258 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"%",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1860 "y.tab.c"
    break;

  case 63: /* expr: expr LT expr  */
#line 259 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1866 "y.tab.c"
    break;

  case 64: /* expr: expr LTEQ expr  */
#line 260 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1872 "y.tab.c"
    break;

  case 65: /* expr: expr GT expr  */
#line 261 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1878 "y.tab.c"
    break;

  case 66: /* expr: expr GTEQ expr  */
#line 262 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1884 "y.tab.c"
    break;

  case 67: /* expr: expr EQEQ expr  */
#line 263 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1890 "y.tab.c"
    break;

  case 68: /* expr: expr NOEQ expr  */
#line 264 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1896 "y.tab.c"
    break;

  case 69: /* expr: expr AND expr  */
#line 265 "exprtree.y"
                                {(yyval.no) = createTree(-1,LOGICAL_NODE,"&&",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1902 "y.tab.c"
    break;

  case 70: /* expr: expr OR expr  */
#line 266 "exprtree.y"
                                {(yyval.no) = createTree(-1,LOGICAL_NODE,"||",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 1908 "y.tab.c"
    break;

  case 71: /* expr: '(' expr ')'  */
#line 267 "exprtree.y"
                                    {(yyval.no) = (yyvsp[-1].no);}
#line 1914 "y.tab.c"
    break;

  case 72: /* expr: NUM  */
#line 268 "exprtree.y"
                                        {(yyval.no) = createTree((yyvsp[0].number),NUM_NODE,NULL,NULL,NULL,NULL);}
#line 1920 "y.tab.c"
    break;

  case 73: /* expr: IDENTIFIER  */
#line 269 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 1926 "y.tab.c"
    break;

  case 74: /* expr: E  */
#line 270 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 1932 "y.tab.c"
    break;

  case 75: /* IDENTIFIER: ID  */
#line 272 "exprtree.y"
                                                                        {(yyval.no) = createTree(-1,VAR_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1938 "y.tab.c"
    break;

  case 76: /* IDENTIFIER: ID '[' expr ']'  */
#line 273 "exprtree.y"
                                                        {
													struct tnode* temp = createTree(-1,VAR_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);
													if(temp->left->type != 1)
													{
														printf("type missmatch in array\n");
														exit(0);
													}
			 										if(temp->Gentry->size <= (yyvsp[-1].no)->val)
													{
														printf("Array index out of bounds\n");
														exit(0);
													}
													(yyval.no) = temp;
												}
#line 1957 "y.tab.c"
    break;

  case 77: /* E: ID '(' ')'  */
#line 288 "exprtree.y"
                                    { (yyval.no) = createTree(-1,FUNCTION_NODE,(yyvsp[-2].name),NULL,NULL,NULL);}
#line 1963 "y.tab.c"
    break;

  case 78: /* E: ID '(' ArgList ')'  */
#line 289 "exprtree.y"
                                    { (yyval.no) = createTree(-1,FUNCTION_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);}
#line 1969 "y.tab.c"
    break;

  case 79: /* ArgList: ArgList ',' expr  */
#line 292 "exprtree.y"
                               {
								tnode* t = (yyvsp[-2].no);
								while(t->extra != NULL) t = t->extra;
								t->extra = (yyvsp[0].no);
								(yyval.no) = (yyvsp[-2].no);
                               }
#line 1980 "y.tab.c"
    break;

  case 80: /* ArgList: expr  */
#line 298 "exprtree.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1986 "y.tab.c"
    break;

  case 81: /* ArgList: Word  */
#line 299 "exprtree.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1992 "y.tab.c"
    break;


#line 1996 "y.tab.c"

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

#line 302 "exprtree.y"


yyerror(char const *s)
{
    printf("yyerror %s\n",s);
}


int main(void) {
	fp = fopen("a.xsm","wb");
	fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(fp, "JMP F0\n");
	FILE* tmp = fopen("test.txt","r");
	yyin = tmp;
	yyparse();
	fclose(tmp);
	return 0;
}
