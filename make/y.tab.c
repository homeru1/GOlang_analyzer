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
     t_ampersand = 321,
     t_path_pack = 322
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
#define t_path_pack 322



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
#line 277 "y.tab.c"

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   730

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  91
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNRULES -- Number of states.  */
#define YYNSTATES  416

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    70,    68,     2,    69,     2,    71,     2,     2,
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
      65,    66,    67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      23,    26,    29,    34,    40,    44,    51,    53,    56,    61,
      63,    67,    70,    72,    73,    75,    79,    82,    84,    86,
      89,    91,    96,   100,   102,   104,   107,   109,   111,   115,
     118,   120,   122,   124,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   146,   148,   153,   159,   164,   168,
     172,   178,   185,   189,   194,   199,   203,   208,   212,   216,
     221,   225,   232,   239,   245,   250,   254,   258,   262,   268,
     272,   275,   278,   280,   286,   292,   294,   300,   306,   309,
     312,   315,   317,   320,   323,   325,   327,   330,   332,   336,
     338,   340,   344,   348,   350,   352,   355,   358,   361,   364,
     368,   372,   377,   379,   381,   383,   385,   387,   389,   391,
     393,   395,   397,   400,   403,   409,   413,   416,   419,   422,
     424,   427,   430,   433,   436,   440,   443,   446,   449,   453,
     455,   457,   459,   461,   465,   467,   471,   474,   477,   479,
     483,   489,   492,   494,   497,   501,   503,   505,   507,   509,
     511,   514,   519,   521,   524,   527,   530,   535,   537,   541,
     543,   547,   551,   553,   557,   559,   561,   562,   564,   566,
     568,   569,   571,   574,   582,   586,   588,   590,   595,   604,
     611,   615,   619,   623,   626,   628,   631,   633,   637,   641,
     644,   648,   650,   654,   662,   672,   679,   685,   691,   697,
     702,   706,   711,   713,   718,   723,   727,   729,   733,   740,
     745,   753,   758,   767,   769,   771,   775,   777,   779,   781,
     788,   794
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    73,    74,   159,    -1,    74,   159,    -1,
      73,   159,    -1,    75,    -1,    76,    -1,    77,    -1,   152,
      -1,   160,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   106,    50,    -1,     7,    49,    63,   106,    50,    -1,
       7,    41,    42,    -1,     6,    41,    49,    79,    50,    78,
      -1,    86,    -1,    83,    86,    -1,    49,    81,    50,    86,
      -1,    80,    -1,    79,    47,    80,    -1,    41,    85,    -1,
      41,    -1,    -1,    82,    -1,    81,    47,    82,    -1,    41,
      85,    -1,    85,    -1,    84,    -1,    83,    84,    -1,    85,
      -1,     6,    49,    85,    50,    -1,     6,    49,    50,    -1,
       3,    -1,    41,    -1,    88,    87,    -1,    45,    -1,    44,
      -1,    88,    89,   159,    -1,    88,   159,    -1,    90,    -1,
     140,    -1,   110,    -1,   108,    -1,   109,    -1,   122,    -1,
     145,    -1,    95,    -1,   136,    -1,   143,    -1,   132,    -1,
     152,    -1,   150,    -1,    92,    -1,   103,    -1,    13,    41,
      93,   135,    -1,    13,    41,    93,   135,     3,    -1,    13,
      41,    93,    91,    -1,    41,    94,   135,    -1,    41,    93,
     135,    -1,    41,    94,   145,     3,   146,    -1,    13,    41,
      93,   145,     3,   146,    -1,    41,    94,    91,    -1,    41,
     145,    93,   135,    -1,    13,    41,    93,   149,    -1,    41,
      94,   149,    -1,    41,   145,    93,   149,    -1,    41,    94,
     150,    -1,    41,    93,   150,    -1,    13,    41,    93,   150,
      -1,    13,    41,   151,    -1,    41,    94,    62,    49,   151,
      50,    -1,    13,    41,    41,    93,    41,   158,    -1,    13,
      41,    93,    41,   158,    -1,    41,    94,    41,   158,    -1,
     103,    93,   107,    -1,   105,    93,   135,    -1,    13,    41,
     105,    -1,    13,    41,   105,    93,   135,    -1,   135,    53,
     135,    -1,     9,    95,    -1,     3,    48,    -1,    48,    -1,
      47,    41,    93,   135,    47,    -1,    47,    41,    93,    91,
      47,    -1,    43,    -1,    47,    41,    94,   135,    47,    -1,
      47,    41,    94,    91,    47,    -1,    41,    96,    -1,    97,
      98,    -1,    49,    50,    -1,    49,    -1,    97,   100,    -1,
      99,    50,    -1,   135,    -1,    63,    -1,   135,    47,    -1,
      63,    -1,   102,    34,   102,    -1,    41,    -1,    38,    -1,
     104,    57,   104,    -1,   103,    57,   104,    -1,    41,    -1,
      95,    -1,    65,    41,    -1,    65,     3,    -1,    66,    41,
      -1,    42,   159,    -1,    41,    42,   159,    -1,   106,    42,
     159,    -1,   106,    41,    42,   159,    -1,    38,    -1,    39,
      -1,    41,    -1,    42,    -1,    54,    -1,    56,    -1,    95,
      -1,   101,    -1,   105,    -1,   103,    -1,    24,    41,    -1,
      41,    58,    -1,    19,   137,    55,   135,   111,    -1,    19,
     135,   111,    -1,    19,   111,    -1,   112,   121,    -1,   113,
     121,    -1,    44,    -1,   112,   159,    -1,   112,   114,    -1,
     112,   115,    -1,   113,   114,    -1,     5,   119,   120,    -1,
      12,   120,    -1,   117,   118,    -1,   135,    47,    -1,   117,
     135,    47,    -1,   135,    -1,   116,    -1,   135,    -1,    58,
      -1,   120,   127,   159,    -1,    45,    -1,   123,   128,   130,
      -1,   123,   128,    -1,   123,   130,    -1,   123,    -1,    17,
     138,   124,    -1,    17,   137,    55,   138,   124,    -1,   125,
     126,    -1,    44,    -1,    44,   159,    -1,   125,   127,   159,
      -1,    45,    -1,    89,    -1,    26,    -1,    25,    -1,   129,
      -1,   128,   129,    -1,    21,    17,   138,   124,    -1,   131,
      -1,   130,   131,    -1,    21,   124,    -1,    27,   135,    -1,
      27,   135,   133,   134,    -1,    47,    -1,   133,   135,    47,
      -1,   135,    -1,   135,    46,   107,    -1,   141,   135,   142,
      -1,   107,    -1,    41,    61,    41,    -1,    90,    -1,    95,
      -1,    -1,    91,    -1,    59,    -1,    60,    -1,    -1,   135,
      -1,    41,    35,    -1,    23,   137,    55,   138,    55,   139,
     124,    -1,    23,   138,   124,    -1,    49,    -1,    50,    -1,
      13,    41,   145,     3,    -1,    13,    41,   145,     3,    93,
     145,     3,   146,    -1,    13,    41,   145,     3,    93,   149,
      -1,    51,    38,    52,    -1,    51,    41,    52,    -1,    51,
      42,    52,    -1,    51,    52,    -1,   144,    -1,   144,   145,
      -1,   147,    -1,   147,    47,   146,    -1,    44,   148,    45,
      -1,    44,    45,    -1,    44,   146,    45,    -1,   107,    -1,
     148,    47,   107,    -1,    62,    49,   145,     3,    47,   107,
      50,    -1,    62,    49,   145,     3,    47,   107,    47,    38,
     107,    -1,    41,    51,   107,    58,   107,    52,    -1,    41,
      51,    58,   107,    52,    -1,    41,    51,   107,    58,    52,
      -1,    15,    51,     3,    52,     3,    -1,   153,   154,   159,
     155,    -1,    22,    41,    28,    -1,    22,    41,    28,    63,
      -1,    44,    -1,   154,   159,    41,     3,    -1,   154,   159,
      41,    41,    -1,   154,   159,    41,    -1,    45,    -1,    41,
      58,   107,    -1,   156,    47,   159,    41,    58,   107,    -1,
      41,    58,    41,   157,    -1,   156,    47,   159,    41,    58,
      41,   157,    -1,    44,   159,   156,    45,    -1,    44,   159,
     156,    47,   159,    45,    47,   159,    -1,   147,    -1,   157,
      -1,   157,    47,   158,    -1,    55,    -1,    63,    -1,    64,
      -1,    22,    41,    11,   161,   159,   162,    -1,    44,   159,
      41,    49,    50,    -1,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    34,    37,    41,    42,    43,    46,
      47,    51,    52,    53,    57,    58,    62,    63,    67,    68,
      71,    72,    73,    76,    77,    79,    82,    85,    86,    87,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   133,
     137,   140,   141,   142,   143,   145,   146,   147,   150,   154,
     155,   158,   159,   162,   166,   167,   171,   172,   175,   178,
     179,   182,   183,   187,   188,   191,   192,   193,   196,   197,
     198,   199,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   214,   217,   220,   221,   222,   225,   226,   230,
     231,   232,   236,   237,   240,   243,   247,   250,   251,   254,
     258,   259,   262,   263,   268,   272,   273,   274,   275,   278,
     279,   282,   286,   287,   288,   292,   297,   298,   299,   303,
     304,   308,   312,   313,   316,   319,   320,   325,   326,   330,
     332,   333,   334,   337,   340,   341,   342,   345,   346,   347,
     348,   351,   352,   355,   356,   359,   362,   365,   366,   367,
     370,   371,   372,   373,   376,   377,   380,   381,   383,   384,
     385,   388,   389,   392,   393,   396,   397,   398,   401,   404,
     407,   408,   411,   412,   413,   414,   417,   420,   421,   422,
     423,   426,   427,   428,   431,   432,   439,   440,   441,   444,
     447,   450
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
  "t_eof", "t_pointer", "t_ampersand", "t_path_pack", "'+'", "'-'", "'*'",
  "'/'", "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC",
  "FUNC_SECOND_PART", "FUNC_PARAM", "FUNC_PARAM_FULFILL",
  "FUNC_PARAM_SECOND", "FUNC_PARAM_FULFILL_SECOND", "FUNC_RETURN_VALUE",
  "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT", "BODY", "BODY_END",
  "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN", "DEFER", "ASSIGNMENT",
  "SHORT_ASSIGN", "FUNC_CALL", "PARAM", "PARAM_START", "PARAM_END",
  "PARAM_END_FULFILL", "PARAM_FULFILL", "SHIFT", "SHIFT_AC", "METHOD",
  "METHOD_FULFILL", "POINTER", "PARAM_IMPORT", "VALUE", "GOTO", "LABEL",
  "SWITCH", "SWITCH_BODY", "SWITCH_BODY_START",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "MANY_RETURN_START", "MANY_RETURN_START_END", "EXPR",
  "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_START", "STRUCT_BODY", "STRUCT_END", "STRUCT_ENUM",
  "STRUCT_FIELD", "ST_EMBEDDED", "END_SYMBOLS", "INTERFACE", "INT_BODY",
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
     315,   316,   317,   318,   319,   320,   321,   322,    43,    45,
      42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    73,    73,    74,    74,    74,    74,    74,
      75,    76,    76,    76,    76,    77,    78,    78,    78,    79,
      79,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    85,    85,    86,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      92,    93,    93,    93,    93,    94,    94,    94,    95,    96,
      96,    97,    97,    98,    99,    99,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   105,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   109,   110,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   114,   115,   116,   117,   117,   118,
     119,   119,   120,   120,   121,   122,   122,   122,   122,   123,
     123,   124,   125,   125,   125,   126,   127,   127,   127,   128,
     128,   129,   130,   130,   131,   132,   132,   133,   133,   134,
     135,   135,   135,   136,   137,   137,   137,   138,   138,   138,
     138,   139,   139,   140,   140,   141,   142,   143,   143,   143,
     144,   144,   144,   144,   145,   145,   146,   146,   147,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   151,   152,
     153,   153,   154,   154,   154,   154,   155,   156,   156,   156,
     156,   157,   157,   157,   158,   158,   159,   159,   159,   160,
     161,   162
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     5,     3,     6,     1,     2,     4,     1,
       3,     2,     1,     0,     1,     3,     2,     1,     1,     2,
       1,     4,     3,     1,     1,     2,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     4,     3,     3,
       5,     6,     3,     4,     4,     3,     4,     3,     3,     4,
       3,     6,     6,     5,     4,     3,     3,     3,     5,     3,
       2,     2,     1,     5,     5,     1,     5,     5,     2,     2,
       2,     1,     2,     2,     1,     1,     2,     1,     3,     1,
       1,     3,     3,     1,     1,     2,     2,     2,     2,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     5,     3,     2,     2,     2,     1,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     1,
       1,     1,     1,     3,     1,     3,     2,     2,     1,     3,
       5,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       2,     4,     1,     2,     2,     2,     4,     1,     3,     1,
       3,     3,     1,     3,     1,     1,     0,     1,     1,     1,
       0,     1,     2,     7,     3,     1,     1,     4,     8,     6,
       3,     3,     3,     2,     1,     2,     1,     3,     3,     2,
       3,     1,     3,     7,     9,     6,     5,     5,     5,     4,
       3,     4,     1,     4,     4,     3,     1,     3,     6,     4,
       7,     4,     8,     1,     1,     3,     1,     1,     1,     6,
       5,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     9,     0,     0,    11,     0,    10,     0,     1,
     226,   227,   228,     0,     4,     3,   212,     0,    23,    14,
       0,     0,     0,     0,     0,   210,     2,     0,    22,     0,
      19,     0,   108,     0,     0,     0,    12,     0,     0,   211,
     215,   216,   209,    33,    34,    21,    23,     0,   109,    13,
       0,   110,     0,     0,   213,   214,    20,     0,    37,     0,
      15,     0,    28,    30,    16,     0,   111,     0,   231,   229,
       0,    34,     0,    24,    27,    29,    17,     0,     0,   176,
     176,     0,   176,     0,     0,   103,    36,     0,     0,     0,
      35,     0,    40,    53,    47,    54,     0,     0,    43,    44,
      42,    45,   148,    50,    48,    41,    49,   194,    46,    52,
      51,    39,     0,    32,     0,    26,     0,     0,     0,    80,
       0,     0,   112,   113,   114,   115,   185,   116,   117,   178,
     179,   174,   177,   118,   119,     0,   121,   120,   172,     0,
       0,     0,     0,   129,   126,     0,     0,     0,     0,     0,
       0,     0,   122,   114,   118,   121,   120,   165,     0,    85,
       0,    82,    91,     0,   123,     0,     0,     0,    88,     0,
       0,     0,     0,     0,   193,   106,   105,   107,    38,     0,
       0,     0,     0,     0,     0,   146,   159,   147,   162,   195,
     230,    31,    25,    18,     0,     0,     0,    77,     0,    70,
       0,     0,     0,     0,   180,   152,   149,     0,     0,     0,
       0,   144,   131,   132,   127,   130,   133,   128,   125,     0,
     180,   184,   167,     0,    81,     0,    90,   100,    99,   115,
       0,     0,   173,   114,    59,    68,   114,     0,    62,    58,
       0,    65,    67,    97,    89,     0,    92,    94,     0,   190,
     191,   192,     0,   103,   104,   102,    75,   101,    76,   180,
     164,   160,   145,     0,   163,     0,     0,   114,     0,    57,
      55,     0,    64,    69,     0,   187,   100,    99,    98,   170,
      79,     0,   153,   158,   157,   155,   156,   151,     0,   186,
     171,   140,     0,     0,   141,   142,   135,     0,     0,   166,
     169,     0,     0,     0,     0,     0,     0,   223,   224,    74,
       0,     0,    93,    96,    63,    66,     0,     0,     0,    73,
       0,    56,     0,    78,     0,   150,   154,   136,   139,   134,
     137,     0,   124,     0,   168,     0,     0,     0,     0,   206,
     207,     0,     0,   199,   201,     0,   196,     0,     0,     0,
       0,     0,    60,   161,     0,    72,    61,     0,   189,   138,
     143,   114,   181,     0,    84,    83,    87,    86,   205,   200,
       0,   198,     0,     0,     0,   225,     0,    71,   208,     0,
     182,   183,   197,   202,     0,   221,     0,     0,   188,   114,
     217,     0,     0,   219,     0,     0,     0,   203,     0,     0,
       0,   114,   218,   222,   204,   220
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    70,    39,    40,    82,
      83,    71,    72,    73,    74,   100,    75,   296,   102,   142,
     103,   176,   177,   164,   178,   179,   254,   255,   256,   144,
     145,   165,   106,   166,    33,   148,   108,   109,   110,   154,
     155,   156,   222,   223,   301,   302,   337,   303,   306,   224,
     111,   112,   270,   217,   297,   341,   195,   196,   197,   198,
     113,   233,   309,   149,   114,   150,   151,   373,   115,   152,
     300,   116,   117,   118,   355,   317,   357,   251,   119,   209,
     120,    11,    27,    52,   384,   318,   319,    24,    12,    48,
      79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -290
