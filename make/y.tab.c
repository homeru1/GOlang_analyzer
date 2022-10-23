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
#define YYLAST   706

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  257
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
     256,   261,   265,   269,   273,   277,   283,   289,   293,   297,
     300,   303,   305,   311,   317,   319,   325,   331,   334,   337,
     340,   342,   345,   348,   350,   352,   355,   357,   361,   363,
     365,   369,   373,   375,   377,   379,   382,   386,   390,   395,
     397,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     419,   423,   426,   429,   435,   439,   442,   445,   448,   450,
     453,   456,   459,   462,   466,   469,   472,   475,   479,   481,
     483,   485,   487,   491,   493,   497,   500,   503,   505,   509,
     515,   518,   520,   523,   527,   529,   531,   533,   535,   537,
     540,   545,   547,   550,   553,   556,   561,   563,   567,   569,
     571,   575,   579,   581,   583,   584,   586,   588,   590,   591,
     593,   596,   604,   608,   610,   612,   617,   626,   633,   637,
     641,   645,   648,   650,   653,   655,   659,   663,   666,   670,
     672,   676,   684,   694,   701,   707,   713,   719,   721,   724,
     727,   729,   732,   737,   742,   747,   751,   757,   764,   772,
     777,   779,   782,   785,   788,   790,   793,   798,   803,   805,
     808,   812,   814,   816,   818,   820,   822,   824,   831,   839,
     848,   850,   853,   858,   865,   870,   874,   876
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
      95,   137,    -1,    13,    41,    41,    95,   109,    -1,   109,
      53,   109,    -1,    93,    53,   109,    -1,     9,    97,    -1,
       3,    48,    -1,    48,    -1,    47,    41,    95,   137,    47,
      -1,    47,    41,    95,    93,    47,    -1,    43,    -1,    47,
      41,    96,   137,    47,    -1,    47,    41,    96,    93,    47,
      -1,    41,    98,    -1,    99,   100,    -1,    49,    50,    -1,
      49,    -1,    99,   102,    -1,   101,    50,    -1,   137,    -1,
      63,    -1,   137,    47,    -1,    63,    -1,   104,    34,   104,
      -1,    41,    -1,    38,    -1,   106,    57,   106,    -1,   105,
      57,   106,    -1,    41,    -1,    97,    -1,    65,    -1,    42,
     165,    -1,    41,    42,   165,    -1,   108,    42,   165,    -1,
     108,    41,    42,   165,    -1,    38,    -1,    39,    -1,    41,
      -1,    42,    -1,    54,    -1,    56,    -1,    97,    -1,   103,
      -1,   107,    -1,   105,    -1,   143,   137,   144,    -1,   143,
      93,   144,    -1,    24,    41,    -1,    41,    58,    -1,    19,
     139,    55,   137,   113,    -1,    19,   137,   113,    -1,    19,
     113,    -1,   114,   123,    -1,   115,   123,    -1,    44,    -1,
     114,   165,    -1,   114,   116,    -1,   114,   117,    -1,   115,
     116,    -1,     5,   121,   122,    -1,    12,   122,    -1,   119,
     120,    -1,   137,    47,    -1,   119,   137,    47,    -1,   137,
      -1,   118,    -1,   137,    -1,    58,    -1,   122,   129,   165,
      -1,    45,    -1,   125,   130,   132,    -1,   125,   130,    -1,
     125,   132,    -1,   125,    -1,    17,   140,   126,    -1,    17,
     139,    55,   140,   126,    -1,   127,   128,    -1,    44,    -1,
      44,   165,    -1,   127,   129,   165,    -1,    45,    -1,    91,
      -1,    26,    -1,    25,    -1,   131,    -1,   130,   131,    -1,
      21,    17,   140,   126,    -1,   133,    -1,   132,   133,    -1,
      21,   126,    -1,    27,   137,    -1,    27,   137,   135,   136,
      -1,    47,    -1,   135,   137,    47,    -1,   137,    -1,   109,
      -1,   137,    46,   109,    -1,    41,    61,    41,    -1,    92,
      -1,    97,    -1,    -1,    93,    -1,    59,    -1,    60,    -1,
      -1,   137,    -1,    41,    35,    -1,    23,   139,    55,   140,
      55,   141,   126,    -1,    23,   140,   126,    -1,    49,    -1,
      50,    -1,    13,    41,   147,     3,    -1,    13,    41,   147,
       3,    95,   147,     3,   148,    -1,    13,    41,   147,     3,
      95,   151,    -1,    51,    38,    52,    -1,    51,    41,    52,
      -1,    51,    42,    52,    -1,    51,    52,    -1,   146,    -1,
     146,   147,    -1,   149,    -1,   149,    47,   148,    -1,    44,
     150,    45,    -1,    44,    45,    -1,    44,   148,    45,    -1,
     109,    -1,   150,    47,   109,    -1,    62,    49,   147,     3,
      47,   109,    50,    -1,    62,    49,   147,     3,    47,   109,
      47,    38,   109,    -1,    41,    51,   109,    58,   109,    52,
      -1,    41,    51,    58,   109,    52,    -1,    41,    51,   109,
      58,    52,    -1,    15,    51,     3,    52,     3,    -1,   156,
      -1,   150,     3,    -1,    41,    41,    -1,    41,    -1,    41,
     105,    -1,   155,   165,    41,   105,    -1,   155,   165,    41,
       3,    -1,   155,   165,    41,    41,    -1,   155,   165,    41,
      -1,    22,    41,    28,    44,   157,    -1,    22,    41,    28,
      44,   155,   157,    -1,    22,    41,    28,    44,   165,   155,
     157,    -1,    22,    41,    28,    63,    -1,    45,    -1,    63,
      45,    -1,    41,   159,    -1,   160,   162,    -1,    44,    -1,
     160,   161,    -1,   109,    58,   109,    47,    -1,   109,    58,
     158,    47,    -1,    63,    -1,   163,    45,    -1,   109,    58,
     109,    -1,    63,    -1,   158,    -1,    55,    -1,    63,    -1,
      64,    -1,   167,    -1,    22,    41,    11,    44,   168,   169,
      -1,    22,    41,    11,    44,   165,   168,   169,    -1,    22,
      41,    11,    63,    44,   165,   168,   169,    -1,    97,    -1,
      97,     3,    -1,    41,    49,     3,    50,    -1,   168,   165,
      41,    49,     3,    50,    -1,   168,   165,    97,     3,    -1,
     168,   165,    97,    -1,    45,    -1,    63,    45,    -1
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
     140,   141,   142,   143,   144,   145,   146,   149,   150,   154,
     157,   158,   159,   160,   162,   163,   164,   167,   170,   171,
     174,   175,   178,   183,   184,   188,   189,   192,   195,   196,
     199,   200,   204,   205,   208,   211,   212,   213,   214,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   231,   234,   237,   238,   239,   242,   243,   247,   248,
     249,   253,   254,   257,   260,   264,   267,   268,   271,   275,
     276,   279,   280,   285,   289,   290,   291,   292,   295,   296,
     299,   303,   304,   305,   309,   314,   315,   316,   320,   321,
     325,   329,   330,   333,   336,   337,   342,   343,   347,   349,
     350,   353,   356,   357,   358,   361,   362,   363,   364,   367,
     368,   371,   372,   375,   378,   381,   382,   383,   386,   387,
     388,   389,   392,   393,   396,   397,   399,   400,   401,   404,
     405,   408,   409,   412,   413,   414,   417,   420,   423,   424,
     425,   426,   427,   428,   429,   430,   433,   434,   435,   436,
     439,   440,   444,   447,   450,   451,   455,   456,   457,   460,
     465,   466,   469,   472,   473,   474,   477,   480,   481,   482,
     485,   486,   487,   488,   489,   490,   492,   493
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
      92,    92,    92,    92,    92,    92,    92,    93,    93,    94,
      95,    95,    95,    95,    96,    96,    96,    97,    98,    98,
      99,    99,   100,   101,   101,   102,   102,   103,   104,   104,
     105,   105,   106,   106,   107,   108,   108,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   111,   112,   112,   112,   113,   113,   114,   114,
     114,   115,   115,   116,   117,   118,   119,   119,   120,   121,
     121,   122,   122,   123,   124,   124,   124,   124,   125,   125,
     126,   127,   127,   127,   128,   129,   129,   129,   130,   130,
     131,   132,   132,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   139,   139,   139,   140,   140,   140,   140,   141,
     141,   142,   142,   143,   144,   145,   145,   145,   146,   146,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   151,   151,   152,   152,   152,   153,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     157,   157,   158,   159,   160,   160,   161,   161,   161,   162,
     163,   163,   164,   165,   165,   165,   166,   167,   167,   167,
     168,   168,   168,   168,   168,   168,   169,   169
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
       4,     3,     3,     3,     3,     5,     5,     3,     3,     2,
       2,     1,     5,     5,     1,     5,     5,     2,     2,     2,
       1,     2,     2,     1,     1,     2,     1,     3,     1,     1,
       3,     3,     1,     1,     1,     2,     3,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     2,     5,     3,     2,     2,     2,     1,     2,
       2,     2,     2,     3,     2,     2,     2,     3,     1,     1,
       1,     1,     3,     1,     3,     2,     2,     1,     3,     5,
       2,     1,     2,     3,     1,     1,     1,     1,     1,     2,
       4,     1,     2,     2,     2,     4,     1,     3,     1,     1,
       3,     3,     1,     1,     0,     1,     1,     1,     0,     1,
       2,     7,     3,     1,     1,     4,     8,     6,     3,     3,
       3,     2,     1,     2,     1,     3,     3,     2,     3,     1,
       3,     7,     9,     6,     5,     5,     5,     1,     2,     2,
       1,     2,     4,     4,     4,     3,     5,     6,     7,     4,
       1,     2,     2,     2,     1,     2,     4,     4,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     6,     7,     8,
       1,     2,     4,     6,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,   217,     9,   246,     0,     0,    11,     0,    10,     0,
       1,   243,   244,   245,     0,     4,     3,    28,    14,     0,
       0,     0,     0,     0,     0,     2,    27,     0,    16,     0,
     115,     0,     0,     0,    12,     0,     0,     0,   229,    39,
      40,    26,    28,     0,   116,    13,     0,   117,     0,   250,
       0,     0,     0,   119,   120,   220,   122,   230,   193,   123,
     124,   244,   114,   125,   126,     0,   128,     0,   127,   209,
       0,     0,     0,   226,     0,    17,     0,    43,    23,    15,
       0,     0,     0,    35,    18,     0,   118,   100,    97,     0,
     251,     0,   256,   244,     0,   247,     0,   219,   100,   113,
     221,   231,     0,     0,     0,   121,     0,   179,     0,   218,
       0,   227,     0,     0,     0,    22,    20,    40,    31,    21,
      24,     0,    33,    36,     0,     0,     0,   184,   184,   184,
       0,     0,   112,    42,     0,    41,     0,    46,    59,    53,
      60,     0,    49,    50,    48,    51,   157,    56,    54,    47,
      55,   202,    52,    58,    57,    45,    61,     0,    99,   106,
      98,     0,   101,   179,   103,   248,   257,     0,   255,     0,
     109,   108,   107,   112,   111,   110,   194,     0,   130,     0,
       0,   129,   210,   225,   228,    38,     0,    32,    25,    30,
      19,     0,    89,     0,     0,   121,   186,   187,   182,   185,
     125,   128,   127,     0,     0,     0,   138,   135,     0,     0,
       0,     0,     0,     0,   131,   174,     0,    94,     0,    91,
       0,   132,     0,     0,     0,     0,     0,     0,     0,   201,
      44,     0,     0,     0,     0,   155,   168,   156,   171,   203,
     252,   102,   105,   100,   254,   249,    88,    87,   180,   223,
     224,   222,    37,    29,     0,     0,     0,    84,     0,    77,
       0,   188,   161,   158,     0,     0,     0,   153,   140,   141,
     136,   139,   142,   137,   134,     0,   188,   192,   176,     0,
      90,     0,   109,   108,   122,     0,     0,   181,   121,    66,
      75,   121,     0,    69,    65,     0,    72,    74,   242,    81,
       0,   198,   199,   200,     0,    82,    83,   188,   173,   169,
     154,     0,   172,     0,     0,     0,     0,    64,    62,     0,
      71,    76,    80,     0,   195,     0,   162,   167,   166,   164,
     165,   160,     0,   149,     0,     0,   150,   151,   144,     0,
       0,   175,   178,     0,     0,     0,     0,     0,   234,   232,
       0,     0,     0,    70,    73,     0,   253,     0,   121,    86,
      79,     0,    63,     0,    85,     0,   159,   163,   145,   148,
     143,   146,     0,   133,     0,   177,     0,     0,     0,     0,
     214,   215,     0,   238,     0,   235,   233,     0,     0,     0,
       0,    67,   204,   170,     0,    68,     0,   197,   147,   152,
     121,   189,     0,    93,    92,    96,    95,   213,     0,   239,
       0,    78,   207,     0,     0,     0,   216,     0,   190,   191,
     240,     0,     0,   208,   206,   205,   196,   236,   237,     0,
       0,   211,     0,   212
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    37,    89,    90,    91,
     129,    38,   130,   131,    92,    93,    51,    94,   145,    95,
     340,   147,   209,   148,   233,   234,    73,    98,    99,   170,
     171,   172,    74,    75,    76,    77,    78,    32,   173,   152,
     153,   154,   217,   218,   219,   278,   279,   343,   344,   378,
     345,   348,   280,   155,   156,   318,   274,   341,   382,   245,
     246,   247,   248,   157,   289,   351,   118,   158,   214,   215,
     412,   159,    80,   188,   160,   161,   162,   401,   402,    81,
     306,   163,   269,   164,    82,    11,    83,   308,   359,   360,
     395,   396,   397,   309,   104,   166,    13,    61,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -258
