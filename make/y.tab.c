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
#line 1 "..\\main\\golang.y"

	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int yyparse();
	int success = 1;
	char *gofile;
	extern FILE *yyin;
    extern FILE *yyout;

/* Line 371 of yacc.c  */
#line 79 "y.tab.c"

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
     type_const = 258,
     CONST = 259,
     CASE = 260,
     DEFAULT = 261,
     IMPORT = 262,
     PACKAGE = 263,
     VAR = 264,
     RANGE = 265,
     MAP = 266,
     DELETE = 267,
     PRINT = 268,
     MAKE = 269,
     APPEND = 270,
     COPY = 271,
     IF = 272,
     SWITCH = 273,
     FALLTHROUGH = 274,
     ELSE = 275,
     TYPE = 276,
     FOR = 277,
     DO = 278,
     WHILE = 279,
     GOTO = 280,
     CONTINUE = 281,
     BREAK = 282,
     struct_const = 283,
     RETURN = 284,
     or_const = 285,
     and_const = 286,
     param_const = 287,
     eq_const = 288,
     rel_const = 289,
     shift_const = 290,
     inc_const = 291,
     point_const = 292,
     PUNC = 293,
     int_const = 294,
     float_const = 295,
     char_const = 296,
     id = 297,
     string = 298,
     enumeration_const = 299,
     storage_const = 300,
     qual_const = 301,
     enum_const = 302,
     DEFINE = 303,
     SIZEOF = 304,
     HEADER = 305
   };
