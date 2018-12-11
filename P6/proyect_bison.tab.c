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
    MENORQUE = 273,
    MAYORQUE = 274,
    IF = 275,
    SALTOLINE = 276,
    TIPO1 = 277,
    TIPO2 = 278,
    TIPO3 = 279
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

#line 154 "proyect_bison.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROYECT_BISON_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 171 "proyect_bison.tab.c" /* yacc.c:358  */

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
#define YYLAST   1046

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  199
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  456

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    80,    81,    82,    83,    84,    85,    96,
      97,    98,    99,   103,   104,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     129,   130,   131,   132,   133,   134,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   174,
     180,   186,   192,   198,   204,   210,   216,   222,   228,   234,
     240,   248,   254,   260,   266,   272,   278,   284,   290,   296,
     302,   308,   314,   323,   326,   329,   332,   335,   338,   341,
     344,   347,   350,   353,   356,   359,   362,   365,   380,   391,
     402,   413,   424,   435,   446,   457,   468,   479,   489,   499,
     519,   531,   543,   555,   567,   584,   591,   599,   609,   610,
     611,   612,   613,   615,   616,   619,   620,   621,   622,   623,
     624,   625,   626,   629,   630,   631,   632,   633,   634,   635,
     636,   639,   640,   641,   642,   645,   646,   647,   648,   650,
     651,   654,   655,   656,   657,   658,   669,   674,   679,   684,
     689,   703,   704,   709,   714,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   735,   736,   737,   738,   739,   740,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   751
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENTERO", "DECIMAL", "STRING",
  "VARIABLE", "MAS", "MENOS", "POR", "DIV", "PTOCOMA", "POW", "MODU",
  "PARABRE", "PARCIERRA", "IGUAL", "COMA", "MENORQUE", "MAYORQUE", "IF",
  "SALTOLINE", "TIPO1", "TIPO2", "TIPO3", "$accept", "input", "calc",
  "errores", "exp_if", "declaracion_variables", "asignar_variables",
  "exp_variable", "cadena_pow", "str", "exp_entera", "exp_decimal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279
};
# endif

