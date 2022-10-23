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
	extern FILE *yyin;

/* Line 371 of yacc.c  */
#line 77 "y.tab.c"

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
     t_vtype = 258,
     t_constant = 259,
     t_case = 260,
     t_func = 261,
     t_import = 262,
     t_chan = 263,
     t_defer = 264,
     t_go = 265,
     t_interface = 266,
     t_default = 267,
     t_var = 268,
     t_range = 269,
     t_map = 270,
     t_package = 271,
     t_if = 272,
     t_select = 273,
     t_switch = 274,
     t_fallthrough = 275,
     t_else = 276,
     t_type = 277,
     t_for = 278,
     t_goto = 279,
     t_continue = 280,
     t_break = 281,
     t_return = 282,
     t_struct_const = 283,
     t_or_const = 284,
     t_and_const = 285,
     t_param_const = 286,
     t_eq_const = 287,
     t_rel_const = 288,
     t_shift_const = 289,
     t_inc_const = 290,
     t_point_const = 291,
     t_punc = 292,
     t_int_const = 293,
     t_float_const = 294,
     t_char_const = 295,
     t_id = 296,
     t_string = 297,
     t_short_dec = 298,
     t_open_br = 299,
     t_close_br = 300,
     t_sign = 301,
     t_comma = 302,
     t_equality = 303,
     t_open_paren = 304,
     t_close_paren = 305,
     t_open_sq = 306,
     t_close_sq = 307,
     t_bool = 308,
     t_rune = 309,
     t_semicolon = 310,
     t_blank_identifier = 311,
     t_dot = 312,
     t_colon = 313,
     t_true = 314,
     t_false = 315,
     t_short_expr = 316,
     t_make = 317,
     t_enter = 318,
     t_eof = 319,
     t_pointer = 320,
     t_ampersand = 321
   };
