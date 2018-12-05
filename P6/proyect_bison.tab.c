/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "proyect_bison.y" /* yacc.c:339  */

  //CÓDIGO EN C
  #include <stdio.h>
  #include <stdlib.h>
  #include "func.h"

  //DEFINICIÓN DE FUNCIONES PROPIAS DE BISON
  extern int yylex(void);
  extern char *yytext;
  void yyerror(char *s);
  extern FILE *yyin;

  TABLA_SIMBOLOS *ts;


#line 82 "proyect_bison.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "proyect_bison.tab.h".  */
#ifndef YY_YY_PROYECT_BISON_TAB_H_INCLUDED
# define YY_YY_PROYECT_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENTERO = 258,
    DECIMAL = 259,
    STRING = 260,
    VARIABLE = 261,
    MAS = 262,
    MENOS = 263,
    POR = 264,
    DIV = 265,
    PTOCOMA = 266,
    POW = 267,
    MODU = 268,
    PARABRE = 269,
    PARCIERRA = 270,
    IGUAL = 271,
    COMA = 272,
    SALTOLINE = 273,
    TIPO1 = 274,
    TIPO2 = 275,
    TIPO3 = 276
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "proyect_bison.y" /* yacc.c:355  */

  int entero;
  double decimal;
  char* string;
  void* var

#line 151 "proyect_bison.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECT_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 168 "proyect_bison.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  22
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  310

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    75,    76,    77,    78,    79,    80,    91,
      92,    93,    97,    98,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   123,
     124,   125,   126,   127,   128,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   175,   186,
     197,   208,   219,   230,   241,   252,   263,   274,   284,   294,
     314,   326,   338,   350,   362,   379,   386,   394,   404,   405,
     406,   407,   408,   410,   411,   414,   415,   416,   417,   418,
     419,   420,   421,   424,   425,   426,   427,   428,   429,   430,
     431,   434,   435,   436,   437,   440,   441,   442,   443,   445,
     446,   449,   450,   451,   452,   453,   464,   469,   474,   479,
     484,   498,   499,   504,   509,   519,   520,   521,   522,   523,
     524,   525,   526,   527,   530,   531,   532,   533,   534,   535,
     537,   538,   539,   540,   541,   542,   543,   544,   545,   546
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "DECIMAL", "STRING",
  "VARIABLE", "MAS", "MENOS", "POR", "DIV", "PTOCOMA", "POW", "MODU",
  "PARABRE", "PARCIERRA", "IGUAL", "COMA", "SALTOLINE", "TIPO1", "TIPO2",
  "TIPO3", "$accept", "input", "calc", "errores", "declaracion_variables",
  "asignar_variables", "exp_variable", "cadena_pow", "str", "exp_entera",
  "exp_decimal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276
};
# endif