#define YYPACT_NINF -16

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-16)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -15,   -16,     8,   -16,   -16,   -16,   -16,   -16,    39,
     220,     7,   263,    45,    80,    84,    98,   -16,   -16,   108,
     -16,   -16,   987,    86,   103,    -6,   118,   263,   -16,   -16,
     -16,   263,   263,   -16,   133,   280,    18,   241,   397,   630,
     263,    25,   265,   317,   102,   263,   263,   263,   263,   111,
     263,   263,   263,   263,   263,   135,   -16,   263,   263,   263,
     263,   140,   -16,   263,   263,   263,   263,   159,   263,   -16,
     263,   263,   263,   263,   162,   -16,   994,   500,   519,  1001,
     774,   406,    50,   795,  1036,   295,    10,    32,   310,   367,
     263,   263,   263,   -16,   -16,   -16,   -16,   209,   187,   239,
     222,   235,   163,   263,   -16,   172,   263,   -16,   176,   263,
     -16,   -16,   670,   -16,   -16,  1027,   125,   670,   -16,   -16,
    1027,   125,   -16,   155,   195,   -16,   -16,   -16,   155,   195,
     -16,   -16,   -16,   -16,   -16,   670,   -16,   -16,   670,   478,
     195,   478,   195,   -16,   670,   -16,   -16,   670,   -16,   478,
     155,   195,   478,   155,   195,   -16,   670,  1027,   125,   670,
    1027,   125,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   670,  1027,   125,   670,  1027,   125,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   199,   212,   215,   216,   218,   -16,
     263,   263,   263,   263,   263,   334,    91,   114,   345,   392,
     234,   263,   263,   236,   268,   268,   243,   268,   268,   254,
     263,   263,   256,   263,   263,   -16,  1008,    27,    94,    43,
     134,   -16,  1015,   109,   129,    64,   160,   -16,  1022,   171,
     193,    71,   165,   -16,   -16,   -16,   -16,   -16,   419,   324,
     352,   439,   896,   448,   363,   378,   458,   900,   491,   382,
     410,   509,   909,   550,   469,   505,   559,   913,   569,   537,
     573,   587,   922,   263,   263,   263,   263,   263,   263,   597,
     606,   926,   617,   639,   935,   268,   264,     5,    76,   583,
     170,   643,   268,   206,   656,   294,   674,   263,   699,   708,
     939,   717,   726,   948,   263,   745,   754,   952,   765,   786,
     961,   273,   285,   -16,   303,   -16,   304,   -16,   305,   -16,
     329,   335,   -16,   336,   -16,   340,   -16,   347,   -16,   351,
     359,   -16,   361,   -16,   366,   -16,   370,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   804,   813,   965,   -16,   -16,   -16,   -16,
     -16,   -16,   300,   683,   268,   696,   268,   -16,   268,     5,
     -16,   -16,   -16,   315,   730,   -16,   -16,   -16,   -16,   822,
     831,   974,   -16,   -16,   -16,   -16,   -16,   -16,   840,   850,
     978,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,    59,   141,     5,
     -16,   337,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,   -16,   271,   271,   -16,   391,   389,   271,   859,
     869,   271,   878,   271,   271,   271,   271,   271,   356,  1029,
    1029,   -16,   -16,   -16,   271,   887
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    11,     0,    10,     1,   175,   184,   171,   125,
       0,     0,     0,     0,     0,     0,     0,     3,     9,     0,
       6,     7,     0,     0,     0,     0,     0,     0,   176,   185,
     126,     0,     0,   125,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   134,   174,   182,   198,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,    16,     0,     0,
      17,    12,   128,   138,   137,   135,   136,   129,   146,   145,
     143,   144,   130,    45,    43,   151,   152,   131,    52,    50,
     155,   156,     8,   133,   159,   142,   170,   167,   150,    46,
      42,    53,    49,     5,   141,   168,   172,   149,   173,    44,
      41,    40,    51,    48,    47,     4,   139,   177,   190,   147,
     178,   191,   153,   179,   192,   157,   180,   193,    13,   160,
     181,   140,   194,   186,   148,   195,   187,   154,   196,   188,
     158,   197,   189,    14,     0,     0,     0,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,   124,   123,   122,   120,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    23,     0,    18,     0,    22,
       0,     0,    27,     0,    26,     0,    25,     0,    19,     0,
       0,    21,     0,    20,     0,    28,     0,    29,   132,    55,
      56,   161,    54,   165,    61,    62,   169,    60,   164,    58,
      59,   166,    57,   162,    64,    65,   183,    63,   163,    67,
      68,   199,    66,     0,     0,     0,    93,    96,   102,    94,
      97,   103,     0,     0,     0,     0,     0,    90,     0,     0,
      87,    91,    88,     0,     0,    84,    81,    85,    82,     0,
       0,     0,    99,    69,    72,   100,    70,    73,     0,     0,
       0,   105,    75,    78,   106,    76,    79,   117,    31,    30,
     111,   112,   118,    33,    32,   114,   113,   119,   116,   115,
      34,    35,    95,    98,   104,    92,    89,     0,     0,     0,
     170,   167,   168,   172,   173,    86,    83,   101,    71,    74,
     107,    77,    80,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
     178,   179,   180,   181,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   483,   289,   106,
      -3,   596
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,    17,    18,    19,    20,    21,   122,    36,    82,
      83,    84
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,    63,    64,    65,    66,    67,     4,    68,     5,    38,
       8,     6,     7,     8,     9,    69,    10,    51,    52,   277,
      11,    32,    12,     1,    79,    51,    52,   191,    13,    88,
      14,    15,    16,     2,    51,    52,   102,   100,   302,    57,
      58,   103,   115,   120,   125,   130,   104,   134,   303,   192,
      63,    64,    65,    66,   306,    27,    68,    57,    58,    40,
     157,   160,   163,   166,   307,   170,   366,   172,   175,   178,
     181,    63,    64,    65,    66,   315,   433,    68,    63,    64,
      65,    66,   324,   366,    68,   316,    41,   198,   125,   130,
      42,   367,   325,    51,    52,    53,    54,    55,    51,    52,
     219,    57,    58,   225,    43,   304,   231,    56,   264,    24,
      57,    58,    59,    60,    61,   305,    51,    52,    37,    44,
     311,    57,    58,   111,    62,    70,    71,    72,    73,    74,
     312,   265,   132,    78,    72,    73,    57,    58,    87,    75,
     313,    70,    71,    72,    73,   308,    99,    90,   368,   369,
     314,   114,   119,   124,   129,   309,   143,   137,   434,   140,
     142,   155,    51,   146,   148,   151,   154,    70,    71,    72,
      73,   317,    70,    71,    72,    73,   326,   366,    51,    52,
     168,   318,   320,   183,   215,   371,   327,   241,   246,   251,
     256,   261,   321,   221,    51,    52,   197,   227,   270,   273,
      57,    58,    57,   203,   322,   204,   205,   289,   292,   218,
     296,   299,   224,   366,   323,   230,    45,    46,    91,    92,
     233,   375,    50,    28,    29,   200,    30,   201,   202,    63,
      64,    65,    66,   234,    31,    68,   235,   236,   209,   237,
     210,   211,    70,    71,    72,    73,    57,    58,    57,    58,
     268,   212,   275,   213,   214,   206,    94,   207,   208,   282,
     241,   246,   251,   256,   261,   354,     6,     7,     8,    33,
     287,    10,   294,     8,     6,    34,   105,    12,   364,   436,
     276,   106,   277,   437,   380,   438,   107,    45,    46,    91,
      92,   389,    23,    50,   397,    93,   240,   245,   250,   255,
     260,   366,    45,    46,    91,    92,   398,   366,    50,   377,
     279,   281,   190,   284,   286,   415,    77,    63,    64,    65,
      66,    86,   366,    68,   399,   400,   401,   193,   108,    98,
     425,    51,    52,   109,   113,   118,   123,   128,   110,   329,
     136,    45,    46,    91,    92,   369,   145,    50,   150,   153,
     402,   263,    63,    64,    65,    66,   403,   404,    68,    57,
      58,   405,   266,   443,   444,   445,   446,   330,   406,   447,
      51,    52,   407,   454,    70,    71,    72,    73,   334,   196,
     408,   363,   409,   365,   194,    57,    58,   410,   374,    51,
      52,   411,   217,   335,    28,   223,     0,   339,   229,    70,
      71,    72,    73,   441,    63,    64,    65,    66,     0,   267,
      68,     0,    95,    45,    46,    91,    92,    57,    58,    50,
       0,   189,     0,     0,     0,   340,    45,    46,    91,    92,
     439,   440,    50,     0,   328,   442,     0,     0,   448,     0,
     449,   450,   451,   452,   453,     0,    63,    64,    65,    66,
       0,   455,    68,     0,   331,    45,    46,    91,    92,     0,
       0,    50,     0,   333,     0,    63,    64,    65,    66,     0,
     418,    68,   421,   336,   423,   424,    51,    52,     0,   239,
     244,   249,   254,   259,   344,    45,    22,    91,    92,     0,
       0,    50,     0,   278,   280,    35,   283,   285,    45,    46,
      91,    92,     0,     0,    50,     0,   338,    51,    52,     0,
      76,   185,    57,    58,    81,    85,    63,    64,    65,    66,
     345,     0,    68,    97,   341,   435,    57,    58,   112,   117,
     186,   127,     0,   133,   135,   138,   139,   141,     0,     0,
     144,   147,   149,   152,    51,    52,   156,   159,   162,   165,
       0,   169,   349,   171,   174,   177,   180,    45,    46,    91,
      92,     0,     0,    50,   362,   343,    63,    64,    65,    66,
       0,   373,    68,   195,   346,   127,    45,    46,    91,    92,
      57,    58,    50,     0,   348,     0,   216,     0,   350,   222,
     368,   369,   228,     0,    63,    64,    65,    66,   370,    26,
      68,     0,   351,     0,    45,    46,    91,    92,    39,     0,
      50,     0,   356,    63,    64,    65,    66,     0,     0,    68,
       0,   357,     0,    80,    45,    46,    91,    92,    89,     0,
      50,     0,   359,     0,     0,     0,   101,    70,    71,    72,
      73,   116,   121,   126,   131,    96,    63,    64,    65,    66,
     368,   369,    68,   417,   360,   420,     0,   422,   372,   158,
     161,   164,   167,   368,   369,     0,   173,   176,   179,   182,
       0,   376,     0,   238,   243,   248,   253,   258,     0,    91,
      92,   368,   369,    50,   269,   272,   199,   126,   131,   378,
     368,   369,     0,   288,   291,     0,   295,   298,   416,   220,
       0,     0,   226,   419,   369,   232,    45,    46,    91,    92,
       0,    94,    50,     0,   382,    63,    64,    65,    66,     0,
       0,    68,     0,   383,    45,    46,    91,    92,     0,     0,
      50,     0,   385,    63,    64,    65,    66,   368,   369,    68,
       0,   386,     0,     0,     0,   426,   238,   243,   248,   253,
     258,   353,    45,    46,    91,    92,     0,     0,    50,     0,
     391,    63,    64,    65,    66,     0,     0,    68,     0,   392,
     379,     0,    45,    46,    91,    92,     0,   388,    50,     0,
     394,    70,    71,    72,    73,   188,   242,   247,   252,   257,
     262,     0,     0,    63,    64,    65,    66,   271,   274,    68,
       0,   395,    63,    64,    65,    66,   290,   293,    68,   297,
     300,    45,    46,    91,    92,     0,     0,    50,     0,   412,
      63,    64,    65,    66,     0,     0,    68,     0,   413,    45,
      46,    91,    92,     0,     0,    50,     0,   427,    63,    64,
      65,    66,     0,     0,    68,     0,   428,    45,    46,    91,
      92,     0,     0,    50,     0,   430,     0,    63,    64,    65,
      66,     0,     0,    68,   355,   431,   443,   444,   445,   446,
       0,     0,   447,     0,   336,     0,   443,   444,   445,   446,
       0,     0,   447,   381,   341,   443,   444,   445,   446,     0,
     390,   447,     0,    95,   443,   444,   445,   446,     0,     0,
     447,     0,   346,    70,    71,    72,    73,    70,    71,    72,
      73,   332,     0,     0,     0,   337,    70,    71,    72,    73,
      70,    71,    72,    73,   342,     0,     0,     0,   347,    70,
      71,    72,    73,    70,    71,    72,    73,   352,     0,     0,
       0,   358,    70,    71,    72,    73,    70,    71,    72,    73,
     361,     0,     0,     0,   384,    70,    71,    72,    73,    70,
      71,    72,    73,   387,     0,     0,     0,   393,    70,    71,
      72,    73,    70,    71,    72,    73,   396,     0,     0,     0,
     414,    70,    71,    72,    73,    70,    71,    72,    73,   429,
       0,     0,     0,   432,    45,    46,    47,    48,    49,     0,
      50,    45,    46,    91,    92,   184,     0,    50,    63,    64,
      65,    66,   187,     0,    68,    45,    46,    91,    92,   301,
       0,    50,    45,    46,    91,    92,   310,     0,    50,    45,
      46,    91,    92,   319,     0,    50,    65,    66,   445,   446,
      68,     0,   447,    70,    71,    72,    73
};

