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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   814

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  225
/* YYNRULES -- Number of states.  */
#define YYNSTATES  424

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
     138,   140,   142,   144,   146,   151,   157,   162,   166,   170,
     176,   183,   187,   192,   197,   201,   206,   210,   214,   219,
     223,   230,   237,   243,   248,   252,   256,   260,   266,   270,
     273,   276,   278,   284,   290,   292,   298,   304,   309,   314,
     318,   320,   322,   326,   330,   333,   336,   339,   342,   347,
     351,   355,   360,   362,   364,   366,   368,   370,   372,   374,
     376,   378,   381,   384,   390,   394,   397,   400,   403,   405,
     408,   411,   414,   417,   421,   424,   427,   430,   434,   436,
     438,   440,   442,   445,   449,   451,   455,   458,   461,   463,
     467,   470,   472,   477,   479,   482,   485,   488,   492,   494,
     495,   499,   503,   505,   509,   511,   513,   514,   516,   518,
     520,   521,   523,   526,   534,   538,   540,   542,   547,   556,
     563,   567,   571,   575,   578,   580,   583,   585,   589,   593,
     596,   600,   602,   606,   614,   624,   631,   637,   643,   649,
     651,   654,   657,   659,   664,   669,   673,   679,   686,   694,
     699,   701,   704,   708,   715,   720,   728,   733,   742,   744,
     746,   750,   752,   754,   756,   758,   765,   773,   782,   784,
     787,   792,   799,   804,   808,   810
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    73,    74,   148,    -1,    74,   148,    -1,
      73,   148,    -1,    75,    -1,    76,    -1,    77,    -1,   141,
      -1,   149,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   100,    50,    -1,     7,    49,    63,   100,    50,    -1,
       7,    41,    42,    -1,     6,    41,    49,    79,    50,    78,
      -1,    86,    -1,    83,    86,    -1,    49,    81,    50,    86,
      -1,    80,    -1,    79,    47,    80,    -1,    41,    85,    -1,
      41,    -1,    -1,    82,    -1,    81,    47,    82,    -1,    41,
      85,    -1,    85,    -1,    84,    -1,    83,    84,    -1,    85,
      -1,     6,    49,    85,    50,    -1,     6,    49,    50,    -1,
       3,    -1,    41,    -1,    88,    87,    -1,    45,    -1,    44,
      -1,    88,    89,   148,    -1,    88,   148,    -1,    90,    -1,
     129,    -1,   104,    -1,   102,    -1,   103,    -1,   116,    -1,
     134,    -1,    95,    -1,   125,    -1,   132,    -1,   122,    -1,
     141,    -1,   139,    -1,    92,    -1,    13,    41,    93,   124,
      -1,    13,    41,    93,   124,     3,    -1,    13,    41,    93,
      91,    -1,    41,    94,   124,    -1,    41,    93,   124,    -1,
      41,    94,   134,     3,   135,    -1,    13,    41,    93,   134,
       3,   135,    -1,    41,    94,    91,    -1,    41,   134,    93,
     124,    -1,    13,    41,    93,   138,    -1,    41,    94,   138,
      -1,    41,   134,    93,   138,    -1,    41,    94,   139,    -1,
      41,    93,   139,    -1,    13,    41,    93,   139,    -1,    13,
      41,   140,    -1,    41,    94,    62,    49,   140,    50,    -1,
      13,    41,    41,    93,    41,   147,    -1,    13,    41,    93,
      41,   147,    -1,    41,    94,    41,   147,    -1,    98,    93,
     101,    -1,    99,    93,   124,    -1,    13,    41,    99,    -1,
      13,    41,    99,    93,   124,    -1,   124,    53,   124,    -1,
       9,    95,    -1,     3,    48,    -1,    48,    -1,    47,    41,
      93,   124,    47,    -1,    47,    41,    93,    91,    47,    -1,
      43,    -1,    47,    41,    94,   124,    47,    -1,    47,    41,
      94,    91,    47,    -1,    41,    49,   123,    50,    -1,    98,
      49,   123,    50,    -1,    97,    34,    97,    -1,    41,    -1,
      38,    -1,    41,    57,    41,    -1,    98,    57,    41,    -1,
      65,    41,    -1,    65,     3,    -1,    66,    41,    -1,    42,
     148,    -1,    42,    67,    42,   148,    -1,    41,    42,   148,
      -1,   100,    42,   148,    -1,   100,    41,    42,   148,    -1,
      38,    -1,    39,    -1,    41,    -1,    42,    -1,    54,    -1,
      56,    -1,    95,    -1,    96,    -1,    99,    -1,    24,    41,
      -1,    41,    58,    -1,    19,   126,    55,   124,   105,    -1,
      19,   124,   105,    -1,    19,   105,    -1,   106,   115,    -1,
     107,   115,    -1,    44,    -1,    44,   148,    -1,   106,   108,
      -1,   106,   109,    -1,   107,   108,    -1,     5,   113,   114,
      -1,    12,   114,    -1,   111,   112,    -1,   124,    47,    -1,
     111,   124,    47,    -1,   124,    -1,   110,    -1,   124,    -1,
      58,    -1,    58,    63,    -1,   114,    89,   148,    -1,    45,
      -1,   117,   118,   120,    -1,   117,   118,    -1,   117,   120,
      -1,   117,    -1,    17,   127,    86,    -1,   118,   119,    -1,
     119,    -1,    21,    17,   127,    86,    -1,   121,    -1,   120,
     121,    -1,    21,    86,    -1,    27,   123,    -1,   123,    47,
     124,    -1,   124,    -1,    -1,   124,    46,   101,    -1,   130,
     124,   131,    -1,   101,    -1,    41,    61,    41,    -1,    90,
      -1,    95,    -1,    -1,    91,    -1,    59,    -1,    60,    -1,
      -1,   124,    -1,    41,    35,    -1,    23,   126,    55,   127,
      55,   128,    86,    -1,    23,   127,    86,    -1,    49,    -1,
      50,    -1,    13,    41,   134,     3,    -1,    13,    41,   134,
       3,    93,   134,     3,   135,    -1,    13,    41,   134,     3,
      93,   138,    -1,    51,    38,    52,    -1,    51,    41,    52,
      -1,    51,    42,    52,    -1,    51,    52,    -1,   133,    -1,
     133,   134,    -1,   136,    -1,   136,    47,   135,    -1,    44,
     137,    45,    -1,    44,    45,    -1,    44,   135,    45,    -1,
     101,    -1,   137,    47,   101,    -1,    62,    49,   134,     3,
      47,   101,    50,    -1,    62,    49,   134,     3,    47,   101,
      47,    38,   101,    -1,    41,    51,   101,    58,   101,    52,
      -1,    41,    51,    58,   101,    52,    -1,    41,    51,   101,
      58,    52,    -1,    15,    51,     3,    52,     3,    -1,   143,
      -1,   137,     3,    -1,    41,    41,    -1,    41,    -1,   142,
     148,    41,     3,    -1,   142,   148,    41,    41,    -1,   142,
     148,    41,    -1,    22,    41,    28,    44,   144,    -1,    22,
      41,    28,    44,   142,   144,    -1,    22,    41,    28,    44,
     148,   142,   144,    -1,    22,    41,    28,    63,    -1,    45,
      -1,    63,    45,    -1,    41,    58,   101,    -1,   145,    47,
     148,    41,    58,   101,    -1,    41,    58,    41,   146,    -1,
     145,    47,   148,    41,    58,    41,   146,    -1,    44,   148,
     145,    45,    -1,    44,   148,   145,    47,   148,    45,    47,
     148,    -1,   136,    -1,   146,    -1,   146,    47,   147,    -1,
      55,    -1,    63,    -1,    64,    -1,   150,    -1,    22,    41,
      11,    44,   151,   152,    -1,    22,    41,    11,    44,   148,
     151,   152,    -1,    22,    41,    11,    63,    44,   148,   151,
     152,    -1,    95,    -1,    95,     3,    -1,    41,    49,     3,
      50,    -1,   151,   148,    41,    49,     3,    50,    -1,   151,
     148,    95,     3,    -1,   151,   148,    95,    -1,    45,    -1,
      63,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    34,    37,    41,    42,    43,    46,
      47,    51,    52,    53,    57,    58,    62,    63,    67,    68,
      71,    72,    73,    76,    77,    79,    82,    85,    86,    87,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   132,   136,
     139,   140,   141,   142,   144,   145,   146,   149,   150,   153,
     156,   157,   160,   161,   164,   165,   166,   169,   171,   172,
     173,   174,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   189,   192,   195,   196,   197,   200,   201,   205,   206,
     207,   212,   213,   216,   219,   223,   226,   227,   230,   234,
     235,   238,   239,   240,   245,   249,   250,   251,   252,   255,
     259,   260,   264,   268,   269,   272,   275,   278,   279,   280,
     283,   284,   285,   288,   291,   292,   293,   296,   297,   298,
     299,   302,   303,   306,   307,   310,   313,   316,   317,   318,
     321,   322,   323,   324,   327,   328,   331,   332,   334,   335,
     336,   339,   340,   343,   344,   347,   348,   349,   352,   355,
     358,   359,   360,   361,   362,   363,   366,   367,   368,   369,
     372,   373,   376,   377,   378,   379,   382,   383,   384,   387,
     388,   395,   396,   397,   400,   403,   404,   405,   409,   410,
     411,   412,   413,   414,   416,   417
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
  "SHORT_ASSIGN", "FUNC_CALL", "SHIFT", "SHIFT_AC", "METHOD", "POINTER",
  "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH", "SWITCH_BODY",
  "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT",
  "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART", "CASE_STATEMENT",
  "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST", "MULTY_ELSEIF_SECOND",
  "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD", "RETURN", "PARAM",
  "EXPR", "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_BODY", "STRUCT_START", "STRUCT_END", "STRUCT_ENUM",
  "STRUCT_FIELD", "ST_EMBEDDED", "END_SYMBOLS", "INTERFACE", "INT_START",
  "INT_BODY", "INT_END", YY_NULL
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
      89,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    96,
      97,    97,    98,    98,    99,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   103,   104,   104,   104,   105,   105,   106,   106,
     106,   107,   107,   108,   109,   110,   111,   111,   112,   113,
     113,   114,   114,   114,   115,   116,   116,   116,   116,   117,
     118,   118,   119,   120,   120,   121,   122,   123,   123,   123,
     124,   124,   124,   125,   126,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   131,   132,   132,   132,
     133,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   137,   137,   138,   138,   139,   139,   139,   140,   141,
     142,   142,   142,   142,   142,   142,   143,   143,   143,   143,
     144,   144,   145,   145,   145,   145,   146,   146,   146,   147,
     147,   148,   148,   148,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   152,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     5,     3,     6,     1,     2,     4,     1,
       3,     2,     1,     0,     1,     3,     2,     1,     1,     2,
       1,     4,     3,     1,     1,     2,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     5,     4,     3,     3,     5,
       6,     3,     4,     4,     3,     4,     3,     3,     4,     3,
       6,     6,     5,     4,     3,     3,     3,     5,     3,     2,
       2,     1,     5,     5,     1,     5,     5,     4,     4,     3,
       1,     1,     3,     3,     2,     2,     2,     2,     4,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     5,     3,     2,     2,     2,     1,     2,
       2,     2,     2,     3,     2,     2,     2,     3,     1,     1,
       1,     1,     2,     3,     1,     3,     2,     2,     1,     3,
       2,     1,     4,     1,     2,     2,     2,     3,     1,     0,
       3,     3,     1,     3,     1,     1,     0,     1,     1,     1,
       0,     1,     2,     7,     3,     1,     1,     4,     8,     6,
       3,     3,     3,     2,     1,     2,     1,     3,     3,     2,
       3,     1,     3,     7,     9,     6,     5,     5,     5,     1,
       2,     2,     1,     4,     4,     3,     5,     6,     7,     4,
       1,     2,     3,     6,     4,     7,     4,     8,     1,     1,
       3,     1,     1,     1,     1,     6,     7,     8,     1,     2,
       4,     6,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,   189,     9,   214,     0,     0,    11,     0,    10,     0,
       1,   211,   212,   213,     0,     4,     3,    23,    14,     0,
       0,     0,     0,     0,     0,     2,    22,     0,    19,     0,
       0,    97,     0,     0,     0,    12,     0,     0,     0,   199,
      33,    34,    21,    23,     0,    99,     0,    13,     0,   100,
       0,   218,     0,     0,     0,     0,   102,   103,   192,   105,
     200,   106,   107,   212,     0,     0,   108,   109,     0,   110,
     181,     0,     0,   196,     0,    20,     0,    37,     0,    15,
       0,    28,    30,    16,     0,    98,   101,   149,     0,   219,
     149,     0,     0,   224,   212,     0,   215,     0,   191,   149,
     201,    95,    94,    96,     0,   190,     0,   197,     0,     0,
       0,    34,     0,    24,    27,    29,    17,     0,     0,   160,
     156,     0,   156,     0,   149,     0,    36,     0,    35,     0,
      40,    53,    47,     0,     0,    43,    44,    42,    45,   138,
      50,    48,    41,    49,   174,    46,    52,    51,    39,     0,
     104,   165,   152,     0,   148,     0,    92,     0,    93,   216,
     225,     0,   223,     0,    91,    90,    89,   182,   195,   198,
      32,     0,    26,     0,     0,     0,    79,     0,   158,   159,
     157,     0,     0,     0,   104,   118,   154,   108,   110,   115,
       0,     0,     0,     0,     0,     0,     0,   111,   146,     0,
      84,     0,    81,     0,   112,     0,     0,     0,     0,     0,
       0,     0,   173,    38,     0,     0,     0,     0,   136,   141,
     137,   143,   175,   220,     0,    87,     0,     0,    88,   149,
     222,   217,   193,   194,    31,    25,    18,     0,     0,     0,
      76,     0,    69,     0,   139,     0,   119,     0,     0,   134,
     120,   121,   116,   122,   117,   114,     0,   160,   164,    80,
       0,    91,    90,   105,     0,     0,   153,   104,    58,    67,
     104,     0,    61,    57,     0,    64,    66,     0,   170,   171,
     172,     0,    74,    75,   160,   145,   140,   135,     0,   144,
     147,   150,   166,   151,     0,     0,     0,   104,     0,    56,
      54,     0,    63,    68,     0,   167,    78,   129,     0,     0,
     130,   131,   124,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   209,    73,     0,     0,    62,    65,     0,   221,
       0,     0,    72,     0,    55,     0,    77,     0,   125,   128,
     123,   126,   132,     0,   113,     0,     0,     0,     0,     0,
     186,   187,     0,     0,   179,     0,   176,     0,     0,     0,
       0,     0,    59,   142,     0,    71,    60,     0,   169,   127,
     133,   104,   161,     0,    83,    82,    86,    85,   185,   180,
       0,   178,     0,     0,   210,     0,    70,   188,     0,   162,
     163,   177,     0,   206,     0,     0,   168,   104,   202,     0,
       0,   204,     0,     0,     0,   183,     0,     0,     0,   104,
     203,   207,   184,   205
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    89,    37,    38,   122,
     123,    90,    91,    92,   295,   138,    94,   353,   140,   190,
     141,   216,   217,    76,    77,    78,    62,    79,    32,   162,
     145,   146,   147,   199,   200,   201,   260,   261,   317,   318,
     348,   319,   322,   262,   148,   149,   228,   229,   230,   231,
     150,   163,   164,   151,   203,   192,   383,   152,   165,   303,
     153,   154,   155,   365,   331,    81,   285,   156,   252,   157,
      82,    11,    83,   393,   332,   333,   105,    12,    13,    64,
     106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -314