#endif
/* Tokens.  */
#define t_vtype 258
#define t_constant 259
#define t_case 260
#define t_func 261
#define t_import 262
#define t_chan 263
#define t_defer 264
#define t_go 265
#define t_interface 266
#define t_default 267
#define t_var 268
#define t_range 269
#define t_map 270
#define t_package 271
#define t_if 272
#define t_select 273
#define t_switch 274
#define t_fallthrough 275
#define t_else 276
#define t_type 277
#define t_for 278
#define t_goto 279
#define t_continue 280
#define t_break 281
#define t_return 282
#define t_struct_const 283
#define t_or_const 284
#define t_and_const 285
#define t_param_const 286
#define t_eq_const 287
#define t_rel_const 288
#define t_shift_const 289
#define t_inc_const 290
#define t_point_const 291
#define t_punc 292
#define t_int_const 293
#define t_float_const 294
#define t_char_const 295
#define t_id 296
#define t_string 297
#define t_short_dec 298
#define t_open_br 299
#define t_close_br 300
#define t_sign 301
#define t_comma 302
#define t_equality 303
#define t_open_paren 304
#define t_close_paren 305
#define t_open_sq 306
#define t_close_sq 307
#define t_bool 308
#define t_rune 309
#define t_semicolon 310
#define t_blank_identifier 311
#define t_dot 312
#define t_colon 313
#define t_true 314
#define t_false 315
#define t_short_expr 316
#define t_make 317
#define t_enter 318
#define t_eof 319
#define t_pointer 320
#define t_ampersand 321



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
#line 275 "y.tab.c"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   724

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  256
/* YYNRULES -- Number of states.  */
#define YYNSTATES  444

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    69,    67,     2,    68,     2,    70,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      23,    26,    29,    34,    40,    44,    51,    53,    57,    59,
      63,    66,    69,    72,    74,    77,    80,    83,    85,    86,
      90,    93,    95,    98,   100,   102,   104,   107,   112,   116,
     118,   120,   123,   125,   127,   131,   134,   136,   138,   140,
     142,   144,   146,   148,   150,   152,   154,   156,   158,   160,
     162,   164,   166,   171,   177,   182,   186,   190,   196,   203,
     207,   212,   217,   221,   226,   230,   234,   239,   243,   250,
     256,   261,   265,   269,   273,   277,   283,   287,   291,   294,
     297,   299,   305,   311,   313,   319,   325,   328,   331,   334,
     336,   339,   342,   344,   346,   349,   351,   355,   357,   359,
     363,   367,   369,   371,   373,   376,   380,   384,   389,   391,
     393,   395,   397,   399,   401,   403,   405,   407,   409,   413,
     417,   420,   423,   429,   433,   436,   439,   442,   444,   447,
     450,   453,   456,   460,   463,   466,   469,   473,   475,   477,
     479,   481,   485,   487,   491,   494,   497,   499,   503,   509,
     512,   514,   517,   521,   523,   525,   527,   529,   531,   534,
     539,   541,   544,   547,   550,   555,   557,   561,   563,   565,
     569,   573,   575,   577,   578,   580,   582,   584,   585,   587,
     590,   598,   602,   604,   606,   611,   620,   627,   631,   635,
     639,   642,   644,   647,   649,   653,   657,   660,   664,   666,
     670,   678,   688,   695,   701,   707,   713,   715,   718,   721,
     723,   726,   731,   736,   741,   745,   751,   758,   766,   771,
     773,   776,   779,   782,   784,   787,   792,   797,   799,   802,
     806,   808,   810,   812,   814,   816,   818,   825,   833,   842,
     844,   847,   852,   859,   864,   868,   870
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    72,    73,   165,    -1,    73,   165,    -1,
      72,   165,    -1,    74,    -1,    75,    -1,    76,    -1,   154,
      -1,   166,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   108,    50,    -1,     7,    49,    63,   108,    50,    -1,
       7,    41,    42,    -1,     6,    41,    49,    77,    50,    78,
      -1,    82,    -1,    77,    47,    82,    -1,    88,    -1,    85,
      87,    88,    -1,    79,    88,    -1,    80,    81,    -1,    49,
      50,    -1,    49,    -1,    80,    83,    -1,    84,    50,    -1,
      41,    87,    -1,    41,    -1,    -1,    41,    87,    47,    -1,
      87,    47,    -1,    63,    -1,    41,    87,    -1,    87,    -1,
      63,    -1,    86,    -1,    85,    86,    -1,     6,    49,    87,
      50,    -1,     6,    49,    50,    -1,     3,    -1,    41,    -1,
      90,    89,    -1,    45,    -1,    44,    -1,    90,    91,   165,
      -1,    90,   165,    -1,    92,    -1,   142,    -1,   112,    -1,
     110,    -1,   111,    -1,   124,    -1,   147,    -1,    97,    -1,
     138,    -1,   145,    -1,   134,    -1,   154,    -1,   152,    -1,
      94,    -1,   105,    -1,   166,    -1,    13,    41,    95,   137,
      -1,    13,    41,    95,   137,     3,    -1,    13,    41,    95,
      93,    -1,    41,    96,   137,    -1,    41,    95,   137,    -1,
      41,    96,   147,     3,   148,    -1,    13,    41,    95,   147,
       3,   148,    -1,    41,    96,    93,    -1,    41,   147,    95,
     137,    -1,    13,    41,    95,   151,    -1,    41,    96,   151,
      -1,    41,   147,    95,   151,    -1,    41,    96,   152,    -1,
      41,    95,   152,    -1,    13,    41,    95,   152,    -1,    13,
      41,   153,    -1,    41,    96,    62,    49,   153,    50,    -1,
      13,    41,    41,    95,   164,    -1,    13,    41,    95,   164,
      -1,    41,    96,   164,    -1,   105,    95,   109,    -1,   107,
      95,   137,    -1,    13,    41,   107,    -1,    13,    41,   107,
      95,   137,    -1,   109,    53,   109,    -1,    93,    53,   109,
      -1,     9,    97,    -1,     3,    48,    -1,    48,    -1,    47,
      41,    95,   137,    47,    -1,    47,    41,    95,    93,    47,
      -1,    43,    -1,    47,    41,    96,   137,    47,    -1,    47,
      41,    96,    93,    47,    -1,    41,    98,    -1,    99,   100,
      -1,    49,    50,    -1,    49,    -1,    99,   102,    -1,   101,
      50,    -1,   137,    -1,    63,    -1,   137,    47,    -1,    63,
      -1,   104,    34,   104,    -1,    41,    -1,    38,    -1,   106,
      57,   106,    -1,   105,    57,   106,    -1,    41,    -1,    97,
      -1,    65,    -1,    42,   165,    -1,    41,    42,   165,    -1,
     108,    42,   165,    -1,   108,    41,    42,   165,    -1,    38,
      -1,    39,    -1,    41,    -1,    42,    -1,    54,    -1,    56,
      -1,    97,    -1,   103,    -1,   107,    -1,   105,    -1,   143,
     137,   144,    -1,   143,    93,   144,    -1,    24,    41,    -1,
      41,    58,    -1,    19,   139,    55,   137,   113,    -1,    19,
     137,   113,    -1,    19,   113,    -1,   114,   123,    -1,   115,
     123,    -1,    44,    -1,   114,   165,    -1,   114,   116,    -1,
     114,   117,    -1,   115,   116,    -1,     5,   121,   122,    -1,
      12,   122,    -1,   119,   120,    -1,   137,    47,    -1,   119,
     137,    47,    -1,   137,    -1,   118,    -1,   137,    -1,    58,
      -1,   122,   129,   165,    -1,    45,    -1,   125,   130,   132,
      -1,   125,   130,    -1,   125,   132,    -1,   125,    -1,    17,
     140,   126,    -1,    17,   139,    55,   140,   126,    -1,   127,
     128,    -1,    44,    -1,    44,   165,    -1,   127,   129,   165,
      -1,    45,    -1,    91,    -1,    26,    -1,    25,    -1,   131,
      -1,   130,   131,    -1,    21,    17,   140,   126,    -1,   133,
      -1,   132,   133,    -1,    21,   126,    -1,    27,   137,    -1,
      27,   137,   135,   136,    -1,    47,    -1,   135,   137,    47,
      -1,   137,    -1,   109,    -1,   137,    46,   109,    -1,    41,
      61,    41,    -1,    92,    -1,    97,    -1,    -1,    93,    -1,
      59,    -1,    60,    -1,    -1,   137,    -1,    41,    35,    -1,
      23,   139,    55,   140,    55,   141,   126,    -1,    23,   140,
     126,    -1,    49,    -1,    50,    -1,    13,    41,   147,     3,
      -1,    13,    41,   147,     3,    95,   147,     3,   148,    -1,
      13,    41,   147,     3,    95,   151,    -1,    51,    38,    52,
      -1,    51,    41,    52,    -1,    51,    42,    52,    -1,    51,
      52,    -1,   146,    -1,   146,   147,    -1,   149,    -1,   149,
      47,   148,    -1,    44,   150,    45,    -1,    44,    45,    -1,
      44,   148,    45,    -1,   109,    -1,   150,    47,   109,    -1,
      62,    49,   147,     3,    47,   109,    50,    -1,    62,    49,
     147,     3,    47,   109,    47,    38,   109,    -1,    41,    51,
     109,    58,   109,    52,    -1,    41,    51,    58,   109,    52,
      -1,    41,    51,   109,    58,    52,    -1,    15,    51,     3,
      52,     3,    -1,   156,    -1,   150,     3,    -1,    41,    41,
      -1,    41,    -1,    41,   105,    -1,   155,   165,    41,   105,
      -1,   155,   165,    41,     3,    -1,   155,   165,    41,    41,
      -1,   155,   165,    41,    -1,    22,    41,    28,    44,   157,
      -1,    22,    41,    28,    44,   155,   157,    -1,    22,    41,
      28,    44,   165,   155,   157,    -1,    22,    41,    28,    63,
      -1,    45,    -1,    63,    45,    -1,    41,   159,    -1,   160,
     162,    -1,    44,    -1,   160,   161,    -1,   109,    58,   109,
      47,    -1,   109,    58,   158,    47,    -1,    63,    -1,   163,
      45,    -1,   109,    58,   109,    -1,    63,    -1,   158,    -1,
      55,    -1,    63,    -1,    64,    -1,   167,    -1,    22,    41,
      11,    44,   168,   169,    -1,    22,    41,    11,    44,   165,
     168,   169,    -1,    22,    41,    11,    63,    44,   165,   168,
     169,    -1,    97,    -1,    97,     3,    -1,    41,    49,     3,
      50,    -1,   168,   165,    41,    49,     3,    50,    -1,   168,
     165,    97,     3,    -1,   168,   165,    97,    -1,    45,    -1,
      63,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    34,    37,    40,    41,    45,    46,
      47,    50,    51,    54,    55,    59,    63,    64,    65,    69,
      70,    71,    75,    76,    77,    80,    81,    84,    85,    88,
      89,    93,    96,    99,   100,   101,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   148,   149,   153,   156,
     157,   158,   159,   161,   162,   163,   166,   169,   170,   173,
     174,   177,   182,   183,   187,   188,   191,   194,   195,   198,
     199,   203,   204,   207,   210,   211,   212,   213,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     230,   233,   236,   237,   238,   241,   242,   246,   247,   248,
     252,   253,   256,   259,   263,   266,   267,   270,   274,   275,
     278,   279,   284,   288,   289,   290,   291,   294,   295,   298,
     302,   303,   304,   308,   313,   314,   315,   319,   320,   324,
     328,   329,   332,   335,   336,   341,   342,   346,   348,   349,
     352,   355,   356,   357,   360,   361,   362,   363,   366,   367,
     370,   371,   374,   377,   380,   381,   382,   385,   386,   387,
     388,   391,   392,   395,   396,   398,   399,   400,   403,   404,
     407,   408,   411,   412,   413,   416,   419,   422,   423,   424,
     425,   426,   427,   428,   429,   432,   433,   434,   435,   438,
     439,   443,   446,   449,   450,   454,   455,   456,   459,   464,
     465,   468,   471,   472,   473,   476,   479,   480,   481,   484,
     485,   486,   487,   488,   489,   491,   492
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "t_vtype", "t_constant", "t_case",
  "t_func", "t_import", "t_chan", "t_defer", "t_go", "t_interface",
  "t_default", "t_var", "t_range", "t_map", "t_package", "t_if",
  "t_select", "t_switch", "t_fallthrough", "t_else", "t_type", "t_for",
  "t_goto", "t_continue", "t_break", "t_return", "t_struct_const",
  "t_or_const", "t_and_const", "t_param_const", "t_eq_const",
  "t_rel_const", "t_shift_const", "t_inc_const", "t_point_const", "t_punc",
  "t_int_const", "t_float_const", "t_char_const", "t_id", "t_string",
  "t_short_dec", "t_open_br", "t_close_br", "t_sign", "t_comma",
  "t_equality", "t_open_paren", "t_close_paren", "t_open_sq", "t_close_sq",
  "t_bool", "t_rune", "t_semicolon", "t_blank_identifier", "t_dot",
  "t_colon", "t_true", "t_false", "t_short_expr", "t_make", "t_enter",
  "t_eof", "t_pointer", "t_ampersand", "'+'", "'-'", "'*'", "'/'",
  "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC", "FUNC_PARAM",
  "FUNC_SECOND_PART", "FUNC_PARAM_SECOND", "FUNC_PARAM_SECOND_START",
  "FUNC_PARAM_SECOND_END", "FUNC_PARAM_FULFILL",
  "FUNC_PARAM_FULFILL_SECOND", "FUNC_PARAM_FULFILL_SECOND_END",
  "FUNC_RETURN_VALUE", "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT",
  "BODY", "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN",
  "DEFER", "ASSIGNMENT", "SHORT_ASSIGN", "FUNC_CALL", "PARAM",
  "PARAM_START", "PARAM_END", "PARAM_END_FULFILL", "PARAM_FULFILL",
  "SHIFT", "SHIFT_AC", "METHOD", "METHOD_FULFILL", "POINTER",
  "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH", "SWITCH_BODY",
  "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT",
  "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART", "CASE_STATEMENT",
  "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "MANY_RETURN_START", "MANY_RETURN_START_END", "EXPR",
  "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_BODY", "STRUCT_START", "STRUCT_END", "FIELD", "FIELD_BODY",
  "FIELD_START", "FIELD_FULFILL", "FIELD_END", "FIELD_END_FULFILL",
  "ST_EMBEDDED", "END_SYMBOLS", "INTERFACE", "INT_START", "INT_BODY",
  "INT_END", YY_NULL
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    43,    45,    42,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    76,    77,    77,    78,    78,
      78,    79,    79,    80,    80,    81,    82,    82,    82,    83,
      83,    83,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    95,
      95,    95,    95,    96,    96,    96,    97,    98,    98,    99,
      99,   100,   101,   101,   102,   102,   103,   104,   104,   105,
     105,   106,   106,   107,   108,   108,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   111,   112,   112,   112,   113,   113,   114,   114,   114,
     115,   115,   116,   117,   118,   119,   119,   120,   121,   121,
     122,   122,   123,   124,   124,   124,   124,   125,   125,   126,
     127,   127,   127,   128,   129,   129,   129,   130,   130,   131,
     132,   132,   133,   134,   134,   135,   135,   136,   137,   137,
     138,   139,   139,   139,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   149,   150,   150,
     151,   151,   152,   152,   152,   153,   154,   155,   155,   155,
     155,   155,   155,   155,   155,   156,   156,   156,   156,   157,
     157,   158,   159,   160,   160,   161,   161,   161,   162,   163,
     163,   164,   165,   165,   165,   166,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   169,   169
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     5,     3,     6,     1,     3,     1,     3,
       2,     2,     2,     1,     2,     2,     2,     1,     0,     3,
       2,     1,     2,     1,     1,     1,     2,     4,     3,     1,
       1,     2,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     5,     4,     3,     3,     5,     6,     3,
       4,     4,     3,     4,     3,     3,     4,     3,     6,     5,
       4,     3,     3,     3,     3,     5,     3,     3,     2,     2,
       1,     5,     5,     1,     5,     5,     2,     2,     2,     1,
       2,     2,     1,     1,     2,     1,     3,     1,     1,     3,
       3,     1,     1,     1,     2,     3,     3,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     5,     3,     2,     2,     2,     1,     2,     2,
       2,     2,     3,     2,     2,     2,     3,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     3,     5,     2,
       1,     2,     3,     1,     1,     1,     1,     1,     2,     4,
       1,     2,     2,     2,     4,     1,     3,     1,     1,     3,
       3,     1,     1,     0,     1,     1,     1,     0,     1,     2,
       7,     3,     1,     1,     4,     8,     6,     3,     3,     3,
       2,     1,     2,     1,     3,     3,     2,     3,     1,     3,
       7,     9,     6,     5,     5,     5,     1,     2,     2,     1,
       2,     4,     4,     4,     3,     5,     6,     7,     4,     1,
       2,     2,     2,     1,     2,     4,     4,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     6,     7,     8,     1,
       2,     4,     6,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,   216,     9,   245,     0,     0,    11,     0,    10,     0,
       1,   242,   243,   244,     0,     4,     3,    28,    14,     0,
       0,     0,     0,     0,     0,     2,    27,     0,    16,     0,
     114,     0,     0,     0,    12,     0,     0,     0,   228,    39,
      40,    26,    28,     0,   115,    13,     0,   116,     0,   249,
       0,     0,     0,   118,   119,   219,   121,   229,   192,   122,
     123,   243,   113,   124,   125,     0,   127,     0,   126,   208,
       0,     0,     0,   225,     0,    17,     0,    43,    23,    15,
       0,     0,     0,    35,    18,     0,   117,    99,    96,     0,
     250,     0,   255,   243,     0,   246,     0,   218,    99,   112,
     220,   230,     0,     0,     0,   120,     0,   178,     0,   217,
       0,   226,     0,     0,     0,    22,    20,    40,    31,    21,
      24,     0,    33,    36,     0,     0,     0,   183,   183,   183,
       0,     0,   111,    42,     0,    41,     0,    46,    59,    53,
      60,     0,    49,    50,    48,    51,   156,    56,    54,    47,
      55,   201,    52,    58,    57,    45,    61,     0,    98,   105,
      97,     0,   100,   178,   102,   247,   256,     0,   254,     0,
     108,   107,   106,   111,   110,   109,   193,     0,   129,     0,
       0,   128,   209,   224,   227,    38,     0,    32,    25,    30,
      19,     0,    88,     0,     0,   120,   185,   186,   181,   184,
     124,   127,   126,     0,     0,     0,   137,   134,     0,     0,
       0,     0,     0,     0,   130,   173,     0,    93,     0,    90,
       0,   131,     0,     0,     0,     0,     0,     0,     0,   200,
      44,     0,     0,     0,     0,   154,   167,   155,   170,   202,
     251,   101,   104,    99,   253,   248,    87,    86,   179,   222,
     223,   221,    37,    29,     0,     0,     0,    84,     0,    77,
       0,   187,   160,   157,     0,     0,     0,   152,   139,   140,
     135,   138,   141,   136,   133,     0,   187,   191,   175,     0,
      89,     0,   108,   107,   121,     0,     0,   180,   120,    66,
      75,   120,     0,    69,    65,     0,    72,    74,   241,    81,
       0,   197,   198,   199,     0,    82,    83,   187,   172,   168,
     153,     0,   171,     0,     0,     0,     0,    64,    62,     0,
      71,    76,    80,     0,   194,     0,   161,   166,   165,   163,
     164,   159,     0,   148,     0,     0,   149,   150,   143,     0,
       0,   174,   177,     0,     0,     0,     0,     0,   233,   231,
       0,     0,     0,    70,    73,     0,   252,     0,     0,    79,
       0,    63,     0,    85,     0,   158,   162,   144,   147,   142,
     145,     0,   132,     0,   176,     0,     0,     0,     0,   213,
     214,     0,   237,     0,   234,   232,     0,     0,     0,     0,
      67,   203,   169,     0,    68,     0,   196,   146,   151,   120,
     188,     0,    92,    91,    95,    94,   212,     0,   238,     0,
      78,   206,     0,     0,     0,   215,     0,   189,   190,   120,
     239,     0,     0,   207,   205,   204,   195,   235,   236,     0,
       0,   210,     0,   211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    37,    89,    90,    91,
     129,    38,   130,   131,    92,    93,    51,    94,   145,    95,
     340,   147,   209,   148,   233,   234,    73,    98,    99,   170,
     171,   172,    74,    75,    76,    77,    78,    32,   173,   152,
     153,   154,   217,   218,   219,   278,   279,   343,   344,   377,
     345,   348,   280,   155,   156,   318,   274,   341,   381,   245,
     246,   247,   248,   157,   289,   351,   118,   158,   214,   215,
     411,   159,    80,   188,   160,   161,   162,   400,   401,    81,
     306,   163,   269,   164,    82,    11,    83,   308,   359,   360,
     394,   395,   396,   309,   104,   166,    13,    61,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -258