static const yytype_int16 yycheck[] =
{
       3,     7,     8,     9,    10,    11,    21,    13,     0,    12,
       5,     3,     4,     5,     6,    21,     8,     7,     8,    14,
      12,    14,    14,    11,    27,     7,     8,    17,    20,    32,
      22,    23,    24,    21,     7,     8,    11,    40,    11,     7,
       8,    16,    45,    46,    47,    48,    21,    50,    21,    17,
       7,     8,     9,    10,    11,    16,    13,     7,     8,    14,
      63,    64,    65,    66,    21,    68,     7,    70,    71,    72,
      73,     7,     8,     9,    10,    11,    17,    13,     7,     8,
       9,    10,    11,     7,    13,    21,     6,    90,    91,    92,
       6,    15,    21,     7,     8,     9,    10,    11,     7,     8,
     103,     7,     8,   106,     6,    11,   109,    21,    17,     3,
       7,     8,     9,    10,    11,    21,     7,     8,    12,    11,
      11,     7,     8,    21,    21,     7,     8,     9,    10,    11,
      21,    17,    21,    27,     9,    10,     7,     8,    32,    21,
      11,     7,     8,     9,    10,    11,    40,    14,     7,     8,
      21,    45,    46,    47,    48,    21,    21,    51,    17,    53,
      54,    21,     7,    57,    58,    59,    60,     7,     8,     9,
      10,    11,     7,     8,     9,    10,    11,     7,     7,     8,
      21,    21,    11,    21,    21,    15,    21,   190,   191,   192,
     193,   194,    21,    21,     7,     8,    90,    21,   201,   202,
       7,     8,     7,    16,    11,    18,    19,   210,   211,   103,
     213,   214,   106,     7,    21,   109,     7,     8,     9,    10,
      21,    15,    13,     3,     4,    16,     6,    18,    19,     7,
       8,     9,    10,    21,    14,    13,    21,    21,    16,    21,
      18,    19,     7,     8,     9,    10,     7,     8,     7,     8,
      16,    16,    16,    18,    19,    16,    15,    18,    19,    16,
     263,   264,   265,   266,   267,   268,     3,     4,     5,     6,
      16,     8,    16,     5,     3,    12,    11,    14,    14,     8,
      12,    16,    14,    12,   287,    14,    21,     7,     8,     9,
      10,   294,     3,    13,    21,    15,   190,   191,   192,   193,
     194,     7,     7,     8,     9,    10,    21,     7,    13,    15,
     204,   205,    17,   207,   208,    15,    27,     7,     8,     9,
      10,    32,     7,    13,    21,    21,    21,    17,    11,    40,
      15,     7,     8,    16,    45,    46,    47,    48,    21,    15,
      51,     7,     8,     9,    10,     8,    57,    13,    59,    60,
      21,    17,     7,     8,     9,    10,    21,    21,    13,     7,
       8,    21,    17,     7,     8,     9,    10,    15,    21,    13,
       7,     8,    21,    17,     7,     8,     9,    10,    15,    90,
      21,   275,    21,   277,    17,     7,     8,    21,   282,     7,
       8,    21,   103,    15,     3,   106,    -1,    15,   109,     7,
       8,     9,    10,    14,     7,     8,     9,    10,    -1,    17,
      13,    -1,    15,     7,     8,     9,    10,     7,     8,    13,
      -1,    15,    -1,    -1,    -1,    15,     7,     8,     9,    10,
     433,   434,    13,    -1,    15,   438,    -1,    -1,   441,    -1,
     443,   444,   445,   446,   447,    -1,     7,     8,     9,    10,
      -1,   454,    13,    -1,    15,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,    -1,     7,     8,     9,    10,    -1,
     364,    13,   366,    15,   368,   369,     7,     8,    -1,   190,
     191,   192,   193,   194,    15,     7,     3,     9,    10,    -1,
      -1,    13,    -1,   204,   205,    12,   207,   208,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    15,     7,     8,    -1,
      27,    11,     7,     8,    31,    32,     7,     8,     9,    10,
      15,    -1,    13,    40,    15,   419,     7,     8,    45,    46,
      11,    48,    -1,    50,    51,    52,    53,    54,    -1,    -1,
      57,    58,    59,    60,     7,     8,    63,    64,    65,    66,
      -1,    68,    15,    70,    71,    72,    73,     7,     8,     9,
      10,    -1,    -1,    13,   275,    15,     7,     8,     9,    10,
      -1,   282,    13,    90,    15,    92,     7,     8,     9,    10,
       7,     8,    13,    -1,    15,    -1,   103,    -1,    15,   106,
       7,     8,   109,    -1,     7,     8,     9,    10,    15,     3,
      13,    -1,    15,    -1,     7,     8,     9,    10,    12,    -1,
      13,    -1,    15,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    -1,    27,     7,     8,     9,    10,    32,    -1,
      13,    -1,    15,    -1,    -1,    -1,    40,     7,     8,     9,
      10,    45,    46,    47,    48,    15,     7,     8,     9,    10,
       7,     8,    13,   364,    15,   366,    -1,   368,    15,    63,
      64,    65,    66,     7,     8,    -1,    70,    71,    72,    73,
      -1,    15,    -1,   190,   191,   192,   193,   194,    -1,     9,
      10,     7,     8,    13,   201,   202,    90,    91,    92,    15,
       7,     8,    -1,   210,   211,    -1,   213,   214,    15,   103,
      -1,    -1,   106,     7,     8,   109,     7,     8,     9,    10,
      -1,    15,    13,    -1,    15,     7,     8,     9,    10,    -1,
      -1,    13,    -1,    15,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,     7,     8,     9,    10,     7,     8,    13,
      -1,    15,    -1,    -1,    -1,    15,   263,   264,   265,   266,
     267,   268,     7,     8,     9,    10,    -1,    -1,    13,    -1,
      15,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
     287,    -1,     7,     8,     9,    10,    -1,   294,    13,    -1,
      15,     7,     8,     9,    10,    11,   190,   191,   192,   193,
     194,    -1,    -1,     7,     8,     9,    10,   201,   202,    13,
      -1,    15,     7,     8,     9,    10,   210,   211,    13,   213,
     214,     7,     8,     9,    10,    -1,    -1,    13,    -1,    15,
       7,     8,     9,    10,    -1,    -1,    13,    -1,    15,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,     7,     8,
       9,    10,    -1,    -1,    13,    -1,    15,     7,     8,     9,
      10,    -1,    -1,    13,    -1,    15,    -1,     7,     8,     9,
      10,    -1,    -1,    13,   268,    15,     7,     8,     9,    10,
      -1,    -1,    13,    -1,    15,    -1,     7,     8,     9,    10,
      -1,    -1,    13,   287,    15,     7,     8,     9,    10,    -1,
     294,    13,    -1,    15,     7,     8,     9,    10,    -1,    -1,
      13,    -1,    15,     7,     8,     9,    10,     7,     8,     9,
      10,    15,    -1,    -1,    -1,    15,     7,     8,     9,    10,
       7,     8,     9,    10,    15,    -1,    -1,    -1,    15,     7,
       8,     9,    10,     7,     8,     9,    10,    15,    -1,    -1,
      -1,    15,     7,     8,     9,    10,     7,     8,     9,    10,
      15,    -1,    -1,    -1,    15,     7,     8,     9,    10,     7,
       8,     9,    10,    15,    -1,    -1,    -1,    15,     7,     8,
       9,    10,     7,     8,     9,    10,    15,    -1,    -1,    -1,
      15,     7,     8,     9,    10,     7,     8,     9,    10,    15,
      -1,    -1,    -1,    15,     7,     8,     9,    10,    11,    -1,
      13,     7,     8,     9,    10,    11,    -1,    13,     7,     8,
       9,    10,    11,    -1,    13,     7,     8,     9,    10,    11,
      -1,    13,     7,     8,     9,    10,    11,    -1,    13,     7,
       8,     9,    10,    11,    -1,    13,     9,    10,     9,    10,
      13,    -1,    13,     7,     8,     9,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    21,    26,    21,     0,     3,     4,     5,     6,
       8,    12,    14,    20,    22,    23,    24,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    16,     3,     4,
       6,    14,    14,     6,    12,    32,    33,    34,    35,    36,
      14,     6,     6,     6,    11,     7,     8,     9,    10,    11,
      13,     7,     8,     9,    10,    11,    21,     7,     8,     9,
      10,    11,    21,     7,     8,     9,    10,    11,    13,    21,
       7,     8,     9,    10,    11,    21,    32,    33,    34,    35,
      36,    32,    34,    35,    36,    32,    33,    34,    35,    36,
      14,     9,    10,    15,    15,    15,    15,    32,    33,    34,
      35,    36,    11,    16,    21,    11,    16,    21,    11,    16,
      21,    21,    32,    33,    34,    35,    36,    32,    33,    34,
      35,    36,    32,    33,    34,    35,    36,    32,    33,    34,
      35,    36,    21,    32,    35,    32,    33,    34,    32,    32,
      34,    32,    34,    21,    32,    33,    34,    32,    34,    32,
      33,    34,    32,    33,    34,    21,    32,    35,    36,    32,
      35,    36,    32,    35,    36,    32,    35,    36,    21,    32,
      35,    32,    35,    36,    32,    35,    36,    32,    35,    36,
      32,    35,    36,    21,    11,    11,    11,    11,    11,    15,
      17,    17,    17,    17,    17,    32,    33,    34,    35,    36,
      16,    18,    19,    16,    18,    19,    16,    18,    19,    16,
      18,    19,    16,    18,    19,    21,    32,    33,    34,    35,
      36,    21,    32,    33,    34,    35,    36,    21,    32,    33,
      34,    35,    36,    21,    21,    21,    21,    21,    32,    33,
      34,    35,    36,    32,    33,    34,    35,    36,    32,    33,
      34,    35,    36,    32,    33,    34,    35,    36,    32,    33,
      34,    35,    36,    17,    17,    17,    17,    17,    16,    32,
      35,    36,    32,    35,    36,    16,    12,    14,    33,    34,
      33,    34,    16,    33,    34,    33,    34,    16,    32,    35,
      36,    32,    35,    36,    16,    32,    35,    36,    32,    35,
      36,    11,    11,    21,    11,    21,    11,    21,    11,    21,
      11,    11,    21,    11,    21,    11,    21,    11,    21,    11,
      11,    21,    11,    21,    11,    21,    11,    21,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    15,    32,    35,    36,    15,    15,    15,    15,
      15,    15,    33,    34,    14,    34,     7,    15,     7,     8,
      15,    15,    15,    33,    34,    15,    15,    15,    15,    32,
      35,    36,    15,    15,    15,    15,    15,    15,    32,    35,
      36,    15,    15,    15,    15,    15,    15,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    21,    15,    15,    15,    15,    15,    33,    34,     7,
      33,    34,    33,    34,    34,    15,    15,    15,    15,    15,
      15,    15,    15,    17,    17,    34,     8,    12,    14,    35,
      35,    14,    35,     7,     8,     9,    10,    13,    35,    35,
      35,    35,    35,    35,    17,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    27,    27,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      31,    31,    31,    31,    31,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    33,    33,    33,    33,
      33,    34,    34,    34,    34,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     2,     2,     4,     2,
       2,     1,     4,     3,     3,     3,     3,     3,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       6,     6,     6,     6,     6,     6,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     6,     6,     7,     6,     6,     7,     6,     6,
       7,     6,     6,     7,     6,     6,     7,     6,     6,     7,
       6,     6,     7,     6,     6,     7,     6,     6,     7,     6,
       6,     7,     6,     6,     7,     6,     6,     7,     4,     4,
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
#line 81 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %s\n"cerrar, (yyvsp[-2].string)); free((yyvsp[-2].string));}
#line 1646 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 82 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %s\n"cerrar, (yyvsp[-2].string)); free((yyvsp[-2].string));}
#line 1652 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 85 "proyect_bison.y" /* yacc.c:1646  */
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
#line 1668 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 97 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected arguments\n"cerrar);}
#line 1674 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected arguments\n"cerrar);}
#line 1680 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 99 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %s\n"cerrar, (yyvsp[-2].entero)?"TRUE":"FALSE");}
#line 1686 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 103 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %d\n"cerrar, (yyvsp[-2].entero)); }
#line 1692 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "proyect_bison.y" /* yacc.c:1646  */
    { printf(azul">> %f\n"cerrar, (yyvsp[-2].decimal));  }
#line 1698 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 113 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1704 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 114 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1710 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 115 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1716 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1722 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 117 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1728 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 118 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1734 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 119 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1740 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 120 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1746 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 121 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1752 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1758 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1764 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 124 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1770 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1776 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 126 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1782 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 127 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expects ;\n"cerrar);}
#line 1788 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 129 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
#line 1794 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 130 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
#line 1800 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects double\n"cerrar);}
#line 1806 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects double\n"cerrar);}
#line 1812 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects string\n"cerrar);}
#line 1818 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Incompatible declaration, expects string\n"cerrar);}
#line 1824 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 136 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1830 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 137 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1836 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1842 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 139 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Expected ;\n"cerrar);}
#line 1848 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 140 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1854 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 141 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1860 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 142 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1866 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 143 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1872 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 144 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1878 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 145 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1884 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1890 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1896 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 148 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1902 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1908 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1914 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 151 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1920 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 152 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1926 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 153 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Operation not supported\n"cerrar);}
#line 1932 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 155 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1938 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 156 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1944 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 157 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1950 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 158 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1956 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 159 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1962 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 160 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1968 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 161 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1974 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 162 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1980 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 163 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1986 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 164 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1992 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 165 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 1998 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 166 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 2004 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 167 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 2010 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 168 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 2016 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 169 "proyect_bison.y" /* yacc.c:1646  */
    { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
#line 2022 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 174 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].entero) < (yyvsp[-1].entero))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2033 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 180 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].entero) > (yyvsp[-1].entero))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2044 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 186 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-4].entero) == (yyvsp[-1].entero))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2055 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 192 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].entero) < (yyvsp[-1].decimal))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2066 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 198 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].entero) > (yyvsp[-1].decimal))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2077 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 204 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-4].entero) == (yyvsp[-1].decimal))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2088 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 210 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].decimal) < (yyvsp[-1].entero))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2099 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 216 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].decimal) > (yyvsp[-1].entero))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2110 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 222 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-4].decimal) == (yyvsp[-1].entero))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2121 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 228 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].decimal) < (yyvsp[-1].decimal))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2132 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 234 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-3].decimal) > (yyvsp[-1].decimal))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2143 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 240 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( (yyvsp[-4].decimal) == (yyvsp[-1].decimal))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2154 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 248 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) < tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2165 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 254 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) > tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2176 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 260 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-4].string)) == tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2187 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 266 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) < tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2198 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 272 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) > tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2209 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 278 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-4].string)) == tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2220 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 284 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) < tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2231 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 290 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) > tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2242 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 296 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-4].string)) == tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2253 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 302 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) < tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2264 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 308 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-3].string)) > tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2275 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 314 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  if( tam((yyvsp[-4].string)) == tam((yyvsp[-1].string)))
                                                                    (yyval.entero) = 1;
                                                                  else
                                                                    (yyval.entero) = 0;
                                                                }
#line 2286 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 323 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompVariable((yyvsp[-3].var), (yyvsp[-1].var), 1);
                                                                  }
