/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "bis.y.txt"

 	#include <stdio.h>
	#include "TS.c"
	#include "QUAD.c"
	#include "pile.c"
	#include "PileExp.c"
	#include "Library.c"
	#include "ListeCons.c"
	#include "ListeExp.c"
	#include "TableExpr.c"
	extern FILE* yyin;
	extern int nbrL;
	extern int j;
	element *list     = NULL;
	//
	Pile *pile        = NULL;
	Pile *pDeb        = NULL;//utilisée pour stocker les pos de BZ et FIN
	Pile *pDebOpt     = NULL;
	//
	PileExp *pileExp  = NULL;
	PileExp *pileQUAD = NULL;
	//

	//
	Quad *quad        = NULL; //Contient les Quads optimisés
	Quad *quadTotal   = NULL; //Contient tous les Quads
	Quad *quadTemp    = NULL; //contient Les quads suspectibles d'être optimisés
	//
	lib *library      = NULL;
	ListeCons *cons   = NULL; 
	ListeCons *r   	  = NULL; 
	ListeExp *listeExp = NULL;
	Expression *TableExp = NULL;
	int pos			  = 0;
	int pos1          = 0;
	int QC            = 1;
	int QCTotal       = 1;
	int type          = -1; //utilisé lors de la DEC
	int typeTemp      = -1;//stocker le type de IDF dans exp
	char* arrayName;
	char expr[256];
	int i = 1;
	int IsNumber   = 0;
	int IsCondition = 0;


/* Line 371 of yacc.c  */
#line 115 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     While = 258,
     Integer = 259,
     Real = 260,
     CONST = 261,
     Calcul = 262,
     BOUCLE = 263,
     TAB = 264,
     EXECUT = 265,
     IF = 266,
     incdec = 267,
     IDF = 268,
     OpCm = 269,
     integer = 270,
     real = 271,
     com = 272
   };
#endif
/* Tokens.  */
#define While 258
#define Integer 259
#define Real 260
#define CONST 261
#define Calcul 262
#define BOUCLE 263
#define TAB 264
#define EXECUT 265
#define IF 266
#define incdec 267
#define IDF 268
#define OpCm 269
#define integer 270
#define real 271
#define com 272



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 49 "bis.y.txt"

  char *chaine;
  char *OpC;
  int entier;
  float reel;
  char *cmt;


/* Line 387 of yacc.c  */
#line 201 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 229 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  127

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,    18,     2,     2,    11,     2,
       5,     6,    17,    16,    14,    34,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    12,    13,
       2,    15,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     7,     2,     8,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     9,     4,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    14,    18,    22,    23,    25,    27,
      30,    32,    35,    38,    41,    42,    46,    47,    52,    54,
      59,    60,    61,    68,    71,    72,    73,    81,    83,    86,
      89,    92,    93,    94,    95,   102,   103,   112,   116,   120,
     122,   126,   130,   132,   134,   139,   141,   143,   147,   152,
     157,   159,   165,   168,   170,   174,   176,   180,   182,   188,
     195,   199,   202
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      37,     0,    -1,    38,    29,     3,    41,    53,     4,    -1,
      18,    23,    38,    -1,    18,    24,    38,    -1,    18,    25,
      38,    -1,    -1,    20,    -1,    21,    -1,    13,    40,    -1,
      13,    -1,    42,    41,    -1,    45,    41,    -1,    50,    41,
      -1,    -1,    39,    43,    40,    -1,    -1,    29,    44,    14,
      43,    -1,    29,    -1,    39,    22,    46,    40,    -1,    -1,
      -1,    29,    47,    15,    58,    48,    49,    -1,    14,    46,
      -1,    -1,    -1,    39,    29,    51,     7,    52,     8,    40,
      -1,    31,    -1,    54,    53,    -1,    61,    53,    -1,    64,
      53,    -1,    -1,    -1,    -1,    29,    55,    15,    58,    56,
      40,    -1,    -1,    29,     7,    31,     8,    57,    15,    58,
      40,    -1,    58,    16,    59,    -1,    58,    34,    59,    -1,
      59,    -1,    59,    17,    60,    -1,    59,    35,    60,    -1,
      60,    -1,    29,    -1,    29,     7,    31,     8,    -1,    31,
      -1,    32,    -1,     5,    58,     6,    -1,    62,     3,    53,
       4,    -1,    63,     5,    67,     6,    -1,    19,    -1,    65,
      27,     5,    67,     6,    -1,    66,    53,    -1,    26,    -1,
      67,     9,    68,    -1,    68,    -1,    69,    11,    68,    -1,
      69,    -1,     5,    58,    30,    58,     6,    -1,    10,     5,
      58,    30,    58,     6,    -1,    58,    30,    58,    -1,    10,
      58,    -1,    58,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    71,    83,    95,   107,   110,   110,   113,
     113,   116,   116,   116,   116,   119,   123,   122,   132,   144,
     149,   157,   148,   179,   179,   183,   182,   197,   205,   205,
     205,   205,   210,   229,   209,   450,   449,   636,   671,   715,
     721,   774,   809,   816,   862,   898,   916,   940,   949,   964,
     973,   980,  1012,  1033,  1049,  1060,  1067,  1078,  1085,  1130,
    1204,  1248,  1258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'{'", "'}'", "'('", "')'", "'['", "']'",
  "'|'", "'!'", "'&'", "':'", "';'", "','", "'='", "'+'", "'*'", "'#'",
  "While", "Integer", "Real", "CONST", "Calcul", "BOUCLE", "TAB", "EXECUT",
  "IF", "incdec", "IDF", "OpCm", "integer", "real", "com", "'-'", "'/'",
  "$accept", "S", "LIB", "TYPE", "PV", "DEC", "DecVar", "SuiteV", "$@1",
  "DecCons", "SuiteC", "$@2", "$@3", "MP", "DecTab", "$@4", "TAILLE",
  "INS", "AFF", "$@5", "$@6", "$@7", "EXP", "TRM", "FCT", "BCL", "BCL1",
  "BCL2", "CND", "CND1", "CND2", "EVA", "A", "B", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   123,   125,    40,    41,    91,    93,   124,
      33,    38,    58,    59,    44,    61,    43,    42,    35,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    45,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    38,    38,    39,    39,    40,
      40,    41,    41,    41,    41,    42,    44,    43,    43,    45,
      47,    48,    46,    49,    49,    51,    50,    52,    53,    53,
      53,    53,    55,    56,    54,    57,    54,    58,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    62,
      63,    64,    65,    66,    67,    67,    68,    68,    69,    69,
      69,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     3,     3,     0,     1,     1,     2,
       1,     2,     2,     2,     0,     3,     0,     4,     1,     4,
       0,     0,     6,     2,     0,     0,     7,     1,     2,     2,
       2,     0,     0,     0,     6,     0,     8,     3,     3,     1,
       3,     3,     1,     1,     4,     1,     1,     3,     4,     4,
       1,     5,     2,     1,     3,     1,     3,     1,     5,     6,
       3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     0,     6,     6,     6,     1,     0,     3,
       4,     5,    14,     7,     8,     0,    31,    14,    14,    14,
       0,    16,     0,    50,    53,    32,     0,    31,    31,     0,
       0,    31,     0,    31,    11,    12,    13,    20,     0,     0,
       0,    10,    15,     0,     0,     2,    28,    29,    31,     0,
      30,     0,    52,     0,    19,     0,     0,     9,     0,     0,
       0,     0,     0,    43,    45,    46,    62,    39,    42,     0,
      55,    57,     0,     0,    16,    17,    27,     0,    35,     0,
      33,    48,     0,     0,    61,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,    21,     0,     0,     0,     0,
      47,     0,     0,     0,    37,    60,    38,    40,    41,    54,
      56,    51,    24,    26,     0,    34,     0,     0,    44,     0,
      22,     0,    58,     0,    23,    36,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    15,    42,    16,    17,    22,    39,    18,
      38,    53,   112,   120,    19,    40,    77,    26,    27,    44,
      99,    97,    66,    67,    68,    28,    29,    30,    31,    32,
      33,    69,    70,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -58
