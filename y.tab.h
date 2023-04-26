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

#line 172 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