#define YYPACT_NINF -14

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-14)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      49,   -13,   -14,    11,   -14,   -14,   -14,   -14,   -14,     2,
      75,    -1,    -2,    18,    23,    68,   -14,   -14,   -14,   -14,
     572,   175,   191,    62,   203,    -2,   -14,   -14,   -14,    -2,
      -2,   -14,    19,    27,     0,    13,   389,   523,   302,   556,
     560,    -2,    -2,    -2,    -2,    58,    -2,    -2,    -2,    -2,
      -2,    64,   -14,    -2,    -2,    -2,    -2,    66,   -14,    -2,
      -2,    -2,    -2,    70,    -2,   -14,    -2,    -2,    -2,    -2,
      80,   -14,   579,   624,   626,   586,   619,   419,    41,   162,
     233,   315,    79,   113,   350,   383,    -2,    -2,    -2,   -14,
     -14,   -14,   -14,    86,    -2,   -14,    99,    -2,   -14,   101,
      -2,   -14,   629,   -14,   -14,   631,    83,   629,   -14,   -14,
     631,    83,   -14,   115,   121,   -14,   -14,   -14,   115,   121,
     -14,   -14,   -14,   -14,   -14,   629,   -14,   -14,   629,   612,
     121,   612,   121,   -14,   629,   -14,   -14,   629,   -14,   612,
     115,   121,   612,   115,   121,   -14,   629,   631,    83,   629,
     631,    83,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   629,   631,    83,   629,   631,    83,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   122,   124,   127,   132,   137,   -14,
      -2,    -2,    -2,    -2,    -2,   361,   156,   180,   372,   403,
     -14,   593,   136,   150,    92,   209,   -14,   600,   249,   262,
     105,   268,   -14,   607,   303,   308,   128,   291,   -14,   -14,
     -14,   -14,   -14,   428,    47,   141,   437,   527,   446,   188,
     247,   455,   536,   464,   322,   368,   473,   540,   487,   379,
     400,   496,   549,   505,   558,   562,   514,   553,    -2,    -2,
      -2,    -2,    -2,   142,   148,   -14,   172,   -14,   173,   -14,
     174,   -14,   186,   197,   -14,   204,   -14,   210,   -14,   211,
     -14,   216,   245,   -14,   250,   -14,   254,   -14,   256,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,
     -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14,   -14
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    11,     0,    10,     1,   135,   144,   131,    85,
       0,     0,     0,     0,     0,     0,     3,     9,     6,     7,
       0,     0,     0,     0,     0,     0,   136,   145,    86,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,    36,     0,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
     134,   142,   158,     0,     0,    14,     0,     0,    15,     0,
       0,    16,    88,    98,    97,    95,    96,    89,   106,   105,
     103,   104,    90,    44,    42,   111,   112,    91,    51,    49,
     115,   116,     8,    93,   119,   102,   130,   127,   110,    45,
      41,    52,    48,     5,   101,   128,   132,   109,   133,    43,
      40,    39,    50,    47,    46,     4,    99,   137,   150,   107,
     138,   151,   113,   139,   152,   117,   140,   153,    12,   120,
     141,   100,   154,   146,   108,   155,   147,   114,   156,   148,
     118,   157,   149,    13,     0,     0,     0,     0,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,    84,    83,
      82,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,    22,     0,    17,
       0,    21,     0,     0,    26,     0,    25,     0,    24,     0,
      18,     0,     0,    20,     0,    19,     0,    27,     0,    28,
      92,    54,    55,   121,    53,   125,    60,    61,   129,    59,
     124,    57,    58,   126,    56,   122,    63,    64,   143,    62,
     123,    66,    67,   159,    65,    77,    30,    29,    71,    72,
      78,    32,    31,    74,    73,    79,    76,    75,    33,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -14,   -14,   -14,   -14,   -14,   -14,    -3,   309,   241,    65,
     164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    16,    17,    18,    19,   112,    34,    78,    79,
      80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      20,     6,     7,     8,    31,     4,    10,    47,    48,    33,
      32,     5,    12,    30,     6,     7,     8,     9,    25,    10,
      53,    54,    72,    11,    38,    12,    77,    81,    90,    39,
      13,    14,    15,    86,    41,    42,    87,    88,   102,   107,
      46,   117,    89,   123,   125,   128,   129,   131,    53,    54,
     134,   137,   139,   142,    47,    48,   146,   149,   152,   155,
       1,   159,   271,   161,   164,   167,   170,     2,    23,    59,
      60,    61,    62,    63,    40,    64,   122,    36,    26,    27,
      65,    28,   133,   185,   145,   117,    47,    48,   158,    29,
      75,   191,    68,    69,   197,    84,   181,   203,   173,    59,
      60,    61,    62,   248,   190,    64,   105,   110,   115,   120,
     249,   124,    59,    60,    61,    62,   257,   196,    64,   202,
      53,    54,    47,   258,   147,   150,   153,   156,    53,   160,
     182,   162,   165,   168,   171,    59,    60,    61,    62,   266,
     208,    64,   209,    47,    48,   210,   267,   244,    53,    54,
     211,   188,   115,   120,   245,   212,   272,    53,    54,   194,
     295,   246,   200,    47,    48,   206,   296,    24,   247,    59,
      60,    61,    62,   239,     0,    64,    37,   213,   218,   223,
     228,   233,    47,    48,    49,    50,    51,    53,    54,    76,
     297,   298,   299,    52,    85,    47,    48,   240,    53,    54,
      55,    56,    57,   276,   300,   106,   111,   116,   121,    58,
      66,    67,    68,    69,    70,   301,    66,    67,    68,    69,
     250,    71,   302,   148,   151,   154,   157,   251,   303,   304,
     163,   166,   169,   172,   305,   213,   218,   223,   228,   233,
      66,    67,    68,    69,    22,   216,   221,   226,   231,   236,
     189,   116,   121,    35,    53,    54,    47,    48,   195,     0,
     253,   201,   277,   306,   207,     0,    74,   254,   307,    53,
      54,    83,   308,   255,   309,    66,    67,    68,    69,   259,
     256,     0,   104,   109,   114,   119,   260,     0,   127,     0,
     130,   132,     0,     0,   136,   138,   141,   144,    66,    67,
      68,    69,   268,   216,   221,   226,   231,   236,     0,   269,
      47,    48,    21,    93,   262,    53,    54,     0,    94,   264,
      95,   263,    41,    42,    87,    88,   265,   187,    46,    47,
      48,     0,   180,     0,    73,   193,     0,   281,   199,    82,
       0,   205,     0,     0,   217,   222,   227,   232,   237,     0,
     103,   108,   113,   118,     0,     0,   126,    59,    60,    61,
      62,     0,   135,    64,   140,   143,     0,   183,    41,    42,
      87,    88,     0,     0,    46,    53,    54,     0,   238,    59,
      60,    61,    62,   282,     0,    64,    47,    48,     0,   241,
      66,    67,    68,    69,   286,   186,    59,    60,    61,    62,
     184,     0,    64,   192,    91,     0,   198,    53,    54,   204,
      66,    67,    68,    69,     0,   287,     0,     0,     0,     0,
     242,   215,   220,   225,   230,   235,    41,    42,    87,    88,
       0,     0,    46,     0,   179,    41,    42,    87,    88,     0,
       0,    46,     0,   270,    59,    60,    61,    62,     0,     0,
      64,     0,   273,    41,    42,    87,    88,     0,     0,    46,
       0,   275,    59,    60,    61,    62,     0,     0,    64,     0,
     278,    41,    42,    87,    88,     0,     0,    46,     0,   280,
      59,    60,    61,    62,     0,     0,    64,     0,   283,   214,
     219,   224,   229,   234,    41,    42,    87,    88,     0,     0,
      46,     0,   285,    59,    60,    61,    62,     0,     0,    64,
       0,   288,    41,    42,    87,    88,     0,     0,    46,     0,
     290,    59,    60,    61,    62,     0,     0,    64,     0,   293,
      66,    67,    68,    69,    66,    67,    68,    69,    92,     0,
       0,     0,   274,    66,    67,    68,    69,    66,    67,    68,
      69,   279,     0,     0,     0,   284,    66,    67,    68,    69,
      66,    67,    68,    69,   289,    47,    48,    96,   294,    53,
      54,    99,    97,   291,    98,     0,   100,   292,   101,    41,
      42,    43,    44,    45,     0,    46,    41,    42,    87,    88,
     174,     0,    46,    59,    60,    61,    62,   177,     0,    64,
      41,    42,    87,    88,   243,     0,    46,    41,    42,    87,
      88,   252,     0,    46,    41,    42,    87,    88,   261,    41,
      46,    87,    88,     0,     0,    46,    66,    67,    68,    69,
     178,    47,    48,    53,    54,   175,     0,   176,    87,    88,
      61,    62,    46,     0,    64
};