#line 2294 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 326 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompVariable((yyvsp[-3].var), (yyvsp[-1].var), 2);
                                                                  }
#line 2302 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 329 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompVariable((yyvsp[-4].var), (yyvsp[-1].var), 3);
                                                                  }
#line 2310 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 332 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompEntero((yyvsp[-3].var), (yyvsp[-1].entero), 1, 1);
                                                                  }
#line 2318 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 335 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompEntero((yyvsp[-3].var), (yyvsp[-1].entero), 2, 1);
                                                                  }
#line 2326 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 338 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompEntero((yyvsp[-4].var), (yyvsp[-1].entero), 3, 1);
                                                                  }
#line 2334 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 341 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompEntero((yyvsp[-1].var), (yyvsp[-3].entero), 1, 0);
                                                                  }
#line 2342 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 344 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompEntero((yyvsp[-1].var), (yyvsp[-3].entero), 2, 0);
                                                                  }
#line 2350 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 347 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompEntero((yyvsp[-1].var), (yyvsp[-4].entero), 3, 0);
                                                                  }
#line 2358 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 350 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompDouble((yyvsp[-3].var), (yyvsp[-1].decimal), 1, 1);
                                                                  }
#line 2366 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 353 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompDouble((yyvsp[-3].var), (yyvsp[-1].decimal), 2, 1);
                                                                  }