#endif
/* Tokens.  */
#define type_const 258
#define CONST 259
#define CASE 260
#define DEFAULT 261
#define IMPORT 262
#define PACKAGE 263
#define VAR 264
#define RANGE 265
#define MAP 266
#define DELETE 267
#define PRINT 268
#define MAKE 269
#define APPEND 270
#define COPY 271
#define IF 272
#define SWITCH 273
#define FALLTHROUGH 274
#define ELSE 275
#define TYPE 276
#define FOR 277
#define DO 278
#define WHILE 279
#define GOTO 280
#define CONTINUE 281
#define BREAK 282
#define struct_const 283
#define RETURN 284
#define or_const 285
#define and_const 286
#define param_const 287
#define eq_const 288
#define rel_const 289
#define shift_const 290
#define inc_const 291
#define point_const 292
#define PUNC 293
#define int_const 294
#define float_const 295
#define char_const 296
#define id 297
#define string 298
#define enumeration_const 299
#define storage_const 300
#define qual_const 301
#define enum_const 302
#define DEFINE 303
#define SIZEOF 304
#define HEADER 305



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
#line 245 "y.tab.c"

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNRULES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    72,    69,     2,
      61,    62,    53,    51,    58,    52,    75,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    55,
      70,    59,    71,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    65,     2,     2,     2,
       2,     2,     2,    56,    67,    57,    73,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    17,    19,    21,
      26,    30,    34,    37,    41,    44,    46,    49,    52,    54,
      57,    59,    62,    64,    66,    68,    70,    72,    74,    76,
      82,    87,    90,    92,    94,    97,    99,   103,   105,   109,
     113,   116,   118,   121,   123,   125,   129,   131,   135,   138,
     144,   149,   152,   154,   158,   160,   164,   167,   169,   171,
     175,   180,   184,   189,   194,   198,   201,   203,   207,   210,
     212,   215,   217,   221,   223,   227,   230,   233,   235,   237,
     241,   243,   247,   252,   254,   258,   261,   263,   265,   268,
     270,   274,   279,   283,   287,   290,   295,   299,   303,   306,
     308,   310,   312,   314,   316,   318,   320,   324,   329,   333,
     336,   338,   343,   347,   351,   354,   356,   359,   365,   373,
     379,   385,   393,   403,   412,   421,   429,   438,   446,   454,
     461,   465,   468,   471,   475,   478,   480,   484,   486,   490,
     492,   494,   496,   502,   504,   506,   510,   512,   516,   518,
     522,   524,   528,   530,   534,   536,   540,   542,   546,   550,
     554,   556,   560,   562,   566,   570,   572,   576,   580,   584,
     586,   591,   593,   596,   599,   602,   607,   609,   611,   613,
     615,   617,   619,   621,   626,   631,   635,   639,   643,   646,
     648,   650,   652,   656,   658,   662,   664,   666,   668
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      77,     0,    -1,    50,    77,    -1,    48,   140,    77,    -1,
      78,    -1,    79,    -1,    78,    79,    -1,    80,    -1,    81,
      -1,    83,    99,    82,   116,    -1,    99,    82,   116,    -1,
      83,    99,   116,    -1,    99,   116,    -1,    83,    90,    55,
      -1,    83,    55,    -1,    81,    -1,    82,    81,    -1,    84,
      83,    -1,    84,    -1,    85,    83,    -1,    85,    -1,    86,
      83,    -1,    86,    -1,    45,    -1,     3,    -1,    87,    -1,
      96,    -1,   112,    -1,    46,    -1,    88,    42,    56,    89,
      57,    -1,    88,    56,    89,    57,    -1,    88,    42,    -1,
      28,    -1,    92,    -1,    89,    92,    -1,    91,    -1,    90,
      58,    91,    -1,    99,    -1,    99,    59,   107,    -1,    93,
      94,    55,    -1,    85,    93,    -1,    85,    -1,    86,    93,
      -1,    86,    -1,    95,    -1,    94,    58,    95,    -1,    99,
      -1,    99,    60,   125,    -1,    60,   125,    -1,    47,    42,
      56,    97,    57,    -1,    47,    56,    97,    57,    -1,    47,
      42,    -1,    98,    -1,    97,    58,    98,    -1,    42,    -1,
      42,    59,   125,    -1,   101,   100,    -1,   100,    -1,    42,
      -1,    61,    99,    62,    -1,   100,    63,   125,    64,    -1,
     100,    63,    64,    -1,   100,    61,   103,    62,    -1,   100,
      61,   106,    62,    -1,   100,    61,    62,    -1,    53,   102,
      -1,    53,    -1,    53,   102,   101,    -1,    53,   101,    -1,
      86,    -1,   102,    86,    -1,   104,    -1,   104,    58,    32,
      -1,   105,    -1,   104,    58,   105,    -1,    83,    99,    -1,
      83,   110,    -1,    83,    -1,    42,    -1,   106,    58,    42,
      -1,   122,    -1,    56,   108,    57,    -1,    56,   108,    58,
      57,    -1,   107,    -1,   108,    58,   107,    -1,    93,   110,
      -1,    93,    -1,   101,    -1,   101,   111,    -1,   111,    -1,
      61,   110,    62,    -1,   111,    63,   125,    64,    -1,    63,
     125,    64,    -1,   111,    63,    64,    -1,    63,    64,    -1,
     111,    61,   103,    62,    -1,    61,   103,    62,    -1,   111,
      61,    62,    -1,    61,    62,    -1,    65,    -1,   114,    -1,
     115,    -1,   116,    -1,   118,    -1,   119,    -1,   120,    -1,
      42,    60,   113,    -1,     5,   125,    60,   113,    -1,     6,
      60,   113,    -1,   121,    55,    -1,    55,    -1,    56,    82,
     117,    57,    -1,    56,   117,    57,    -1,    56,    82,    57,
      -1,    56,    57,    -1,   113,    -1,   117,   113,    -1,    17,
      61,   121,    62,   113,    -1,    17,    61,   121,    62,   113,
      20,   113,    -1,    18,    61,   121,    62,   113,    -1,    24,
      61,   121,    62,   113,    -1,    23,   113,    24,    61,   121,
      62,    55,    -1,    22,    61,   121,    55,   121,    55,   121,
      62,   113,    -1,    22,    61,   121,    55,   121,    55,    62,
     113,    -1,    22,    61,   121,    55,    55,   121,    62,   113,
      -1,    22,    61,   121,    55,    55,    62,   113,    -1,    22,
      61,    55,   121,    55,   121,    62,   113,    -1,    22,    61,
      55,   121,    55,    62,   113,    -1,    22,    61,    55,    55,
     121,    62,   113,    -1,    22,    61,    55,    55,    62,   113,
      -1,    25,    42,    55,    -1,    26,    55,    -1,    27,    55,
      -1,    29,   121,    55,    -1,    29,    55,    -1,   122,    -1,
     121,    58,   122,    -1,   124,    -1,   137,   123,   122,    -1,
      38,    -1,    59,    -1,   126,    -1,   126,    66,   121,    60,
     124,    -1,   124,    -1,   127,    -1,   126,    30,   127,    -1,
     128,    -1,   127,    31,   128,    -1,   129,    -1,   128,    67,
     129,    -1,   130,    -1,   129,    68,   130,    -1,   131,    -1,
     130,    69,   131,    -1,   132,    -1,   131,    33,   132,    -1,
     133,    -1,   132,    70,   133,    -1,   132,    71,   133,    -1,
     132,    34,   133,    -1,   134,    -1,   133,    35,   134,    -1,
     135,    -1,   134,    51,   135,    -1,   134,    52,   135,    -1,
     136,    -1,   135,    53,   136,    -1,   135,    54,   136,    -1,
     135,    72,   136,    -1,   137,    -1,    61,   109,    62,   136,
      -1,   139,    -1,    36,   137,    -1,   138,   136,    -1,    49,
     137,    -1,    49,    61,   109,    62,    -1,    69,    -1,    53,
      -1,    51,    -1,    52,    -1,    73,    -1,    74,    -1,   140,
      -1,   139,    63,   121,    64,    -1,   139,    61,   141,    62,
      -1,   139,    61,    62,    -1,   139,    75,    42,    -1,   139,
      37,    42,    -1,   139,    36,    -1,    42,    -1,   142,    -1,
      43,    -1,    61,   121,    62,    -1,   122,    -1,   141,    58,
     122,    -1,    39,    -1,    41,    -1,    40,    -1,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    19,    19,    20,    21,    23,    24,    26,    27,    29,
      30,    31,    32,    34,    35,    37,    38,    40,    41,    42,
      43,    44,    45,    47,    49,    50,    51,    52,    54,    56,
      57,    58,    60,    62,    63,    65,    66,    68,    69,    71,
      73,    74,    75,    76,    78,    79,    81,    82,    83,    85,
      86,    87,    89,    90,    92,    93,    95,    96,    98,    99,
     100,   101,   102,   103,   104,   106,   107,   108,   109,   111,
     112,   114,   115,   117,   118,   120,   121,   122,   124,   125,
     127,   128,   129,   131,   132,   134,   135,   137,   138,   139,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   151,
     153,   154,   155,   156,   157,   158,   160,   161,   162,   164,
     165,   167,   168,   169,   170,   172,   173,   175,   176,   177,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     190,   191,   192,   193,   194,   196,   197,   199,   200,   202,
     203,   205,   206,   208,   210,   211,   213,   214,   216,   217,
     219,   220,   222,   223,   225,   226,   228,   229,   230,   231,
     233,   234,   236,   237,   238,   240,   241,   242,   243,   245,
     246,   248,   249,   250,   251,   252,   254,   254,   254,   254,
     254,   254,   256,   257,   258,   259,   260,   261,   262,   264,
     265,   266,   267,   269,   270,   272,   273,   274,   275
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "type_const", "CONST", "CASE", "DEFAULT",
  "IMPORT", "PACKAGE", "VAR", "RANGE", "MAP", "DELETE", "PRINT", "MAKE",
  "APPEND", "COPY", "IF", "SWITCH", "FALLTHROUGH", "ELSE", "TYPE", "FOR",
  "DO", "WHILE", "GOTO", "CONTINUE", "BREAK", "struct_const", "RETURN",
  "or_const", "and_const", "param_const", "eq_const", "rel_const",
  "shift_const", "inc_const", "point_const", "PUNC", "int_const",
  "float_const", "char_const", "id", "string", "enumeration_const",
  "storage_const", "qual_const", "enum_const", "DEFINE", "SIZEOF",
  "HEADER", "'+'", "'-'", "'*'", "'/'", "';'", "'{'", "'}'", "','", "'='",
  "':'", "'('", "')'", "'['", "']'", "'t'", "'?'", "'|'", "'^'", "'&'",
  "'<'", "'>'", "'%'", "'~'", "'!'", "'.'", "$accept", "program_unit",
  "translation_unit", "external_decl", "function_definition", "decl",
  "decl_list", "decl_specs", "storage_class_spec", "type_spec",
  "type_qualifier", "struct_or_union_spec", "struct_or_union",
  "struct_decl_list", "init_declarator_list", "init_declarator",
  "struct_decl", "spec_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_spec", "enumerator_list", "enumerator",
  "declarator", "direct_declarator", "pointer", "type_qualifier_list",
  "param_type_list", "param_list", "param_decl", "id_list", "initializer",
  "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "typedef_name", "stat", "labeled_stat",
  "exp_stat", "compound_stat", "stat_list", "selection_stat",
  "iteration_stat", "jump_stat", "exp", "assignment_exp",
  "assignment_operator", "conditional_exp", "const_exp", "logical_or_exp",
  "logical_and_exp", "inclusive_or_exp", "exclusive_or_exp", "and_exp",
  "equality_exp", "relational_exp", "shift_expression", "additive_exp",
  "mult_exp", "cast_exp", "unary_exp", "unary_operator", "postfix_exp",
  "primary_exp", "argument_exp_list", "consts", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    43,    45,    42,    47,    59,   123,   125,    44,    61,
      58,    40,    41,    91,    93,   116,    63,   124,    94,    38,
      60,    62,    37,   126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    84,    85,    85,    85,    85,    86,    87,
      87,    87,    88,    89,    89,    90,    90,    91,    91,    92,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   115,
     115,   116,   116,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   131,   131,   132,   132,   132,   132,
     133,   133,   134,   134,   134,   135,   135,   135,   135,   136,
     136,   137,   137,   137,   137,   137,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   141,   141,   142,   142,   142,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     2,     1,     3,     1,     3,     3,
       2,     1,     2,     1,     1,     3,     1,     3,     2,     5,
       4,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     3,     3,     2,     4,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       1,     4,     3,     3,     2,     1,     2,     5,     7,     5,
       5,     7,     9,     8,     8,     7,     8,     7,     7,     6,
       3,     2,     2,     3,     2,     1,     3,     1,     3,     1,
       1,     1,     5,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     3,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    32,    58,    23,    28,     0,     0,     0,    66,
       0,    99,     0,     4,     5,     7,     8,     0,    18,    20,
      22,    25,     0,    26,     0,    57,     0,    27,    51,     0,
     195,   197,   196,   189,   191,   198,     0,     0,   190,     2,
      69,    68,    65,     0,     1,     6,    14,     0,    35,    37,
      17,    19,    21,    31,     0,     0,    15,     0,     0,    12,
       0,     0,    56,     0,    54,     0,    52,     0,     0,   178,
     179,   177,     0,   176,   180,   181,     0,   135,   137,   141,
     144,   146,   148,   150,   152,   154,   156,   160,   162,   165,
     169,     0,   171,   182,     3,    70,    67,    59,    13,     0,
       0,     0,    11,     0,    41,    43,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,   110,   114,     0,   115,   100,   101,   102,     0,   103,
     104,   105,     0,    16,    10,    37,    78,    64,    77,     0,
      71,    73,     0,    61,   143,     0,   169,     0,     0,    50,
       0,   172,     0,   174,    86,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   140,     0,   173,   188,     0,
       0,     0,     0,    36,     0,    38,    80,     9,     0,    40,
      42,    30,    34,     0,     0,    44,    46,     0,     0,     0,
       0,     0,     0,     0,     0,   131,   132,   134,     0,     0,
     113,     0,   112,   116,   109,     0,     0,    75,    87,    76,
      89,    62,     0,     0,    63,    60,    49,    55,    53,     0,
       0,    87,    85,     0,   136,   145,     0,   147,   149,   151,
     153,   155,   159,   157,   158,   161,   163,   164,   166,   167,
     168,   138,   187,   185,   193,     0,     0,   186,    83,     0,
      29,    48,    39,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,   130,   133,   106,   111,    98,     0,     0,
      94,     0,    88,     0,     0,    72,    74,    79,   175,   170,
       0,     0,   184,   183,    81,     0,    45,    47,   107,     0,
       0,     0,     0,     0,     0,     0,    96,    90,    92,    97,
       0,    93,     0,   142,   194,    82,    84,   117,   119,     0,
       0,     0,     0,     0,     0,   120,    95,    91,     0,   129,
       0,     0,     0,     0,     0,     0,     0,   118,   128,   127,
       0,   125,     0,     0,     0,   121,   126,   124,   123,     0,
     122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    57,    58,    18,    19,
      20,    21,    22,   106,    47,    48,   107,   108,   194,   195,
      23,    65,    66,    24,    25,    26,    42,   278,   140,   141,
     142,   185,   259,   155,   279,   220,    27,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    77,   176,    78,   145,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   255,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -202