static const yytype_int16 yycheck[] =
{
       3,     3,     4,     5,     6,    18,     8,     7,     8,    12,
      12,     0,    14,    14,     3,     4,     5,     6,    16,     8,
       7,     8,    25,    12,     6,    14,    29,    30,    15,     6,
      19,    20,    21,    14,     7,     8,     9,    10,    41,    42,
      13,    44,    15,    46,    47,    48,    49,    50,     7,     8,
      53,    54,    55,    56,     7,     8,    59,    60,    61,    62,
      11,    64,    15,    66,    67,    68,    69,    18,     3,     7,
       8,     9,    10,    11,     6,    13,    18,    12,     3,     4,
      18,     6,    18,    86,    18,    88,     7,     8,    18,    14,
      25,    94,     9,    10,    97,    30,    17,   100,    18,     7,
       8,     9,    10,    11,    18,    13,    41,    42,    43,    44,
      18,    46,     7,     8,     9,    10,    11,    18,    13,    18,
       7,     8,     7,    18,    59,    60,    61,    62,     7,    64,
      17,    66,    67,    68,    69,     7,     8,     9,    10,    11,
      18,    13,    18,     7,     8,    18,    18,    11,     7,     8,
      18,    86,    87,    88,    18,    18,    15,     7,     8,    94,
      18,    11,    97,     7,     8,   100,    18,     3,    18,     7,
       8,     9,    10,    17,    -1,    13,    12,   180,   181,   182,
     183,   184,     7,     8,     9,    10,    11,     7,     8,    25,
      18,    18,    18,    18,    30,     7,     8,    17,     7,     8,
       9,    10,    11,    15,    18,    41,    42,    43,    44,    18,
       7,     8,     9,    10,    11,    18,     7,     8,     9,    10,
      11,    18,    18,    59,    60,    61,    62,    18,    18,    18,
      66,    67,    68,    69,    18,   238,   239,   240,   241,   242,
       7,     8,     9,    10,     3,   180,   181,   182,   183,   184,
      86,    87,    88,    12,     7,     8,     7,     8,    94,    -1,
      11,    97,    15,    18,   100,    -1,    25,    18,    18,     7,
       8,    30,    18,    11,    18,     7,     8,     9,    10,    11,
      18,    -1,    41,    42,    43,    44,    18,    -1,    47,    -1,
      49,    50,    -1,    -1,    53,    54,    55,    56,     7,     8,
       9,    10,    11,   238,   239,   240,   241,   242,    -1,    18,
       7,     8,     3,    11,    11,     7,     8,    -1,    16,    11,
      18,    18,     7,     8,     9,    10,    18,    86,    13,     7,
       8,    -1,    17,    -1,    25,    94,    -1,    15,    97,    30,
      -1,   100,    -1,    -1,   180,   181,   182,   183,   184,    -1,
      41,    42,    43,    44,    -1,    -1,    47,     7,     8,     9,
      10,    -1,    53,    13,    55,    56,    -1,    17,     7,     8,
       9,    10,    -1,    -1,    13,     7,     8,    -1,    17,     7,
       8,     9,    10,    15,    -1,    13,     7,     8,    -1,    17,
       7,     8,     9,    10,    15,    86,     7,     8,     9,    10,
      17,    -1,    13,    94,    15,    -1,    97,     7,     8,   100,
       7,     8,     9,    10,    -1,    15,    -1,    -1,    -1,    -1,
      17,   180,   181,   182,   183,   184,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    15,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    15,   180,
     181,   182,   183,   184,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
       7,     8,     9,    10,     7,     8,     9,    10,    15,    -1,
      -1,    -1,    15,     7,     8,     9,    10,     7,     8,     9,
      10,    15,    -1,    -1,    -1,    15,     7,     8,     9,    10,
       7,     8,     9,    10,    15,     7,     8,    11,    15,     7,
       8,    11,    16,    15,    18,    -1,    16,    15,    18,     7,
       8,     9,    10,    11,    -1,    13,     7,     8,     9,    10,
      11,    -1,    13,     7,     8,     9,    10,    11,    -1,    13,
       7,     8,     9,    10,    11,    -1,    13,     7,     8,     9,
      10,    11,    -1,    13,     7,     8,     9,    10,    11,     7,
      13,     9,    10,    -1,    -1,    13,     7,     8,     9,    10,
      11,     7,     8,     7,     8,    11,    -1,    11,     9,    10,
       9,    10,    13,    -1,    13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    18,    23,    18,     0,     3,     4,     5,     6,
       8,    12,    14,    19,    20,    21,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    16,     3,     4,     6,    14,
      14,     6,    12,    28,    29,    30,    31,    32,     6,     6,
       6,     7,     8,     9,    10,    11,    13,     7,     8,     9,
      10,    11,    18,     7,     8,     9,    10,    11,    18,     7,
       8,     9,    10,    11,    13,    18,     7,     8,     9,    10,
      11,    18,    28,    29,    30,    31,    32,    28,    30,    31,
      32,    28,    29,    30,    31,    32,    14,     9,    10,    15,
      15,    15,    15,    11,    16,    18,    11,    16,    18,    11,
      16,    18,    28,    29,    30,    31,    32,    28,    29,    30,
      31,    32,    28,    29,    30,    31,    32,    28,    29,    30,
      31,    32,    18,    28,    31,    28,    29,    30,    28,    28,
      30,    28,    30,    18,    28,    29,    30,    28,    30,    28,
      29,    30,    28,    29,    30,    18,    28,    31,    32,    28,
      31,    32,    28,    31,    32,    28,    31,    32,    18,    28,
      31,    28,    31,    32,    28,    31,    32,    28,    31,    32,
      28,    31,    32,    18,    11,    11,    11,    11,    11,    15,
      17,    17,    17,    17,    17,    28,    29,    30,    31,    32,
      18,    28,    29,    30,    31,    32,    18,    28,    29,    30,
      31,    32,    18,    28,    29,    30,    31,    32,    18,    18,
      18,    18,    18,    28,    29,    30,    31,    32,    28,    29,
      30,    31,    32,    28,    29,    30,    31,    32,    28,    29,
      30,    31,    32,    28,    29,    30,    31,    32,    17,    17,
      17,    17,    17,    11,    11,    18,    11,    18,    11,    18,
      11,    18,    11,    11,    18,    11,    18,    11,    18,    11,
      18,    11,    11,    18,    11,    18,    11,    18,    11,    18,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    18,    18,    18,    18,    18,
      18,    18,    18,    18,    18,    18,    18,    18,    18,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    22,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    24,    24,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,    25,    25,    25,    26,    26,
      26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
      27,    27,    27,    27,    27,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    29,    29,    29,    29,
      29,    30,    30,    30,    30,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     2,     2,     4,     2,
       2,     1,     3,     3,     3,     3,     3,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     6,
       6,     6,     6,     6,     6,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     4,     4,
       4,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       5,     5,     5,     5,     5,     1,     2,     4,     3,     3,
       3,     3,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     6,     6,     6,     6,     6,     6,     3,     3,     6,
       3,     1,     3,     3,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     6,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
        case 4:
#line 76 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %s\n"cerrar, (yyvsp[-2].string)); free((yyvsp[-2].string));}
#line 1506 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 77 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %s\n"cerrar, (yyvsp[-2].string)); free((yyvsp[-2].string));}
#line 1512 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 80 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                  if((yyvsp[-2].var) != NULL){
                                                    NODO* na = (NODO *) (yyvsp[-2].var);
                                                    if(na->type == 1)
                                                      printf(azul">> %d\n"cerrar, na->tipo1);
                                                    else if(na->type == 2)
                                                      printf(azul">> %f\n"cerrar, na->tipo2);
                                                    else if(na->type == 3)
                                                      printf(azul">> %s\n"cerrar, na->tipo3);
                                                  }
                                                }
