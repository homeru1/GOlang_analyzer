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
#define YYLAST   730

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  255
/* YYNRULES -- Number of states.  */
#define YYNSTATES  445

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
     162,   164,   169,   175,   180,   184,   188,   194,   201,   205,
     210,   215,   219,   224,   228,   232,   237,   241,   248,   254,
     259,   263,   267,   271,   275,   281,   285,   289,   292,   295,
     297,   303,   309,   311,   317,   323,   326,   329,   332,   334,
     337,   340,   342,   344,   347,   349,   353,   355,   357,   361,
     365,   367,   369,   371,   374,   378,   382,   387,   389,   391,
     393,   395,   397,   399,   401,   403,   405,   407,   411,   415,
     418,   421,   427,   431,   434,   437,   440,   442,   445,   448,
     451,   454,   458,   461,   464,   467,   471,   473,   475,   477,
     479,   483,   485,   489,   492,   495,   497,   501,   507,   510,
     512,   515,   519,   521,   523,   525,   527,   529,   532,   537,
     539,   542,   545,   548,   553,   555,   559,   561,   563,   567,
     571,   573,   575,   576,   578,   580,   582,   583,   585,   588,
     596,   600,   602,   604,   609,   618,   625,   629,   633,   637,
     640,   642,   645,   647,   651,   655,   658,   662,   664,   668,
     676,   686,   693,   699,   705,   711,   713,   716,   719,   721,
     724,   729,   734,   739,   743,   749,   756,   764,   769,   771,
     774,   777,   780,   782,   785,   790,   795,   797,   800,   804,
     806,   808,   810,   812,   814,   816,   823,   831,   840,   842,
     845,   850,   857,   862,   866,   868
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
      94,    -1,   105,    -1,    13,    41,    95,   137,    -1,    13,
      41,    95,   137,     3,    -1,    13,    41,    95,    93,    -1,
      41,    96,   137,    -1,    41,    95,   137,    -1,    41,    96,
     147,     3,   148,    -1,    13,    41,    95,   147,     3,   148,
      -1,    41,    96,    93,    -1,    41,   147,    95,   137,    -1,
      13,    41,    95,   151,    -1,    41,    96,   151,    -1,    41,
     147,    95,   151,    -1,    41,    96,   152,    -1,    41,    95,
     152,    -1,    13,    41,    95,   152,    -1,    13,    41,   153,
      -1,    41,    96,    62,    49,   153,    50,    -1,    13,    41,
      41,    95,   164,    -1,    13,    41,    95,   164,    -1,    41,
      96,   164,    -1,   105,    95,   109,    -1,   107,    95,   137,
      -1,    13,    41,   107,    -1,    13,    41,   107,    95,   137,
      -1,   109,    53,   109,    -1,    93,    53,   109,    -1,     9,
      97,    -1,     3,    48,    -1,    48,    -1,    47,    41,    95,
     137,    47,    -1,    47,    41,    95,    93,    47,    -1,    43,
      -1,    47,    41,    96,   137,    47,    -1,    47,    41,    96,
      93,    47,    -1,    41,    98,    -1,    99,   100,    -1,    49,
      50,    -1,    49,    -1,    99,   102,    -1,   101,    50,    -1,
     137,    -1,    63,    -1,   137,    47,    -1,    63,    -1,   104,
      34,   104,    -1,    41,    -1,    38,    -1,   106,    57,   106,
      -1,   105,    57,   106,    -1,    41,    -1,    97,    -1,    65,
      -1,    42,   165,    -1,    41,    42,   165,    -1,   108,    42,
     165,    -1,   108,    41,    42,   165,    -1,    38,    -1,    39,
      -1,    41,    -1,    42,    -1,    54,    -1,    56,    -1,    97,
      -1,   103,    -1,   107,    -1,   105,    -1,   143,   137,   144,
      -1,   143,    93,   144,    -1,    24,    41,    -1,    41,    58,
      -1,    19,   139,    55,   137,   113,    -1,    19,   137,   113,
      -1,    19,   113,    -1,   114,   123,    -1,   115,   123,    -1,
      44,    -1,   114,   165,    -1,   114,   116,    -1,   114,   117,
      -1,   115,   116,    -1,     5,   121,   122,    -1,    12,   122,
      -1,   119,   120,    -1,   137,    47,    -1,   119,   137,    47,
      -1,   137,    -1,   118,    -1,   137,    -1,    58,    -1,   122,
     129,   165,    -1,    45,    -1,   125,   130,   132,    -1,   125,
     130,    -1,   125,   132,    -1,   125,    -1,    17,   140,   126,
      -1,    17,   139,    55,   140,   126,    -1,   127,   128,    -1,
      44,    -1,    44,   165,    -1,   127,   129,   165,    -1,    45,
      -1,    91,    -1,    26,    -1,    25,    -1,   131,    -1,   130,
     131,    -1,    21,    17,   140,   126,    -1,   133,    -1,   132,
     133,    -1,    21,   126,    -1,    27,   137,    -1,    27,   137,
     135,   136,    -1,    47,    -1,   135,   137,    47,    -1,   137,
      -1,   109,    -1,   137,    46,   109,    -1,    41,    61,    41,
      -1,    92,    -1,    97,    -1,    -1,    93,    -1,    59,    -1,
      60,    -1,    -1,   137,    -1,    41,    35,    -1,    23,   139,
      55,   140,    55,   141,   126,    -1,    23,   140,   126,    -1,
      49,    -1,    50,    -1,    13,    41,   147,     3,    -1,    13,
      41,   147,     3,    95,   147,     3,   148,    -1,    13,    41,
     147,     3,    95,   151,    -1,    51,    38,    52,    -1,    51,
      41,    52,    -1,    51,    42,    52,    -1,    51,    52,    -1,
     146,    -1,   146,   147,    -1,   149,    -1,   149,    47,   148,
      -1,    44,   150,    45,    -1,    44,    45,    -1,    44,   148,
      45,    -1,   109,    -1,   150,    47,   109,    -1,    62,    49,
     147,     3,    47,   109,    50,    -1,    62,    49,   147,     3,
      47,   109,    47,    38,   109,    -1,    41,    51,   109,    58,
     109,    52,    -1,    41,    51,    58,   109,    52,    -1,    41,
      51,   109,    58,    52,    -1,    15,    51,     3,    52,     3,
      -1,   156,    -1,   150,     3,    -1,    41,    41,    -1,    41,
      -1,    41,   105,    -1,   155,   165,    41,   105,    -1,   155,
     165,    41,     3,    -1,   155,   165,    41,    41,    -1,   155,
     165,    41,    -1,    22,    41,    28,    44,   157,    -1,    22,
      41,    28,    44,   155,   157,    -1,    22,    41,    28,    44,
     165,   155,   157,    -1,    22,    41,    28,    63,    -1,    45,
      -1,    63,    45,    -1,    41,   159,    -1,   160,   162,    -1,
      44,    -1,   160,   161,    -1,   109,    58,   109,    47,    -1,
     109,    58,   158,    47,    -1,    63,    -1,   163,    45,    -1,
     109,    58,   109,    -1,    63,    -1,   158,    -1,    55,    -1,
      63,    -1,    64,    -1,   167,    -1,    22,    41,    11,    44,
     168,   169,    -1,    22,    41,    11,    44,   165,   168,   169,
      -1,    22,    41,    11,    63,    44,   165,   168,   169,    -1,
      97,    -1,    97,     3,    -1,    41,    49,     3,    50,    -1,
     168,   165,    41,    49,     3,    50,    -1,   168,   165,    97,
       3,    -1,   168,   165,    97,    -1,    45,    -1,    63,    45,
      -1
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
     118,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   147,   148,   152,   155,   156,
     157,   158,   160,   161,   162,   165,   168,   169,   172,   173,
     176,   181,   182,   186,   187,   190,   193,   194,   197,   198,
     202,   203,   206,   210,   211,   212,   213,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   230,
     233,   236,   237,   238,   241,   242,   246,   247,   248,   252,
     253,   256,   259,   263,   266,   267,   270,   274,   275,   278,
     279,   284,   288,   289,   290,   291,   294,   295,   298,   302,
     303,   304,   308,   313,   314,   315,   319,   320,   324,   328,
     329,   332,   335,   336,   341,   342,   346,   348,   349,   352,
     355,   356,   357,   360,   361,   362,   363,   366,   367,   370,
     371,   374,   377,   380,   381,   382,   385,   386,   387,   388,
     391,   392,   395,   396,   398,   399,   400,   403,   404,   407,
     408,   411,   412,   413,   416,   419,   422,   423,   424,   425,
     426,   427,   428,   429,   432,   433,   434,   435,   438,   439,
     443,   446,   449,   450,   454,   455,   456,   459,   464,   465,
     468,   471,   472,   473,   476,   479,   480,   481,   484,   485,
     486,   487,   488,   489,   491,   492
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
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    95,    95,
      95,    95,    96,    96,    96,    97,    98,    98,    99,    99,
     100,   101,   101,   102,   102,   103,   104,   104,   105,   105,
     106,   106,   107,   108,   108,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     111,   112,   112,   112,   113,   113,   114,   114,   114,   115,
     115,   116,   117,   118,   119,   119,   120,   121,   121,   122,
     122,   123,   124,   124,   124,   124,   125,   125,   126,   127,
     127,   127,   128,   129,   129,   129,   130,   130,   131,   132,
     132,   133,   134,   134,   135,   135,   136,   137,   137,   138,
     139,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   144,   145,   145,   145,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   149,   150,   150,   151,
     151,   152,   152,   152,   153,   154,   155,   155,   155,   155,
     155,   155,   155,   155,   156,   156,   156,   156,   157,   157,
     158,   159,   160,   160,   161,   161,   161,   162,   163,   163,
     164,   165,   165,   165,   166,   167,   167,   167,   168,   168,
     168,   168,   168,   168,   169,   169
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
       1,     4,     5,     4,     3,     3,     5,     6,     3,     4,
       4,     3,     4,     3,     3,     4,     3,     6,     5,     4,
       3,     3,     3,     3,     5,     3,     3,     2,     2,     1,
       5,     5,     1,     5,     5,     2,     2,     2,     1,     2,
       2,     1,     1,     2,     1,     3,     1,     1,     3,     3,
       1,     1,     1,     2,     3,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       2,     5,     3,     2,     2,     2,     1,     2,     2,     2,
       2,     3,     2,     2,     2,     3,     1,     1,     1,     1,
       3,     1,     3,     2,     2,     1,     3,     5,     2,     1,
       2,     3,     1,     1,     1,     1,     1,     2,     4,     1,
       2,     2,     2,     4,     1,     3,     1,     1,     3,     3,
       1,     1,     0,     1,     1,     1,     0,     1,     2,     7,
       3,     1,     1,     4,     8,     6,     3,     3,     3,     2,
       1,     2,     1,     3,     3,     2,     3,     1,     3,     7,
       9,     6,     5,     5,     5,     1,     2,     2,     1,     2,
       4,     4,     4,     3,     5,     6,     7,     4,     1,     2,
       2,     2,     1,     2,     4,     4,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     6,     7,     8,     1,     2,
       4,     6,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,   215,     9,   244,     0,     0,    11,     0,    10,     0,
       1,   241,   242,   243,     0,     4,     3,    28,    14,     0,
       0,     0,     0,     0,     0,     2,    27,     0,    16,     0,
     113,     0,     0,     0,    12,     0,     0,     0,   227,    39,
      40,    26,    28,     0,   114,    13,     0,   115,     0,   248,
       0,     0,     0,   117,   118,   218,   120,   228,   191,   121,
     122,   242,   112,   123,   124,     0,   126,     0,   125,   207,
       0,     0,     0,   224,     0,    17,     0,    43,    23,    15,
       0,     0,     0,    35,    18,     0,   116,    98,    95,     0,
     249,     0,   254,   242,     0,   245,     0,   217,    98,   111,
     219,   229,     0,     0,     0,   119,     0,   177,     0,   216,
       0,   225,     0,     0,     0,    22,    20,    40,    31,    21,
      24,     0,    33,    36,     0,     0,     0,   182,   182,     0,
     182,     0,     0,   110,    42,     0,    41,     0,    46,    59,
      53,    60,     0,    49,    50,    48,    51,   155,    56,    54,
      47,    55,   200,    52,    58,    57,    45,     0,    97,   104,
      96,     0,    99,   177,   101,   246,   255,     0,   253,     0,
     107,   106,   105,   110,   109,   108,   192,     0,   128,     0,
       0,   127,   208,   223,   226,    38,     0,    32,    25,    30,
      19,     0,    87,     0,     0,   119,   184,   185,   180,   183,
     123,   126,   125,     0,     0,     0,   136,   133,     0,     0,
       0,     0,     0,     0,     0,   129,   172,     0,    92,     0,
      89,     0,   130,     0,     0,     0,     0,     0,     0,     0,
     199,    44,     0,     0,     0,     0,   153,   166,   154,   169,
     201,   250,   100,   103,    98,   252,   247,    86,    85,   178,
     221,   222,   220,    37,    29,     0,     0,     0,    83,     0,
      76,     0,   186,   159,   156,     0,     0,     0,   151,   138,
     139,   134,   137,   140,   135,   132,     0,   186,   190,   174,
       0,    88,     0,   107,   106,   120,     0,     0,   179,   119,
      65,    74,   119,     0,    68,    64,     0,    71,    73,   240,
      80,     0,   196,   197,   198,     0,    81,    82,   186,   171,
     167,   152,     0,   170,     0,     0,     0,     0,    63,    61,
       0,    70,    75,    79,     0,   193,     0,   160,   165,   164,
     162,   163,   158,     0,   147,     0,     0,   148,   149,   142,
       0,     0,   173,   176,     0,     0,     0,     0,     0,   232,
     230,     0,     0,     0,    69,    72,     0,   251,     0,     0,
      78,     0,    62,     0,    84,     0,   157,   161,   143,   146,
     141,   144,     0,   131,     0,   175,     0,     0,     0,     0,
     212,   213,     0,   236,     0,   233,   231,     0,     0,     0,
       0,    66,   202,   168,     0,    67,     0,   195,   145,   150,
     119,   187,     0,    91,    90,    94,    93,   211,     0,   237,
       0,    77,   205,     0,     0,     0,   214,     0,   188,   189,
     119,   238,     0,     0,   206,   204,   203,   194,   234,   235,
       0,     0,   209,     0,   210
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    37,    89,    90,    91,
     129,    38,   130,   131,    92,    93,    51,    94,   146,    95,
     341,   148,   209,   149,   234,   235,    73,    98,    99,   170,
     171,   172,    74,    75,    76,    77,    78,    32,   173,   153,
     154,   155,   217,   218,   219,   279,   280,   344,   345,   378,
     346,   349,   281,   156,   157,   319,   275,   342,   382,   246,
     247,   248,   249,   158,   290,   352,   118,   159,   214,   215,
     412,   160,    80,   188,   161,   162,   163,   401,   402,    81,
     307,   164,   270,   165,    82,    11,    83,   309,   360,   361,
     395,   396,   397,   310,   104,    12,    13,    61,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -339