#line 2374 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 356 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompDouble((yyvsp[-4].var), (yyvsp[-1].decimal), 3, 1);
                                                                  }
#line 2382 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 359 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompDouble((yyvsp[-1].var), (yyvsp[-3].decimal), 1, 0);
                                                                  }
#line 2390 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 362 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompDouble((yyvsp[-1].var), (yyvsp[-3].decimal), 2, 0);
                                                                  }
#line 2398 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 365 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                    (yyval.entero) = variableCompDouble((yyvsp[-1].var), (yyvsp[-4].decimal), 3, 0);
                                                                  }
#line 2406 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 380 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2422 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 391 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2438 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 402 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2454 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 413 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2470 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 424 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2486 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 435 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2502 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 446 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2518 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 457 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2534 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 468 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2550 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 479 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2565 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 489 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2580 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 499 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2595 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 519 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2612 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 531 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2629 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 543 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2646 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 555 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2663 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 567 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                              if(!existeVar(ts, (yyvsp[-4].string)))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[-4].string));
                                                              else{
                                                                copiarNodo(ts,(yyvsp[-4].string),(yyvsp[-2].var));
                                                              }
                                                            }
#line 2675 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 584 "proyect_bison.y" /* yacc.c:1646  */
    { 
                                    (yyval.var) = getVar(ts, (yyvsp[0].string));
                                    if((yyval.var) == NULL)
                                      printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[0].string));
                                    free((yyvsp[0].string));
                                  }