#line 1528 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected arguments\n"cerrar);}
#line 1534 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 93 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected arguments\n"cerrar);}
#line 1540 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %d\n"cerrar, (yyvsp[-2].entero)); }
#line 1546 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %f\n"cerrar, (yyvsp[-2].decimal));  }
#line 1552 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 107 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1558 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 108 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1564 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 109 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1570 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 110 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1576 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1582 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 112 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1588 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 113 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1594 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1600 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 115 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1606 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1612 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1618 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 118 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1624 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1630 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1636 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 121 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1642 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 123 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
#line 1648 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
#line 1654 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects double\n"cerrar);}
#line 1660 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 126 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects double\n"cerrar);}
#line 1666 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 127 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects string\n"cerrar);}
#line 1672 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 128 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects string\n"cerrar);}
#line 1678 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 130 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1684 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 131 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1690 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 132 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1696 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 133 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1702 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1708 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 135 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1714 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 136 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1720 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 137 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1726 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 138 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1732 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 139 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1738 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 140 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1744 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 141 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1750 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 142 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1756 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 143 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1762 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 144 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1768 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 145 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1774 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 146 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1780 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 147 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1786 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1792 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 150 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1798 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 151 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1804 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 152 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1810 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 153 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1816 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1822 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 155 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1828 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 156 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1834 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 157 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1840 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 158 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1846 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1852 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 160 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1858 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 161 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1864 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 162 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1870 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 163 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1876 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 175 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                    if(existeVar(ts, (yyvsp[-2].string))){
                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-2].string));
                                                    }
                                                    else{
                                                      NODO a = crearNodoInt(0, (yyvsp[-2].string));
                                                      insertarNodo(ts, a);
                                                    }
                                                    //verTabla(ts);
                                                    free((yyvsp[-2].string));
                                                  }