static const yytype_int16 yypact[] =
{
     232,    18,   241,    27,    62,   150,   200,  -290,  -290,  -290,
    -290,    -4,  -290,    78,    93,  -290,    30,  -290,    34,  -290,
    -290,  -290,  -290,   200,  -290,  -290,  -290,   200,   118,  -290,
     142,   200,   189,   281,   132,   127,  -290,   254,   119,   305,
    -290,   200,  -290,   308,   156,   200,  -290,   200,   200,  -290,
     134,  -290,  -290,  -290,  -290,  -290,   118,   152,  -290,  -290,
     200,  -290,   182,   198,  -290,  -290,  -290,   208,  -290,   145,
    -290,    55,  -290,  -290,  -290,   262,  -290,   238,  -290,  -290,
      95,   119,   360,  -290,  -290,  -290,  -290,   247,   271,   340,
     370,   277,   340,   291,   548,   219,  -290,   169,   161,   313,
    -290,   200,  -290,  -290,   192,   106,   323,    83,  -290,  -290,
    -290,  -290,   381,  -290,  -290,  -290,  -290,   362,  -290,  -290,
    -290,  -290,   248,  -290,   367,  -290,   145,   385,   383,  -290,
     126,   379,   414,  -290,   257,  -290,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,   221,  -290,   417,   106,    83,  -290,    61,
     401,   416,   548,  -290,  -290,    70,    -1,    41,   403,   397,
     406,   416,  -290,   185,   192,   410,  -290,   341,   415,  -290,
     430,  -290,   422,   475,  -290,   434,   567,   408,  -290,   481,
      83,   425,   428,   438,  -290,  -290,  -290,  -290,  -290,   441,
     445,   255,   445,   548,    29,   381,  -290,   458,  -290,  -290,
    -290,  -290,  -290,  -290,   440,    83,   427,    83,   491,  -290,
     179,    79,   255,   548,   446,   200,  -290,   320,   269,   548,
     439,  -290,  -290,  -290,  -290,  -290,  -290,  -290,  -290,   548,
     446,  -290,  -290,   548,  -290,    54,  -290,   129,   299,   438,
     255,   443,  -290,   155,   450,  -290,   184,   449,  -290,    61,
     496,  -290,  -290,   453,  -290,   454,  -290,   376,   510,  -290,
    -290,  -290,    83,   383,  -290,  -290,  -290,  -290,   450,   446,
    -290,  -290,   458,   416,  -290,   504,   467,   184,   460,  -290,
      28,   507,  -290,  -290,   548,    83,  -290,  -290,  -290,  -290,
     450,   416,  -290,  -290,  -290,  -290,  -290,  -290,   200,  -290,
    -290,  -290,   548,   439,   391,  -290,   350,    41,   463,  -290,
     393,   548,   548,   469,   586,   605,   389,  -290,   468,  -290,
      37,   480,  -290,  -290,   450,  -290,   416,   473,   482,  -290,
     362,  -290,   480,   450,    15,  -290,  -290,  -290,   395,   350,
    -290,   200,  -290,   626,  -290,   485,   206,   487,   351,  -290,
    -290,   476,   529,  -290,  -290,   493,   489,   293,   498,   482,
     539,   495,  -290,  -290,   540,  -290,  -290,   547,  -290,  -290,
    -290,   267,   450,   416,  -290,  -290,  -290,  -290,  -290,  -290,
     480,  -290,   255,   497,   315,  -290,   506,  -290,  -290,   480,
    -290,  -290,  -290,  -290,   645,  -290,   200,   255,  -290,   151,
    -290,   289,   371,  -290,   499,   509,   516,  -290,   664,   200,
     255,   151,  -290,  -290,  -290,  -290
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -290,  -290,   553,  -290,  -290,  -290,  -290,  -290,   505,  -290,
     436,  -290,   492,    -2,   -57,  -290,  -290,   490,   303,  -150,
    -290,   -97,   325,   -74,  -290,  -290,  -290,  -290,  -290,  -290,
     358,   -66,   174,   -70,   545,  -136,  -290,  -290,  -290,  -155,
    -290,  -290,   423,  -290,  -290,  -290,  -290,  -290,   275,   424,
    -290,  -290,  -123,  -290,  -290,   364,  -290,   387,   396,  -167,
    -290,  -290,  -290,   -87,  -290,   278,   -86,  -290,  -290,  -290,
    -290,  -290,  -290,   -83,  -289,  -268,  -290,  -195,    -7,   264,
     336,  -290,  -290,  -290,  -290,  -182,  -248,    -6,  -290,  -290,
    -290
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -181
static const yytype_int16 yytable[] =
{
      25,   104,   228,   157,   219,   107,   161,   167,   191,   105,
     193,   282,   180,   129,    86,   143,   143,    36,   143,   147,
     147,    37,   147,   146,   146,    42,   146,   248,   216,   329,
     274,   331,   362,   206,   199,    58,    55,   241,   231,    61,
      26,    62,    63,   366,   221,    34,   269,   208,   356,   191,
     193,   180,   204,   356,    76,   266,   279,   168,    53,    13,
     207,    67,    35,   325,   356,   218,    97,    84,    17,   121,
     203,    30,    31,   215,   212,   219,   289,   278,   124,   125,
     365,   213,   220,   258,   356,   153,   168,   212,    97,   244,
     249,   392,   257,    32,   250,   188,    54,   169,    53,    68,
     398,   170,   171,    18,   313,   274,   268,   212,   276,   168,
     284,   385,   356,   206,   213,   221,   264,   286,   264,   280,
     287,   356,    53,   281,    84,    20,   290,    28,   291,   168,
     189,   171,   304,    21,    22,    29,    54,    64,   311,   368,
     207,   204,   307,   104,   308,   123,   310,   107,    53,   225,
      19,   105,   342,   189,   171,    53,     1,     2,    67,    38,
      54,   345,   347,   190,   185,   311,     3,   205,   335,   245,
     252,   324,     4,   189,   171,    65,    47,    97,   351,   241,
     354,   259,   168,   326,    41,   -99,    81,  -112,   334,   -99,
      49,    98,    99,    54,   204,   316,    68,   333,    60,   283,
     172,    69,   186,   363,   172,    20,   315,   181,  -103,   292,
     182,   183,  -103,    21,    22,   338,   354,   403,   -99,   -99,
     205,   184,   168,    77,   346,   348,   189,   171,   316,   415,
      30,    31,   104,   172,   172,   315,   107,   360,     1,     2,
     105,  -103,  -103,    78,    98,    99,   393,   360,     3,  -104,
     391,   367,   212,   375,     4,    20,   372,    80,   400,   213,
     168,   402,   169,    21,    22,   104,   170,   171,   172,   107,
     173,    87,   412,   105,   414,    88,  -175,   174,  -104,    89,
     175,    90,    14,    15,    91,    92,    93,   122,   128,    94,
      16,   -99,   336,   132,   133,    50,   163,   135,   200,    51,
     169,   -99,   390,    95,   170,   171,   172,    96,    97,   137,
     358,   138,   130,    97,  -103,   212,   172,    20,   159,   299,
      98,    99,    44,    45,  -103,    21,    22,    98,    99,    87,
     404,    46,   162,    88,   405,   370,    10,    89,   381,    90,
     382,    10,    91,    92,    93,   293,   294,    94,   172,    44,
      45,   260,    56,   131,   187,    57,  -103,  -114,    59,    87,
     395,    95,   396,    88,   265,   295,   267,    89,   158,    90,
     160,    97,    91,    92,    93,   293,   294,    94,   132,   133,
     192,   134,   135,   131,  -180,    98,    99,   212,   232,   136,
     401,    95,   141,   141,   137,   141,   138,   212,   377,   139,
     140,    97,   194,   413,   213,    98,    99,   126,   132,   133,
     127,   134,   135,    97,   153,    98,    99,   201,   406,   136,
     210,   407,   212,   323,   137,    35,   138,   132,   133,    68,
     163,   135,   172,   352,   353,    98,    99,   212,   340,   212,
     344,   212,   369,   137,    20,   138,   132,   133,  -100,   246,
     135,   211,    21,    22,    98,    99,   214,   136,   229,    97,
     215,   230,   137,   234,   138,   132,   133,   190,   277,   135,
     247,   235,   236,    98,    99,   242,   136,   259,    97,   273,
     260,   137,   262,   138,   132,   133,   263,   163,   135,   278,
     261,   275,    98,    99,   285,   136,   212,   305,   320,   321,
     137,   314,   138,   -95,   322,   139,   140,   327,   328,   330,
     332,    98,    99,   237,   133,   359,   238,   239,   343,   132,
     133,   349,   163,   135,   352,   364,   316,   184,   378,   137,
     136,   138,   374,   240,   376,   137,   380,   138,   379,   383,
      98,    99,   386,   388,   253,   387,    98,    99,   132,   133,
     389,   163,   135,   397,   410,   394,   409,   408,    23,   136,
     312,    66,   202,    85,   137,   101,   138,   132,   133,   288,
     163,   135,   278,   352,   353,    98,    99,    43,   339,   226,
     227,   298,   271,   137,   361,   138,   132,   133,     0,   163,
     135,   272,     0,     0,    98,    99,     0,   136,     0,     0,
       0,     0,   137,     0,   138,   132,   133,     0,   243,   135,
       0,     0,     0,    98,    99,     0,   136,     0,     0,     0,
       0,   137,     0,   138,   132,   133,     0,   163,   135,     0,
       0,     0,    98,    99,     0,     0,     0,     0,   350,     0,
     137,     0,   138,   132,   133,     0,   163,   135,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,   137,
       0,   138,     0,   240,   132,   133,     0,   371,   135,     0,
      98,    99,     0,     0,     0,   136,     0,     0,     0,     0,
     137,     0,   138,   132,   133,     0,   399,   135,     0,     0,
       0,    98,    99,     0,     0,     0,     0,     0,     0,   137,
       0,   138,   132,   133,     0,   411,   135,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,   137,     0,
     138,     0,     0,     0,     0,     0,     0,     0,     0,    98,
      99
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-290)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    75,   157,    90,     5,    75,    92,    94,   105,    75,
     107,   206,    95,    87,    71,    89,    90,    23,    92,    89,
      90,    27,    92,    89,    90,    31,    92,   177,   151,   277,
     197,     3,   321,   130,   117,    41,    38,   173,   161,    45,
      44,    47,    48,   332,    45,    11,    17,   130,   316,   146,
     147,   134,    15,   321,    60,   191,   206,     3,     3,    41,
     130,     6,    28,   258,   332,   152,    51,    69,    41,    75,
     127,    41,    42,    44,    46,     5,   212,    62,    80,    81,
     328,    53,    12,   180,   352,    44,     3,    46,    51,   176,
     177,   380,   179,    63,   177,   101,    41,    43,     3,    44,
     389,    47,    48,    41,   240,   272,   193,    46,   205,     3,
     207,   359,   380,   210,    53,    45,   190,    38,   192,   206,
      41,   389,     3,   206,   126,    55,   213,    49,   214,     3,
      47,    48,   219,    63,    64,    42,    41,     3,   235,   334,
     210,    15,   229,   217,   230,    50,   233,   217,     3,   155,
       0,   217,   307,    47,    48,     3,     6,     7,     6,    41,
      41,   311,   312,    57,     3,   262,    16,    41,   291,   176,
     177,   258,    22,    47,    48,    41,    44,    51,   314,   315,
     316,    52,     3,   269,    42,    34,    41,    58,   285,    34,
      63,    65,    66,    41,    15,    44,    44,   284,    42,   206,
      49,    49,    41,   326,    49,    55,    51,    38,    57,   215,
      41,    42,    57,    63,    64,   302,   352,   399,    34,    34,
      41,    52,     3,    41,   311,   312,    47,    48,    44,   411,
      41,    42,   306,    49,    49,    51,   306,   320,     6,     7,
     306,    57,    57,    45,    65,    66,   382,   330,    16,    57,
     373,   334,    46,    47,    22,    55,   343,    49,   394,    53,
       3,   397,    43,    63,    64,   339,    47,    48,    49,   339,
      51,     9,   408,   339,   410,    13,    55,    58,    57,    17,
      61,    19,    41,    42,    22,    23,    24,    49,    41,    27,
      49,    34,   298,    38,    39,    41,    41,    42,    50,    45,
      43,    34,    35,    41,    47,    48,    49,    45,    51,    54,
     316,    56,    41,    51,    57,    46,    49,    55,    41,    50,
      65,    66,    41,    42,    57,    63,    64,    65,    66,     9,
      41,    50,    41,    13,    45,   341,     0,    17,    45,    19,
      47,     5,    22,    23,    24,    25,    26,    27,    49,    41,
      42,    52,    47,    13,    41,    50,    57,    58,    50,     9,
      45,    41,    47,    13,   190,    45,   192,    17,    90,    19,
      92,    51,    22,    23,    24,    25,    26,    27,    38,    39,
      57,    41,    42,    13,    44,    65,    66,    46,    47,    49,
     396,    41,    89,    90,    54,    92,    56,    46,    47,    59,
      60,    51,    21,   409,    53,    65,    66,    47,    38,    39,
      50,    41,    42,    51,    44,    65,    66,    50,    47,    49,
      41,    50,    46,    47,    54,    28,    56,    38,    39,    44,
      41,    42,    49,    44,    45,    65,    66,    46,    47,    46,
      47,    46,    47,    54,    55,    56,    38,    39,    34,    41,
      42,    34,    63,    64,    65,    66,    55,    49,    55,    51,
      44,    55,    54,    48,    56,    38,    39,    57,    41,    42,
      62,    41,    50,    65,    66,    41,    49,    52,    51,    21,
      52,    54,    41,    56,    38,    39,    41,    41,    42,    62,
      52,    51,    65,    66,     3,    49,    46,    58,    49,     3,
      54,    58,    56,    50,    50,    59,    60,     3,    41,    49,
       3,    65,    66,    38,    39,    47,    41,    42,    55,    38,
      39,    52,    41,    42,    44,    52,    44,    52,    52,    54,
      49,    56,    47,    58,    47,    54,    47,    56,    45,    41,
      65,    66,     3,     3,    63,    50,    65,    66,    38,    39,
       3,    41,    42,    47,    38,    58,    47,    58,     5,    49,
     235,    56,   126,    71,    54,    75,    56,    38,    39,   211,
      41,    42,    62,    44,    45,    65,    66,    32,   303,   156,
     156,   217,   195,    54,   320,    56,    38,    39,    -1,    41,
      42,   195,    -1,    -1,    65,    66,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    65,    66,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    52,    -1,
      54,    -1,    56,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    56,    -1,    58,    38,    39,    -1,    41,    42,    -1,
      65,    66,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    73,    74,    75,    76,    77,
     152,   153,   160,    41,    41,    42,    49,    41,    41,     0,
      55,    63,    64,    74,   159,   159,    44,   154,    49,    42,
      41,    42,    63,   106,    11,    28,   159,   159,    41,    79,
      80,    42,   159,   106,    41,    42,    50,    44,   161,    63,
      41,    45,   155,     3,    41,    85,    47,    50,   159,    50,
      42,   159,   159,   159,     3,    41,    80,     6,    44,    49,
      78,    83,    84,    85,    86,    88,   159,    41,    45,   162,
      49,    41,    81,    82,    85,    84,    86,     9,    13,    17,
      19,    22,    23,    24,    27,    41,    45,    51,    65,    66,
      87,    89,    90,    92,    95,   103,   104,   105,   108,   109,
     110,   122,   123,   132,   136,   140,   143,   144,   145,   150,
     152,   159,    49,    50,    85,    85,    47,    50,    41,    95,
      41,    13,    38,    39,    41,    42,    49,    54,    56,    59,
      60,    90,    91,    95,   101,   102,   103,   105,   107,   135,
     137,   138,   141,    44,   111,   112,   113,   135,   137,    41,
     137,   138,    41,    41,    95,   103,   105,   135,     3,    43,
      47,    48,    49,    51,    58,    61,    93,    94,    96,    97,
     145,    38,    41,    42,    52,     3,    41,    41,   159,    47,
      57,    93,    57,    93,    21,   128,   129,   130,   131,   145,
      50,    50,    82,    86,    15,    41,    93,   105,   145,   151,
      41,    34,    46,    53,    55,    44,   124,   125,   135,     5,
      12,    45,   114,   115,   121,   159,   114,   121,   111,    55,
      55,   124,    47,   133,    48,    41,    50,    38,    41,    42,
      58,   107,    41,    41,   135,   150,    41,    62,    91,   135,
     145,   149,   150,    63,    98,    99,   100,   135,    93,    52,
      52,    52,    41,    41,    95,   104,   107,   104,   135,    17,
     124,   129,   130,    21,   131,    51,    93,    41,    62,    91,
     135,   145,   149,   150,    93,     3,    38,    41,   102,   107,
     135,   138,   159,    25,    26,    45,    89,   126,   127,    50,
     142,   116,   117,   119,   135,    58,   120,   135,   138,   134,
     135,    93,    94,   107,    58,    51,    44,   147,   157,   158,
      49,     3,    50,    47,   135,   149,   138,     3,    41,   158,
      49,     3,     3,   135,    93,   124,   159,   118,   135,   120,
      47,   127,   111,    55,    47,    91,   135,    91,   135,    52,
      52,   107,    44,    45,   107,   146,   147,   148,   159,    47,
     145,   151,   146,   124,    52,   158,   146,   145,   149,    47,
     159,    41,   135,   139,    47,    47,    47,    47,    52,    45,
      47,    45,    47,    41,   156,   158,     3,    50,     3,     3,
      35,   124,   146,   107,    58,    45,    47,    47,   146,    41,
     107,   159,   107,   157,    41,    45,    47,    50,    58,    47,
      38,    41,   107,   159,   107,   157
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
#line 1956 "y.tab.c"
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
#line 453 "..\\main\\golang.y"


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