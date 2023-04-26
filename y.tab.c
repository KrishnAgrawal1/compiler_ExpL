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
	struct Typetable *TypeT;

#line 89 "y.tab.c"

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
    FREE = 260,                    /* FREE  */
    ALLOC = 261,                   /* ALLOC  */
    NIL = 262,                     /* NIL  */
    INITIALIZE = 263,              /* INITIALIZE  */
    TYPE = 264,                    /* TYPE  */
    ENDTYPE = 265,                 /* ENDTYPE  */
    DECL = 266,                    /* DECL  */
    ENDDECL = 267,                 /* ENDDECL  */
    INTTYPE = 268,                 /* INTTYPE  */
    STRTYPE = 269,                 /* STRTYPE  */
    READ = 270,                    /* READ  */
    WRITE = 271,                   /* WRITE  */
    NUM = 272,                     /* NUM  */
    ID = 273,                      /* ID  */
    WORD = 274,                    /* WORD  */
    EQUAL = 275,                   /* EQUAL  */
    BRKP = 276,                    /* BRKP  */
    PLUS = 277,                    /* PLUS  */
    MINUS = 278,                   /* MINUS  */
    MUL = 279,                     /* MUL  */
    DIV = 280,                     /* DIV  */
    MOD = 281,                     /* MOD  */
    END = 282,                     /* END  */
    BEG = 283,                     /* BEG  */
    LT = 284,                      /* LT  */
    LTEQ = 285,                    /* LTEQ  */
    GT = 286,                      /* GT  */
    GTEQ = 287,                    /* GTEQ  */
    EQEQ = 288,                    /* EQEQ  */
    NOEQ = 289,                    /* NOEQ  */
    AND = 290,                     /* AND  */
    OR = 291,                      /* OR  */
    IF = 292,                      /* IF  */
    THEN = 293,                    /* THEN  */
    ELSE = 294,                    /* ELSE  */
    ENDIF = 295,                   /* ENDIF  */
    WHILE = 296,                   /* WHILE  */
    DO = 297,                      /* DO  */
    ENDWHILE = 298,                /* ENDWHILE  */
    CONTINUE = 299,                /* CONTINUE  */
    BREAK = 300,                   /* BREAK  */
    REPEAT = 301,                  /* REPEAT  */
    UNTIL = 302                    /* UNTIL  */
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
#define FREE 260
#define ALLOC 261
#define NIL 262
#define INITIALIZE 263
#define TYPE 264
#define ENDTYPE 265
#define DECL 266
#define ENDDECL 267
#define INTTYPE 268
#define STRTYPE 269
#define READ 270
#define WRITE 271
#define NUM 272
#define ID 273
#define WORD 274
#define EQUAL 275
#define BRKP 276
#define PLUS 277
#define MINUS 278
#define MUL 279
#define DIV 280
#define MOD 281
#define END 282
#define BEG 283
#define LT 284
#define LTEQ 285
#define GT 286
#define GTEQ 287
#define EQEQ 288
#define NOEQ 289
#define AND 290
#define OR 291
#define IF 292
#define THEN 293
#define ELSE 294
#define ENDIF 295
#define WHILE 296
#define DO 297
#define ENDWHILE 298
#define CONTINUE 299
#define BREAK 300
#define REPEAT 301
#define UNTIL 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "exprtree.y"

	struct tnode *no;
	struct Gsymbol *Symbols;
	struct Lsymbol *Lsymbols;
	struct Paramstruct *parameter; 
	struct Fieldlist *fieldL;
	struct Typetable *TT;
	int number;
	char* name;