#line 1892 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 186 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                    if(existeVar(ts, (yyvsp[-2].string))){
                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-2].string));
                                                    }
                                                    else{
                                                      NODO a = crearNodoFloat(0, (yyvsp[-2].string));
                                                      insertarNodo(ts, a);
                                                    }
                                                    //verTabla(ts);
                                                    free((yyvsp[-2].string));
                                                  }
#line 1908 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 197 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                    if(existeVar(ts, (yyvsp[-2].string))){
                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-2].string));
                                                    }
                                                    else{
                                                      NODO a = crearNodoString("", (yyvsp[-2].string));
                                                      insertarNodo(ts, a); 
                                                    }
                                                    //verTabla(ts);
                                                    free((yyvsp[-2].string));
                                                  }
#line 1924 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 208 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                                    if(existeVar(ts, (yyvsp[-4].string))){
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                    }
                                                                    else{
                                                                      NODO a = crearNodoInt((yyvsp[-2].entero), (yyvsp[-4].string));
                                                                      insertarNodo(ts, a);
                                                                    }
                                                                    //verTabla(ts);
                                                                    free((yyvsp[-4].string));
                                                                  }
#line 1940 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 219 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                      if(existeVar(ts, (yyvsp[-4].string))){
                                                                        printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoInt((int) (yyvsp[-2].decimal), (yyvsp[-4].string));
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      //verTabla(ts);
                                                                      free((yyvsp[-4].string));
                                                                    }