static const yytype_int16 yypact[] =
{
     258,   -16,   281,    -9,   125,   109,   270,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,   133,   168,  -339,   -22,  -339,   176,
    -339,  -339,  -339,  -339,   270,  -339,  -339,   193,  -339,   175,
     270,   254,   219,    90,   111,  -339,   129,   185,  -339,   270,
    -339,   234,   215,   270,  -339,   138,   228,   428,  -339,  -339,
    -339,  -339,   193,    80,  -339,  -339,   270,  -339,   240,   301,
     265,   237,   270,   287,  -339,   372,  -339,  -339,  -339,  -339,
    -339,   293,  -339,   275,  -339,   308,   295,   299,  -339,  -339,
     612,    21,   314,  -339,   634,  -339,   321,  -339,   300,  -339,
     332,    15,   108,  -339,  -339,   264,  -339,    46,  -339,   550,
    -339,   237,  -339,   336,   352,  -339,   265,   -27,   345,  -339,
     295,  -339,   261,   371,   371,   205,   330,   350,    77,  -339,
     612,  -339,   390,   314,    69,  -339,  -339,   129,   355,  -339,
    -339,   392,   396,  -339,   332,   403,   404,   376,   409,   411,
     376,   414,   612,   194,  -339,   320,  -339,   270,  -339,  -339,
     275,    60,    88,  -339,  -339,  -339,  -339,   425,  -339,  -339,
    -339,  -339,   406,  -339,  -339,  -339,  -339,   410,  -339,   418,
    -339,   421,  -339,  -339,   290,  -339,  -339,   412,   456,   237,
    -339,  -339,  -339,   415,  -339,  -339,  -339,   612,  -339,   612,
     612,  -339,  -339,   135,  -339,  -339,   422,   429,  -339,  -339,
    -339,   415,  -339,    23,   434,   317,  -339,  -339,  -339,   426,
      47,    60,    88,   350,   423,   436,  -339,  -339,   163,    38,
     177,   432,   453,   435,   436,  -339,   362,   446,  -339,   454,
    -339,   447,  -339,   457,   640,   468,    88,   445,   448,   450,
    -339,  -339,   463,   612,   612,    95,   425,  -339,   490,  -339,
    -339,  -339,  -339,  -339,    49,  -339,  -339,  -339,  -339,  -339,
    -339,   -27,   295,  -339,  -339,   462,    88,   487,    88,   505,
    -339,   130,   506,   270,  -339,   322,   612,   458,  -339,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,   612,   506,  -339,  -339,
     612,  -339,   164,   148,   333,   450,   612,   460,  -339,   199,
     469,  -339,   405,   465,   426,   469,   517,  -339,  -339,  -339,
    -339,   556,  -339,  -339,  -339,    88,  -339,   469,   506,  -339,
    -339,   490,   436,  -339,   471,   520,   486,   482,   426,    14,
     529,  -339,  -339,  -339,   612,    88,   436,  -339,  -339,  -339,
    -339,  -339,  -339,   270,  -339,   612,   458,   364,  -339,   375,
     177,   479,  -339,   377,   612,   612,   483,   578,   584,  -339,
    -339,   606,   103,   493,   469,  -339,   436,  -339,   488,   495,
    -339,   406,  -339,   493,   469,   143,  -339,  -339,  -339,   381,
     375,  -339,   270,  -339,   659,  -339,   116,   387,   169,   391,
    -339,  -339,   494,   497,   492,  -339,  -339,   508,   548,   504,
     531,  -339,   509,  -339,   554,  -339,   555,  -339,  -339,  -339,
     179,   469,   436,  -339,  -339,  -339,  -339,  -339,   665,  -339,
     512,  -339,  -339,   516,   206,   493,  -339,   493,  -339,  -339,
     269,   521,   527,   612,  -339,  -339,  -339,  -339,  -339,  -339,
     357,   525,  -339,   612,  -339
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,   559,  -339,  -339,  -339,  -339,  -339,  -339,  -339,
    -339,   515,  -339,  -339,  -339,   485,   139,   -59,  -339,  -339,
     484,   217,   -76,  -339,  -106,   286,   -37,  -339,  -339,  -339,
    -339,  -339,  -339,   470,   -56,   203,   -90,   552,   -47,  -339,
    -339,  -339,  -209,  -339,  -339,   365,  -339,  -339,  -339,  -339,
    -339,   235,   367,  -339,  -339,  -214,  -339,  -339,   315,  -339,
     347,   354,  -241,  -339,  -339,  -339,   -87,  -339,   106,  -126,
    -339,  -339,  -339,   489,  -339,  -339,   -77,  -338,  -339,   201,
    -254,   -84,   241,    29,   518,  -339,   -28,   190,  -339,  -339,
    -339,  -339,  -339,  -261,    -3,  -339,  -339,   -45,   -85
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -240
static const yytype_int16 yytable[] =
{
      79,   274,    25,    26,   116,   152,   333,   323,    59,   110,
     288,   285,   174,   331,   224,   101,   175,   372,    49,    29,
      30,    35,   108,    59,   119,    14,   227,    40,   109,    10,
    -110,   126,    18,   117,    10,   405,    54,    79,   265,   151,
      57,    31,    60,   276,    84,   243,   244,   212,   212,   167,
     212,   220,   324,    96,   121,   226,   127,   365,   150,   106,
     190,   179,   423,   227,   266,   370,   236,   178,   120,    59,
     242,   230,    49,   192,   145,   200,   109,   109,   128,   122,
     323,   211,   211,   278,   211,   250,    86,   436,    72,   437,
     213,   227,   166,   213,   256,   194,   168,   267,   202,   168,
     210,   210,  -181,   210,  -111,   243,   244,   242,   230,    20,
      50,    49,   318,   268,    86,     1,     2,   113,   265,   195,
     122,   407,   376,   190,    87,     3,   269,   186,   236,    88,
     311,     4,    49,   227,    45,   242,   230,   262,   260,   273,
     257,   383,   258,   259,   241,   265,   336,   300,   305,    50,
     301,   308,   403,    46,   145,    47,   109,   317,   306,   304,
     326,   351,   334,   413,    21,   267,    19,   227,   276,   187,
      50,   266,    22,    23,    48,   277,   261,   242,   230,    58,
     329,   268,    27,   332,   297,   152,   354,    33,   117,   347,
     330,   328,   366,    21,   145,    72,   316,   227,   429,   350,
     312,    22,    23,   353,    34,   327,  -117,   228,   278,   354,
      28,   229,   230,  -106,   428,   282,   415,    39,    21,   151,
     117,   216,   187,   190,   364,   213,    22,    23,   108,   375,
     132,   134,    52,  -106,    36,    53,  -110,   228,   150,  -106,
     213,   229,   230,   108,   221,   231,   223,   374,   108,   356,
     358,   435,   232,   120,   108,   233,  -110,    56,   379,   152,
      42,    43,  -110,   196,     1,     2,   197,   387,   389,    44,
     337,   213,    62,   135,     3,    42,    43,   136,   386,   388,
       4,   137,   102,   138,    55,   398,   139,   140,   141,    97,
     152,   142,    21,   151,   398,    29,    30,   411,   406,   180,
     103,    23,   181,  -106,   100,   143,    58,   117,   117,   144,
     392,   297,   150,   359,   394,   145,   184,   185,   108,    21,
     227,  -107,    15,    16,   151,    21,  -110,    22,    23,    72,
      17,   135,  -111,    22,    23,   136,   190,   253,   111,   137,
     377,   138,   112,   150,   139,   140,   141,   338,   339,   142,
     125,  -106,   113,    79,   208,   208,   114,   208,   237,    67,
     228,   238,   239,   143,   229,   230,   108,   340,   145,    21,
     124,   431,   240,   145,  -110,  -119,    87,    71,    23,   409,
     186,   176,   108,   187,   135,   313,   440,    72,   136,   204,
    -110,  -119,   137,   177,   138,   168,   444,   139,   140,   141,
     338,   339,   142,   189,   441,   -34,  -106,   442,   190,   289,
     190,   381,   183,   107,    63,    64,   143,   205,    66,  -119,
    -186,   108,   204,   190,   385,    68,   145,   190,   408,  -110,
      69,   193,    70,   190,   414,   206,   207,   190,   416,  -106,
      72,    72,   198,   199,   201,   203,   245,    63,    64,   359,
     205,    66,   222,   216,   108,   225,   358,   145,    68,   255,
     251,   254,  -110,    69,   108,    70,    63,    64,  -102,    65,
      66,   252,   263,    67,    72,   271,   264,    68,   272,   187,
     273,    34,    69,    21,    70,   293,    64,   286,   294,   295,
     287,    71,    23,    72,   291,   292,    68,   312,   298,   240,
     313,    69,   314,    70,   315,   296,    63,    64,   335,   302,
      66,   322,    72,   325,   362,   190,   348,    68,   357,   145,
     363,   367,    69,   368,    70,    63,    64,   369,   302,    66,
     303,   371,   373,    72,   384,   390,    68,   400,   145,   359,
     404,    69,  -239,    70,    63,    64,   417,   115,    66,   327,
     418,   420,    72,   419,   421,    68,   425,   426,   427,   433,
      69,   434,    70,   443,    24,   206,   207,    85,   438,    63,
      64,    72,   115,    66,   439,   400,   422,   133,   355,   147,
      68,   380,   182,    41,   283,    69,   284,    70,    63,    64,
     343,   115,    66,   320,    63,    64,    72,   115,    66,    68,
     321,   424,   123,   399,    69,    68,    70,   191,   432,     0,
      69,     0,    70,   169,     0,    72,    63,    64,   327,   115,
      66,    72,    63,    64,     0,   115,    66,    68,     0,     0,
     391,     0,    69,    68,    70,     0,     0,     0,    69,     0,
      70,     0,   296,    72,    63,    64,     0,   115,    66,    72,
      63,    64,     0,   115,    66,    68,     0,     0,     0,     0,
      69,    68,    70,     0,     0,     0,    69,     0,    70,   393,
       0,    72,    63,    64,     0,    65,    66,    72,    63,    64,
       0,   299,    66,    68,     0,     0,     0,     0,    69,    68,
      70,     0,     0,     0,    69,     0,    70,    63,    64,    72,
     410,    66,     0,    63,    64,    72,   430,    66,    68,     0,
       0,     0,     0,    69,    68,    70,     0,     0,     0,    69,
       0,    70,     0,     0,    72,     0,     0,     0,     0,     0,
      72
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-339)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      47,   215,     5,     6,    80,    95,   267,   248,    45,    65,
     224,   220,    99,   267,   140,    60,   101,     3,     3,    41,
      42,    24,    49,    60,     3,    41,     3,    30,    65,     0,
      57,    90,    41,    80,     5,   373,    39,    84,    15,    95,
      43,    63,    45,     5,    47,   151,   152,   137,   138,     3,
     140,   138,     3,    56,    82,   142,    41,   311,    95,    62,
      46,   106,   400,     3,    41,   326,   143,   104,    47,   106,
      47,    48,     3,   120,    51,   134,   113,   114,    63,    82,
     321,   137,   138,    45,   140,   162,     6,   425,    65,   427,
     137,     3,    95,   140,   179,   123,    50,   203,   135,    50,
     137,   138,    55,   140,    57,   211,   212,    47,    48,     0,
      41,     3,    17,   203,     6,     6,     7,    57,    15,    50,
     123,   375,   336,    46,    44,    16,   203,    50,   205,    49,
     236,    22,     3,     3,    44,    47,    48,   193,     3,    44,
     187,   350,   189,   190,   147,    15,   272,   234,   235,    41,
     234,   235,   366,    63,    51,    44,   193,   244,   235,   235,
     266,   287,   268,    47,    55,   271,    41,     3,     5,    53,
      41,    41,    63,    64,    63,    12,    41,    47,    48,    41,
     267,   271,    49,   267,   231,   275,   292,    11,   235,   276,
     267,   267,   318,    55,    51,    65,   243,     3,   412,   286,
      52,    63,    64,   290,    28,    62,    58,    43,    45,   315,
      42,    47,    48,    34,    35,   218,    47,    42,    55,   275,
     267,    44,    53,    46,   311,   272,    63,    64,    49,   335,
      91,    92,    47,    34,    41,    50,    57,    43,   275,    34,
     287,    47,    48,    49,   138,    51,   140,   334,    49,   296,
      51,    45,    58,    47,    49,    61,    57,    42,   345,   349,
      41,    42,    57,   124,     6,     7,   127,   354,   355,    50,
     273,   318,    44,     9,    16,    41,    42,    13,   354,   355,
      22,    17,    45,    19,    50,   362,    22,    23,    24,    49,
     380,    27,    55,   349,   371,    41,    42,   384,   375,    38,
      63,    64,    41,    34,     3,    41,    41,   354,   355,    45,
     357,   358,   349,    44,   361,    51,   113,   114,    49,    55,
       3,    34,    41,    42,   380,    55,    57,    63,    64,    65,
      49,     9,    57,    63,    64,    13,    46,    47,    45,    17,
     343,    19,    34,   380,    22,    23,    24,    25,    26,    27,
      50,    34,    57,   400,   137,   138,    57,   140,    38,    45,
      43,    41,    42,    41,    47,    48,    49,    45,    51,    55,
      49,   418,    52,    51,    57,     3,    44,    63,    64,   382,
      50,    45,    49,    53,     9,    52,   433,    65,    13,    13,
      57,    58,    17,    41,    19,    50,   443,    22,    23,    24,
      25,    26,    27,    53,    47,    50,    34,    50,    46,    47,
      46,    47,    41,    41,    38,    39,    41,    41,    42,    47,
      44,    49,    13,    46,    47,    49,    51,    46,    47,    57,
      54,    41,    56,    46,    47,    59,    60,    46,    47,    34,
      65,    65,    50,    47,    41,    41,    21,    38,    39,    44,
      41,    42,    41,    44,    49,    41,    51,    51,    49,     3,
      50,    49,    57,    54,    49,    56,    38,    39,    50,    41,
      42,    50,    50,    45,    65,    41,    47,    49,    55,    53,
      44,    28,    54,    55,    56,    38,    39,    55,    41,    42,
      55,    63,    64,    65,    48,    41,    49,    52,    41,    52,
      52,    54,    52,    56,    41,    58,    38,    39,     3,    41,
      42,    21,    65,    51,    49,    46,    58,    49,    58,    51,
       3,    50,    54,     3,    56,    38,    39,    41,    41,    42,
      62,    49,     3,    65,    55,    52,    49,    44,    51,    44,
      52,    54,    45,    56,    38,    39,    52,    41,    42,    62,
      58,     3,    65,    45,    50,    49,    47,     3,     3,    47,
      54,    45,    56,    38,     5,    59,    60,    52,    47,    38,
      39,    65,    41,    42,    47,    44,    45,    92,   292,    95,
      49,   346,   112,    31,   219,    54,   219,    56,    38,    39,
     275,    41,    42,   246,    38,    39,    65,    41,    42,    49,
     246,   400,    84,   362,    54,    49,    56,   118,   418,    -1,
      54,    -1,    56,    63,    -1,    65,    38,    39,    62,    41,
      42,    65,    38,    39,    -1,    41,    42,    49,    -1,    -1,
      52,    -1,    54,    49,    56,    -1,    -1,    -1,    54,    -1,
      56,    -1,    58,    65,    38,    39,    -1,    41,    42,    65,
      38,    39,    -1,    41,    42,    49,    -1,    -1,    -1,    -1,
      54,    49,    56,    -1,    -1,    -1,    54,    -1,    56,    63,
      -1,    65,    38,    39,    -1,    41,    42,    65,    38,    39,
      -1,    41,    42,    49,    -1,    -1,    -1,    -1,    54,    49,
      56,    -1,    -1,    -1,    54,    -1,    56,    38,    39,    65,
      41,    42,    -1,    38,    39,    65,    41,    42,    49,    -1,
      -1,    -1,    -1,    54,    49,    56,    -1,    -1,    -1,    54,
      -1,    56,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      65
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
      83,    84,    87,    86,    87,     9,    13,    17,    19,    22,
      23,    24,    27,    41,    45,    51,    89,    91,    92,    94,
      97,   105,   107,   110,   111,   112,   124,   125,   134,   138,
     142,   145,   146,   147,   152,   154,   165,     3,    50,    63,
     100,   101,   102,   109,   137,   169,    45,    41,    97,   168,
      38,    41,   104,    41,   106,   106,    50,    53,   144,    53,
      46,   144,   109,    41,   157,    50,    87,    87,    50,    47,
      88,    41,    97,    41,    13,    41,    59,    60,    92,    93,
      97,   105,   107,   109,   139,   140,    44,   113,   114,   115,
     137,   139,    41,   139,   140,    41,   137,     3,    43,    47,
      48,    51,    58,    61,    95,    96,   147,    38,    41,    42,
      52,   165,    47,    95,    95,    21,   130,   131,   132,   133,
     147,    50,    50,    47,    49,     3,   169,   109,   109,   109,
       3,    41,   105,    50,    47,    15,    41,    95,   107,   147,
     153,    41,    55,    44,   126,   127,     5,    12,    45,   116,
     117,   123,   165,   116,   123,   113,    55,    55,   126,    47,
     135,    48,    41,    38,    41,    42,    58,   109,    41,    41,
     137,   152,    41,    62,    93,   137,   147,   151,   152,   158,
     164,    95,    52,    52,    52,    41,   109,   137,    17,   126,
     131,   132,    21,   133,     3,    51,    95,    62,    93,   137,
     147,   151,   152,   164,    95,     3,   140,   165,    25,    26,
      45,    91,   128,   129,   118,   119,   121,   137,    58,   122,
     137,   140,   136,   137,    95,    96,   109,    58,    51,    44,
     159,   160,    49,     3,   137,   151,   140,    50,     3,    41,
     164,    49,     3,     3,   137,    95,   126,   165,   120,   137,
     122,    47,   129,   113,    55,    47,    93,   137,    93,   137,
      52,    52,   109,    63,   109,   161,   162,   163,   147,   153,
      44,   148,   149,   126,    52,   148,   147,   151,    47,   165,
      41,   137,   141,    47,    47,    47,    47,    52,    58,    45,
       3,    50,    45,   148,   150,    47,     3,     3,    35,   126,
      41,   109,   158,    47,    45,    45,   148,   148,    47,    47,
     109,    47,    50,    38,   109
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
        case 230:
/* Line 1792 of yacc.c  */
#line 443 "..\\main\\golang.y"
    {printf("qwe");}
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 468 "..\\main\\golang.y"
    {printf("qwe");}
    break;


/* Line 1792 of yacc.c  */
#line 1993 "y.tab.c"
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