#line 247 "y.tab.c"

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
  YYSYMBOL_FREE = 5,                       /* FREE  */
  YYSYMBOL_ALLOC = 6,                      /* ALLOC  */
  YYSYMBOL_NIL = 7,                        /* NIL  */
  YYSYMBOL_INITIALIZE = 8,                 /* INITIALIZE  */
  YYSYMBOL_TYPE = 9,                       /* TYPE  */
  YYSYMBOL_ENDTYPE = 10,                   /* ENDTYPE  */
  YYSYMBOL_DECL = 11,                      /* DECL  */
  YYSYMBOL_ENDDECL = 12,                   /* ENDDECL  */
  YYSYMBOL_INTTYPE = 13,                   /* INTTYPE  */
  YYSYMBOL_STRTYPE = 14,                   /* STRTYPE  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_NUM = 17,                       /* NUM  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_WORD = 19,                      /* WORD  */
  YYSYMBOL_EQUAL = 20,                     /* EQUAL  */
  YYSYMBOL_BRKP = 21,                      /* BRKP  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_MINUS = 23,                     /* MINUS  */
  YYSYMBOL_MUL = 24,                       /* MUL  */
  YYSYMBOL_DIV = 25,                       /* DIV  */
  YYSYMBOL_MOD = 26,                       /* MOD  */
  YYSYMBOL_END = 27,                       /* END  */
  YYSYMBOL_BEG = 28,                       /* BEG  */
  YYSYMBOL_LT = 29,                        /* LT  */
  YYSYMBOL_LTEQ = 30,                      /* LTEQ  */
  YYSYMBOL_GT = 31,                        /* GT  */
  YYSYMBOL_GTEQ = 32,                      /* GTEQ  */
  YYSYMBOL_EQEQ = 33,                      /* EQEQ  */
  YYSYMBOL_NOEQ = 34,                      /* NOEQ  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_IF = 37,                        /* IF  */
  YYSYMBOL_THEN = 38,                      /* THEN  */
  YYSYMBOL_ELSE = 39,                      /* ELSE  */
  YYSYMBOL_ENDIF = 40,                     /* ENDIF  */
  YYSYMBOL_WHILE = 41,                     /* WHILE  */
  YYSYMBOL_DO = 42,                        /* DO  */
  YYSYMBOL_ENDWHILE = 43,                  /* ENDWHILE  */
  YYSYMBOL_CONTINUE = 44,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 45,                     /* BREAK  */
  YYSYMBOL_REPEAT = 46,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 47,                     /* UNTIL  */
  YYSYMBOL_48_ = 48,                       /* '{'  */
  YYSYMBOL_49_ = 49,                       /* '}'  */
  YYSYMBOL_50_ = 50,                       /* ';'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* ','  */
  YYSYMBOL_54_ = 54,                       /* '['  */
  YYSYMBOL_55_ = 55,                       /* ']'  */
  YYSYMBOL_56_ = 56,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_TypeDefBlock = 59,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 60,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 61,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 62,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 63,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 64,                  /* TypeName  */
  YYSYMBOL_MainBlock = 65,                 /* MainBlock  */
  YYSYMBOL_FDefBlock = 66,                 /* FDefBlock  */
  YYSYMBOL_Fdef = 67,                      /* Fdef  */
  YYSYMBOL_Body = 68,                      /* Body  */
  YYSYMBOL_Retstmtc = 69,                  /* Retstmtc  */
  YYSYMBOL_Slist = 70,                     /* Slist  */
  YYSYMBOL_Stmt = 71,                      /* Stmt  */
  YYSYMBOL_Free = 72,                      /* Free  */
  YYSYMBOL_Ifstmt = 73,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 74,                 /* Whilestmt  */
  YYSYMBOL_InputStmt = 75,                 /* InputStmt  */
  YYSYMBOL_OuptputStmt = 76,               /* OuptputStmt  */
  YYSYMBOL_AsgStmt = 77,                   /* AsgStmt  */
  YYSYMBOL_Word = 78,                      /* Word  */
  YYSYMBOL_Continue = 79,                  /* Continue  */
  YYSYMBOL_Break = 80,                     /* Break  */
  YYSYMBOL_GDeclarations = 81,             /* GDeclarations  */
  YYSYMBOL_LDeclarations = 82,             /* LDeclarations  */
  YYSYMBOL_GDeclList = 83,                 /* GDeclList  */
  YYSYMBOL_LDeclList = 84,                 /* LDeclList  */
  YYSYMBOL_GDecl = 85,                     /* GDecl  */
  YYSYMBOL_LDecl = 86,                     /* LDecl  */
  YYSYMBOL_GidList = 87,                   /* GidList  */
  YYSYMBOL_LidList = 88,                   /* LidList  */
  YYSYMBOL_Gid = 89,                       /* Gid  */
  YYSYMBOL_ParamList = 90,                 /* ParamList  */
  YYSYMBOL_Param = 91,                     /* Param  */
  YYSYMBOL_Type = 92,                      /* Type  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_Field = 94,                     /* Field  */
  YYSYMBOL_IDENTIFIER = 95,                /* IDENTIFIER  */
  YYSYMBOL_E = 96,                         /* E  */
  YYSYMBOL_ArgList = 97                    /* ArgList  */
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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   302


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
      51,    52,     2,     2,    53,     2,    56,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    54,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   100,   101,   102,   105,
     108,   112,   115,   118,   122,   125,   127,   128,   129,   132,
     139,   140,   143,   146,   149,   150,   153,   154,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   168,   171,   172,
     175,   176,   177,   180,   183,   184,   187,   188,   189,   190,
     193,   196,   199,   202,   209,   212,   221,   228,   237,   238,
     241,   242,   245,   256,   267,   268,   271,   272,   275,   276,
     277,   278,   281,   282,   285,   288,   289,   290,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   319,   320,   323,   324,
     325,   340,   341,   344,   350,   351
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
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "RET", "FREE",
  "ALLOC", "NIL", "INITIALIZE", "TYPE", "ENDTYPE", "DECL", "ENDDECL",
  "INTTYPE", "STRTYPE", "READ", "WRITE", "NUM", "ID", "WORD", "EQUAL",
  "BRKP", "PLUS", "MINUS", "MUL", "DIV", "MOD", "END", "BEG", "LT", "LTEQ",
  "GT", "GTEQ", "EQEQ", "NOEQ", "AND", "OR", "IF", "THEN", "ELSE", "ENDIF",
  "WHILE", "DO", "ENDWHILE", "CONTINUE", "BREAK", "REPEAT", "UNTIL", "'{'",
  "'}'", "';'", "'('", "')'", "','", "'['", "']'", "'.'", "$accept",
  "program", "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList",
  "FieldDecl", "TypeName", "MainBlock", "FDefBlock", "Fdef", "Body",
  "Retstmtc", "Slist", "Stmt", "Free", "Ifstmt", "Whilestmt", "InputStmt",
  "OuptputStmt", "AsgStmt", "Word", "Continue", "Break", "GDeclarations",
  "LDeclarations", "GDeclList", "LDeclList", "GDecl", "LDecl", "GidList",
  "LidList", "Gid", "ParamList", "Param", "Type", "expr", "Field",
  "IDENTIFIER", "E", "ArgList", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      80,     2,    92,    23,  -115,  -115,    48,    96,  -115,   123,
    -115,   123,    83,    65,    78,  -115,  -115,  -115,   137,  -115,
     115,   116,  -115,    23,  -115,   123,  -115,  -115,  -115,   123,
     119,   147,  -115,  -115,  -115,  -115,   -32,    49,  -115,    95,
    -115,   123,  -115,   180,  -115,  -115,  -115,    72,  -115,   159,
      18,   164,  -115,   115,   136,  -115,   -50,  -115,   181,  -115,
    -115,   150,  -115,    31,   148,  -115,   194,   158,   180,  -115,
    -115,  -115,  -115,   140,   189,   194,  -115,  -115,   162,  -115,
     203,   231,   163,   189,  -115,  -115,  -115,   113,   171,   175,
     182,    84,  -115,   187,   188,   231,   191,   192,   231,   127,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   169,
     223,  -115,   195,  -115,   227,   230,   230,    61,    64,   232,
      64,    64,   264,  -115,  -115,   141,    61,   224,  -115,   235,
      57,  -115,  -115,   202,   205,  -115,  -115,    60,  -115,    64,
     206,   304,  -115,  -115,   289,  -115,   328,   343,   204,   211,
     216,   421,  -115,  -115,   217,   220,   221,   443,  -115,   228,
      21,   367,   233,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,   234,  -115,   236,   239,
      64,    64,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,   465,   144,  -115,  -115,   184,   184,  -115,  -115,  -115,
     100,   100,   100,   100,   100,   100,   265,   265,  -115,   231,
     231,   382,   406,  -115,    64,   174,   186,    53,   242,   465,
     231,  -115,  -115,  -115,  -115,   219,  -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    75,    76,    77,     0,     0,     8,     0,
      21,     0,     0,     0,     0,    11,    54,    75,     0,    59,
       0,     0,     1,     0,     7,     0,     6,    20,     5,     0,
       0,     0,     9,    10,    53,    58,    71,     0,    65,     0,
       3,     0,     4,     0,    16,    17,    18,     0,    14,     0,
       0,     0,    62,     0,     0,     2,     0,    73,     0,    12,
      13,     0,    70,     0,     0,    64,    57,     0,     0,    74,
      15,    69,    68,     0,     0,    57,    72,    56,     0,    61,
       0,     0,     0,     0,    55,    60,    67,     0,     0,     0,
       0,    98,    36,     0,     0,     0,     0,     0,     0,     0,
      27,    35,    31,    32,    28,    29,    30,    33,    34,    99,
       0,    19,     0,    63,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,     0,     0,     0,    26,     0,
       0,    22,    66,     0,     0,    94,    92,    98,    50,     0,
       0,     0,    93,    95,     0,    97,     0,     0,     0,     0,
       0,     0,    23,    96,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,     0,
       0,     0,    25,    24,    49,    48,    47,    46,    43,   101,
     105,   104,     0,    91,    45,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    44,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,   103,
       0,    38,    40,    41,    42,     0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,  -115,   272,  -115,   246,  -115,     4,    -2,
       1,   248,  -115,   -90,   -98,  -115,  -115,  -115,  -115,  -115,
    -115,   -83,  -115,  -115,   293,   229,  -115,  -115,   284,   225,
    -115,  -115,   254,   266,   249,    19,  -114,  -115,   -81,  -115,
    -115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    14,    15,    47,    48,    49,     8,     9,
      10,    82,   127,    99,   100,   101,   102,   103,   104,   105,
     106,   140,   107,   108,    11,    74,    18,    78,    19,    79,
      37,    87,    38,    56,    57,    12,   141,   109,   142,   143,
     192
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     110,   128,    67,    68,   144,   122,   146,   147,   125,    29,
      27,    24,   151,    26,   110,    28,   157,   110,   110,    50,
      13,    20,    51,    41,   128,   161,    21,   128,   135,    40,
      27,    17,     4,    42,   133,   134,     5,    20,   136,   137,
     138,   110,    27,   150,   110,    55,   191,   156,    22,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,    58,   154,   135,   155,   211,   212,   135,    58,
      62,   135,   139,   189,   136,   137,   138,   190,   136,   137,
     138,   136,   137,    71,    68,    44,    45,    58,    32,     1,
      46,     2,    80,     3,     4,   210,    13,    80,     5,    52,
     219,    30,    53,   223,    16,    17,     4,     2,   139,    23,
       5,   160,   139,    31,   118,   139,   119,   128,   128,   215,
     216,    59,   163,   164,   165,   166,   167,   128,   110,   110,
     225,   126,    88,    36,   110,   110,     3,     4,   118,   110,
     119,     5,    89,    90,   110,    91,    88,    54,    92,    34,
      17,     4,    77,    17,     4,     5,    89,    90,     5,    91,
      44,    45,    92,   113,    93,    46,   114,    39,    94,    95,
      43,    96,    97,    98,    84,    17,     4,    61,    93,    88,
       5,    64,    94,    95,    66,    96,    97,    98,   149,    89,
      90,    88,    91,    17,     4,    92,   213,   214,     5,    69,
      70,    89,    90,    72,    91,    73,    75,    92,   165,   166,
     167,    93,   111,   220,   221,    94,    95,    81,    96,    97,
      98,    86,   115,    93,    88,   129,   116,    94,    95,   222,
      96,    97,    98,   117,    89,    90,    88,    91,   120,   121,
      92,   123,   124,   130,   131,   132,    89,    90,    91,    91,
     145,   152,    92,   153,   158,   180,    93,   159,   162,   226,
      94,    95,   181,    96,    97,    98,   182,   184,    93,    88,
     185,   186,    94,    95,   209,    96,    97,    98,   188,    89,
      90,   210,    91,   194,   208,    92,    33,   163,   164,   165,
     166,   167,   224,    60,   168,   169,   170,   171,   172,   173,
      25,    93,    35,    85,    83,   148,    95,    65,    96,    97,
      98,   163,   164,   165,   166,   167,    63,    76,   168,   169,
     170,   171,   172,   173,   174,   175,   163,   164,   165,   166,
     167,   112,     0,   168,   169,   170,   171,   172,   173,   174,
     175,     0,     0,     0,   177,     0,     0,     0,     0,     0,
     163,   164,   165,   166,   167,     0,   176,   168,   169,   170,
     171,   172,   173,   174,   175,   163,   164,   165,   166,   167,
       0,     0,   168,   169,   170,   171,   172,   173,   174,   175,
     178,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   165,   166,   167,     0,   179,   168,   169,   170,   171,
     172,   173,   174,   175,   163,   164,   165,   166,   167,     0,
       0,   168,   169,   170,   171,   172,   173,   174,   175,   193,
       0,     0,     0,     0,     0,     0,     0,     0,   163,   164,
     165,   166,   167,     0,   217,   168,   169,   170,   171,   172,
     173,   174,   175,   163,   164,   165,   166,   167,     0,     0,
     168,   169,   170,   171,   172,   173,   174,   175,   218,     0,
       0,     0,     0,     0,     0,   163,   164,   165,   166,   167,
       0,   183,   168,   169,   170,   171,   172,   173,   174,   175,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   165,
     166,   167,     0,   187,   168,   169,   170,   171,   172,   173,
     174,   175
};