#line 1956 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 230 "proyect_bison.y" /* yacc.c:1646  */
    {  
                                                                      if(existeVar(ts, (yyvsp[-4].string))){
                                                                        printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoFloat((yyvsp[-2].decimal), (yyvsp[-4].string));
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      //verTabla(ts);
                                                                      free((yyvsp[-4].string));
                                                                    }
#line 1972 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 241 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                      if(existeVar(ts, (yyvsp[-4].string))){
                                                                        printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoFloat((double) (yyvsp[-2].entero), (yyvsp[-4].string));
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      //verTabla(ts);
                                                                      free((yyvsp[-4].string));
                                                                    }
#line 1988 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 252 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                              if(existeVar(ts, (yyvsp[-4].string))){
                                                                printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                              }
                                                              else{
                                                                NODO a = crearNodoString((yyvsp[-2].string),(yyvsp[-4].string));
                                                                insertarNodo(ts, a); 
                                                              }
                                                              //verTabla(ts);
                                                              free((yyvsp[-4].string));free((yyvsp[-2].string));
                                                            }
#line 2004 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 263 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                                    if(existeVar(ts, (yyvsp[-4].string))){
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                    }
                                                                    else{
                                                                      NODO a = crearNodoString((yyvsp[-2].string), (yyvsp[-4].string));
                                                                      insertarNodo(ts, a); 
                                                                    }
                                                                    //verTabla(ts);
                                                                    free((yyvsp[-4].string));free((yyvsp[-2].string));
                                                                  }
#line 2020 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 274 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    if(existeVar(ts, (yyvsp[-4].string)))
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                    else{
                                                                      NODO a = crearNodoInt(0, (yyvsp[-4].string));
                                                                      insertarNodo(ts, a);
                                                                      copiarNodo(ts,(yyvsp[-4].string),(yyvsp[-2].var));
                                                                    }
                                                                    free((yyvsp[-4].string));
                                                                  }
#line 2035 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 284 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    if(existeVar(ts, (yyvsp[-4].string)))
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                    else{
                                                                      NODO a = crearNodoFloat(0.0, (yyvsp[-4].string));
                                                                      insertarNodo(ts, a);
                                                                      copiarNodo(ts,(yyvsp[-4].string),(yyvsp[-2].var));
                                                                    }
                                                                    free((yyvsp[-4].string));
                                                                  }
#line 2050 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 294 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    if(existeVar(ts, (yyvsp[-4].string)))
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,(yyvsp[-4].string));
                                                                    else{
                                                                      NODO a = crearNodoString("", (yyvsp[-4].string));
                                                                      insertarNodo(ts, a);
                                                                      copiarNodo(ts,(yyvsp[-4].string),(yyvsp[-2].var));
                                                                    }
                                                                    free((yyvsp[-4].string));
                                                                  }
#line 2065 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 314 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                              if(!existeVar(ts, (yyvsp[-4].string)))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[-4].string));
                                                              else{
                                                                if(getType(ts, (yyvsp[-4].string)) != 1 && getType(ts, (yyvsp[-4].string)) != 2)
                                                                  printf(amarillo"Incompatible declaration\n"cerrar);
                                                                else
                                                                  updateVarInt(ts,(int) (yyvsp[-2].entero), (yyvsp[-4].string));
                                                              }
                                                              //verTabla(ts);
                                                              free((yyvsp[-4].string));
                                                            }
#line 2082 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 326 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                              if(!existeVar(ts, (yyvsp[-4].string)))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[-4].string));
                                                              else{
                                                                if(getType(ts, (yyvsp[-4].string)) != 2 && getType(ts, (yyvsp[-4].string)) != 1)
                                                                  printf(amarillo"Incompatible declaration\n"cerrar);
                                                                else
                                                                  updateVarFloat(ts,(double) (yyvsp[-2].decimal), (yyvsp[-4].string));
                                                              }
                                                              //verTabla(ts);
                                                              free((yyvsp[-4].string));
                                                            }
#line 2099 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 338 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                        if(!existeVar(ts, (yyvsp[-4].string)))
                                                          printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[-4].string));
                                                        else{
                                                          if(getType(ts, (yyvsp[-4].string)) != 3)
                                                            printf(amarillo"Incompatible declaration\n"cerrar);
                                                          else
                                                            updateVarString(ts, (yyvsp[-2].string), (yyvsp[-4].string));
                                                        }
                                                        //verTabla(ts);
                                                        free((yyvsp[-4].string));free((yyvsp[-2].string));
                                                      }