static const yytype_int16 yypact[] =
{
     344,    40,   199,    55,   106,    97,   217,  -314,  -314,  -314,
    -314,  -314,  -314,  -314,   108,   135,  -314,   233,  -314,   145,
    -314,  -314,  -314,  -314,   217,  -314,  -314,   194,  -314,   171,
     389,   147,   265,    83,   128,  -314,   112,   252,  -314,   217,
     204,  -314,   326,   216,   217,  -314,   141,   232,   449,  -314,
    -314,  -314,  -314,   194,   211,  -314,   217,  -314,   217,  -314,
     221,   279,   277,   272,   338,   217,   266,  -314,   220,  -314,
    -314,  -314,  -314,   295,   114,   304,  -314,  -314,   286,  -314,
    -314,    27,   342,  -314,   691,  -314,   324,  -314,   122,  -314,
     247,  -314,  -314,  -314,   314,  -314,  -314,   177,   322,  -314,
     594,   345,   338,  -314,   340,   350,  -314,   272,  -314,   594,
    -314,  -314,  -314,  -314,   263,  -314,   710,  -314,   363,   342,
     104,   112,   353,  -314,  -314,  -314,  -314,   368,   380,   468,
     401,   381,   369,   395,   594,   136,  -314,   276,  -314,   217,
    -314,  -314,  -314,    35,    64,  -314,  -314,  -314,  -314,   427,
    -314,  -314,  -314,  -314,   343,  -314,  -314,  -314,  -314,   366,
     275,  -314,  -314,   391,   414,   594,  -314,   399,  -314,  -314,
    -314,   307,   444,   338,  -314,  -314,  -314,  -314,   127,  -314,
    -314,   413,  -314,   122,   433,   313,  -314,    58,  -314,  -314,
    -314,   155,   433,   437,   341,   217,  -314,   424,    64,  -314,
      17,    18,   243,   425,   453,   434,   433,  -314,   435,   445,
    -314,   451,  -314,   535,  -314,   454,   613,   497,    64,   446,
     447,   448,  -314,  -314,   455,   710,   594,   115,   427,  -314,
     476,  -314,  -314,  -314,   594,  -314,   710,   153,  -314,   256,
    -314,  -314,  -314,  -314,  -314,  -314,  -314,   450,    64,   516,
      64,   499,  -314,   594,  -314,   197,  -314,   594,   458,  -314,
    -314,  -314,  -314,  -314,  -314,  -314,   594,   468,  -314,  -314,
     119,   170,   375,   448,   710,   460,  -314,   200,   414,  -314,
     222,   459,  -314,   155,   508,  -314,  -314,   556,  -314,  -314,
    -314,    64,  -314,   414,   468,  -314,  -314,   476,   433,  -314,
     414,  -314,  -314,  -314,   469,   517,   480,   222,   474,  -314,
      12,   522,  -314,  -314,   594,    64,   414,  -314,   594,   458,
     283,   463,   330,   243,   475,   594,   594,   477,   632,   651,
     420,  -314,   484,  -314,     6,   488,   414,  -314,   433,  -314,
     485,   496,  -314,   343,  -314,   488,   414,   -14,  -314,   426,
     330,  -314,  -314,   217,  -314,   672,   494,   373,   495,   384,
    -314,  -314,   491,   575,  -314,   500,   502,   370,   503,   496,
     544,   506,  -314,  -314,   547,  -314,  -314,   549,  -314,  -314,
    -314,   172,   414,   433,  -314,  -314,  -314,  -314,  -314,  -314,
     488,  -314,   510,   423,  -314,   513,  -314,  -314,   488,  -314,
    -314,  -314,   729,  -314,   217,   710,  -314,   259,  -314,   301,
     404,  -314,   511,   514,   526,  -314,   748,   217,   710,   259,
    -314,  -314,  -314,  -314
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -314,  -314,   561,  -314,  -314,  -314,  -314,  -314,   518,  -314,
     392,  -314,   489,   -34,   -48,  -314,  -314,   486,   339,  -197,
    -314,   -23,   315,   -39,  -314,   470,   -86,   -85,   552,   -44,
    -314,  -314,  -314,  -192,  -314,  -314,   385,  -314,  -314,  -314,
    -314,  -314,   269,   398,  -314,  -314,  -314,   362,   364,  -219,
    -314,    42,  -116,  -314,   464,  -129,  -314,  -314,  -314,  -314,
    -314,  -314,  -123,  -250,  -255,  -313,  -231,  -190,   268,    28,
     519,  -314,   -50,  -314,  -233,  -271,    -5,  -314,  -314,   -28,
     -97
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -161
static const yytype_int16 yytable[] =
{
      25,    26,    52,   206,    80,   169,    93,    61,   143,   144,
     265,   299,   218,   191,   202,   344,   191,   367,   312,    35,
     282,   247,   257,   257,    61,    41,   279,   286,    10,   258,
     115,   232,   117,    10,    55,   102,   342,   137,   209,    59,
      80,    63,   126,    84,   143,   198,   143,   198,   308,   237,
     367,    95,   309,    96,   124,   142,   337,   137,   236,   313,
     107,   209,   259,   259,   251,   253,   172,   209,    61,   179,
     375,   218,   177,   247,   116,   366,   241,   118,   299,   173,
     366,    14,   224,   212,   100,   372,   181,   182,   186,   158,
     366,   197,   101,   197,   284,   376,    18,    20,   394,   248,
     278,   283,   250,     1,     2,   224,   212,    50,   366,   137,
     293,   224,   212,     3,   118,    50,   378,   111,   300,     4,
     225,   226,   209,    74,    75,    50,   311,    46,   356,   358,
     242,   354,   294,   310,   223,   366,   246,   316,   324,   209,
     401,   320,   167,   366,   254,    51,    47,    19,   406,   124,
     323,   191,    21,    51,   180,   112,    33,    27,   268,    87,
      22,    23,   210,   121,   249,   338,   211,   212,   243,   275,
     250,   336,    48,    34,   411,   226,   208,    28,   191,   210,
     159,   292,    60,   211,   212,   109,   423,   213,    29,    30,
     256,    49,   301,    98,   214,   287,    21,   215,   346,   236,
     209,   236,   349,   302,    22,    23,   -90,   399,   253,   357,
     359,   370,   247,    39,    50,    66,    67,    86,   160,    69,
     370,   109,   288,  -104,   377,   306,   161,   314,  -102,    98,
     327,    71,   249,    72,   -90,    36,   143,   144,   248,   382,
      15,    16,    74,    75,   224,   212,    56,   325,    17,   109,
      50,   329,    51,    86,   -90,    87,   -90,    98,    58,   304,
      88,   108,    74,    75,   143,   144,   330,  -104,   325,   109,
      97,   109,    21,   329,    29,    30,    65,    98,    98,    98,
      22,    23,    99,   142,   362,   275,    80,   195,    51,   236,
     373,    87,   347,   -90,    66,    67,    31,   160,    69,    53,
     -91,   174,    54,   330,   175,   161,    43,    44,   109,   -90,
      71,   142,    72,    60,   219,    45,    98,   220,   221,    80,
     114,    74,    75,   127,   109,   368,   100,   128,   222,   236,
     351,   129,    98,   130,   101,   400,   131,   132,   133,   127,
     110,   134,   412,   128,   209,   113,   413,   129,   380,   130,
       1,     2,   131,   132,   133,   135,   239,   134,   408,   136,
       3,   410,   109,   166,    98,   137,     4,    43,    44,    21,
      98,   135,   420,   120,   422,   -90,    57,    22,    23,    74,
      75,   137,   193,   103,   210,   170,   168,    70,   211,   212,
     109,   171,   137,    21,   137,    74,    75,    21,    98,   409,
     183,   104,    23,   184,   178,    73,    23,    66,    67,   185,
     194,    69,   421,  -160,   193,   391,   233,   116,   161,   236,
     385,   187,   204,    71,   109,    72,   253,   289,   188,   189,
     236,   387,    98,  -104,    74,    75,   207,   253,   234,    66,
      67,   235,   194,    69,    21,   195,   234,   240,   227,   238,
     161,   414,    22,    23,   415,    71,    40,    72,    66,    67,
     236,   160,    69,   244,   363,   364,    74,    75,   403,   196,
     404,   196,   236,   379,    71,    21,    72,    87,   255,  -155,
     266,    34,   234,    22,    23,    74,    75,    66,    67,   267,
      68,    69,   270,   269,    70,   276,   291,   298,   288,   289,
     290,   305,   315,    71,    21,    72,    66,    67,   334,   160,
      69,   335,    73,    23,    74,    75,   321,   161,   328,   339,
     340,   341,    71,   343,    72,   345,   352,   188,   189,   360,
     355,   369,   363,    74,    75,    66,    67,   374,   280,    69,
     330,   384,   386,   388,   392,   389,   161,   395,   137,   390,
     397,    71,   398,    72,    66,    67,   396,   307,    69,   281,
     405,   417,    74,    75,   418,   161,    24,   137,   402,   416,
      71,    85,    72,   271,    67,   245,   272,   273,   308,   125,
     139,    74,    75,    42,   176,   326,   263,   222,   350,    71,
     296,    72,   297,   274,    66,    67,   205,   160,    69,   264,
      74,    75,   371,   119,     0,   161,     0,     0,     0,     0,
      71,     0,    72,    66,    67,     0,   160,    69,   308,   363,
     364,    74,    75,     0,     0,     0,     0,     0,     0,    71,
       0,    72,    66,    67,     0,   160,    69,     0,     0,     0,
      74,    75,     0,   161,     0,     0,     0,     0,    71,     0,
      72,    66,    67,     0,   277,    69,     0,     0,     0,    74,
      75,     0,   161,     0,     0,     0,     0,    71,     0,    72,
      66,    67,     0,   160,    69,     0,     0,     0,    74,    75,
       0,     0,     0,     0,   361,     0,    71,     0,    72,    66,
      67,     0,   160,    69,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,    71,     0,    72,     0,   274,
      66,    67,     0,   381,    69,     0,    74,    75,     0,     0,
       0,   161,     0,     0,     0,     0,    71,     0,    72,    66,
      67,     0,    68,    69,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,    71,     0,    72,    66,    67,
       0,   160,    69,     0,     0,     0,    74,    75,     0,     0,
       0,     0,     0,     0,    71,     0,    72,    66,    67,     0,
     407,    69,     0,     0,     0,    74,    75,     0,     0,     0,
       0,     0,     0,    71,     0,    72,    66,    67,     0,   419,
      69,     0,     0,     0,    74,    75,     0,     0,     0,     0,
       0,     0,    71,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    75
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-314)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    36,   132,    48,   102,    54,    46,    94,    94,
     202,   230,   135,   129,   130,     3,   132,   330,   249,    24,
     217,    15,     5,     5,    63,    30,   216,   217,     0,    12,
       3,   154,    82,     5,    39,    63,   307,    51,     3,    44,
      84,    46,    90,    48,   130,   130,   132,   132,    62,   165,
     363,    56,   249,    58,    88,    94,   287,    51,    46,   249,
      65,     3,    45,    45,   187,    53,   105,     3,   107,   119,
     341,   194,   116,    15,    47,   330,   173,    82,   297,   107,
     335,    41,    47,    48,    49,   335,   120,   121,   127,    94,
     345,   130,    57,   132,   217,   345,    41,     0,   369,    41,
     216,   217,   187,     6,     7,    47,    48,     3,   363,    51,
     226,    47,    48,    16,   119,     3,   347,     3,   234,    22,
     143,   144,     3,    65,    66,     3,   249,    44,   325,   326,
       3,   323,    17,   249,   139,   390,   184,   253,   267,     3,
     390,   257,   100,   398,   192,    41,    63,    41,   398,   183,
     266,   267,    55,    41,    50,    41,    11,    49,   206,    44,
      63,    64,    43,    41,   187,   294,    47,    48,    41,   213,
     255,   287,    44,    28,   407,   198,   134,    42,   294,    43,
       3,   225,    41,    47,    48,    49,   419,    51,    41,    42,
     195,    63,   236,    57,    58,   218,    55,    61,   314,    46,
       3,    46,   318,    50,    63,    64,    34,    35,    53,   325,
     326,   334,    15,    42,     3,    38,    39,     6,    41,    42,
     343,    49,    52,     3,   347,   248,    49,   250,    58,    57,
     274,    54,   255,    56,    34,    41,   322,   322,    41,   355,
      41,    42,    65,    66,    47,    48,    42,   270,    49,    49,
       3,    51,    41,     6,    34,    44,    34,    57,    42,     3,
      49,    41,    65,    66,   350,   350,    44,    47,   291,    49,
      49,    49,    55,    51,    41,    42,    44,    57,    57,    57,
      63,    64,     3,   322,   328,   329,   330,    44,    41,    46,
     338,    44,   315,    34,    38,    39,    63,    41,    42,    47,
      34,    38,    50,    44,    41,    49,    41,    42,    49,    34,
      54,   350,    56,    41,    38,    50,    57,    41,    42,   363,
      34,    65,    66,     9,    49,   330,    49,    13,    52,    46,
      47,    17,    57,    19,    57,   383,    22,    23,    24,     9,
      45,    27,    41,    13,     3,    41,    45,    17,   353,    19,
       6,     7,    22,    23,    24,    41,    49,    27,   402,    45,
      16,   405,    49,    41,    57,    51,    22,    41,    42,    55,
      57,    41,   416,    49,   418,    34,    50,    63,    64,    65,
      66,    51,    13,    45,    43,    45,    41,    45,    47,    48,
      49,    41,    51,    55,    51,    65,    66,    55,    57,   404,
      47,    63,    64,    50,    41,    63,    64,    38,    39,    41,
      41,    42,   417,    44,    13,    45,    50,    47,    49,    46,
      47,    41,    41,    54,    49,    56,    53,    52,    59,    60,
      46,    47,    57,    58,    65,    66,    41,    53,    47,    38,
      39,    50,    41,    42,    55,    44,    47,     3,    21,    50,
      49,    47,    63,    64,    50,    54,    67,    56,    38,    39,
      46,    41,    42,    50,    44,    45,    65,    66,    45,   130,
      47,   132,    46,    47,    54,    55,    56,    44,    41,    55,
      55,    28,    47,    63,    64,    65,    66,    38,    39,    55,
      41,    42,    41,    48,    45,    41,    41,    21,    52,    52,
      52,    51,     3,    54,    55,    56,    38,    39,    49,    41,
      42,     3,    63,    64,    65,    66,    58,    49,    58,    50,
       3,    41,    54,    49,    56,     3,    63,    59,    60,    52,
      55,    47,    44,    65,    66,    38,    39,    52,    41,    42,
      44,    47,    47,    52,    41,    45,    49,     3,    51,    47,
       3,    54,     3,    56,    38,    39,    50,    41,    42,    62,
      47,    47,    65,    66,    38,    49,     5,    51,    58,    58,
      54,    53,    56,    38,    39,   183,    41,    42,    62,    90,
      94,    65,    66,    31,   114,   270,   201,    52,   319,    54,
     228,    56,   228,    58,    38,    39,   132,    41,    42,   201,
      65,    66,   334,    84,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    38,    39,    -1,    41,    42,    62,    44,
      45,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      65,    66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,
      66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    52,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,    58,
      38,    39,    -1,    41,    42,    -1,    65,    66,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    73,    74,    75,    76,    77,
     141,   143,   149,   150,    41,    41,    42,    49,    41,    41,
       0,    55,    63,    64,    74,   148,   148,    49,    42,    41,
      42,    63,   100,    11,    28,   148,    41,    79,    80,    42,
      67,   148,   100,    41,    42,    50,    44,    63,    44,    63,
       3,    41,    85,    47,    50,   148,    42,    50,    42,   148,
      41,    95,    98,   148,   151,    44,    38,    39,    41,    42,
      45,    54,    56,    63,    65,    66,    95,    96,    97,    99,
     101,   137,   142,   144,   148,    80,     6,    44,    49,    78,
      83,    84,    85,    86,    88,   148,   148,    49,    57,     3,
      49,    57,   151,    45,    63,   148,   152,   148,    41,    49,
      45,     3,    41,    41,    34,     3,    47,   144,   148,   142,
      49,    41,    81,    82,    85,    84,    86,     9,    13,    17,
      19,    22,    23,    24,    27,    41,    45,    51,    87,    89,
      90,    92,    95,    98,    99,   102,   103,   104,   116,   117,
     122,   125,   129,   132,   133,   134,   139,   141,   148,     3,
      41,    49,   101,   123,   124,   130,    41,   123,    41,   152,
      45,    41,    95,   151,    38,    41,    97,   101,    41,   144,
      50,    85,    85,    47,    50,    41,    95,    41,    59,    60,
      91,   124,   127,    13,    41,    44,    90,    95,    99,   105,
     106,   107,   124,   126,    41,   126,   127,    41,   123,     3,
      43,    47,    48,    51,    58,    61,    93,    94,   134,    38,
      41,    42,    52,   148,    47,    93,    93,    21,   118,   119,
     120,   121,   134,    50,    47,    50,    46,   124,    50,    49,
       3,   152,     3,    41,    50,    82,    86,    15,    41,    93,
      99,   134,   140,    53,    86,    41,   148,     5,    12,    45,
     108,   109,   115,   108,   115,   105,    55,    55,    86,    48,
      41,    38,    41,    42,    58,   101,    41,    41,   124,   139,
      41,    62,    91,   124,   134,   138,   139,    93,    52,    52,
      52,    41,   101,   124,    17,    86,   119,   120,    21,   121,
     124,   101,    50,   131,     3,    51,    93,    41,    62,    91,
     124,   134,   138,   139,    93,     3,   124,   110,   111,   113,
     124,    58,   114,   124,   127,    93,    94,   101,    58,    51,
      44,   136,   146,   147,    49,     3,   124,   138,   127,    50,
       3,    41,   147,    49,     3,     3,   124,    93,   112,   124,
     114,    47,    63,    89,   105,    55,    91,   124,    91,   124,
      52,    52,   101,    44,    45,   135,   136,   137,   148,    47,
     134,   140,   135,    86,    52,   147,   135,   134,   138,    47,
     148,    41,   124,   128,    47,    47,    47,    47,    52,    45,
      47,    45,    41,   145,   147,     3,    50,     3,     3,    35,
      86,   135,    58,    45,    47,    47,   135,    41,   101,   148,
     101,   146,    41,    45,    47,    50,    58,    47,    38,    41,
     101,   148,   101,   146
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
        case 207:
/* Line 1792 of yacc.c  */
#line 383 "..\\main\\golang.y"
    {printf("HERE");}
    break;


/* Line 1792 of yacc.c  */
#line 1973 "y.tab.c"
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
#line 420 "..\\main\\golang.y"


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