static const yytype_int16 yypact[] =
{
     266,   -24,   250,     4,    11,    34,   238,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,    83,   108,  -258,   -16,  -258,    20,
    -258,  -258,  -258,  -258,   238,  -258,  -258,   153,  -258,   179,
     238,   292,   366,   127,   199,  -258,    36,   218,  -258,   238,
    -258,   394,   191,   238,  -258,   200,   267,   404,  -258,  -258,
    -258,  -258,   153,    89,  -258,  -258,   238,  -258,   268,   320,
     308,   327,   238,   293,  -258,   121,  -258,  -258,  -258,  -258,
    -258,   309,  -258,   301,  -258,   346,   344,   360,  -258,  -258,
     588,    79,   367,  -258,   610,  -258,   317,  -258,   333,  -258,
     377,     8,   239,  -258,  -258,   281,  -258,    18,  -258,   526,
    -258,   327,  -258,   380,   387,  -258,   308,   155,   413,  -258,
     344,  -258,   274,   396,   396,   318,   306,   420,   134,  -258,
     588,  -258,   425,   367,    16,  -258,  -258,    36,   424,  -258,
    -258,   426,   431,  -258,   377,   439,   443,   355,   385,   355,
     446,   588,   189,  -258,   336,  -258,   238,  -258,  -258,   301,
      66,   211,  -258,  -258,  -258,  -258,   468,  -258,  -258,  -258,
    -258,   440,  -258,  -258,  -258,  -258,  -258,   442,  -258,   447,
    -258,   449,  -258,  -258,   340,  -258,  -258,   441,   491,   327,
    -258,  -258,  -258,   454,  -258,  -258,  -258,   588,  -258,   588,
     588,  -258,  -258,   133,  -258,  -258,   457,   461,  -258,  -258,
    -258,   454,  -258,    55,   455,   118,  -258,  -258,  -258,   458,
     196,    66,   211,   420,   460,   466,  -258,  -258,   136,    54,
     356,   467,   471,   466,  -258,   359,   465,  -258,   475,  -258,
     423,  -258,   477,   616,   444,   211,   478,   480,   481,  -258,
    -258,   486,   588,   588,   169,   468,  -258,   508,  -258,  -258,
    -258,  -258,  -258,    25,  -258,  -258,  -258,  -258,  -258,  -258,
     155,   344,  -258,  -258,   483,   211,   463,   211,   534,  -258,
     112,   482,   238,  -258,   184,   588,   485,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,   588,   482,  -258,  -258,   588,
    -258,   213,    52,   361,   481,   588,   492,  -258,   291,   489,
    -258,   280,   490,   458,   489,   537,  -258,  -258,  -258,  -258,
     532,  -258,  -258,  -258,   211,  -258,   489,   482,  -258,  -258,
     508,   466,  -258,   494,   550,   635,   505,   458,    21,   552,
    -258,  -258,  -258,   588,   211,   466,  -258,  -258,  -258,  -258,
    -258,  -258,   238,  -258,   588,   485,   386,  -258,   338,   356,
     502,  -258,   401,   588,   588,   506,   554,   560,  -258,  -258,
     582,    86,   515,   489,  -258,   466,  -258,   510,   286,  -258,
    -258,   440,  -258,   515,   489,    68,  -258,  -258,  -258,   405,
     338,  -258,   238,  -258,   641,  -258,    82,   408,   129,   410,
    -258,  -258,   514,   524,   518,  -258,  -258,   533,   557,   527,
     507,  -258,   536,  -258,   576,  -258,   581,  -258,  -258,  -258,
     335,   489,   466,  -258,  -258,  -258,  -258,  -258,   635,  -258,
     538,  -258,  -258,   542,   393,   515,  -258,   515,  -258,  -258,
     543,   553,   588,  -258,  -258,  -258,  -258,  -258,  -258,   326,
     566,  -258,   588,  -258
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,   600,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,   555,  -258,  -258,  -258,   519,   192,    10,  -258,  -258,
     517,   148,   -77,  -258,   -39,   322,   -30,  -258,  -258,  -258,
    -258,  -258,  -258,   503,   -59,   225,   -52,   586,   -47,  -258,
    -258,  -258,  -218,  -258,  -258,   403,  -258,  -258,  -258,  -258,
    -258,   283,   414,  -258,  -258,  -207,  -258,  -258,   358,  -258,
     389,   390,  -229,  -258,  -258,  -258,   -87,  -258,   332,  -132,
    -258,  -258,  -258,   521,  -258,  -258,  -141,  -146,  -258,   240,
    -257,  -117,   282,    27,   562,  -258,   -60,   223,  -258,  -258,
    -258,  -258,  -258,  -253,    -1,   269,  -258,   -46,   -91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -242
static const yytype_int16 yytable[] =
{
      79,   235,   284,   116,    25,    26,   110,   223,   273,   330,
     175,    49,   174,   332,   101,    59,   287,    14,   322,    49,
     249,   167,   121,    35,   372,    29,    30,    10,   323,    40,
      59,    33,    10,   117,    20,   109,   150,    79,    54,    49,
       1,     2,    57,   151,    60,    18,    84,    31,    34,   127,
       3,   220,    19,   364,   225,    96,     4,    50,   226,   275,
     179,   106,   268,   194,   235,   149,   195,   190,   168,   226,
     264,   128,   370,   192,   178,   168,    59,    50,   211,   211,
     211,   122,   119,   109,   109,   212,   212,   212,   255,    21,
     213,   322,   213,   305,   165,    86,   265,    22,    23,   277,
     126,   264,   241,   229,   311,   202,   144,   210,   210,   210,
    -119,   242,   243,   241,   229,   226,   300,   307,   407,   144,
      72,   226,   122,   113,  -121,   329,   120,   264,   376,   413,
     326,   383,    27,    87,   261,   187,   259,   144,    88,   335,
     256,   275,   257,   258,   200,   240,   299,   304,   276,   331,
      28,   267,  -108,   265,   350,  -108,   316,   303,   403,   241,
     229,   227,   107,   109,   266,   228,   229,   108,  -121,   144,
     108,    45,   242,   243,   260,  -112,   415,    72,  -112,   328,
     190,   277,   187,   296,   186,   365,   317,   117,   346,   327,
      46,    21,   226,   135,    36,   315,   310,   136,   349,    22,
      23,   137,   352,   138,   108,   429,     4,   139,   140,   337,
     338,   141,  -112,   272,   226,   150,   226,   281,   267,   117,
     398,    39,   151,   363,   213,   142,   325,   405,   333,   339,
     398,   266,   227,    56,   406,   144,   228,   229,   108,   213,
     230,    58,    49,    47,   149,    86,   374,   231,   355,    72,
     232,  -183,   353,  -113,   423,    21,   227,   379,   241,   229,
     228,   229,    48,    22,    23,    52,   387,   389,    53,    12,
     213,   336,     1,     2,    12,   353,   386,   388,   369,   435,
      50,   436,     3,   132,   134,   208,   208,   208,     4,   150,
     135,    15,    16,    21,   136,   375,   151,   411,   137,    17,
     138,    22,    23,     4,   139,   140,   117,   117,   141,   392,
     296,    62,   180,   394,  -108,   181,   196,    97,   149,   197,
    -108,   150,   142,   100,   358,  -108,   143,  -109,   151,   108,
     358,   357,   144,    29,    30,   108,    21,  -112,   184,   185,
     108,   377,   357,  -112,    22,    23,    72,   135,  -112,    58,
     149,   136,  -108,    79,   111,   137,   186,   138,  -113,   187,
       4,   139,   140,   337,   338,   141,   124,   108,   204,  -108,
     428,   430,   102,   440,   236,  -112,   441,   237,   238,   142,
     112,   409,    21,   125,   108,   439,   190,   252,   239,   144,
     103,    23,  -112,    63,    64,   443,   205,    66,   204,  -188,
     216,   113,   190,    72,    68,   190,   288,    42,    43,    69,
     108,    70,    67,   312,   206,   207,    44,   114,  -112,  -121,
      72,    87,    21,    63,    64,   176,   205,    66,   177,   216,
      71,    23,   190,   381,    68,    42,    43,   183,   434,    69,
     120,    70,    63,    64,    55,    65,    66,   190,   385,    67,
      72,   190,   408,    68,   190,   414,   190,   416,    69,    21,
      70,   292,    64,   168,   293,   294,   193,    71,    23,    72,
     221,   222,    68,   189,   -34,   239,   198,    69,   199,    70,
     201,   295,    63,    64,   203,   301,    66,   224,    72,   244,
     253,   144,   250,    68,   254,   144,   270,  -104,    69,   251,
      70,    63,    64,   108,   301,    66,   302,   262,   263,    72,
     272,   187,    68,   290,   144,   271,   291,    69,   297,    70,
      63,    64,   285,   115,    66,   326,   286,   314,    72,   321,
     311,    68,   312,   313,   324,   190,    69,   334,    70,   361,
     362,   206,   207,   347,   366,    63,    64,    72,   115,    66,
     356,   400,   422,   367,   371,   373,    68,   384,   390,   400,
     420,    69,   404,    70,    63,    64,   417,   115,    66,  -241,
      63,    64,    72,   115,    66,    68,   418,   421,   419,   426,
      69,    68,    70,   425,   427,   432,    69,   433,    70,   169,
     437,    72,    63,    64,   326,   115,    66,    72,    63,    64,
     438,   115,    66,    68,   442,    24,   391,    85,    69,    68,
      70,   133,   146,   354,    69,   182,    70,    41,   295,    72,
      63,    64,   282,   115,    66,    72,    63,    64,   380,   115,
      66,    68,   342,   283,   319,   320,    69,    68,    70,   191,
     424,   431,    69,   399,    70,   393,   123,    72,    63,    64,
       0,    65,    66,    72,    63,    64,     0,   298,    66,    68,
       0,     0,     0,     0,    69,    68,    70,     0,     0,     0,
      69,     0,    70,    63,    64,    72,   368,    66,     0,    63,
      64,    72,   410,    66,    68,     0,     0,     0,     0,    69,
      68,    70,     0,     0,     0,    69,     0,    70,     0,     0,
      72,     0,     0,     0,     0,     0,    72
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-258)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      47,   142,   220,    80,     5,     6,    65,   139,   215,   266,
     101,     3,    99,   266,    60,    45,   223,    41,   247,     3,
     161,     3,    82,    24,     3,    41,    42,     0,     3,    30,
      60,    11,     5,    80,     0,    65,    95,    84,    39,     3,
       6,     7,    43,    95,    45,    41,    47,    63,    28,    41,
      16,   138,    41,   310,   141,    56,    22,    41,     3,     5,
     106,    62,   203,   123,   205,    95,    50,    46,    50,     3,
      15,    63,   325,   120,   104,    50,   106,    41,   137,   138,
     139,    82,     3,   113,   114,   137,   138,   139,   179,    55,
     137,   320,   139,   234,    95,     6,    41,    63,    64,    45,
      90,    15,    47,    48,    52,   135,    51,   137,   138,   139,
      58,   150,   151,    47,    48,     3,   233,   234,   375,    51,
      65,     3,   123,    57,     3,   266,    47,    15,   335,    47,
      62,   349,    49,    44,   193,    53,     3,    51,    49,   271,
     187,     5,   189,   190,   134,   146,   233,   234,    12,   266,
      42,   203,    34,    41,   286,    34,   243,   234,   365,    47,
      48,    43,    41,   193,   203,    47,    48,    49,    47,    51,
      49,    44,   211,   212,    41,    57,    47,    65,    57,   266,
      46,    45,    53,   230,    50,   317,    17,   234,   275,   266,
      63,    55,     3,     9,    41,   242,   235,    13,   285,    63,
      64,    17,   289,    19,    49,   412,    22,    23,    24,    25,
      26,    27,    57,    44,     3,   274,     3,   218,   270,   266,
     361,    42,   274,   310,   271,    41,   265,   373,   267,    45,
     371,   270,    43,    42,   375,    51,    47,    48,    49,   286,
      51,    41,     3,    44,   274,     6,   333,    58,   295,    65,
      61,    55,   291,    57,   400,    55,    43,   344,    47,    48,
      47,    48,    63,    63,    64,    47,   353,   354,    50,     0,
     317,   272,     6,     7,     5,   314,   353,   354,   325,   425,
      41,   427,    16,    91,    92,   137,   138,   139,    22,   348,
       9,    41,    42,    55,    13,   334,   348,   384,    17,    49,
      19,    63,    64,    22,    23,    24,   353,   354,    27,   356,
     357,    44,    38,   360,    34,    41,   124,    49,   348,   127,
      34,   380,    41,     3,    44,    34,    45,    34,   380,    49,
      44,    51,    51,    41,    42,    49,    55,    57,   113,   114,
      49,   342,    51,    57,    63,    64,    65,     9,    57,    41,
     380,    13,    34,   400,    45,    17,    50,    19,    57,    53,
      22,    23,    24,    25,    26,    27,    49,    49,    13,    34,
      35,   418,    45,    47,    38,    57,    50,    41,    42,    41,
      34,   382,    55,    50,    49,   432,    46,    47,    52,    51,
      63,    64,    57,    38,    39,   442,    41,    42,    13,    44,
      44,    57,    46,    65,    49,    46,    47,    41,    42,    54,
      49,    56,    45,    52,    59,    60,    50,    57,    57,    58,
      65,    44,    55,    38,    39,    45,    41,    42,    41,    44,
      63,    64,    46,    47,    49,    41,    42,    41,    45,    54,
      47,    56,    38,    39,    50,    41,    42,    46,    47,    45,
      65,    46,    47,    49,    46,    47,    46,    47,    54,    55,
      56,    38,    39,    50,    41,    42,    41,    63,    64,    65,
     138,   139,    49,    53,    50,    52,    50,    54,    47,    56,
      41,    58,    38,    39,    41,    41,    42,    41,    65,    21,
      49,    51,    50,    49,     3,    51,    41,    50,    54,    50,
      56,    38,    39,    49,    41,    42,    62,    50,    47,    65,
      44,    53,    49,    48,    51,    55,    41,    54,    41,    56,
      38,    39,    55,    41,    42,    62,    55,    41,    65,    21,
      52,    49,    52,    52,    51,    46,    54,     3,    56,    49,
       3,    59,    60,    58,    50,    38,    39,    65,    41,    42,
      58,    44,    45,     3,    49,     3,    49,    55,    52,    44,
       3,    54,    52,    56,    38,    39,    52,    41,    42,    45,
      38,    39,    65,    41,    42,    49,    58,    50,    45,     3,
      54,    49,    56,    47,     3,    47,    54,    45,    56,    63,
      47,    65,    38,    39,    62,    41,    42,    65,    38,    39,
      47,    41,    42,    49,    38,     5,    52,    52,    54,    49,
      56,    92,    95,   291,    54,   112,    56,    31,    58,    65,
      38,    39,   219,    41,    42,    65,    38,    39,   345,    41,
      42,    49,   274,   219,   245,   245,    54,    49,    56,   118,
     400,   418,    54,   361,    56,    63,    84,    65,    38,    39,
      -1,    41,    42,    65,    38,    39,    -1,    41,    42,    49,
      -1,    -1,    -1,    -1,    54,    49,    56,    -1,    -1,    -1,
      54,    -1,    56,    38,    39,    65,    41,    42,    -1,    38,
      39,    65,    41,    42,    49,    -1,    -1,    -1,    -1,    54,
      49,    56,    -1,    -1,    -1,    54,    -1,    56,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    65
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
     160,    49,     3,   137,   151,   140,    50,     3,    41,   109,
     164,    49,     3,     3,   137,    95,   126,   165,   120,   137,
     122,    47,   129,   113,    55,    47,    93,   137,    93,   137,
      52,    52,   109,    63,   109,   161,   162,   163,   147,   153,
      44,   148,   149,   126,    52,   148,   147,   151,    47,   165,
      41,   137,   141,    47,    47,    47,    47,    52,    58,    45,
       3,    50,    45,   148,   150,    47,     3,     3,    35,   126,
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
#line 1975 "y.tab.c"
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
#line 496 "..\\main\\golang.y"


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