#line 2116 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 350 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                                              if(!existeVar(ts, (yyvsp[-4].string)))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[-4].string));
                                                              else{
                                                                if(getType(ts, (yyvsp[-4].string)) != 3)
                                                                  printf(amarillo"Incompatible declaration\n"cerrar);
                                                                else
                                                                  updateVarString(ts, (yyvsp[-2].string), (yyvsp[-4].string));
                                                              }
                                                              //verTabla(ts);
                                                              free((yyvsp[-4].string));free((yyvsp[-2].string));
                                                            }
#line 2133 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 362 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                              if(!existeVar(ts, (yyvsp[-4].string)))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[-4].string));
                                                              else{
                                                                copiarNodo(ts,(yyvsp[-4].string),(yyvsp[-2].var));
                                                              }
                                                            }
#line 2145 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 379 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                    (yyval.var) = getVar(ts, (yyvsp[0].string));
                                    if((yyval.var) == NULL)
                                      printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[0].string));
                                    free((yyvsp[0].string));
                                  }
#line 2156 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 386 "proyect_bison.y" /* yacc.c:1646  */
    {
                                    (yyval.var) = getVar(ts, (yyvsp[0].string));
                                    if((yyval.var) == NULL)
                                      printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[0].string));
                                    else
                                      (yyval.var) = menosVariable(ts, (yyvsp[0].string));
                                    free((yyvsp[0].string));
                                  }
#line 2169 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 394 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                      //AQUÍ SE MUERE SI HACES operaciones entre string y int|double
                                                      (yyval.var) = getVar(ts, (yyvsp[-1].var));
                                                      if((yyval.var) == NULL){
                                                        (yyval.var) = menosExpVariable((yyvsp[-1].var));
                                                      }
                                                      else{
                                                        (yyval.var) = menosVariable(ts, (yyvsp[-1].var));
                                                      }
                                  }
#line 2184 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 404 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2190 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 405 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2196 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 406 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2202 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 407 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2208 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 408 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowVariable((yyvsp[-3].var), (yyvsp[-1].var));}
#line 2214 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 410 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableModVariable((yyvsp[-2].var),(yyvsp[0].var));}
#line 2220 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 411 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = getVarWithoutName((yyvsp[-1].var));}
#line 2226 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 414 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasEntero((yyvsp[-2].var), (yyvsp[0].entero));}
#line 2232 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 415 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasFloat((yyvsp[-2].var), (yyvsp[0].decimal));}
#line 2238 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 416 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2244 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 417 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2250 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 418 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasEntero((yyvsp[0].var), (yyvsp[-2].entero));}
#line 2256 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 419 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasFloat((yyvsp[0].var), (yyvsp[-2].decimal));}
#line 2262 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 420 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2268 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 421 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2274 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 424 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosEntero((yyvsp[-2].var), (yyvsp[0].entero), 1);}
#line 2280 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 425 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosFloat((yyvsp[-2].var), (yyvsp[0].decimal), 1);}
#line 2286 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 426 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2292 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 427 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2298 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 428 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosEntero((yyvsp[0].var), (yyvsp[-2].entero), 0);}
#line 2304 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 429 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosFloat((yyvsp[0].var), (yyvsp[-2].decimal), 0);}
#line 2310 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 430 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2316 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 431 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2322 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 434 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorEntero((yyvsp[-2].var), (yyvsp[0].entero));}
#line 2328 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 435 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorFloat((yyvsp[-2].var), (yyvsp[0].decimal));}
#line 2334 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 436 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorEntero((yyvsp[0].var), (yyvsp[-2].entero));}
#line 2340 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 437 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorFloat((yyvsp[0].var), (yyvsp[-2].decimal));}
#line 2346 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 440 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivEntero((yyvsp[-2].var), (yyvsp[0].entero), 1);}
#line 2352 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 441 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivFloat((yyvsp[-2].var), (yyvsp[0].decimal), 1);}
#line 2358 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 442 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivEntero((yyvsp[0].var), (yyvsp[-2].entero), 0);}
#line 2364 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 443 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivFloat((yyvsp[0].var), (yyvsp[-2].decimal), 0);}
#line 2370 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 445 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableModuEntero((yyvsp[-2].var),(yyvsp[0].entero),0);}
#line 2376 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 446 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableModuEntero((yyvsp[0].var),(yyvsp[-2].entero),0);}
#line 2382 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 449 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowEntero((yyvsp[-3].var), (yyvsp[-1].entero), 1);}
#line 2388 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 450 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowEntero((yyvsp[-1].var), (yyvsp[-3].entero), 0);}
#line 2394 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 451 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowFloat((yyvsp[-1].var), (yyvsp[-3].decimal));}
#line 2400 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 452 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = strPowVariable((yyvsp[-1].var), (yyvsp[-3].string));}
#line 2406 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 453 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = strPowVariable((yyvsp[-1].var), (yyvsp[-3].string));}
#line 2412 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 464 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                            (yyval.string) = (char *) malloc((sizeof(char) * tam((yyvsp[-3].string)) * val_abs((yyvsp[-1].entero)))+1);
                                                            pow_cad((yyval.string), (yyvsp[-3].string), (yyvsp[-1].entero));
                                                            free((yyvsp[-3].string));
                                                          }