#line 2686 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 591 "proyect_bison.y" /* yacc.c:1646  */
    {
                                    (yyval.var) = getVar(ts, (yyvsp[0].string));
                                    if((yyval.var) == NULL)
                                      printf(amarillo"Undeclared variable << %s >>\n"cerrar, (yyvsp[0].string));
                                    else
                                      (yyval.var) = menosVariable(ts, (yyvsp[0].string));
                                    free((yyvsp[0].string));
                                  }
#line 2699 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 599 "proyect_bison.y" /* yacc.c:1646  */
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
#line 2714 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 609 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2720 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 610 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2726 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 611 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2732 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 612 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivVariable((yyvsp[-2].var), (yyvsp[0].var));}
#line 2738 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 613 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowVariable((yyvsp[-3].var), (yyvsp[-1].var));}
#line 2744 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 615 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableModVariable((yyvsp[-2].var),(yyvsp[0].var));}
#line 2750 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 616 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = getVarWithoutName((yyvsp[-1].var));}
#line 2756 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 619 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasEntero((yyvsp[-2].var), (yyvsp[0].entero));}
#line 2762 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 620 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasFloat((yyvsp[-2].var), (yyvsp[0].decimal));}
#line 2768 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 621 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2774 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 622 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2780 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 623 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasEntero((yyvsp[0].var), (yyvsp[-2].entero));}
#line 2786 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 624 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasFloat((yyvsp[0].var), (yyvsp[-2].decimal));}
#line 2792 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 625 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2798 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 626 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMasStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2804 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 629 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosEntero((yyvsp[-2].var), (yyvsp[0].entero), 1);}
#line 2810 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 630 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosFloat((yyvsp[-2].var), (yyvsp[0].decimal), 1);}
#line 2816 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 631 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2822 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 632 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[-2].var), (yyvsp[0].string), 1);}
#line 2828 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 633 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosEntero((yyvsp[0].var), (yyvsp[-2].entero), 0);}
#line 2834 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 634 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosFloat((yyvsp[0].var), (yyvsp[-2].decimal), 0);}
#line 2840 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 635 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2846 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 636 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableMenosStr((yyvsp[0].var), (yyvsp[-2].string), 0);}
#line 2852 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 639 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorEntero((yyvsp[-2].var), (yyvsp[0].entero));}
#line 2858 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 640 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorFloat((yyvsp[-2].var), (yyvsp[0].decimal));}
#line 2864 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 641 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorEntero((yyvsp[0].var), (yyvsp[-2].entero));}
#line 2870 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 642 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePorFloat((yyvsp[0].var), (yyvsp[-2].decimal));}
#line 2876 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 645 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivEntero((yyvsp[-2].var), (yyvsp[0].entero), 1);}
#line 2882 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 646 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivFloat((yyvsp[-2].var), (yyvsp[0].decimal), 1);}
#line 2888 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 647 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivEntero((yyvsp[0].var), (yyvsp[-2].entero), 0);}
#line 2894 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 648 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableDivFloat((yyvsp[0].var), (yyvsp[-2].decimal), 0);}
#line 2900 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 650 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableModuEntero((yyvsp[-2].var),(yyvsp[0].entero),0);}
#line 2906 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 651 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variableModuEntero((yyvsp[0].var),(yyvsp[-2].entero),0);}
#line 2912 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 654 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowEntero((yyvsp[-3].var), (yyvsp[-1].entero), 1);}
#line 2918 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 655 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowEntero((yyvsp[-1].var), (yyvsp[-3].entero), 0);}
#line 2924 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 656 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = variablePowFloat((yyvsp[-1].var), (yyvsp[-3].decimal));}
#line 2930 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 657 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = strPowVariable((yyvsp[-1].var), (yyvsp[-3].string));}
#line 2936 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 658 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.var) = strPowVariable((yyvsp[-1].var), (yyvsp[-3].string));}
#line 2942 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 669 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                            (yyval.string) = (char *) malloc((sizeof(char) * tam((yyvsp[-3].string)) * val_abs((yyvsp[-1].entero)))+1);
                                                            pow_cad((yyval.string), (yyvsp[-3].string), (yyvsp[-1].entero));
                                                            free((yyvsp[-3].string));
                                                          }