static const yytype_int16 yypact[] =
{
     326,    11,   330,   114,   124,    34,   275,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,   156,   192,  -258,   128,  -258,   110,
    -258,  -258,  -258,  -258,   275,  -258,  -258,   208,  -258,   219,
     275,   -10,   222,   -18,   131,  -258,    96,   -28,  -258,   275,
    -258,   363,   245,   275,  -258,   210,   209,   422,  -258,  -258,
    -258,  -258,   208,   113,  -258,  -258,   275,  -258,   249,   320,
     293,   238,   275,   282,  -258,   133,  -258,  -258,  -258,  -258,
    -258,   295,  -258,   294,  -258,   321,   327,   357,  -258,  -258,
     606,    40,   313,  -258,   628,  -258,   345,  -258,   319,  -258,
     359,     8,   165,  -258,  -258,   302,  -258,    25,  -258,   544,
    -258,   238,  -258,   376,   378,  -258,   293,   129,   393,  -258,
     327,  -258,   276,   382,   382,   178,   336,   387,   175,  -258,
     606,  -258,   397,   313,    22,  -258,  -258,    96,   396,  -258,
    -258,   405,   379,  -258,   359,   415,   417,   368,   403,   368,
     421,   606,   189,  -258,   159,  -258,   275,  -258,  -258,   294,
      66,    82,  -258,  -258,  -258,  -258,   444,  -258,  -258,  -258,
    -258,   418,  -258,  -258,  -258,  -258,  -258,   416,  -258,   420,
    -258,   423,  -258,  -258,   257,  -258,  -258,   425,   469,   238,
    -258,  -258,  -258,   426,  -258,  -258,  -258,   606,  -258,   606,
     606,  -258,  -258,    98,  -258,  -258,   431,   437,  -258,  -258,
    -258,   426,  -258,    55,   447,   211,  -258,  -258,  -258,   436,
     221,    66,    82,   387,   439,   448,  -258,  -258,   121,    12,
     346,   443,   450,   448,  -258,   298,   454,  -258,   455,  -258,
     441,  -258,   466,   634,   462,    82,   456,   457,   458,  -258,
    -258,   471,   606,   606,   107,   444,  -258,   470,  -258,  -258,
    -258,  -258,  -258,    45,  -258,  -258,  -258,  -258,  -258,  -258,
     129,   327,  -258,  -258,   463,    82,   481,    82,   512,  -258,
     112,   500,   275,  -258,   337,   606,   459,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,   606,   500,  -258,  -258,   606,
    -258,   101,   -31,   279,   458,   606,   467,  -258,   248,   475,
    -258,   235,   477,   436,   475,   526,  -258,  -258,  -258,  -258,
     550,  -258,  -258,  -258,    82,  -258,   475,   500,  -258,  -258,
     470,   448,  -258,   478,   528,   492,   485,   436,    36,   533,
    -258,  -258,  -258,   606,    82,   448,  -258,  -258,  -258,  -258,
    -258,  -258,   275,  -258,   606,   459,   383,  -258,   374,   346,
     489,  -258,   385,   606,   606,   488,   572,   578,  -258,  -258,
     600,   103,   501,   475,  -258,   448,  -258,   495,   504,  -258,
     418,  -258,   501,   475,    90,  -258,  -258,  -258,   388,   374,
    -258,   275,  -258,   653,  -258,    63,   390,   247,   402,  -258,
    -258,   498,   506,   494,  -258,  -258,   508,   552,   507,   525,
    -258,   511,  -258,   558,  -258,   559,  -258,  -258,  -258,   173,
     475,   448,  -258,  -258,  -258,  -258,  -258,   659,  -258,   521,
    -258,  -258,   527,   373,   501,  -258,   501,  -258,  -258,   278,
     524,   529,   606,  -258,  -258,  -258,  -258,  -258,  -258,   361,
     535,  -258,   606,  -258
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,   570,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,   532,  -258,  -258,  -258,   486,   164,   -43,  -258,  -258,
     482,   236,   -73,  -258,   -39,   289,   -30,  -258,  -258,  -258,
    -258,  -258,  -258,   483,   -59,   340,   -71,   556,   -47,  -258,
    -258,  -258,  -218,  -258,  -258,   375,  -258,  -258,  -258,  -258,
    -258,   251,   384,  -258,  -258,  -207,  -258,  -258,   323,  -258,
     356,   360,  -234,  -258,  -258,  -258,   -87,  -258,   312,  -136,
    -258,  -258,  -258,   484,  -258,  -258,  -141,  -183,  -258,   223,
    -257,   -24,   262,   213,   534,  -258,   -23,   191,  -258,  -258,
    -258,  -258,  -258,  -248,    -1,   285,  -258,   -46,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -241
static const yytype_int16 yytable[] =
{
      79,   235,   284,   223,    25,    26,   110,   116,   273,   330,
     175,    49,   174,   322,   101,    59,   287,   275,   332,    52,
     249,   311,    53,    35,   151,    49,    45,  -118,   167,    40,
      59,    29,    30,   117,    20,   109,   150,    79,    54,   371,
       1,     2,    57,   119,    60,    46,    84,   126,   323,   127,
       3,   220,    14,   364,   225,    96,     4,   277,   226,   121,
     179,   106,   268,    50,   235,   149,   212,   212,   212,   226,
     264,   128,   195,   192,   178,   168,    59,   369,   211,   211,
     211,   122,   190,   109,   109,   226,   322,   120,   255,    21,
     213,   200,   213,   305,   165,   168,   265,    22,    23,    49,
     194,   259,   241,   229,   226,   202,   144,   210,   210,   210,
     412,   242,   243,   241,   229,   226,   187,   406,   264,    86,
      72,    33,   122,   113,   317,   329,   275,   264,   375,   241,
     229,   382,   267,   276,   261,   335,  -120,    50,    34,   260,
     256,   144,   257,   258,   227,   240,   299,   304,   228,   229,
     350,   272,   326,   265,   144,    18,   316,    87,   402,   241,
     229,   303,    88,   109,   266,    19,   277,  -107,    49,    29,
      30,    86,   242,   243,   107,    47,    21,    72,   108,   328,
    -120,   365,   108,   296,    22,    23,  -111,   117,   346,   404,
    -111,    31,   226,   327,    48,   315,   310,   236,   349,   267,
     237,   238,   352,   151,   428,    27,    50,  -107,   427,   300,
     307,   239,  -107,    10,   226,   150,   422,   281,    10,   117,
     397,   190,   108,   363,   213,   186,   325,   108,   333,   397,
    -111,   266,   227,   405,    28,  -111,   228,   229,   108,   213,
     230,   435,   331,   436,   149,  -107,   373,   231,   355,    36,
     232,    58,   353,    62,   227,   132,   134,   378,   228,   229,
     108,    39,   144,    42,    43,    21,   386,   388,  -111,  -107,
     213,   336,    44,    22,    23,   353,  -182,   151,  -112,   358,
     385,   387,  -107,   102,   108,    12,   357,    56,   196,   150,
      12,   197,  -111,    21,   414,   374,   410,   108,    97,   357,
     187,   103,    23,   190,   252,  -111,   117,   117,   151,   391,
     296,   135,  -107,   393,   180,   136,  -108,   181,   149,   137,
     150,   138,   358,   100,     4,   139,   140,   108,   108,   141,
      21,   312,     1,     2,    58,  -111,  -111,  -120,    22,    23,
     111,   376,     3,   142,   190,   288,   135,   143,     4,   149,
     136,  -112,    79,   144,   137,   112,   138,    21,    67,     4,
     139,   140,   337,   338,   141,    22,    23,    72,    21,   125,
     430,    15,    16,   208,   208,   208,    71,    23,   142,    17,
     408,   204,   339,   135,   113,   439,   186,   136,   144,   187,
     216,   137,   190,   138,   124,   443,     4,   139,   140,   337,
     338,   141,    72,    87,    42,    43,    63,    64,   440,   205,
      66,   441,  -187,    55,   114,   142,   204,    68,   434,   177,
     120,   176,    69,   183,    70,   144,   199,   206,   207,   190,
     380,   190,   384,    72,   190,   407,   190,   413,   193,    72,
     189,    63,    64,   168,   205,    66,   -34,   216,   190,   415,
     221,   222,    68,   184,   185,   198,   201,    69,   203,    70,
      63,    64,   224,    65,    66,   244,   250,    67,    72,   144,
    -103,    68,   254,   251,   253,   108,    69,    21,    70,   292,
      64,   262,   293,   294,   263,    71,    23,    72,   270,   187,
      68,   321,   272,   239,   271,    69,   291,    70,   285,   295,
      63,    64,   290,   301,    66,   286,    72,   297,   311,   312,
     313,    68,   314,   144,   324,   334,    69,   347,    70,    63,
      64,   190,   301,    66,   302,   356,   361,    72,   366,   362,
      68,   367,   144,   368,   370,    69,   372,    70,    63,    64,
     389,   115,    66,   326,   383,   399,    72,   403,   358,    68,
     416,  -240,   417,   418,    69,   419,    70,   420,   424,   206,
     207,   425,   426,    63,    64,    72,   115,    66,   432,   399,
     421,   437,   433,   442,    68,    24,   438,   146,   133,    69,
     354,    70,    63,    64,    85,   115,    66,    41,    63,    64,
      72,   115,    66,    68,   282,   182,   379,   342,    69,    68,
      70,   319,   191,   283,    69,   320,    70,   169,   431,    72,
      63,    64,   326,   115,    66,    72,    63,    64,   123,   115,
      66,    68,   423,   398,   390,     0,    69,    68,    70,     0,
       0,     0,    69,     0,    70,     0,   295,    72,    63,    64,
       0,   115,    66,    72,    63,    64,     0,   115,    66,    68,
       0,     0,     0,     0,    69,    68,    70,     0,     0,     0,
      69,     0,    70,   392,     0,    72,    63,    64,     0,    65,
      66,    72,    63,    64,     0,   298,    66,    68,     0,     0,
       0,     0,    69,    68,    70,     0,     0,     0,    69,     0,
      70,    63,    64,    72,   409,    66,     0,    63,    64,    72,
     429,    66,    68,     0,     0,     0,     0,    69,    68,    70,
       0,     0,     0,    69,     0,    70,     0,     0,    72,     0,
       0,     0,     0,     0,    72
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-258)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      47,   142,   220,   139,     5,     6,    65,    80,   215,   266,
     101,     3,    99,   247,    60,    45,   223,     5,   266,    47,
     161,    52,    50,    24,    95,     3,    44,    58,     3,    30,
      60,    41,    42,    80,     0,    65,    95,    84,    39,     3,
       6,     7,    43,     3,    45,    63,    47,    90,     3,    41,
      16,   138,    41,   310,   141,    56,    22,    45,     3,    82,
     106,    62,   203,    41,   205,    95,   137,   138,   139,     3,
      15,    63,    50,   120,   104,    50,   106,   325,   137,   138,
     139,    82,    46,   113,   114,     3,   320,    47,   179,    55,
     137,   134,   139,   234,    95,    50,    41,    63,    64,     3,
     123,     3,    47,    48,     3,   135,    51,   137,   138,   139,
      47,   150,   151,    47,    48,     3,    53,   374,    15,     6,
      65,    11,   123,    57,    17,   266,     5,    15,   335,    47,
      48,   349,   203,    12,   193,   271,     3,    41,    28,    41,
     187,    51,   189,   190,    43,   146,   233,   234,    47,    48,
     286,    44,    62,    41,    51,    41,   243,    44,   365,    47,
      48,   234,    49,   193,   203,    41,    45,    34,     3,    41,
      42,     6,   211,   212,    41,    44,    55,    65,    49,   266,
      47,   317,    49,   230,    63,    64,    57,   234,   275,   372,
      57,    63,     3,   266,    63,   242,   235,    38,   285,   270,
      41,    42,   289,   274,   411,    49,    41,    34,    35,   233,
     234,    52,    34,     0,     3,   274,   399,   218,     5,   266,
     361,    46,    49,   310,   271,    50,   265,    49,   267,   370,
      57,   270,    43,   374,    42,    57,    47,    48,    49,   286,
      51,   424,   266,   426,   274,    34,   333,    58,   295,    41,
      61,    41,   291,    44,    43,    91,    92,   344,    47,    48,
      49,    42,    51,    41,    42,    55,   353,   354,    57,    34,
     317,   272,    50,    63,    64,   314,    55,   348,    57,    44,
     353,   354,    34,    45,    49,     0,    51,    42,   124,   348,
       5,   127,    57,    55,    47,   334,   383,    49,    49,    51,
      53,    63,    64,    46,    47,    57,   353,   354,   379,   356,
     357,     9,    34,   360,    38,    13,    34,    41,   348,    17,
     379,    19,    44,     3,    22,    23,    24,    49,    49,    27,
      55,    52,     6,     7,    41,    57,    57,    58,    63,    64,
      45,   342,    16,    41,    46,    47,     9,    45,    22,   379,
      13,    57,   399,    51,    17,    34,    19,    55,    45,    22,
      23,    24,    25,    26,    27,    63,    64,    65,    55,    50,
     417,    41,    42,   137,   138,   139,    63,    64,    41,    49,
     381,    13,    45,     9,    57,   432,    50,    13,    51,    53,
      44,    17,    46,    19,    49,   442,    22,    23,    24,    25,
      26,    27,    65,    44,    41,    42,    38,    39,    47,    41,
      42,    50,    44,    50,    57,    41,    13,    49,    45,    41,
      47,    45,    54,    41,    56,    51,    47,    59,    60,    46,
      47,    46,    47,    65,    46,    47,    46,    47,    41,    65,
      53,    38,    39,    50,    41,    42,    50,    44,    46,    47,
     138,   139,    49,   113,   114,    50,    41,    54,    41,    56,
      38,    39,    41,    41,    42,    21,    50,    45,    65,    51,
      50,    49,     3,    50,    49,    49,    54,    55,    56,    38,
      39,    50,    41,    42,    47,    63,    64,    65,    41,    53,
      49,    21,    44,    52,    55,    54,    41,    56,    55,    58,
      38,    39,    48,    41,    42,    55,    65,    41,    52,    52,
      52,    49,    41,    51,    51,     3,    54,    58,    56,    38,
      39,    46,    41,    42,    62,    58,    49,    65,    50,     3,
      49,     3,    51,    41,    49,    54,     3,    56,    38,    39,
      52,    41,    42,    62,    55,    44,    65,    52,    44,    49,
      52,    45,    58,    45,    54,     3,    56,    50,    47,    59,
      60,     3,     3,    38,    39,    65,    41,    42,    47,    44,
      45,    47,    45,    38,    49,     5,    47,    95,    92,    54,
     291,    56,    38,    39,    52,    41,    42,    31,    38,    39,
      65,    41,    42,    49,   219,   112,   345,   274,    54,    49,
      56,   245,   118,   219,    54,   245,    56,    63,   417,    65,
      38,    39,    62,    41,    42,    65,    38,    39,    84,    41,
      42,    49,   399,   361,    52,    -1,    54,    49,    56,    -1,
      -1,    -1,    54,    -1,    56,    -1,    58,    65,    38,    39,
      -1,    41,    42,    65,    38,    39,    -1,    41,    42,    49,
      -1,    -1,    -1,    -1,    54,    49,    56,    -1,    -1,    -1,
      54,    -1,    56,    63,    -1,    65,    38,    39,    -1,    41,
      42,    65,    38,    39,    -1,    41,    42,    49,    -1,    -1,
      -1,    -1,    54,    49,    56,    -1,    -1,    -1,    54,    -1,
      56,    38,    39,    65,    41,    42,    -1,    38,    39,    65,
      41,    42,    49,    -1,    -1,    -1,    -1,    54,    49,    56,
      -1,    -1,    -1,    54,    -1,    56,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    72,    73,    74,    75,    76,
     154,   156,   166,   167,    41,    41,    42,    49,    41,    41,
       0,    55,    63,    64,    73,   165,   165,    49,    42,    41,
      42,    63,   108,    11,    28,   165,    41,    77,    82,    42,
     165,   108,    41,    42,    50,    44,    63,    44,    63,     3,
      41,    87,    47,    50,   165,    50,    42,   165,    41,    97,
     165,   168,    44,    38,    39,    41,    42,    45,    49,    54,
      56,    63,    65,    97,   103,   104,   105,   106,   107,   109,
     143,   150,   155,   157,   165,    82,     6,    44,    49,    78,
      79,    80,    85,    86,    88,    90,   165,    49,    98,    99,
       3,   168,    45,    63,   165,   169,   165,    41,    49,    97,
     105,    45,    34,    57,    57,    41,    93,   109,   137,     3,
      47,   157,   165,   155,    49,    50,    88,    41,    63,    81,
      83,    84,    87,    86,    87,     9,    13,    17,    19,    23,
      24,    27,    41,    45,    51,    89,    91,    92,    94,    97,
     105,   107,   110,   111,   112,   124,   125,   134,   138,   142,
     145,   146,   147,   152,   154,   165,   166,     3,    50,    63,
     100,   101,   102,   109,   137,   169,    45,    41,    97,   168,
      38,    41,   104,    41,   106,   106,    50,    53,   144,    53,
      46,   144,   109,    41,   157,    50,    87,    87,    50,    47,
      88,    41,    97,    41,    13,    41,    59,    60,    92,    93,
      97,   105,   107,   109,   139,   140,    44,   113,   114,   115,
     137,   139,   139,   140,    41,   137,     3,    43,    47,    48,
      51,    58,    61,    95,    96,   147,    38,    41,    42,    52,
     165,    47,    95,    95,    21,   130,   131,   132,   133,   147,
      50,    50,    47,    49,     3,   169,   109,   109,   109,     3,
      41,   105,    50,    47,    15,    41,    95,   107,   147,   153,
      41,    55,    44,   126,   127,     5,    12,    45,   116,   117,
     123,   165,   116,   123,   113,    55,    55,   126,    47,   135,
      48,    41,    38,    41,    42,    58,   109,    41,    41,   137,
     152,    41,    62,    93,   137,   147,   151,   152,   158,   164,
      95,    52,    52,    52,    41,   109,   137,    17,   126,   131,
     132,    21,   133,     3,    51,    95,    62,    93,   137,   147,
     151,   152,   164,    95,     3,   140,   165,    25,    26,    45,
      91,   128,   129,   118,   119,   121,   137,    58,   122,   137,
     140,   136,   137,    95,    96,   109,    58,    51,    44,   159,
     160,    49,     3,   137,   151,   140,    50,     3,    41,   164,
      49,     3,     3,   137,    95,   126,   165,   120,   137,   122,
      47,   129,   113,    55,    47,    93,   137,    93,   137,    52,
      52,   109,    63,   109,   161,   162,   163,   147,   153,    44,
     148,   149,   126,    52,   148,   147,   151,    47,   165,    41,
     137,   141,    47,    47,    47,    47,    52,    58,    45,     3,
      50,    45,   148,   150,    47,     3,     3,    35,   126,    41,
     109,   158,    47,    45,    45,   148,   148,    47,    47,   109,
      47,    50,    38,   109
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
#line 1979 "y.tab.c"
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
#line 495 "..\\main\\golang.y"


int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if(!(yyin = fopen(argv[1], "r")))
		{
		perror(argv[1]);
		return (1);
		}
	}
	
    yyparse();
    if(success)
    	printf("\nParsing Successful\n");
	else 
		printf("\nParsing not successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}