#line 2422 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 469 "proyect_bison.y" /* yacc.c:1646  */
    {
                                            (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                                            mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                                            free((yyvsp[-2].string)); free((yyvsp[0].string));
                                          }
#line 2432 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 474 "proyect_bison.y" /* yacc.c:1646  */
    {
                                            (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                                            mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                                            free((yyvsp[-2].string)); free((yyvsp[0].string));
                                          }
#line 2442 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 479 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  (yyval.string) = (char *) malloc((sizeof(char) * tam((yyvsp[-3].string)) * val_abs((yyvsp[-1].entero)))+1);
                                                                  pow_cad((yyval.string), (yyvsp[-3].string), (yyvsp[-1].entero));
                                                                  free((yyvsp[-3].string));
                                                                }
#line 2452 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 484 "proyect_bison.y" /* yacc.c:1646  */
    {
                                            (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                                            mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                                            free((yyvsp[-2].string)); free((yyvsp[0].string));
                                          }
#line 2462 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 498 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2468 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 499 "proyect_bison.y" /* yacc.c:1646  */
    { 
                        (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                        mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                        free((yyvsp[-2].string)); free((yyvsp[0].string));
                      }
#line 2478 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 504 "proyect_bison.y" /* yacc.c:1646  */
    {
                          (yyval.string) = (char *) malloc(sizeof(char) * tam((yyvsp[-2].string)) + 1);
                          mystrrest((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                          free((yyvsp[-2].string)); free((yyvsp[0].string));
                        }
#line 2488 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 509 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string);}
#line 2494 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 519 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[0].entero);}
#line 2500 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 520 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = -1 * (yyvsp[0].entero);}
#line 2506 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 521 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);}
#line 2512 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 522 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);}
#line 2518 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 523 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);}
#line 2524 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 524 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);}
#line 2530 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 525 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) % (yyvsp[0].entero);}
#line 2536 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 526 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-1].entero);}
#line 2542 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 527 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (int) pow_num((yyvsp[-3].entero), (yyvsp[-1].entero));}
#line 2548 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 530 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[0].decimal);}
#line 2554 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 531 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = -1.0 * (yyvsp[0].decimal);}
#line 2560 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 532 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].decimal);}
#line 2566 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 533 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].decimal);}
#line 2572 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 534 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].decimal);}
#line 2578 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 535 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].decimal);}
#line 2584 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 537 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) + (yyvsp[0].decimal);}
#line 2590 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 538 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) - (yyvsp[0].decimal);}
#line 2596 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 539 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) * (yyvsp[0].decimal);}
#line 2602 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 540 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) / (yyvsp[0].decimal);}
#line 2608 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 541 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) + (double) (yyvsp[0].entero);}
#line 2614 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 542 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) - (double) (yyvsp[0].entero);}
#line 2620 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 543 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) * (double) (yyvsp[0].entero);}
#line 2626 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 544 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) / (double) (yyvsp[0].entero);}
#line 2632 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 545 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-1].decimal);}
#line 2638 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 546 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = pow_num((yyvsp[-3].decimal), (yyvsp[-1].entero));}
#line 2644 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;


#line 2648 "proyect_bison.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 549 "proyect_bison.y" /* yacc.c:1906  */


//CÓDIGO EN C

//Main de todo el programa
int main(int argc,char **argv){
  //printf("+ / * - de Enteros y Decimales;  + y ^ de Cadenas;\n");
  ts = (TABLA_SIMBOLOS *) malloc(sizeof(TABLA_SIMBOLOS));
  init_tabla(ts);
  
  if(argc == 2)
    yyin = fopen(argv[1], "r");
  
  while(1)
    yyparse();
  
  free(ts);
  return 0;
}


void yyerror(char *s){
  fprintf (stderr, rojo"%s\n"cerrar, s);
}