static const yytype_int8 yypact[] =
{
      16,    54,    21,    17,    16,    16,    16,   -58,    52,   -58,
     -58,   -58,    -8,   -58,   -58,    30,    14,    -8,    -8,    -8,
      42,    55,    77,   -58,   -58,    58,    88,    14,    14,    91,
      90,    14,    69,    14,   -58,   -58,   -58,   -58,    77,    83,
      93,    77,   -58,    70,    87,   -58,   -58,   -58,    14,    18,
     -58,    98,   -58,    89,   -58,    78,    74,   -58,   100,    10,
     102,    10,    22,   103,   -58,   -58,    40,   -11,   -58,    66,
     -58,   101,    18,    10,    96,   -58,   -58,   105,   -58,    10,
      -2,   -58,    -5,    10,    -2,    80,    10,    10,    10,    10,
      10,   -58,    18,    18,    67,    -2,    77,    99,     2,    77,
     -58,    10,     1,   107,   -11,    -2,   -11,   -58,   -58,   -58,
     -58,   -58,   104,   -58,    10,   -58,     3,    10,   -58,    42,
     -58,    32,   -58,     4,   -58,   -58,   -58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -58,   -58,    76,   -58,   -38,    68,   -58,    61,   -58,   -58,
       0,   -58,   -58,   -58,   -58,   -58,   -58,    36,   -58,   -58,
     -58,   -58,   -57,     5,    -1,   -58,   -58,   -58,   -58,   -58,
     -58,    45,     6,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -26
static const yytype_int8 yytable[] =
{
      54,   100,    80,    57,    82,    84,    89,   100,   100,   122,
     126,    86,    13,    14,    86,    79,    95,    86,    86,    86,
      86,     7,    98,    61,    90,   101,   102,    83,    62,    88,
     105,   117,    88,    23,     1,    88,    88,    88,    88,    63,
      24,    64,    65,    25,   116,    41,     8,    63,    86,    64,
      65,    63,    20,    64,    65,    12,    86,   121,   113,    21,
     123,   115,   -25,    46,    47,    43,    88,    50,   -18,    52,
      87,    37,    91,   111,    88,    92,    92,     4,     5,     6,
       9,    10,    11,   125,    60,    34,    35,    36,   107,   108,
      41,   104,    45,   106,    48,    49,    51,    55,   109,   110,
      56,    58,    59,    72,    73,    76,    81,    74,    78,   -18,
      85,   103,    93,    96,   114,   118,    75,    94,   119,   124
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-58)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      38,     6,    59,    41,    61,    62,    17,     6,     6,     6,
       6,    16,    20,    21,    16,     5,    73,    16,    16,    16,
      16,     0,    79,     5,    35,    30,    83,     5,    10,    34,
      87,    30,    34,    19,    18,    34,    34,    34,    34,    29,
      26,    31,    32,    29,   101,    13,    29,    29,    16,    31,
      32,    29,    22,    31,    32,     3,    16,   114,    96,    29,
     117,    99,     7,    27,    28,     7,    34,    31,    13,    33,
      30,    29,     6,     6,    34,     9,     9,    23,    24,    25,
       4,     5,     6,   121,    48,    17,    18,    19,    89,    90,
      13,    86,     4,    88,     3,     5,    27,    14,    92,    93,
       7,    31,    15,     5,    15,    31,     4,    29,     8,    13,
       7,    31,    11,     8,    15,     8,    55,    72,    14,   119
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,    37,    38,    23,    24,    25,     0,    29,    38,
      38,    38,     3,    20,    21,    39,    41,    42,    45,    50,
      22,    29,    43,    19,    26,    29,    53,    54,    61,    62,
      63,    64,    65,    66,    41,    41,    41,    29,    46,    44,
      51,    13,    40,     7,    55,     4,    53,    53,     3,     5,
      53,    27,    53,    47,    40,    14,     7,    40,    31,    15,
      53,     5,    10,    29,    31,    32,    58,    59,    60,    67,
      68,    69,     5,    15,    29,    43,    31,    52,     8,     5,
      58,     4,    58,     5,    58,     7,    16,    30,    34,    17,
      35,     6,     9,    11,    67,    58,     8,    57,    58,    56,
       6,    30,    58,    31,    59,    58,    59,    60,    60,    68,
      68,     6,    48,    40,    15,    40,    58,    30,     8,    14,
      49,    58,     6,    58,    46,    40,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 67 "bis.y.txt"
    { printf("\n PROGRAMME CORRECTE\n"); return 0;}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 72 "bis.y.txt"
    {
	if(!chercherLib(library,"Calcul"))
	{
		insererLib(&library,"Calcul");
	} 
	else
	{
		printf("Error at line %d column %d : Calcul Library already imported\n",nbrL,j); 
	    return 0; 
	}
}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 84 "bis.y.txt"
    {
	if(!chercherLib(library,"BOUCLE"))
	{
		insererLib(&library,"BOUCLE");
	} 
	else
	{
		printf("Error at line %d column %d : BOUCLE Library already imported\n",nbrL,j); 
	    return 0; 
	}
}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 96 "bis.y.txt"
    {
	if(!chercherLib(library,"TAB"))
	{
		insererLib(&library,"TAB");
	} 
	else
	{
		printf("Error at line %d column %d : TAB Library already imported\n",nbrL,j); 
	    return 0; 
	}
}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 110 "bis.y.txt"
    { type = 1;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 110 "bis.y.txt"
    {type = 0;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 123 "bis.y.txt"
    { 
	if(!chercher(list,(yyvsp[(1) - (1)].chaine))) inserer(&list,(yyvsp[(1) - (1)].chaine),type,1,0);
    else 
	{
		printf("Error at line %d column %d : %s already declared\n",nbrL,j,(yyvsp[(1) - (1)].chaine)); 
	    return 0; 
	}
	
}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 133 "bis.y.txt"
    { 
	if(!chercher(list,(yyvsp[(1) - (1)].chaine))) inserer(&list,(yyvsp[(1) - (1)].chaine),type,1,0);
	else 
	{
		printf("Error at line %d column %d : %s already declared\n",nbrL,j,(yyvsp[(1) - (1)].chaine)); 
	    return 0; 
	}
}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 149 "bis.y.txt"
    { 
	if(!chercher(list,(yyvsp[(1) - (1)].chaine))) { inserer(&list,(yyvsp[(1) - (1)].chaine),type,0,0); typeTemp = Type(list,(yyvsp[(1) - (1)].chaine));} 
    else 
	{
	    printf("Error at line %d column %d : %s already declared\n",nbrL,j,(yyvsp[(1) - (1)].chaine)); 
	    return 0; 
	}
}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 157 "bis.y.txt"
    { 
  	
	Pile *p = unstack(&pile);

	//
	r = chercherCons(cons,(yyvsp[(1) - (4)].chaine));
	if(r == NULL)
	{
		ajouterCons(&cons,(yyvsp[(1) - (4)].chaine),p->nom);
	}

	//
	ajouter(&quad,"=",p->nom,"",(yyvsp[(1) - (4)].chaine));
	QC++;
	//
	ajouter(&quadTotal,"=",p->nom,"",(yyvsp[(1) - (4)].chaine));
	QCTotal++;
	//
}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 183 "bis.y.txt"
    {
	if(!chercher(list,(yyvsp[(2) - (2)].chaine))) 
	{ 
		inserer(&list,(yyvsp[(2) - (2)].chaine),type,2,0); typeTemp = Type(list,(yyvsp[(2) - (2)].chaine));
		arrayName = (yyvsp[(2) - (2)].chaine);
	} 
    else 
	{
	    printf("Error at line %d column %d : %s already declared\n",nbrL,j,(yyvsp[(2) - (2)].chaine)); 
	    return 0; 
	}

}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 198 "bis.y.txt"
    {
	insererTaille(list,arrayName,(yyvsp[(1) - (1)].entier));
}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 210 "bis.y.txt"
    { 
  	if(!chercher(list,(yyvsp[(1) - (1)].chaine))) 
	{
	  	printf("Error at line %d column %d : %s undeclared\n",nbrL,j,(yyvsp[(1) - (1)].chaine)); 
		return 0; 
	}
	if(!Nature(list,(yyvsp[(1) - (1)].chaine))) 
  	{ 
		printf("Error at line %d column %d : Cannot affect value to a constant\n",nbrL,j); 
	  	return 0; 
	}
  	typeTemp = Type(list,(yyvsp[(1) - (1)].chaine));


  	char *a = malloc(sizeof(int));
    sprintf(a,"%d",QCTotal);
    stackExp(&pileQUAD,a);
}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 229 "bis.y.txt"
    { 

	Pile *p = unstack(&pile);
	strcpy(expr,"");

	//Gestion de la table d'expression

	//Récupérer QCBegin
	PileExp *w = unstackExp(&pileQUAD);

	//Chercher si expression existe
	Expression *chercherVar1,*chercherVar2,*test,*r = ChercherVar(TableExp,(yyvsp[(1) - (4)].chaine));

	int IsNumerical;
	char Var[256][256];
	int K = 0;
	int s,y;
	Quad *u;

	//Récupérer l'expression codifiée
	PileExp *z = pileExp;
	while(z != NULL)
	{
		z = unstackExp(&pileExp);
		if(z != NULL) 
		{
			strcat(expr,z->val);
			strcat(expr," ");
			if(!IsNumeric(z->val))
			{
				if(!Exist(Var,z->val,K))
				{
					Add(Var,z->val,K);
					K++;
				}	
			}
		}
	}

	//Vérifier que l'expression est numérique ou non (déjà vérifiée)
	IsNumerical = IsNumeric(expr);
	//Ajouter l'expression
	int QCBegin = atoi(w->val);

	if(r == NULL) //Nouvelle expression
	{
		InsererExp(&TableExp,(yyvsp[(1) - (4)].chaine),expr,IsNumerical,QCBegin,QCTotal,Var,K);
	}
	else
	{
		if(strcmp(r->exp,expr) != 0)
		{
			IsNumerical = IsNumeric(expr);
			r->IsNumeric = IsNumerical;

			for(s = 0; s < strlen(expr); s++)
			{
				r->exp[s] = expr[s];
			}
			r->QcBegin = QCBegin;
			r->QcFin = QCTotal;
			for(s = 0; s < strlen(expr); s++)
			{
				for(y = 0; y < 256; y++)
				{
					r->ListeVar[s][y] = Var[s][y];
				}
			}
			r->nbVar = K;
		}	
	}
	//

	//Cas non optimisable
	if(IsNumerical)
	{
		Quad *u = quadTemp;
		while(u != NULL)
		{
			//Ajouter de nouvaux Quads
			ajouter(&quad,u->op,u->op1,u->op2,u->res);
			QC++;
			u = u->svt;
		}
		ajouter(&quad,"=",p->nom,"",(yyvsp[(1) - (4)].chaine));
		QC++;
	}
	else //mélange entre nombre et var
	{
		//plusieurs var / nombres
		if(strlen(expr) > 2)
		{
			r = ChercherExpr(TableExp,expr);
			//Eviter des collision dans le cas A = expr de A
			int PropagerCopie = 1;
			if(strcmp(r->var,(yyvsp[(1) - (4)].chaine)) != 0)
			{
				//Vérifier si les variables n'ont pas été modifiées après 
				for(s = 0; s < r->nbVar && PropagerCopie; s++)
				{
					//Récupérer les informations sur les variables
					test = ChercherVar(TableExp,r->ListeVar[s]);
					if(test->QcFin > r->QcFin) 
					{
						PropagerCopie = 0;
						break;
					}	
				}
				if(!PropagerCopie) //On peut pas propager la copie
				{
					u = quadTemp;
					while(u != NULL)
					{
						//Ajouter de nouvaux Quads
						ajouter(&quad,u->op,u->op1,u->op2,u->res);
						QC++;
						u = u->svt;
					}
					ajouter(&quad,"=",p->nom,"",(yyvsp[(1) - (4)].chaine));
					QC++;
				}
				else
				{
					ajouter(&quad,"=",r->var,"",(yyvsp[(1) - (4)].chaine));
					QC++;
				}
			}	
			else
			{
				u = quadTemp;
				char Op1[256];
				int CanOp1 = 1;
				int CanOp2 = 1;
				char Op2[256];
				while(u != NULL)
				{
					chercherVar1 = ChercherVar(TableExp,u->op1);
					chercherVar2 = ChercherVar(TableExp,u->op2);
					if(chercherVar1 != NULL || chercherVar2 != NULL)
					{
						if(chercherVar1 != NULL)
						{
							printf("===============> %s\n",u->op1);
							if(IsNumeric(chercherVar1->exp))
							{
								strcpy(Op1,chercherVar1->exp);
							} else CanOp1 = 0;
						} 
						if(chercherVar2 != NULL)
						{

							if(IsNumeric(chercherVar2->exp))
							{
								printf("===============> %s\n",u->op2);
								strcpy(Op2,chercherVar2->exp);
							} else CanOp2 = 0;
						}
					}
					//Ajouter de nouvaux Quads

					if(CanOp1 || CanOp2)
					{
						if(CanOp1 && CanOp2)
						{
							ajouter(&quad,u->op,Op1,Op2,u->res);
						}
						else
						{
							if(CanOp1)
							{
								ajouter(&quad,u->op,Op1,u->op2,u->res);
							}
							else
							{
								ajouter(&quad,u->op,u->op1,Op2,u->res);	
							}
						}
					}
					else
					{
						ajouter(&quad,u->op,u->op1,u->op2,u->res);
					}

					
					QC++;
					u = u->svt;
				}
				ajouter(&quad,"=",p->nom,"",(yyvsp[(1) - (4)].chaine));
				QC++;
			}
		}
		else // Var1 = Var2
		{

			//Propagation d'expression

			//Récupérer les informations sur la Var2 
			r = ChercherVar(TableExp,p->nom);

			//Propager l'expression
			for(s = r->QcBegin; s <= r->QcFin; s++)
			{
				u = getQuad(quadTotal,s);
				ajouter(&quad,u->op,u->op1,u->op2,u->res);
				QC++;
			}
			u = getQuad(quad,QC - 1);
			u->res = (yyvsp[(1) - (4)].chaine);
		}
	}
  	ajouter(&quadTotal,"=",p->nom,"",(yyvsp[(1) - (4)].chaine));
  	QCTotal++;	
  	quadTemp = NULL;


}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 450 "bis.y.txt"
    {

	if(!chercher(list,(yyvsp[(1) - (4)].chaine))) 
	{
	  	printf("Error at line %d column %d : Array %s undeclared\n",nbrL,j,(yyvsp[(1) - (4)].chaine)); 
		return 0; 
	}
	else if (!IsArray(list,(yyvsp[(1) - (4)].chaine)))
	{
		printf("Error at line %d column %d : Variable %s IS NOT AN ARRAY\n",nbrL,j,(yyvsp[(1) - (4)].chaine)); 
		return 0;  
	}
	else if((yyvsp[(3) - (4)].entier) >= getTailleArray(list,(yyvsp[(1) - (4)].chaine)))
	{
		printf("Error at line %d column %d : OUT OF BOUND",nbrL,j); 
		return 0; 
	} 
  	typeTemp = Type(list,(yyvsp[(1) - (4)].chaine));
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 470 "bis.y.txt"
    {
    Pile *p = unstack(&pile);
    char *a = malloc(sizeof(int));
    sprintf(a,"%s[%d]",(yyvsp[(1) - (8)].chaine),(yyvsp[(3) - (8)].entier));

    //Gestion de la table d'expression

	//Récupérer QCBegin
	PileExp *w = unstackExp(&pileQUAD);

	//Chercher si expression existe
	Expression *test,*r = ChercherVar(TableExp,a);

	int IsNumerical;
	char Var[256][256];
	int K = 0;
	int s,y;
	Quad *u;

	//Récupérer l'expression codifiée
	PileExp *z = pileExp;
	while(z != NULL)
	{
		z = unstackExp(&pileExp);
		if(z != NULL) 
		{
			strcat(expr,z->val);
			strcat(expr," ");
			if(!IsNumeric(z->val))
			{
				if(!Exist(Var,z->val,K))
				{
					Add(Var,z->val,K);
					K++;
				}	
			}
		}
	}

	//Vérifier que l'expression est numérique ou non (déjà vérifiée)
	IsNumerical = IsNumeric(expr);
	//Ajouter l'expression
	int QCBegin = atoi(w->val);

	if(r == NULL) //Nouvelle expression
	{
		InsererExp(&TableExp,a,expr,IsNumerical,QCBegin,QCTotal,Var,K);
	}
	else
	{
		if(strcmp(r->exp,expr) != 0)
		{
			IsNumerical = IsNumeric(expr);
			r->IsNumeric = IsNumerical;

			for(s = 0; s < strlen(expr); s++)
			{
				r->exp[s] = expr[s];
			}
			r->QcBegin = QCBegin;
			r->QcFin = QCTotal;
			for(s = 0; s < strlen(expr); s++)
			{
				for(y = 0; y < 256; y++)
				{
					r->ListeVar[s][y] = Var[s][y];
				}
			}
			r->nbVar = K;
		}	
	}
	//
	//Cas non optimisable
	if(IsNumerical)
	{
		Quad *u = quadTemp;
		while(u != NULL)
		{
			//Ajouter de nouvaux Quads
			ajouter(&quad,u->op,u->op1,u->op2,u->res);
			QC++;
			u = u->svt;
		}
		ajouter(&quad,"=",p->nom,"",a);
		QC++;
	}
	else //mélange entre nombre et var
	{
		//plusieurs var / nombres
		if(strlen(expr) > 2)
		{
			r = ChercherExpr(TableExp,expr);
			//Eviter des collision dans le cas A = expr de A
			int PropagerCopie = 1;
			if(strcmp(r->var,a) != 0)
			{
				//Vérifier si les variables n'ont pas été modifiées après 
				for(s = 0; s < r->nbVar && PropagerCopie; s++)
				{
					//Récupérer les informations sur les variables
					test = ChercherVar(TableExp,r->ListeVar[s]);
					if(test->QcFin > r->QcFin) 
					{
						PropagerCopie = 0;
						break;
					}	
				}
				if(!PropagerCopie) //On peut pas propager la copie
				{
					u = quadTemp;
					while(u != NULL)
					{
						//Ajouter de nouvaux Quads
						ajouter(&quad,u->op,u->op1,u->op2,u->res);
						QC++;
						u = u->svt;
					}
					ajouter(&quad,"=",p->nom,"",a);
					QC++;
				}
				else
				{
					ajouter(&quad,"=",r->var,"",a);
					QC++;
				}
			}	
			else
			{
				u = quadTemp;
				while(u != NULL)
				{
					//Ajouter de nouvaux Quads
					ajouter(&quad,u->op,u->op1,u->op2,u->res);
					QC++;
					u = u->svt;
				}
				ajouter(&quad,"=",p->nom,"",a);
				QC++;
			}
		}
		else // Var1 = Var2
		{
			//Propagation d'expression

			//Récupérer les informations sur la Var2 
			r = ChercherVar(TableExp,p->nom);

			//Propager l'expression
			for(s = r->QcBegin; s <= r->QcFin; s++)
			{
				u = getQuad(quadTotal,s);
				ajouter(&quad,u->op,u->op1,u->op2,u->res);
				QC++;
			}
			u = getQuad(quad,QC - 1);
			u->res = a;
		}
	}
  	ajouter(&quadTotal,"=",p->nom,"",a);
  	QCTotal++;	
  	quadTemp = NULL;
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 637 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);
  	
  	//
  	stackExp(&pileExp,"+");
  	//

  	if(p1->type == p2->type || typeTemp == 0) 
  	{
    	char *a = malloc(sizeof(int));
	    sprintf(a,"T%d",i); 
	    //
	    i++;
	    //

	    // Ajouter les Quads d'exp dans un Quad temporaire
	    ajouter(&quadTemp,"+",p2->nom,p1->nom,a);
	    //

	    //
	    ajouter(&quadTotal,"+",p2->nom,p1->nom,a);
	    QCTotal++;
	    //

	    if(p1->type == 0) stack(&pile,"EXP",a,0);
	    else stack(&pile,"EXP",a,1);
  	}
 	else 
  	{
    	printf("Error at line %d column %d : Type mismatch\n",nbrL,j);
		return 0;
  	}
}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 672 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);

  	//
  	stackExp(&pileExp,"-");
  	//

  	if(p1->type == p2->type || typeTemp == 0) 
  	{
		char *a = malloc(sizeof(int));
	    sprintf(a,"T%d",i); 
	    //
	    i++;
	    //

	    // Ajouter les Quads d'exp dans un Quad temporaire
	    if(strcmp(p1->nom,p2->nom) == 0)
	    {
	    	if(p1->type == 0) stack(&pile,"EXP","0",0);
	    	else stack(&pile,"EXP","0",1);
	    }
	    else
	    {
	    	ajouter(&quadTemp,"-",p2->nom,p1->nom,a);
	    	//

	    	//
	    	ajouter(&quadTotal,"-",p2->nom,p1->nom,a);
	    	QCTotal++;
	    	//

	    	if(p1->type == 0) stack(&pile,"EXP",a,0);
	    	else stack(&pile,"EXP",a,1);
  		}
  	}

  	else 
  	{
    	printf("Error at line %d column %d : Type mismatch\n",nbrL,j);
    	return 0;
  	}
}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 716 "bis.y.txt"
    { 
	Pile *p = unstack(&pile);
	stack(&pile,"EXP",p->nom,p->type);
}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 722 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);

  	//
  	stackExp(&pileExp,"*");
  	//

  	if(p1->type == p2->type || typeTemp == 0) 
  	{
    	char *a = malloc(sizeof(int));
    	sprintf(a,"T%d",i); 
    	//
    	i++;
    	//

    	if(strcmp(p1->nom,"1") == 0 || strcmp(p2->nom,"1") == 0)
    	{
    		if(strcmp(p1->nom,"1") == 0)
    		{
    			if(p1->type == 0) stack(&pile,"TRM",p2->nom,0);
    			else stack(&pile,"TRM",p2->nom,1);
    		}
    		else
    		{
    			if(p1->type == 0) stack(&pile,"TRM",p1->nom,0);
    			else stack(&pile,"TRM",p1->nom,1);
    		}
    	}
    	else
    	{
    		// Ajouter les Quads d'exp dans un Quad temporaire
	    	ajouter(&quadTemp,"*",p2->nom,p1->nom,a);
	    	//

	    	//
	    
	    	ajouter(&quadTotal,"*",p2->nom,p1->nom,a);
	    	QCTotal++;
	    	//

    		if(p1->type == 0) stack(&pile,"TRM",a,0);
    		else stack(&pile,"TRM",a,1);
    	}
    	
  	}
  	else 
  	{
    	printf("Error at line %d column %d : Type mismatch\n",nbrL,j);
    	return 0;
  	}
}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 775 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);

  	//
  	stackExp(&pileExp,"/");
  	//

  	if(p1->type == p2->type || typeTemp == 0) 
  	{
    	char *a = malloc(sizeof(int));
    	sprintf(a,"T%d",i); 
    	//
    	i++;
    	//

    	// Ajouter les Quads d'exp dans un Quad temporaire
	    ajouter(&quadTemp,"/",p2->nom,p1->nom,a);
	    //

	    //
	    ajouter(&quadTotal,"/",p2->nom,p1->nom,a);
	    QCTotal++;
	    //

    	if(p1->type == 0) stack(&pile,"TRM",a,0);
    	else stack(&pile,"TRM",a,1);
  	}
  	else 
  	{
    	printf("Error at line %d column %d : Type mismatch\n",nbrL,j);
    	return 0;
  	}
}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 810 "bis.y.txt"
    {
	Pile *p = unstack(&pile);
  	stack(&pile,"TRM",p->nom,p->type);  
}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 817 "bis.y.txt"
    {

	//Optimisation des constantes
  	r = chercherCons(cons,(yyvsp[(1) - (1)].chaine));
  	Expression *u = ChercherVar(TableExp,(yyvsp[(1) - (1)].chaine));
  	if(r != NULL) //IDF est une constante
  	{
  		stack(&pile,"F",r->val,Type(list,(yyvsp[(1) - (1)].chaine)));
  	}
  	else
  	{
  		//Si IDF Contient une valeur numérique simple
  		if(u->IsNumeric)
		{
			if(strlen(u->exp) == 2)
			{
				stack(&pile,"F",(yyvsp[(1) - (1)].chaine),Type(list,u->var));
			} else stack(&pile,"F",(yyvsp[(1) - (1)].chaine),Type(list,(yyvsp[(1) - (1)].chaine)));
		}
		
		if(u == NULL)
		{
			printf("ERROR : VARIABLE %s NON INITIALISEE\n",(yyvsp[(1) - (1)].chaine));
			return 0;
		}
		//
		IsNumber = 0;
		//
		if(!chercher(list,(yyvsp[(1) - (1)].chaine))) 
		{
	    	printf("Error at line %d column %d : %s undeclared\n",nbrL,j,(yyvsp[(1) - (1)].chaine)); 
	    	return 0; 
	  	}
	  	if(typeTemp == 1 && Type(list,(yyvsp[(1) - (1)].chaine)) == 0) 
	  	{
	    	printf("Error at line %d column %d : Type mismatch\n",nbrL,j);
	    	return 0;
	  	}
	}
  	//Récupérer l'expression
	stackExp(&pileExp,(yyvsp[(1) - (1)].chaine));
	//


}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 863 "bis.y.txt"
    {
	//
	IsNumber = 0;
	//
	if(!chercher(list,(yyvsp[(1) - (4)].chaine))) 
	{
	  	printf("Error at line %d column %d : Array %s undeclared\n",nbrL,j,(yyvsp[(1) - (4)].chaine)); 
		return 0; 
	}
	else if (!IsArray(list,(yyvsp[(1) - (4)].chaine)))
	{
		printf("Error at line %d column %d : Variable %s IS NOT AN ARRAY\n",nbrL,j,(yyvsp[(1) - (4)].chaine)); 
		return 0;  
	}
	else if((yyvsp[(3) - (4)].entier) >= getTailleArray(list,(yyvsp[(1) - (4)].chaine)))
	{
		printf("Error at line %d column %d : OUT OF BOUND",nbrL,j); 
		return 0; 
	}
	else 
  {
    char *a = malloc(sizeof(int));
    sprintf(a,"%s[%d]",(yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].entier));

	//Récupérer l'expression
	stackExp(&pileExp,a);
	//
	
    stack(&pile,"F",a,Type(list,(yyvsp[(1) - (4)].chaine)));

    //
	
    //
  }
}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 899 "bis.y.txt"
    {	
	//
	IsNumber = 1;
	//
	char *a = malloc(sizeof(int));
	sprintf(a,"%d",(yyvsp[(1) - (1)].entier));

	//
	
    //

	//Récupérer l'expression
	stackExp(&pileExp,a);
	//
	
  	stack(&pile,"FCT",a,1);  	
}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 917 "bis.y.txt"
    {
	if(typeTemp != 0)  
	{
	  printf("Error at line %d column %d : Type mismatch\n",nbrL,j);
		return 0;
	}
  	else
	{
    	char *a = malloc(sizeof(float));
	  	sprintf(a,"%f",(yyvsp[(1) - (1)].reel));

	  	//Récupérer l'expression
		//Récupérer l'expression
		stackExp(&pileExp,a);
		//

    	stack(&pile,"FCT",a,0);

    	//
		
    	//
  	}  	
}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 941 "bis.y.txt"
    { 
	Pile *p = unstack(&pile);
  	stack(&pile,"FCT",p->nom,p->type);	
}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 950 "bis.y.txt"
    {
  	QC++;QCTotal++;
  	Pile *p = unstack(&pDeb); //BZ QC
  	Quad *q = getQuad(quad,p->type);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"%d",QC);
  	q->op1 = a;
  	Pile *r = unstack(&pDeb);
  	char *b = malloc(sizeof(int));
  	sprintf(b,"%d",r->type);
	ajouter(&quad,"BR",b,"","");
	ajouter(&quadTotal,"BR",b,"","");
}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 965 "bis.y.txt"
    {
	Pile *p = unstack(&pile);
	ajouter(&quad,"BZ","",p->nom,"");
	ajouter(&quadTotal,"BZ","",p->nom,"");
	stack(&pDeb,"","",QC);
  	QC++;QCTotal++;
}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 974 "bis.y.txt"
    {
	stack(&pDeb,"","",QC); 
}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 981 "bis.y.txt"
    {
	//
	Pile *p = unstack(&pDeb); //Update QC of FIN
	Pile *p1 = unstack(&pDebOpt);
	//
	Quad *q = getQuad(quadTotal,p->type);
	Quad *s = getQuad(quad,p1->type);
	//
	char *a = malloc(sizeof(int));
	char *b = malloc(sizeof(int));
	//
  	sprintf(a,"%d",QCTotal+1);
  	sprintf(b,"%d",QC+1);
  	//
  	q->op1 = a;
  	s->op1 = b;
  	//
  	//CREATE BNZ QUAD
  	p = unstack(&pile);
  	Pile *r = unstack(&pDeb);
  	Pile *t = unstack(&pDebOpt);
  	char *e = malloc(sizeof(int));
  	char *c = malloc(sizeof(int));
  	sprintf(e,"%d",r->type);
  	sprintf(c,"%d",t->type);
  	ajouter(&quadTotal,"BNZ",e,p->nom,"");
  	ajouter(&quad,"BNZ",c,p->nom,"");
  	QCTotal++;QC++;

}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 1013 "bis.y.txt"
    {
	Pile *p = unstack(&pDeb); //Update QC of BR
	Pile *p1 = unstack(&pDebOpt);
	Quad *q = getQuad(quadTotal,p->type);
	Quad *q1 = getQuad(quad,p1->type);
	char *a = malloc(sizeof(int));
	char *b = malloc(sizeof(int));
  	//BR FIN
  	ajouter(&quadTotal,"BR","","","");
  	ajouter(&quad,"BR","","","");
  	stack(&pDebOpt,"","",QC);
  	stack(&pDeb,"","",QCTotal); // store QC FIN
  	QCTotal++;QC++;
  	sprintf(a,"%d",QCTotal);
  	sprintf(b,"%d",QC);
  	q->op1 = a;
  	q1->op1 = b;
  	
}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 1034 "bis.y.txt"
    {
	ajouter(&quadTotal,"BR","","","");
	ajouter(&quad,"BR","","","");
	pos = QCTotal;
	pos1 = QC;
	QC++;
	QCTotal++;
	stack(&pDeb,"","",QCTotal); //QC of INS
	stack(&pDeb,"","",pos); //QC of BR
	stack(&pDebOpt,"","",QC); //QC of INS
	stack(&pDebOpt,"","",pos1); //QC of BR
}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 1050 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	ajouter(&quad,"+",p1->nom,p2->nom,a);
  	ajouter(&quadTotal,"+",p1->nom,p2->nom,a);
  	stack(&pile,"EVA",a,0);
  	QC++;QCTotal++;	
}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 1061 "bis.y.txt"
    {
	Pile *p = unstack(&pile);
  	stack(&pile,"EVA",p->nom,0);	
}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 1068 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	ajouter(&quad,"*",p1->nom,p2->nom,a);
  	ajouter(&quadTotal,"*",p1->nom,p2->nom,a);
  	stack(&pile,"A",a,0);
  	QC++;QCTotal++;
}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 1079 "bis.y.txt"
    {
	Pile *p = unstack(&pile);
  	stack(&pile,"A",p->nom,0);	
}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 1086 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	if(!strcmp((yyvsp[(3) - (5)].OpC),"<")) 
  	{
    	ajouter(&quad,"<",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"<",p2->nom,p1->nom,a);
     	QC++;QCTotal++;
  	}
  	else if(!strcmp((yyvsp[(3) - (5)].OpC),">")) 
  	{
    	ajouter(&quad,">",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,">",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	} 
  	else if(!strcmp((yyvsp[(3) - (5)].OpC),"<=")) 
  	{
    	ajouter(&quad,"<=",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"<=",p2->nom,p1->nom,a);
    	QCTotal++;
    	QC++;
  	}
  	else if(!strcmp((yyvsp[(3) - (5)].OpC),">=")) 
  	{
    	ajouter(&quad,">=",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,">=",p2->nom,p1->nom,a);
    	QC++;QCTotal;
  	}
  	else if(!strcmp((yyvsp[(3) - (5)].OpC),"==")) 
  	{
    	ajouter(&quad,"==",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"==",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	}
  	else if(!strcmp((yyvsp[(3) - (5)].OpC),"!=")) 
  	{
    	ajouter(&quad,"!=",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"!=",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	}
  	stack(&pile,"B",a,0);	
}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 1131 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	char *b = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	if(!strcmp((yyvsp[(4) - (6)].OpC),"<")) 
  	{
  		ajouter(&quad,"<",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,"<",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
    	sprintf(b,"T%d",QC);
    	ajouter(&quad,"==","0",a,b);
    	ajouter(&quadTotal,"==","0",a,b);
    	QC++;QCTotal++;
    	stack(&pile,"B",b,0);
  	}
  	else if(!strcmp((yyvsp[(4) - (6)].OpC),">")) 
  	{	
    	ajouter(&quad,">",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,">",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
    	sprintf(b,"T%d",QC);
    	ajouter(&quad,"==","0",a,b);
    	ajouter(&quadTotal,"==","0",a,b);
    	QC++;QCTotal++;
    	stack(&pile,"B",b,0);
  	} 
  	else if(!strcmp((yyvsp[(4) - (6)].OpC),"<=")) 
  	{
    	ajouter(&quad,"<=",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"<=",p2->nom,p1->nom,a);
    	QC++;QCTotal++;    
    	sprintf(b,"T%d",QC);
    	ajouter(&quad,"==","0",a,b);
    	ajouter(&quadTotal,"==","0",a,b);
    	QC++;QCTotal++;
    	stack(&pile,"B",b,0);
  	}
  	else if(!strcmp((yyvsp[(4) - (6)].OpC),">=")) 
  	{
    	ajouter(&quad,">=",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,">=",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
    	sprintf(b,"T%d",QC);
    	ajouter(&quad,"==","0",a,b);
    	ajouter(&quadTotal,"==","0",a,b);
    	QC++;QCTotal++;
    	stack(&pile,"B",b,0);
  	}
  	else if(!strcmp((yyvsp[(4) - (6)].OpC),"==")) 
  	{
  		ajouter(&quad,"==",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,"==",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
    	sprintf(b,"T%d",QC);
    	ajouter(&quad,"==","0",a,b);
    	ajouter(&quadTotal,"==","0",a,b);
    	QC++;QCTotal++;
    	stack(&pile,"B",b,0);
  	}
  	else if(!strcmp((yyvsp[(4) - (6)].OpC),"!=")) 
  	{
    	ajouter(&quad,"!=",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"!=",p2->nom,p1->nom,a);
   	 	QC++;QCTotal++;
   	 	sprintf(b,"T%d",QC);
    	ajouter(&quad,"==","0",a,b);
    	ajouter(&quadTotal,"==","0",a,b);
    	QC++;QCTotal++;
    	stack(&pile,"B",b,0);
  	}//stack(&pile,"B",a,0);	
}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 1205 "bis.y.txt"
    {
	Pile *p1 = unstack(&pile);
  	Pile *p2 = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	if(!strcmp((yyvsp[(2) - (3)].OpC),"<")) 
  	{
  		ajouter(&quad,"<",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,"<",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	}
  	else if(!strcmp((yyvsp[(2) - (3)].OpC),">")) 
  	{
  		ajouter(&quad,">",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,">",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	} 
  	else if(!strcmp((yyvsp[(2) - (3)].OpC),"<=")) 
  	{
  		ajouter(&quad,"<=",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,"<=",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	}
  	else if(!strcmp((yyvsp[(2) - (3)].OpC),">=")) 
  	{
  		ajouter(&quad,">=",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,">=",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	}
  	else if(!strcmp((yyvsp[(2) - (3)].OpC),"==")) 
  	{
    	ajouter(&quad,"==",p2->nom,p1->nom,a);
    	ajouter(&quadTotal,"==",p2->nom,p1->nom,a);
    	QC++;QCTotal++;
  	}
  	else if(!strcmp((yyvsp[(2) - (3)].OpC),"!=")) 
  	{
  		ajouter(&quad,"!=",p2->nom,p1->nom,a);
  		ajouter(&quadTotal,"!=",p2->nom,p1->nom,a);
		QC++;QCTotal++;
	}	
  	stack(&pile,"B",a,0);	
}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 1249 "bis.y.txt"
    {
	Pile *p = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	ajouter(&quad,"==",p->nom,"0",a);
  	ajouter(&quadTotal,"==",p->nom,"0",a);
  	QC++;QCTotal++;
  	stack(&pile,"B",a,0);	
}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 1259 "bis.y.txt"
    {
	Pile *p = unstack(&pile);
  	char *a = malloc(sizeof(int));
  	sprintf(a,"T%d",QC);
  	ajouter(&quad,">","0",p->nom,a);
  	ajouter(&quadTotal,">","0",p->nom,a);
  	QC++;QCTotal++;
  	stack(&pile,"B",a,0);	
}
    break;


/* Line 1792 of yacc.c  */
#line 2829 "y.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 1275 "bis.y.txt"


int yyerror(char* msg)
{
printf("%s\n",msg);
return 1;
}

int main()
{
	yyin=fopen("code.txt","r");
	yyparse();
	printf("Code avant Optimisation\n");
	afficher_Quad(quadTotal);
	printf("____________________________________________\n");
	printf("Code apres Propagation de expression / copie / constantes\n");
	afficher_Quad(quad);
	FreeQuad(&quad,list,&QC);
	printf("____________________________________________\n");
	printf("Code apres suppression de code inutile\n");
	afficher_Quad(quad);

	

	printf("___________________________________________\n");

	AfficherExpr(TableExp);

	return 0;
}