static const yytype_int16 yypact[] =
{
     546,  -202,  -202,  -202,  -202,  -202,    40,   142,   546,    62,
     -20,  -202,    50,   597,  -202,  -202,  -202,    57,    75,    75,
      75,  -202,    72,  -202,   623,   181,   -17,  -202,    31,    16,
    -202,  -202,  -202,  -202,  -202,  -202,  1158,   546,  -202,  -202,
    -202,  -202,    62,    36,  -202,  -202,  -202,   -43,  -202,   601,
    -202,  -202,  -202,    53,   376,   285,  -202,   623,    57,  -202,
      24,   690,   181,    16,    68,    18,  -202,  1194,  1230,  -202,
    -202,  -202,   393,  -202,  -202,  -202,    74,  -202,  -202,     2,
      99,    94,   109,   153,   171,    -8,   192,    91,    19,  -202,
     -10,  1158,   617,  -202,  -202,  -202,  -202,  -202,  -202,   -20,
     726,   623,  -202,   376,   376,   376,   319,  -202,   145,  1158,
     175,   188,   228,   234,   528,   244,   230,   264,   265,   762,
     273,  -202,  -202,   346,  -202,  -202,  -202,  -202,   446,  -202,
    -202,  -202,   -16,  -202,  -202,   276,  -202,  -202,   148,   277,
     286,  -202,   116,  -202,  -202,   281,  -202,   155,  1158,  -202,
      16,  -202,   393,  -202,   165,   291,  1158,  -202,  1158,  1158,
    1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,  1158,
    1158,  1158,  1158,  1158,  -202,  -202,  1158,  -202,  -202,   306,
     798,  1158,   313,  -202,   726,  -202,  -202,  -202,   562,  -202,
    -202,  -202,  -202,  1158,    83,  -202,   296,   297,   528,  1158,
    1158,   834,   343,  1158,   323,  -202,  -202,  -202,   117,   528,
    -202,   487,  -202,  -202,  -202,   570,   870,  -202,   -26,  -202,
     243,  -202,   251,   339,  -202,  -202,  -202,  -202,  -202,   321,
     575,   254,  -202,  1158,  -202,    99,   222,    94,   109,   153,
     171,    -8,   192,   192,   192,    91,    19,    19,  -202,  -202,
    -202,  -202,  -202,  -202,  -202,   130,    21,  -202,  -202,   203,
    -202,  -202,  -202,   145,  1158,   528,  -202,   138,   189,   906,
     136,   333,   201,  -202,  -202,  -202,  -202,  -202,   338,   344,
    -202,   341,   243,   315,   942,  -202,  -202,  -202,  -202,  -202,
    1158,  1158,  -202,  -202,  -202,   654,  -202,  -202,  -202,   528,
     528,   978,   166,  1014,  1158,   528,  -202,  -202,  -202,  -202,
     347,  -202,   348,  -202,  -202,  -202,  -202,   388,  -202,   528,
     204,  1050,  1086,   174,   211,  -202,  -202,  -202,   528,  -202,
     528,   528,   213,   528,   216,  1122,   355,  -202,  -202,  -202,
     528,  -202,   528,   528,   219,  -202,  -202,  -202,  -202,   528,
    -202
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,     3,  -202,   400,  -202,    10,    80,     1,  -202,   135,
      65,  -202,  -202,   311,  -202,   317,   -98,   -59,  -202,   154,
    -202,   361,   268,    -7,   -21,    22,  -202,   -58,  -202,   205,
    -202,  -178,  -202,   274,   -57,  -201,  -202,   -85,  -202,  -202,
      -1,   302,  -202,  -202,  -202,   -36,   -96,  -202,   -54,   -91,
    -202,   270,   271,   269,   287,   275,   279,   127,   280,   131,
     -67,   -14,  -202,  -202,   440,  -202,  -202
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      76,    17,   139,    43,   186,    62,   258,   144,   192,    17,
      49,    39,    98,   154,    17,    99,     3,   282,   197,    50,
      51,    52,     3,    59,   177,     3,   165,     1,   174,   202,
     282,    41,   158,     9,    56,   215,    76,   216,    17,   214,
      94,    10,   156,   213,    10,   189,   190,   146,   102,   175,
      44,   135,     2,   151,   153,   144,   134,   227,    64,    56,
     234,   138,   166,   167,    96,    56,   136,   133,   159,     4,
       5,     6,   171,   172,    40,   149,   150,   146,     1,   156,
     251,   219,    28,   208,   254,   293,   137,    63,   186,    11,
     192,   173,   135,   154,   144,   146,    29,   232,    97,     3,
     187,   196,   261,     2,   248,   249,   250,    95,     5,   103,
       9,   133,    46,   266,    53,     9,    76,   316,    10,   105,
       4,     5,     6,   236,   275,   281,   213,   148,    54,   101,
     160,   217,   156,   133,   146,   123,   157,   105,   262,   144,
      11,   263,   169,   170,   146,   256,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     218,   161,   144,   267,   268,   270,   289,   272,   105,   105,
     105,   105,   274,   297,   223,   156,   231,   162,   224,   146,
     298,    30,    31,    32,    33,    34,    35,     3,   291,   104,
       3,   303,   292,   312,   156,   314,   156,    62,     9,   186,
     299,     9,   146,    36,   164,   193,    10,   104,    43,   215,
     144,   216,   226,   150,   317,   318,   138,   105,     9,   146,
     325,   321,   163,   138,   156,   310,   230,   168,   216,   335,
     144,   138,   156,   302,   329,   198,   313,   218,   104,   104,
     104,   104,    60,   337,    61,   338,   339,   156,   341,   199,
     146,   300,   231,   105,     1,   346,   196,   347,   348,   156,
     294,   295,   156,   305,   350,   320,   330,   323,   324,   156,
     146,   156,   204,   336,   156,   340,   146,   156,   342,     2,
     156,   349,   290,   285,   138,   332,   334,   104,     1,   200,
     109,   110,   242,   243,   244,   201,     4,     5,     6,   344,
     246,   247,   111,   112,   283,   203,   284,   113,   114,   115,
     116,   117,   118,     2,   119,   230,    11,   216,     1,   205,
     206,    67,     1,   104,    30,    31,    32,   120,    34,    35,
       4,     5,     6,   209,    68,   100,    69,    70,    71,   221,
     121,    55,   122,     2,   222,   225,    72,     2,   252,     1,
      11,   109,   110,   233,    73,   257,   264,   265,    74,    75,
       4,     5,     6,   111,   112,     5,     6,   271,   113,   114,
     115,   116,   117,   118,     2,   119,   191,   309,   273,     1,
      11,   287,    67,   288,    11,    30,    31,    32,   120,    34,
      35,     4,     5,     6,   304,    68,     1,    69,    70,    71,
     306,   121,    55,   210,     2,   308,   307,    72,   328,   326,
     345,    11,   327,    45,   188,    73,   183,   296,   228,    74,
      75,     2,     5,     6,   147,   211,   229,   286,   235,    67,
     238,   237,    30,    31,    32,    33,    34,    35,   240,     5,
       6,    11,    68,   241,    69,    70,    71,    37,   245,   239,
       0,   109,   110,     0,    72,     0,     0,     0,    11,     0,
       0,     0,    73,   111,   112,     0,    74,    75,   113,   114,
     115,   116,   117,   118,     0,   119,     0,     0,     0,     0,
       0,     0,    67,     0,     0,    30,    31,    32,   120,    34,
      35,     0,   109,   110,     0,    68,     0,    69,    70,    71,
       0,   121,    55,   212,   111,   112,     0,    72,     0,   113,
     114,   115,   116,   117,   118,    73,   119,     0,     0,    74,
      75,     0,     0,    67,     0,     0,    30,    31,    32,   120,
      34,    35,     0,   109,   110,     0,    68,     0,    69,    70,
      71,     0,   121,    55,   276,   111,   112,     0,    72,     1,
     113,   114,   115,   116,   117,   118,    73,   119,     0,     0,
      74,    75,     0,     0,    67,     1,     0,    30,    31,    32,
     120,    34,    35,     1,     2,     0,     0,    68,     1,    69,
      70,    71,     0,   121,    55,     0,     0,     0,     3,    72,
       2,     4,     5,     6,     7,     0,     8,    73,     2,     9,
       1,    74,    75,     2,     1,     0,     0,    10,     5,     6,
       0,    11,     3,     0,     0,     4,     5,     6,     0,   260,
       4,     5,     6,     9,     0,     2,     1,    11,     9,     2,
       0,   215,   277,   216,     0,    11,   230,   277,   216,     3,
      11,     0,     4,     5,     6,     0,     4,     5,     6,     0,
       9,     2,     0,   178,   179,     0,     0,    55,    10,     0,
     100,     0,    11,     0,     0,     0,    11,     0,     4,     5,
       6,     0,     0,     0,     0,     0,     0,     0,   180,    55,
     181,     0,     0,     0,     0,     0,     0,     0,    11,     0,
      67,     0,   182,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,    68,     0,    69,    70,    71,     0,     0,
     184,   315,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    67,    74,    75,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,    68,
       0,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,   143,     0,     0,     0,     0,    73,
       0,     0,    67,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,    68,     0,    69,    70,    71,
       0,     0,   184,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,    67,    74,
      75,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,    68,     0,    69,    70,    71,     0,   207,     0,     0,
       0,     0,     0,    72,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,    67,    74,    75,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,    68,     0,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,    72,
     253,     0,     0,     0,     0,     0,     0,    73,     0,     0,
      67,    74,    75,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,    68,     0,    69,    70,    71,     0,   269,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    67,    74,    75,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,    68,
       0,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,   280,     0,     0,     0,     0,    73,
       0,     0,    67,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,    68,     0,    69,    70,    71,
       0,   301,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,    73,     0,     0,    67,    74,
      75,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,    68,     0,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,   311,     0,     0,     0,
       0,    73,     0,     0,    67,    74,    75,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,    68,     0,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,    72,
     319,     0,     0,     0,     0,     0,     0,    73,     0,     0,
      67,    74,    75,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,    68,     0,    69,    70,    71,     0,   322,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    67,    74,    75,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,    68,
       0,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,    72,   331,     0,     0,     0,     0,     0,     0,    73,
       0,     0,    67,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,    68,     0,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,    72,   333,     0,
       0,     0,     0,     0,     0,    73,     0,     0,    67,    74,
      75,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,    68,     0,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,    72,   343,     0,     0,     0,     0,     0,
       0,    73,     0,     0,    67,    74,    75,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,    68,     0,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
      67,    74,    75,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,    68,     0,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,    73,     0,     0,    67,    74,    75,    30,
      31,    32,    33,    34,    35,     0,     0,     0,     0,    68,
       0,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,    74,    75
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-202)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      36,     0,    60,    10,   100,    26,   184,    61,   106,     8,
      17,     8,    55,    72,    13,    58,    42,   218,   109,    18,
      19,    20,    42,    24,    91,    42,    34,     3,    38,   114,
     231,     9,    30,    53,    24,    61,    72,    63,    37,    55,
      37,    61,    58,   128,    61,   104,   105,    61,    49,    59,
       0,    58,    28,    67,    68,   109,    57,   148,    42,    49,
     156,    60,    70,    71,    42,    55,    42,    57,    66,    45,
      46,    47,    53,    54,     9,    57,    58,    91,     3,    58,
     176,   138,    42,   119,   180,    64,    62,    56,   184,    65,
     188,    72,    99,   152,   148,   109,    56,   154,    62,    42,
     101,   108,   193,    28,   171,   172,   173,    42,    46,    56,
      53,   101,    55,   198,    42,    53,   152,   295,    61,    54,
      45,    46,    47,   159,   209,   216,   211,    59,    56,    49,
      31,   138,    58,   123,   148,    55,    62,    72,    55,   193,
      65,    58,    51,    52,   158,   181,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     138,    67,   216,   199,   200,   201,   233,   203,   103,   104,
     105,   106,    55,   264,    58,    58,   154,    68,    62,   193,
     265,    39,    40,    41,    42,    43,    44,    42,    58,    54,
      42,    55,    62,   284,    58,   291,    58,   218,    53,   295,
      62,    53,   216,    61,    33,    60,    61,    72,   215,    61,
     264,    63,    57,    58,   299,   300,   215,   152,    53,   233,
     305,    55,    69,   222,    58,   283,    61,    35,    63,    55,
     284,   230,    58,   269,   319,    60,   290,   215,   103,   104,
     105,   106,    61,   328,    63,   330,   331,    58,   333,    61,
     264,    62,   230,   188,     3,   340,   263,   342,   343,    58,
      57,    58,    58,    62,   349,   301,    62,   303,   304,    58,
     284,    58,    42,    62,    58,    62,   290,    58,    62,    28,
      58,    62,    60,    32,   283,   321,   322,   152,     3,    61,
       5,     6,   165,   166,   167,    61,    45,    46,    47,   335,
     169,   170,    17,    18,    61,    61,    63,    22,    23,    24,
      25,    26,    27,    28,    29,    61,    65,    63,     3,    55,
      55,    36,     3,   188,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    60,    49,    59,    51,    52,    53,    62,
      55,    56,    57,    28,    58,    64,    61,    28,    42,     3,
      65,     5,     6,    62,    69,    42,    60,    60,    73,    74,
      45,    46,    47,    17,    18,    46,    47,    24,    22,    23,
      24,    25,    26,    27,    28,    29,    57,    62,    55,     3,
      65,    42,    36,    62,    65,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    61,    49,     3,    51,    52,    53,
      62,    55,    56,    57,    28,    64,    62,    61,    20,    62,
      55,    65,    64,    13,   103,    69,    99,   263,   150,    73,
      74,    28,    46,    47,    63,   123,   152,   222,   158,    36,
     161,   160,    39,    40,    41,    42,    43,    44,   163,    46,
      47,    65,    49,   164,    51,    52,    53,     7,   168,   162,
      -1,     5,     6,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    69,    17,    18,    -1,    73,    74,    22,    23,
      24,    25,    26,    27,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    -1,     5,     6,    -1,    49,    -1,    51,    52,    53,
      -1,    55,    56,    57,    17,    18,    -1,    61,    -1,    22,
      23,    24,    25,    26,    27,    69,    29,    -1,    -1,    73,
      74,    -1,    -1,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,     5,     6,    -1,    49,    -1,    51,    52,
      53,    -1,    55,    56,    57,    17,    18,    -1,    61,     3,
      22,    23,    24,    25,    26,    27,    69,    29,    -1,    -1,
      73,    74,    -1,    -1,    36,     3,    -1,    39,    40,    41,
      42,    43,    44,     3,    28,    -1,    -1,    49,     3,    51,
      52,    53,    -1,    55,    56,    -1,    -1,    -1,    42,    61,
      28,    45,    46,    47,    48,    -1,    50,    69,    28,    53,
       3,    73,    74,    28,     3,    -1,    -1,    61,    46,    47,
      -1,    65,    42,    -1,    -1,    45,    46,    47,    -1,    57,
      45,    46,    47,    53,    -1,    28,     3,    65,    53,    28,
      -1,    61,    62,    63,    -1,    65,    61,    62,    63,    42,
      65,    -1,    45,    46,    47,    -1,    45,    46,    47,    -1,
      53,    28,    -1,    36,    37,    -1,    -1,    56,    61,    -1,
      59,    -1,    65,    -1,    -1,    -1,    65,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    56,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      36,    -1,    75,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    -1,
      56,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    36,    73,    74,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    36,    73,    74,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    36,    73,
      74,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    36,    73,    74,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      36,    73,    74,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    36,    73,    74,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    36,    73,    74,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    36,    73,
      74,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    36,    73,    74,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      36,    73,    74,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    36,    73,    74,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    36,    73,    74,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    49,    -1,    51,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    36,    73,
      74,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    49,    -1,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    36,    73,    74,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      36,    73,    74,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    -1,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    36,    73,    74,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      -1,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    42,    45,    46,    47,    48,    50,    53,
      61,    65,    77,    78,    79,    80,    81,    83,    84,    85,
      86,    87,    88,    96,    99,   100,   101,   112,    42,    56,
      39,    40,    41,    42,    43,    44,    61,   140,   142,    77,
      86,   101,   102,    99,     0,    79,    55,    90,    91,    99,
      83,    83,    83,    42,    56,    56,    81,    82,    83,   116,
      61,    63,   100,    56,    42,    97,    98,    36,    49,    51,
      52,    53,    61,    69,    73,    74,   121,   122,   124,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    77,    86,   101,    62,    55,    58,
      59,    82,   116,    56,    85,    86,    89,    92,    93,     5,
       6,    17,    18,    22,    23,    24,    25,    26,    27,    29,
      42,    55,    57,    82,   113,   114,   115,   116,   117,   118,
     119,   120,   121,    81,   116,    99,    42,    62,    83,   103,
     104,   105,   106,    64,   124,   125,   137,    97,    59,    57,
      58,   137,    61,   137,    93,   109,    58,    62,    30,    66,
      31,    67,    68,    69,    33,    34,    70,    71,    35,    51,
      52,    53,    54,    72,    38,    59,   123,   136,    36,    37,
      61,    63,    75,    91,    56,   107,   122,   116,    89,    93,
      93,    57,    92,    60,    94,    95,    99,   125,    60,    61,
      61,    61,   113,    61,    42,    55,    55,    55,   121,    60,
      57,   117,    57,   113,    55,    61,    63,    99,   101,   110,
     111,    62,    58,    58,    62,    64,    57,   125,    98,   109,
      61,   101,   110,    62,   122,   127,   121,   128,   129,   130,
     131,   132,   133,   133,   133,   134,   135,   135,   136,   136,
     136,   122,    42,    62,   122,   141,   121,    42,   107,   108,
      57,   125,    55,    58,    60,    60,   113,   121,   121,    55,
     121,    24,   121,    55,    55,   113,    57,    62,   103,   110,
      64,   125,   111,    61,    63,    32,   105,    42,    62,   136,
      60,    58,    62,    64,    57,    58,    95,   125,   113,    62,
      62,    55,   121,    55,    61,    62,    62,    62,    64,    62,
     103,    64,   125,   124,   122,    57,   107,   113,   113,    62,
     121,    55,    55,   121,   121,   113,    62,    64,    20,   113,
      62,    62,   121,    62,   121,    55,    62,   113,   113,   113,
      62,   113,    62,    62,   121,    55,   113,   113,   113,    62,
     113
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
      
/* Line 1792 of yacc.c  */
#line 1977 "y.tab.c"
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
#line 277 "..\\main\\golang.y"


int main(int argc, char **argv)
{
	if (argc > 1) {
    if(!(yyin = fopen(argv[1], "r")))
    {
      perror(argv[1]);
      return (1);
    }
  }
    gofile = argv[1];
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}