#line 2952 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 674 "proyect_bison.y" /* yacc.c:1646  */
    {
                                            (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                                            mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                                            free((yyvsp[-2].string)); free((yyvsp[0].string));
                                          }
#line 2962 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 679 "proyect_bison.y" /* yacc.c:1646  */
    {
                                            (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                                            mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                                            free((yyvsp[-2].string)); free((yyvsp[0].string));
                                          }
#line 2972 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 684 "proyect_bison.y" /* yacc.c:1646  */
    {
                                                                  (yyval.string) = (char *) malloc((sizeof(char) * tam((yyvsp[-3].string)) * val_abs((yyvsp[-1].entero)))+1);
                                                                  pow_cad((yyval.string), (yyvsp[-3].string), (yyvsp[-1].entero));
                                                                  free((yyvsp[-3].string));
                                                                }
#line 2982 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 689 "proyect_bison.y" /* yacc.c:1646  */
    {
                                            (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                                            mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                                            free((yyvsp[-2].string)); free((yyvsp[0].string));
                                          }
#line 2992 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 703 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[0].string); }
#line 2998 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 704 "proyect_bison.y" /* yacc.c:1646  */
    { 
                        (yyval.string) = (char*) malloc(sizeof(char) * ((tam((yyvsp[-2].string)) + tam((yyvsp[0].string))) + 1));
                        mystrcat((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                        free((yyvsp[-2].string)); free((yyvsp[0].string));
                      }
#line 3008 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 709 "proyect_bison.y" /* yacc.c:1646  */
    {
                          (yyval.string) = (char *) malloc(sizeof(char) * tam((yyvsp[-2].string)) + 1);
                          mystrrest((yyval.string), (yyvsp[-2].string), (yyvsp[0].string));
                          free((yyvsp[-2].string)); free((yyvsp[0].string));
                        }
#line 3018 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 714 "proyect_bison.y" /* yacc.c:1646  */
    { (yyval.string) = (yyvsp[-1].string);}
#line 3024 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 724 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[0].entero);}
#line 3030 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 725 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = -1 * (yyvsp[0].entero);}
#line 3036 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 726 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);}
#line 3042 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 727 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) - (yyvsp[0].entero);}
#line 3048 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 728 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) * (yyvsp[0].entero);}
#line 3054 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 729 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) / (yyvsp[0].entero);}
#line 3060 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 730 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-2].entero) % (yyvsp[0].entero);}
#line 3066 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 731 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (yyvsp[-1].entero);}
#line 3072 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 732 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.entero) = (int) pow_num((yyvsp[-3].entero), (yyvsp[-1].entero));}
#line 3078 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 735 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[0].decimal);}
#line 3084 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 736 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = -1.0 * (yyvsp[0].decimal);}
#line 3090 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 737 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) + (yyvsp[0].decimal);}
#line 3096 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 738 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) - (yyvsp[0].decimal);}
#line 3102 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 739 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) * (yyvsp[0].decimal);}
#line 3108 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 740 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) / (yyvsp[0].decimal);}
#line 3114 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 742 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) + (yyvsp[0].decimal);}
#line 3120 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 743 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) - (yyvsp[0].decimal);}
#line 3126 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 744 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) * (yyvsp[0].decimal);}
#line 3132 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 745 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) =(double) (yyvsp[-2].entero) / (yyvsp[0].decimal);}
#line 3138 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 746 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) + (double) (yyvsp[0].entero);}
#line 3144 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 747 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) - (double) (yyvsp[0].entero);}
#line 3150 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 748 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) * (double) (yyvsp[0].entero);}
#line 3156 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 749 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-2].decimal) / (double) (yyvsp[0].entero);}
#line 3162 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 750 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = (yyvsp[-1].decimal);}
#line 3168 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 751 "proyect_bison.y" /* yacc.c:1646  */
    {(yyval.decimal) = pow_num((yyvsp[-3].decimal), (yyvsp[-1].entero));}
#line 3174 "proyect_bison.tab.c" /* yacc.c:1646  */
    break;


#line 3178 "proyect_bison.tab.c" /* yacc.c:1646  */
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
#line 754 "proyect_bison.y" /* yacc.c:1906  */


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