static const yytype_int16 yycheck[] =
{
      81,    99,    52,    53,   118,    95,   120,   121,    98,    11,
       9,     7,   126,     9,    95,    11,   130,    98,    99,    51,
      18,     2,    54,    25,   122,   139,     3,   125,     7,    25,
      29,    13,    14,    29,   115,   116,    18,    18,    17,    18,
      19,   122,    41,   126,   125,    41,   160,   130,     0,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,    43,     6,     7,     8,   180,   181,     7,    50,
      52,     7,    51,    52,    17,    18,    19,   160,    17,    18,
      19,    17,    18,    52,    53,    13,    14,    68,    10,     9,
      18,    11,    73,    13,    14,    42,    18,    78,    18,    50,
     214,    18,    53,    50,    12,    13,    14,    11,    51,    13,
      18,    51,    51,    48,    54,    51,    56,   215,   216,   209,
     210,    49,    22,    23,    24,    25,    26,   225,   209,   210,
     220,     4,     5,    18,   215,   216,    13,    14,    54,   220,
      56,    18,    15,    16,   225,    18,     5,    52,    21,    12,
      13,    14,    12,    13,    14,    18,    15,    16,    18,    18,
      13,    14,    21,    50,    37,    18,    53,    51,    41,    42,
      51,    44,    45,    46,    12,    13,    14,    18,    37,     5,
      18,    17,    41,    42,    48,    44,    45,    46,    47,    15,
      16,     5,    18,    13,    14,    21,    52,    53,    18,    18,
      50,    15,    16,    55,    18,    11,    48,    21,    24,    25,
      26,    37,    49,    39,    40,    41,    42,    28,    44,    45,
      46,    18,    51,    37,     5,    56,    51,    41,    42,    43,
      44,    45,    46,    51,    15,    16,     5,    18,    51,    51,
      21,    50,    50,    20,    49,    18,    15,    16,    18,    18,
      18,    27,    21,    18,    52,    51,    37,    52,    52,    40,
      41,    42,    51,    44,    45,    46,    50,    50,    37,     5,
      50,    50,    41,    42,    38,    44,    45,    46,    50,    15,
      16,    42,    18,    50,    50,    21,    14,    22,    23,    24,
      25,    26,    50,    47,    29,    30,    31,    32,    33,    34,
       7,    37,    18,    78,    75,    41,    42,    53,    44,    45,
      46,    22,    23,    24,    25,    26,    50,    68,    29,    30,
      31,    32,    33,    34,    35,    36,    22,    23,    24,    25,
      26,    83,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    -1,    52,    29,    30,    31,
      32,    33,    34,    35,    36,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    -1,    52,    29,    30,    31,    32,
      33,    34,    35,    36,    22,    23,    24,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    -1,    52,    29,    30,    31,    32,    33,
      34,    35,    36,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      -1,    50,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    -1,    50,    29,    30,    31,    32,    33,    34,
      35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    11,    13,    14,    18,    58,    59,    65,    66,
      67,    81,    92,    18,    60,    61,    12,    13,    83,    85,
      92,     3,     0,    13,    65,    81,    65,    67,    65,    66,
      18,    48,    10,    61,    12,    85,    18,    87,    89,    51,
      65,    66,    65,    51,    13,    14,    18,    62,    63,    64,
      51,    54,    50,    53,    52,    65,    90,    91,    92,    49,
      63,    18,    52,    90,    17,    89,    48,    52,    53,    18,
      50,    52,    55,    11,    82,    48,    91,    12,    84,    86,
      92,    28,    68,    82,    12,    86,    18,    88,     5,    15,
      16,    18,    21,    37,    41,    42,    44,    45,    46,    70,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    94,
      95,    49,    68,    50,    53,    51,    51,    51,    54,    56,
      51,    51,    70,    50,    50,    70,     4,    69,    71,    56,
      20,    49,    18,    95,    95,     7,    17,    18,    19,    51,
      78,    93,    95,    96,    93,    18,    93,    93,    41,    47,
      78,    93,    27,    18,     6,     8,    78,    93,    52,    52,
      51,    93,    52,    22,    23,    24,    25,    26,    29,    30,
      31,    32,    33,    34,    35,    36,    52,    55,    52,    52,
      51,    51,    50,    50,    50,    50,    50,    50,    50,    52,
      78,    93,    97,    52,    50,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    50,    38,
      42,    93,    93,    52,    53,    70,    70,    52,    52,    93,
      39,    40,    43,    50,    50,    70,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    58,    58,    58,    59,
      60,    60,    61,    62,    62,    63,    64,    64,    64,    65,
      66,    66,    67,    68,    69,    69,    70,    70,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    72,    73,    73,
      74,    74,    74,    75,    76,    76,    77,    77,    77,    77,
      78,    79,    80,    81,    81,    82,    82,    82,    83,    83,
      84,    84,    85,    86,    87,    87,    88,    88,    89,    89,
      89,    89,    90,    90,    91,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    96,    96,    97,    97,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     3,     2,     2,     2,     1,     3,
       2,     1,     4,     2,     1,     3,     1,     1,     1,     8,
       2,     1,     9,     4,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     7,     9,
       7,     7,     7,     5,     5,     5,     4,     4,     4,     4,
       1,     2,     2,     3,     2,     3,     2,     0,     2,     1,
       2,     1,     3,     3,     3,     1,     3,     1,     4,     4,
       3,     1,     3,     1,     2,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     3,     1,     1,
       4,     3,     4,     3,     1,     1
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
  case 2: /* program: TypeDefBlock GDeclarations FDefBlock MainBlock  */
#line 96 "exprtree.y"
                                                         {exit(1);}
#line 1530 "y.tab.c"
    break;

  case 3: /* program: TypeDefBlock GDeclarations MainBlock  */
#line 97 "exprtree.y"
                                                         {exit(1);}
#line 1536 "y.tab.c"
    break;

  case 4: /* program: GDeclarations FDefBlock MainBlock  */
#line 98 "exprtree.y"
                                                         {exit(1);}
#line 1542 "y.tab.c"
    break;

  case 5: /* program: GDeclarations MainBlock  */
#line 99 "exprtree.y"
                                                         {exit(1);}
#line 1548 "y.tab.c"
    break;

  case 6: /* program: FDefBlock MainBlock  */
#line 100 "exprtree.y"
                                                                 {exit(1);}
#line 1554 "y.tab.c"
    break;

  case 7: /* program: TypeDefBlock MainBlock  */
#line 101 "exprtree.y"
                                                                 {exit(1);}
#line 1560 "y.tab.c"
    break;

  case 8: /* program: MainBlock  */
#line 102 "exprtree.y"
                                                                 {exit(1);}
#line 1566 "y.tab.c"
    break;

  case 9: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 105 "exprtree.y"
                                           { createTypeTable((yyvsp[-1].no)); (yyval.TT) = TypeT;}
#line 1572 "y.tab.c"
    break;

  case 10: /* TypeDefList: TypeDefList TypeDef  */
#line 108 "exprtree.y"
                                           { struct tnode *t1 = (yyvsp[-1].no), *t2 = (yyvsp[0].no);
										   	 t2->right = t1;
											 (yyval.no) = t2;
										   }
#line 1581 "y.tab.c"
    break;

  case 11: /* TypeDefList: TypeDef  */
#line 112 "exprtree.y"
                                           { (yyval.no) = (yyvsp[0].no);}
#line 1587 "y.tab.c"
    break;

  case 12: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 115 "exprtree.y"
                                           { (yyval.no) = createTree(-1,TYPE_TREE_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);}
#line 1593 "y.tab.c"
    break;

  case 13: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 118 "exprtree.y"
                                           { struct tnode *t1 = (yyvsp[-1].no), *t2 = (yyvsp[0].no);
										   	 t2->left = t1;
											 (yyval.no) = t2;
										   }
#line 1602 "y.tab.c"
    break;

  case 14: /* FieldDeclList: FieldDecl  */
#line 122 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1608 "y.tab.c"
    break;

  case 15: /* FieldDecl: TypeName ID ';'  */
#line 125 "exprtree.y"
                                   { (yyval.no) = createTree(-1,TYPE_TREE_NODE,(yyvsp[-1].name),NULL,(yyvsp[-2].no),NULL);}
#line 1614 "y.tab.c"
    break;

  case 16: /* TypeName: INTTYPE  */
#line 127 "exprtree.y"
                            { (yyval.no) = createTree(-1,TYPE_TREE_NODE,"int",NULL,NULL,NULL);}
#line 1620 "y.tab.c"
    break;

  case 17: /* TypeName: STRTYPE  */
#line 128 "exprtree.y"
                                { (yyval.no) = createTree(-1,TYPE_TREE_NODE,"str",NULL,NULL,NULL);}
#line 1626 "y.tab.c"
    break;

  case 18: /* TypeName: ID  */
#line 129 "exprtree.y"
                            { (yyval.no) = createTree(-1,TYPE_TREE_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1632 "y.tab.c"
    break;

  case 19: /* MainBlock: INTTYPE MAIN '(' ')' '{' LDeclarations Body '}'  */
#line 132 "exprtree.y"
                                                              { fprintf(fp, "F0:\n");
																fprintf(fp, "MOV BP,%d\n", binding);
																FunASTgen("main",findType("int"),NULL,(yyvsp[-2].Lsymbols),(yyvsp[-1].no),fp); (yyval.no) = (yyvsp[-1].no);
																fclose(fp);												  	
															  }
#line 1642 "y.tab.c"
    break;

  case 20: /* FDefBlock: FDefBlock Fdef  */
#line 139 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1648 "y.tab.c"
    break;

  case 21: /* FDefBlock: Fdef  */
#line 140 "exprtree.y"
                                                           { (yyval.no) = (yyvsp[0].no);}
#line 1654 "y.tab.c"
    break;

  case 22: /* Fdef: Type ID '(' ParamList ')' '{' LDeclarations Body '}'  */
#line 143 "exprtree.y"
                                                             { FunASTgen((yyvsp[-7].name),(yyvsp[-8].TT),(yyvsp[-5].parameter),(yyvsp[-2].Lsymbols),(yyvsp[-1].no),fp); (yyval.no) = (yyvsp[-1].no);}
#line 1660 "y.tab.c"
    break;

  case 23: /* Body: BEG Slist Retstmtc END  */
#line 146 "exprtree.y"
                                      { (yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-2].no),(yyvsp[-1].no),NULL);}
#line 1666 "y.tab.c"
    break;

  case 24: /* Retstmtc: RET expr ';'  */
#line 149 "exprtree.y"
                                      { (yyval.no) = createTree(-1,RETURN_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1672 "y.tab.c"
    break;

  case 25: /* Retstmtc: RET Word ';'  */
#line 150 "exprtree.y"
                                      { (yyval.no) = createTree(-1,RETURN_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1678 "y.tab.c"
    break;

  case 26: /* Slist: Slist Stmt  */
#line 153 "exprtree.y"
                   {(yyval.no) = createTree(-1,EMPTY_NODE,NULL,(yyvsp[-1].no),(yyvsp[0].no),NULL);}
#line 1684 "y.tab.c"
    break;

  case 27: /* Slist: Stmt  */
#line 154 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1690 "y.tab.c"
    break;

  case 28: /* Stmt: InputStmt  */
#line 157 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1696 "y.tab.c"
    break;

  case 29: /* Stmt: OuptputStmt  */
#line 158 "exprtree.y"
                   {(yyval.no) = (yyvsp[0].no);}
#line 1702 "y.tab.c"
    break;

  case 30: /* Stmt: AsgStmt  */
#line 159 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1708 "y.tab.c"
    break;

  case 31: /* Stmt: Ifstmt  */
#line 160 "exprtree.y"
                           {(yyval.no) = (yyvsp[0].no);}
#line 1714 "y.tab.c"
    break;

  case 32: /* Stmt: Whilestmt  */
#line 161 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1720 "y.tab.c"
    break;

  case 33: /* Stmt: Continue  */
#line 162 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1726 "y.tab.c"
    break;

  case 34: /* Stmt: Break  */
#line 163 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1732 "y.tab.c"
    break;

  case 35: /* Stmt: Free  */
#line 164 "exprtree.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1738 "y.tab.c"
    break;

  case 36: /* Stmt: BRKP  */
#line 165 "exprtree.y"
                       {(yyval.no) = createTree(-1,BRKP_NODE,NULL,NULL,NULL,NULL);}
#line 1744 "y.tab.c"
    break;

  case 37: /* Free: FREE '(' IDENTIFIER ')'  */
#line 168 "exprtree.y"
                                                     { (yyval.no) = createTree(-1,FREE_NODE,NULL,(yyvsp[-1].no),NULL,NULL);}
#line 1750 "y.tab.c"
    break;

  case 38: /* Ifstmt: IF '(' expr ')' THEN Slist ENDIF  */
#line 171 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1756 "y.tab.c"
    break;

  case 39: /* Ifstmt: IF '(' expr ')' THEN Slist ELSE Slist ENDIF  */
#line 172 "exprtree.y"
                                                     { (yyval.no) = createTree(-1,IFELSE_NODE,NULL,(yyvsp[-6].no),(yyvsp[-3].no),(yyvsp[-1].no)); }
#line 1762 "y.tab.c"
    break;

  case 40: /* Whilestmt: WHILE '(' expr ')' DO Slist ENDWHILE  */
#line 175 "exprtree.y"
                                                             { (yyval.no) = createTree(-1,WHILE_NODE,NULL,(yyvsp[-4].no),(yyvsp[-1].no),NULL);}
#line 1768 "y.tab.c"
    break;

  case 41: /* Whilestmt: DO Slist WHILE '(' expr ')' ';'  */
#line 176 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1774 "y.tab.c"
    break;

  case 42: /* Whilestmt: REPEAT Slist UNTIL '(' expr ')' ';'  */
#line 177 "exprtree.y"
                                                                         { (yyval.no) = createTree(-1,DOWHILE_NODE,NULL,(yyvsp[-2].no),(yyvsp[-5].no),NULL);}
#line 1780 "y.tab.c"
    break;

  case 43: /* InputStmt: READ '(' IDENTIFIER ')' ';'  */
#line 180 "exprtree.y"
                                               { (yyval.no) = createTree(-1,READ_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1786 "y.tab.c"
    break;

  case 44: /* OuptputStmt: WRITE '(' expr ')' ';'  */
#line 183 "exprtree.y"
                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1792 "y.tab.c"
    break;

  case 45: /* OuptputStmt: WRITE '(' Word ')' ';'  */
#line 184 "exprtree.y"
                                                                 { (yyval.no) = createTree(-1,WRITE_NODE,NULL,(yyvsp[-2].no),NULL,NULL);}
#line 1798 "y.tab.c"
    break;

  case 46: /* AsgStmt: IDENTIFIER EQUAL expr ';'  */
#line 187 "exprtree.y"
                                                { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1804 "y.tab.c"
    break;

  case 47: /* AsgStmt: IDENTIFIER EQUAL Word ';'  */
#line 188 "exprtree.y"
                                                        { (yyval.no) = createTree(-1,ASSIGN_NODE,NULL,(yyvsp[-3].no),(yyvsp[-1].no),NULL);}
#line 1810 "y.tab.c"
    break;

  case 48: /* AsgStmt: IDENTIFIER EQUAL INITIALIZE ';'  */
#line 189 "exprtree.y"
                                                        { (yyval.no) = createTree(-1,INITIALIZE_NODE,NULL,(yyvsp[-3].no),NULL,NULL);}
#line 1816 "y.tab.c"
    break;

  case 49: /* AsgStmt: IDENTIFIER EQUAL ALLOC ';'  */
#line 190 "exprtree.y"
                                                        { (yyval.no) = createTree(-1,ALLOC_NODE,NULL,(yyvsp[-3].no),NULL,NULL);}
#line 1822 "y.tab.c"
    break;

  case 50: /* Word: WORD  */
#line 193 "exprtree.y"
                                               { (yyval.no) = createTree(-1,STRING_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 1828 "y.tab.c"
    break;

  case 51: /* Continue: CONTINUE ';'  */
#line 196 "exprtree.y"
                                                           { (yyval.no) = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
#line 1834 "y.tab.c"
    break;

  case 52: /* Break: BREAK ';'  */
#line 199 "exprtree.y"
                                               { (yyval.no) = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
#line 1840 "y.tab.c"
    break;

  case 53: /* GDeclarations: DECL GDeclList ENDDECL  */
#line 202 "exprtree.y"
                                                      { findID((yyvsp[-1].Symbols));
														printsymboltable((yyvsp[-1].Symbols)); 
                                                    	gst=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
														gst->next = (yyvsp[-1].Symbols);
														gst = gst->next;
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													  }
#line 1852 "y.tab.c"
    break;

  case 54: /* GDeclarations: DECL ENDDECL  */
#line 209 "exprtree.y"
                                                                 { gst = NULL; (yyval.Symbols) = NULL;}
#line 1858 "y.tab.c"
    break;

  case 55: /* LDeclarations: DECL LDeclList ENDDECL  */
#line 212 "exprtree.y"
                                                      { lst = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
														lst->next = (yyvsp[-1].Lsymbols);
														lst = lst->next;
														lst = localdecal(lst,para);
														(yyvsp[-1].Lsymbols) = lst;
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = (yyvsp[-1].Lsymbols);
													  }
#line 1872 "y.tab.c"
    break;

  case 56: /* LDeclarations: DECL ENDDECL  */
#line 221 "exprtree.y"
                                                                  { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = lst;
													  }
#line 1884 "y.tab.c"
    break;

  case 57: /* LDeclarations: %empty  */
#line 228 "exprtree.y"
                                                                  { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														(yyval.Lsymbols) = lst;
													  }
#line 1896 "y.tab.c"
    break;

  case 58: /* GDeclList: GDeclList GDecl  */
#line 237 "exprtree.y"
                                                      { (yyval.Symbols) = joinnode((yyvsp[-1].Symbols),(yyvsp[0].Symbols));}
#line 1902 "y.tab.c"
    break;

  case 59: /* GDeclList: GDecl  */
#line 238 "exprtree.y"
                                                              { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1908 "y.tab.c"
    break;

  case 60: /* LDeclList: LDeclList LDecl  */
#line 241 "exprtree.y"
                                                     { (yyval.Lsymbols) = joinLVnode((yyvsp[-1].Lsymbols),(yyvsp[0].Lsymbols));}
#line 1914 "y.tab.c"
    break;

  case 61: /* LDeclList: LDecl  */
#line 242 "exprtree.y"
                                                     { (yyval.Lsymbols) = (yyvsp[0].Lsymbols);}
#line 1920 "y.tab.c"
    break;

  case 62: /* GDecl: Type GidList ';'  */
#line 245 "exprtree.y"
                                                                        {
														struct Gsymbol* t = (yyvsp[-1].Symbols);
														while(t != NULL)
														{
															t->type = (yyvsp[-2].TT);
											               	t = t->next;
														}
														(yyval.Symbols) = (yyvsp[-1].Symbols);
													}
#line 1934 "y.tab.c"
    break;

  case 63: /* LDecl: Type LidList ';'  */
#line 256 "exprtree.y"
                                                   {
													struct Lsymbol* t = (yyvsp[-1].Lsymbols);
													while(t != NULL)
														{
															t->type = (yyvsp[-2].TT);
											               	t = t->next;
														}
													(yyval.Lsymbols) = (yyvsp[-1].Lsymbols);
												   }
#line 1948 "y.tab.c"
    break;

  case 64: /* GidList: GidList ',' Gid  */
#line 267 "exprtree.y"
                                                                        { (yyval.Symbols) = joinnode((yyvsp[-2].Symbols),(yyvsp[0].Symbols));}
#line 1954 "y.tab.c"
    break;

  case 65: /* GidList: Gid  */
#line 268 "exprtree.y"
                                                                    { (yyval.Symbols) = (yyvsp[0].Symbols);}
#line 1960 "y.tab.c"
    break;

  case 66: /* LidList: LidList ',' ID  */
#line 271 "exprtree.y"
                                                { (yyval.Lsymbols) = joinLVnode((yyvsp[-2].Lsymbols), LInstall((yyvsp[0].name), findType("int"))); }
#line 1966 "y.tab.c"
    break;

  case 67: /* LidList: ID  */
#line 272 "exprtree.y"
                                                { (yyval.Lsymbols) = LInstall((yyvsp[0].name), findType("int"));}
#line 1972 "y.tab.c"
    break;

  case 68: /* Gid: ID '[' NUM ']'  */
#line 275 "exprtree.y"
                                                                                { (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,(yyvsp[-1].number),++binding,NULL,-1); binding += (yyvsp[-1].number) - 1;}
#line 1978 "y.tab.c"
    break;

  case 69: /* Gid: ID '(' ParamList ')'  */
#line 276 "exprtree.y"
                                                                        { findparam((yyvsp[-1].parameter)); (yyval.Symbols) = createVarList((yyvsp[-3].name),inttype,0,0,(yyvsp[-1].parameter),flabel++);}
#line 1984 "y.tab.c"
    break;

  case 70: /* Gid: ID '(' ')'  */
#line 277 "exprtree.y"
                                                                        { (yyval.Symbols) = createVarList((yyvsp[-2].name),inttype,0,0,NULL,flabel++);}
#line 1990 "y.tab.c"
    break;

  case 71: /* Gid: ID  */
#line 278 "exprtree.y"
                                                    { (yyval.Symbols) = createVarList((yyvsp[0].name),inttype,1,++binding,NULL,-1);}
#line 1996 "y.tab.c"
    break;

  case 72: /* ParamList: ParamList ',' Param  */
#line 281 "exprtree.y"
                                                { (yyval.parameter) = para = AppendParamlist((yyvsp[-2].parameter),(yyvsp[0].parameter));}
#line 2002 "y.tab.c"
    break;

  case 73: /* ParamList: Param  */
#line 282 "exprtree.y"
                                                { (yyval.parameter) = para = (yyvsp[0].parameter);}
#line 2008 "y.tab.c"
    break;

  case 74: /* Param: Type ID  */
#line 285 "exprtree.y"
                                                { (yyval.parameter) = CreateParamlist((yyvsp[-1].TT),(yyvsp[0].name));}
#line 2014 "y.tab.c"
    break;

  case 75: /* Type: INTTYPE  */
#line 288 "exprtree.y"
                                                { (yyval.TT) = findType("int");}
#line 2020 "y.tab.c"
    break;

  case 76: /* Type: STRTYPE  */
#line 289 "exprtree.y"
                                                { (yyval.TT) = findType("str");}
#line 2026 "y.tab.c"
    break;

  case 77: /* Type: ID  */
#line 290 "exprtree.y"
                                                    { if((yyvsp[0].name) == "bool" || (yyvsp[0].name) == "void")
	 											  {
												  	printf("%s type is not avilable",(yyvsp[0].name));
												  	exit(0);
	 											  }
												  (yyval.TT) = findType((yyvsp[0].name));
												}
#line 2038 "y.tab.c"
    break;

  case 78: /* expr: expr PLUS expr  */
#line 299 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"+",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2044 "y.tab.c"
    break;

  case 79: /* expr: expr MINUS expr  */
#line 300 "exprtree.y"
                                {(yyval.no) = createTree(-1,MATH_NODE,"-",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2050 "y.tab.c"
    break;

  case 80: /* expr: expr MUL expr  */
#line 301 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"*",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2056 "y.tab.c"
    break;

  case 81: /* expr: expr DIV expr  */
#line 302 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"/",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2062 "y.tab.c"
    break;

  case 82: /* expr: expr MOD expr  */
#line 303 "exprtree.y"
                                    {(yyval.no) = createTree(-1,MATH_NODE,"%",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2068 "y.tab.c"
    break;

  case 83: /* expr: expr LT expr  */
#line 304 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2074 "y.tab.c"
    break;

  case 84: /* expr: expr LTEQ expr  */
#line 305 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"<=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2080 "y.tab.c"
    break;

  case 85: /* expr: expr GT expr  */
#line 306 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2086 "y.tab.c"
    break;

  case 86: /* expr: expr GTEQ expr  */
#line 307 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,">=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2092 "y.tab.c"
    break;

  case 87: /* expr: expr EQEQ expr  */
#line 308 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"==",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2098 "y.tab.c"
    break;

  case 88: /* expr: expr NOEQ expr  */
#line 309 "exprtree.y"
                                {(yyval.no) = createTree(-1,BOOL_NODE,"!=",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2104 "y.tab.c"
    break;

  case 89: /* expr: expr AND expr  */
#line 310 "exprtree.y"
                                {(yyval.no) = createTree(-1,LOGICAL_NODE,"&&",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2110 "y.tab.c"
    break;

  case 90: /* expr: expr OR expr  */
#line 311 "exprtree.y"
                                {(yyval.no) = createTree(-1,LOGICAL_NODE,"||",(yyvsp[-2].no),(yyvsp[0].no),NULL);}
#line 2116 "y.tab.c"
    break;

  case 91: /* expr: '(' expr ')'  */
#line 312 "exprtree.y"
                                    {(yyval.no) = (yyvsp[-1].no);}
#line 2122 "y.tab.c"
    break;

  case 92: /* expr: NUM  */
#line 313 "exprtree.y"
                                        {(yyval.no) = createTree((yyvsp[0].number),NUM_NODE,NULL,NULL,NULL,NULL);}
#line 2128 "y.tab.c"
    break;

  case 93: /* expr: IDENTIFIER  */
#line 314 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2134 "y.tab.c"
    break;

  case 94: /* expr: NIL  */
#line 315 "exprtree.y"
                                {(yyval.no) = createTree(-1,NULL_NODE,"NULL",NULL,NULL,NULL);}
#line 2140 "y.tab.c"
    break;

  case 95: /* expr: E  */
#line 316 "exprtree.y"
                                {(yyval.no) = (yyvsp[0].no);}
#line 2146 "y.tab.c"
    break;

  case 96: /* Field: Field '.' ID  */
#line 319 "exprtree.y"
                               { (yyval.no) = createTree(-1,FIELD_NODE,(yyvsp[0].name),(yyvsp[-2].no),NULL,NULL); }
#line 2152 "y.tab.c"
    break;

  case 97: /* Field: ID '.' ID  */
#line 320 "exprtree.y"
                                   { (yyval.no) = createTree(-1,FIELD_NODE,(yyvsp[0].name),createTree(-1,VAR_NODE,(yyvsp[-2].name),NULL,NULL,NULL),NULL,NULL); }
#line 2158 "y.tab.c"
    break;

  case 98: /* IDENTIFIER: ID  */
#line 323 "exprtree.y"
                                                                        {(yyval.no) = createTree(-1,VAR_NODE,(yyvsp[0].name),NULL,NULL,NULL);}
#line 2164 "y.tab.c"
    break;

  case 99: /* IDENTIFIER: Field  */
#line 324 "exprtree.y"
                                                            { (yyval.no) = (yyvsp[0].no);}
#line 2170 "y.tab.c"
    break;

  case 100: /* IDENTIFIER: ID '[' expr ']'  */
#line 325 "exprtree.y"
                                                        {
													struct tnode* temp = createTree(-1,VAR_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);
													if(temp->left->type->name != "int")
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
#line 2189 "y.tab.c"
    break;

  case 101: /* E: ID '(' ')'  */
#line 340 "exprtree.y"
                                    { (yyval.no) = createTree(-1,FUNCTION_NODE,(yyvsp[-2].name),NULL,NULL,NULL);}
#line 2195 "y.tab.c"
    break;

  case 102: /* E: ID '(' ArgList ')'  */
#line 341 "exprtree.y"
                                    { (yyval.no) = createTree(-1,FUNCTION_NODE,(yyvsp[-3].name),(yyvsp[-1].no),NULL,NULL);}
#line 2201 "y.tab.c"
    break;

  case 103: /* ArgList: ArgList ',' expr  */
#line 344 "exprtree.y"
                               {
								tnode* t = (yyvsp[-2].no);
								while(t->extra != NULL) t = t->extra;
								t->extra = (yyvsp[0].no);
								(yyval.no) = (yyvsp[-2].no);
                               }
#line 2212 "y.tab.c"
    break;

  case 104: /* ArgList: expr  */
#line 350 "exprtree.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 2218 "y.tab.c"
    break;

  case 105: /* ArgList: Word  */
#line 351 "exprtree.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 2224 "y.tab.c"
    break;


#line 2228 "y.tab.c"

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

#line 354 "exprtree.y"


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
