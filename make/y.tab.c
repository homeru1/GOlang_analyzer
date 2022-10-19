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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   652

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNRULES -- Number of states.  */
#define YYNSTATES  319

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
      24,    27,    32,    35,    37,    39,    43,    46,    48,    50,
      52,    54,    56,    58,    60,    62,    64,    66,    68,    70,
      72,    77,    83,    88,    92,    98,   105,   109,   114,   119,
     123,   128,   132,   136,   141,   145,   152,   159,   165,   170,
     175,   179,   183,   186,   188,   194,   200,   202,   208,   214,
     219,   222,   225,   229,   231,   233,   236,   238,   240,   242,
     244,   246,   248,   250,   252,   255,   258,   261,   264,   267,
     273,   277,   280,   283,   286,   288,   291,   294,   297,   300,
     304,   307,   310,   313,   317,   319,   321,   323,   325,   328,
     332,   334,   338,   341,   344,   346,   350,   353,   355,   360,
     362,   365,   368,   371,   375,   377,   378,   382,   386,   388,
     392,   394,   396,   397,   399,   401,   403,   404,   406,   409,
     417,   421,   423,   425,   430,   439,   446,   450,   454,   458,
     461,   463,   466,   468,   472,   476,   479,   483,   485,   489,
     497,   507,   514,   520,   526,   532,   537,   541,   543,   548,
     553,   557,   559,   563,   570,   575,   583,   588,   597,   599,
     601,   605,   607,   610,   612,   614
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    72,    73,   137,    -1,    73,   137,    -1,
      72,   137,    -1,    74,    -1,    75,    -1,    76,    -1,   129,
      -1,    16,    41,    -1,     7,    42,    -1,     6,    41,    85,
      77,    -1,    79,    78,    -1,    45,    -1,    44,    -1,    79,
      80,   137,    -1,    79,   137,    -1,    81,    -1,   117,    -1,
      92,    -1,    90,    -1,    91,    -1,   104,    -1,   122,    -1,
      85,    -1,   113,    -1,   120,    -1,   110,    -1,   129,    -1,
     136,    -1,    13,    41,    83,   112,    -1,    13,    41,    83,
     112,     3,    -1,    13,    41,    83,    82,    -1,    41,    84,
     112,    -1,    41,    84,   122,     3,   123,    -1,    13,    41,
      83,   122,     3,   123,    -1,    41,    84,    82,    -1,    41,
     122,    83,   112,    -1,    13,    41,    83,   126,    -1,    41,
      84,   126,    -1,    41,   122,    83,   126,    -1,    41,    84,
     127,    -1,    41,    83,   127,    -1,    13,    41,    83,   127,
      -1,    13,    41,   128,    -1,    41,    84,    62,    49,   128,
      50,    -1,    13,    41,    41,    83,    41,   135,    -1,    13,
      41,    83,    41,   135,    -1,    41,    84,    41,   135,    -1,
      41,   136,    83,    89,    -1,    89,    83,    89,    -1,   112,
      53,   112,    -1,     3,    48,    -1,    48,    -1,    47,    41,
      83,   112,    47,    -1,    47,    41,    83,    82,    47,    -1,
      43,    -1,    47,    41,    84,   112,    47,    -1,    47,    41,
      84,    82,    47,    -1,    41,    49,   111,    50,    -1,    88,
      85,    -1,    49,    50,    -1,    87,    34,    87,    -1,    41,
      -1,    38,    -1,    41,    57,    -1,    38,    -1,    39,    -1,
      41,    -1,    42,    -1,    54,    -1,    56,    -1,    85,    -1,
      86,    -1,    65,    41,    -1,    65,     3,    -1,    66,    41,
      -1,    24,    41,    -1,    41,    58,    -1,    19,   114,    55,
     112,    93,    -1,    19,   112,    93,    -1,    19,    93,    -1,
      94,   103,    -1,    95,   103,    -1,    44,    -1,    44,   137,
      -1,    94,    96,    -1,    94,    97,    -1,    95,    96,    -1,
       5,   101,   102,    -1,    12,   102,    -1,    99,   100,    -1,
     112,    47,    -1,    99,   112,    47,    -1,   112,    -1,    98,
      -1,   112,    -1,    58,    -1,    58,    63,    -1,   102,    80,
     137,    -1,    45,    -1,   105,   106,   108,    -1,   105,   106,
      -1,   105,   108,    -1,   105,    -1,    17,   115,    77,    -1,
     106,   107,    -1,   107,    -1,    21,    17,   115,    77,    -1,
     109,    -1,   108,   109,    -1,    21,    77,    -1,    27,   111,
      -1,   111,    47,   112,    -1,   112,    -1,    -1,   112,    46,
      89,    -1,   118,   112,   119,    -1,    89,    -1,    41,    61,
      41,    -1,    81,    -1,    85,    -1,    -1,    82,    -1,    59,
      -1,    60,    -1,    -1,   112,    -1,    41,    35,    -1,    23,
     114,    55,   115,    55,   116,    77,    -1,    23,   115,    77,
      -1,    49,    -1,    50,    -1,    13,    41,   122,     3,    -1,
      13,    41,   122,     3,    83,   122,     3,   123,    -1,    13,
      41,   122,     3,    83,   126,    -1,    51,    38,    52,    -1,
      51,    41,    52,    -1,    51,    42,    52,    -1,    51,    52,
      -1,   121,    -1,   121,   122,    -1,   124,    -1,   124,    47,
     123,    -1,    44,   125,    45,    -1,    44,    45,    -1,    44,
     123,    45,    -1,    89,    -1,   125,    47,    89,    -1,    62,
      49,   122,     3,    47,    89,    50,    -1,    62,    49,   122,
       3,    47,    89,    47,    38,    89,    -1,    41,    51,    89,
      58,    89,    52,    -1,    41,    51,    58,    89,    52,    -1,
      41,    51,    89,    58,    52,    -1,    15,    51,     3,    52,
       3,    -1,   130,   131,   137,   132,    -1,    22,    41,    28,
      -1,    44,    -1,   131,   137,    41,     3,    -1,   131,   137,
      41,    41,    -1,   131,   137,    41,    -1,    45,    -1,    41,
      58,    89,    -1,   133,    47,   137,    41,    58,    89,    -1,
      41,    58,    41,   134,    -1,   133,    47,   137,    41,    58,
      41,   134,    -1,    44,   137,   133,    45,    -1,    44,   137,
     133,    47,   137,    45,    47,   137,    -1,   124,    -1,   134,
      -1,   134,    47,   135,    -1,    88,    -1,    88,   136,    -1,
      55,    -1,    63,    -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    27,
      30,    33,    36,    39,    42,    43,    44,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    85,    88,    89,    90,    91,    93,    94,    95,    98,
      99,   100,   103,   106,   107,   110,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   126,   129,   132,
     133,   134,   137,   138,   142,   143,   144,   149,   150,   153,
     156,   160,   163,   164,   167,   171,   172,   175,   176,   177,
     182,   186,   187,   188,   189,   192,   196,   197,   201,   205,
     206,   209,   212,   215,   216,   217,   220,   221,   222,   225,
     228,   229,   230,   233,   234,   235,   236,   239,   240,   243,
     244,   247,   250,   253,   254,   255,   258,   259,   260,   261,
     264,   265,   268,   269,   271,   272,   273,   276,   277,   280,
     281,   284,   285,   286,   289,   292,   295,   298,   299,   300,
     301,   304,   307,   308,   309,   310,   313,   314,   315,   318,
     319,   322,   323,   326,   327,   328
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
  "$accept", "START", "GLOBAL", "PACKAGE", "IMPORT", "FUNC", "BODY",
  "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN", "ASSIGNMENT",
  "SHORT_ASSIGN", "FUNC_CALL", "SHIFT", "SHIFT_AC", "METHOD", "VALUE",
  "GOTO", "LABEL", "SWITCH", "SWITCH_BODY", "SWITCH_BODY_START",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "MULTY_ELSEIF_SECOND",
  "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD", "RETURN", "PARAM",
  "EXPR", "SHORT_EXPR", "INIT_STATE", "CONDITION", "POST_STATE", "FOR",
  "EXPR_START", "EXPR_END", "ARRAY_BODY", "ARRAY_INDEX", "MULTI_AR",
  "PLENTY", "PLENTY_OLD", "ENUM", "MAKE", "SLICE", "MAPS", "STRUCT",
  "STRUCT_START", "STRUCT_BODY", "STRUCT_END", "STRUCT_ENUM",
  "STRUCT_FIELD", "ST_EMBEDDED", "ACCESS_FIELDS", "END_SYMBOLS", YY_NULL
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
       0,    71,    72,    72,    72,    73,    73,    73,    73,    74,
      75,    76,    77,    78,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    83,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    86,    87,    87,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    91,    92,
      92,    92,    93,    93,    94,    94,    94,    95,    95,    96,
      97,    98,    99,    99,   100,   101,   101,   102,   102,   102,
     103,   104,   104,   104,   104,   105,   106,   106,   107,   108,
     108,   109,   110,   111,   111,   111,   112,   112,   112,   113,
     114,   114,   114,   115,   115,   115,   115,   116,   116,   117,
     117,   118,   119,   120,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   124,   125,   125,   126,
     126,   127,   127,   127,   128,   129,   130,   131,   131,   131,
     131,   132,   133,   133,   133,   133,   134,   134,   134,   135,
     135,   136,   136,   137,   137,   137
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     2,
       2,     4,     2,     1,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     5,     4,     3,     5,     6,     3,     4,     4,     3,
       4,     3,     3,     4,     3,     6,     6,     5,     4,     4,
       3,     3,     2,     1,     5,     5,     1,     5,     5,     4,
       2,     2,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     5,
       3,     2,     2,     2,     1,     2,     2,     2,     2,     3,
       2,     2,     2,     3,     1,     1,     1,     1,     2,     3,
       1,     3,     2,     2,     1,     3,     2,     1,     4,     1,
       2,     2,     2,     3,     1,     0,     3,     3,     1,     3,
       1,     1,     0,     1,     1,     1,     0,     1,     2,     7,
       3,     1,     1,     4,     8,     6,     3,     3,     3,     2,
       1,     2,     1,     3,     3,     2,     3,     1,     3,     7,
       9,     6,     5,     5,     5,     4,     3,     1,     4,     4,
       3,     1,     3,     6,     4,     7,     4,     8,     1,     1,
       3,     1,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     0,    10,     9,     0,     1,   173,   174,   175,
       0,     4,     3,   157,     0,     0,     0,     0,     0,   156,
       2,     0,   115,    65,    61,    14,    11,     0,    60,   160,
     161,   155,    66,    67,    68,    69,   131,    70,    71,     0,
       0,    72,    73,     0,   118,     0,   114,     0,     0,   126,
     122,   122,     0,   115,    63,    13,     0,    12,     0,    17,
      24,   171,     0,    20,    21,    19,    22,   104,    27,    25,
      18,    26,   140,    23,    28,    29,    16,   158,   159,    75,
      74,    76,     0,     0,    59,     0,     0,     0,   124,   125,
     123,     0,     0,     0,    68,    84,   120,    72,   118,    81,
       0,     0,     0,     0,     0,     0,    77,   112,     0,     0,
      56,     0,    53,    78,     0,     0,     0,   171,     0,     0,
       0,     0,     0,   139,    15,   172,     0,     0,     0,   102,
     107,   103,   109,   141,    64,    63,    62,   113,   116,   132,
     117,     0,     0,     0,     0,    44,     0,   105,     0,    85,
       0,     0,   100,    86,    87,    82,    88,    83,    80,     0,
     126,   130,    52,     0,   119,     0,    42,    68,     0,    36,
      33,     0,    39,    41,     0,     0,   136,   137,   138,     0,
      50,   126,   111,   106,   101,     0,   110,     0,     0,    68,
       0,    32,    30,     0,    38,    43,   133,    51,    95,     0,
       0,    96,    97,    90,     0,     0,     0,     0,     0,     0,
     168,   169,    48,     0,     0,    37,    40,    49,     0,     0,
       0,    47,     0,    31,     0,     0,    91,    94,    89,    92,
      98,     0,    79,     0,     0,     0,     0,     0,     0,     0,
       0,   145,   147,     0,   142,     0,     0,     0,     0,     0,
      34,   108,     0,    46,    35,     0,   135,    93,    99,    68,
     127,     0,    55,    54,    58,    57,     0,     0,   146,     0,
     144,     0,     0,     0,   170,     0,    45,   154,     0,   128,
     129,   152,   153,     0,   143,   148,     0,   166,     0,     0,
     134,   151,    68,   162,     0,     0,   164,     0,     0,     0,
     149,     0,     0,     0,    68,   163,   167,   150,   165
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,   192,    67,    37,   241,
      69,   100,   125,   126,    51,    52,    53,    28,    54,    73,
      74,    75,   109,   110,   111,   163,   164,   208,   209,   236,
     210,   213,   165,    76,    77,   139,   140,   141,   142,    78,
      55,   101,    79,   113,   102,   271,    80,    57,   150,    81,
      82,    83,   253,   220,   255,   182,   176,   155,    84,    11,
      24,    41,   283,   221,   222,    85,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -216
static const yytype_int16 yypact[] =
{
     146,    -9,   -26,     7,    17,   103,   132,  -216,  -216,  -216,
    -216,    30,   107,  -216,  -216,    90,  -216,  -216,  -216,  -216,
     132,  -216,  -216,  -216,   132,   149,    54,    84,   107,  -216,
    -216,   110,   510,  -216,  -216,  -216,  -216,   245,  -216,    47,
    -216,  -216,   101,  -216,     0,  -216,    54,  -216,  -216,    57,
     109,  -216,  -216,   147,  -216,    33,   145,   510,   156,   386,
     348,   318,   169,   510,   175,  -216,   148,  -216,   132,  -216,
      65,   107,    83,  -216,  -216,  -216,  -216,   196,  -216,  -216,
    -216,  -216,   180,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,   187,   510,  -216,   529,   194,    76,  -216,  -216,
    -216,    68,    84,   207,   208,   132,  -216,   182,    83,  -216,
      42,    21,   206,   199,   211,    84,  -216,   223,   237,   217,
    -216,   250,  -216,  -216,   252,   254,   415,   256,    83,    83,
     246,   251,   253,  -216,  -216,  -216,   261,   529,    94,   196,
    -216,   283,  -216,  -216,  -216,  -216,  -216,   145,  -216,  -216,
    -216,   262,    83,   434,   304,  -216,   510,  -216,    92,  -216,
     510,   257,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   510,
     386,  -216,  -216,     8,  -216,   263,  -216,   150,   268,  -216,
      68,   316,  -216,  -216,   472,   529,  -216,  -216,  -216,    83,
    -216,   386,  -216,  -216,   283,    84,  -216,   317,   284,   150,
     275,  -216,    32,   324,  -216,  -216,    83,   145,  -216,   510,
     257,   233,   265,   299,   206,   274,   510,   510,   105,   367,
    -216,   285,  -216,    31,   286,   145,  -216,  -216,    84,   281,
     290,  -216,   180,  -216,   286,    38,  -216,   235,   299,  -216,
    -216,   132,  -216,   548,   288,   162,   289,   174,   529,   287,
     453,  -216,  -216,   294,   295,   226,   302,   290,   341,   296,
    -216,  -216,   344,  -216,  -216,   346,  -216,  -216,  -216,   204,
     145,    84,  -216,  -216,  -216,  -216,   300,   491,  -216,   286,
    -216,   529,   293,   231,  -216,   307,  -216,  -216,   286,  -216,
    -216,  -216,  -216,   306,  -216,  -216,   567,  -216,   132,   529,
    -216,  -216,   131,  -216,   202,   122,  -216,   305,   319,   330,
    -216,   586,   132,   529,   131,  -216,  -216,  -216,  -216
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,   364,  -216,  -216,  -216,   -25,  -216,  -216,   333,
     228,  -111,   -32,   198,    -8,  -216,   301,   -34,   -36,  -216,
    -216,  -216,  -106,  -216,  -216,   264,  -216,  -216,  -216,  -216,
    -216,   163,   269,  -216,  -216,  -216,   240,   242,  -119,  -216,
     313,   -24,  -216,   321,   -54,  -216,  -216,  -216,  -216,  -216,
    -216,   -59,  -215,  -207,  -216,  -143,   -11,   165,   229,  -216,
    -216,  -216,  -216,  -180,  -186,   -43,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -127
static const yytype_int16 yytable[] =
{
      22,    72,    36,    71,    27,   128,   168,   115,    56,   260,
     204,   118,   254,   231,    30,   179,    13,   254,    31,   264,
      38,   129,   196,   143,   108,   108,   160,   254,   135,    70,
     127,    86,    12,    96,   -63,   233,   112,    71,   154,    56,
     137,   226,   201,   254,   263,   128,   151,   160,    14,    32,
      87,   120,   107,   107,   161,   121,   122,    33,    15,   148,
      89,   129,   134,    38,   294,   153,   162,   181,   -72,   147,
     127,   284,   254,   300,    23,   196,   137,   157,    95,   118,
      93,   254,    66,    94,   135,   156,   118,   162,    88,    66,
     171,   151,   266,   127,   203,   118,   184,   185,    90,   159,
     200,   190,   180,    16,    34,   244,   246,   151,   242,     1,
       2,   191,   -72,   -72,    95,   183,   215,   152,    29,     3,
     198,   156,   306,   136,   122,     4,   153,    66,    35,   202,
     136,   122,   207,   152,   318,   -64,   211,   228,    35,   136,
     122,   216,   205,    42,    43,   214,    44,    45,    25,   227,
      91,    39,     1,     2,    26,    40,    26,   216,    17,    47,
     225,    48,     3,   248,   258,   -63,    18,    19,     4,   309,
      49,    50,   310,   258,   235,   219,   265,    72,   118,    71,
      32,    92,   249,   252,   -63,   237,   130,    17,    33,   131,
     132,    95,   245,   247,   219,    18,    19,    97,    32,    32,
     133,   218,    72,   261,    71,    70,    33,    33,    95,   273,
     116,   118,   276,   256,   252,   156,   119,   138,   120,   270,
      95,   275,   121,   122,    32,   144,    66,   156,   145,    10,
      70,    66,    33,   123,    10,   268,   124,  -121,   -63,   289,
      95,   293,   -63,   307,   149,   295,   290,   308,   158,   119,
     105,   120,    95,    32,   169,   121,   122,    32,    58,    66,
     303,    33,    59,   305,    60,    33,   170,     4,    61,    62,
      93,   280,    63,   281,    33,   315,   297,   317,   298,    95,
     239,    95,   267,    42,    43,   172,    64,    45,   106,   106,
      65,   173,   304,   174,    26,   175,    66,   119,   186,    47,
      17,    48,   189,   187,   195,   188,   316,   206,    18,    19,
      49,    50,    58,   197,   218,   212,    59,   223,    60,   224,
     229,     4,    61,    62,   232,   230,    63,   234,   240,   243,
     250,   103,   257,   262,   219,   272,   274,    42,    43,   278,
      64,    45,   279,   282,   285,   277,   286,   287,    26,   288,
      66,   296,   291,    47,   299,    48,    42,    43,   301,   104,
      45,   103,  -126,   311,    49,    50,   312,    46,   313,    20,
      68,   217,    47,   238,    48,   166,   117,    98,    99,   193,
     167,   194,   114,    49,    50,     0,    42,    43,   259,   104,
      45,     0,   105,   146,     0,     0,     0,    46,     0,     0,
       0,     0,    47,     0,    48,    42,    43,     0,    44,    45,
       0,   250,   251,    49,    50,     0,    26,     0,     0,     0,
       0,    47,    17,    48,    42,    43,     0,    44,    45,     0,
      18,    19,    49,    50,     0,    46,     0,     0,     0,     0,
      47,     0,    48,     0,     0,    98,    99,     0,     0,     0,
       0,    49,    50,    42,    43,     0,   177,    45,     0,     0,
       0,     0,     0,     0,    46,     0,    66,     0,     0,    47,
       0,    48,    42,    43,     0,   199,    45,   178,     0,     0,
      49,    50,     0,    46,     0,    66,     0,     0,    47,     0,
      48,    42,    43,     0,    44,    45,   200,   250,   251,    49,
      50,     0,    26,     0,     0,     0,     0,    47,     0,    48,
      42,    43,     0,    44,    45,     0,     0,     0,    49,    50,
       0,    46,     0,     0,     0,     0,    47,     0,    48,    42,
      43,     0,    44,    45,   200,     0,     0,    49,    50,     0,
      26,     0,     0,   292,     0,    47,     0,    48,    42,    43,
       0,    44,    45,     0,     0,     0,    49,    50,     0,    46,
       0,     0,     0,     0,    47,     0,    48,    42,    43,     0,
      44,    45,     0,     0,     0,    49,    50,     0,    26,     0,
       0,     0,     0,    47,     0,    48,    42,    43,     0,   269,
      45,     0,     0,     0,    49,    50,     0,    46,     0,     0,
       0,     0,    47,     0,    48,    42,    43,     0,   302,    45,
       0,     0,     0,    49,    50,     0,    26,     0,     0,     0,
       0,    47,     0,    48,    42,    43,     0,   314,    45,     0,
       0,     0,    49,    50,     0,    26,     0,     0,     0,     0,
      47,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    37,    27,    37,    12,    64,   112,    61,    32,   224,
     153,     3,   219,   199,    20,   126,    42,   224,    24,   234,
      28,    64,   141,    82,    60,    61,     5,   234,    71,    37,
      64,    37,    41,    57,    34,     3,    60,    71,    97,    63,
      72,   184,   153,   250,   230,   104,    15,     5,    41,    49,
       3,    43,    60,    61,    12,    47,    48,    57,    41,    95,
       3,   104,    68,    71,   279,    97,    45,   126,     3,    93,
     104,   257,   279,   288,    44,   194,   108,   102,    46,     3,
      47,   288,    51,    50,   127,    53,     3,    45,    41,    51,
     115,    15,   235,   127,   153,     3,   128,   129,    41,   105,
      62,   137,   126,     0,    50,   216,   217,    15,   214,     6,
       7,    17,    47,    48,    46,   126,   170,    41,    28,    16,
     152,    53,   302,    47,    48,    22,   158,    51,    44,   153,
      47,    48,   156,    41,   314,    34,   160,   191,    44,    47,
      48,   173,   153,    38,    39,   169,    41,    42,    41,   185,
      41,    41,     6,     7,    49,    45,    49,   189,    55,    54,
     184,    56,    16,    58,   223,    34,    63,    64,    22,    47,
      65,    66,    50,   232,   206,    44,   235,   213,     3,   213,
      49,    34,   218,   219,    34,   209,    38,    55,    57,    41,
      42,    46,   216,   217,    44,    63,    64,    41,    49,    49,
      52,    51,   238,   228,   238,   213,    57,    57,    46,    47,
      41,     3,   248,   219,   250,    53,    41,    21,    43,   243,
      46,    47,    47,    48,    49,    38,    51,    53,    41,     0,
     238,    51,    57,    58,     5,   241,    61,    55,    34,    35,
      46,   277,    34,    41,    50,   281,   271,    45,    41,    41,
      44,    43,    46,    49,    55,    47,    48,    49,    13,    51,
     296,    57,    17,   299,    19,    57,    55,    22,    23,    24,
      47,    45,    27,    47,    57,   311,    45,   313,    47,    46,
      47,    46,    47,    38,    39,    48,    41,    42,    60,    61,
      45,    41,   298,    41,    49,    41,    51,    41,    52,    54,
      55,    56,    41,    52,    21,    52,   312,     3,    63,    64,
      65,    66,    13,    51,    51,    58,    17,    49,    19,     3,
       3,    22,    23,    24,    49,    41,    27,     3,    63,    55,
      44,    13,    47,    52,    44,    47,    47,    38,    39,    45,
      41,    42,    47,    41,     3,    58,    50,     3,    49,     3,
      51,    58,    52,    54,    47,    56,    38,    39,    52,    41,
      42,    13,    44,    58,    65,    66,    47,    49,    38,     5,
      37,   173,    54,   210,    56,   111,    63,    59,    60,   139,
     111,   139,    61,    65,    66,    -1,    38,    39,   223,    41,
      42,    -1,    44,    92,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,    42,
      -1,    44,    45,    65,    66,    -1,    49,    -1,    -1,    -1,
      -1,    54,    55,    56,    38,    39,    -1,    41,    42,    -1,
      63,    64,    65,    66,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    66,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    54,
      -1,    56,    38,    39,    -1,    41,    42,    62,    -1,    -1,
      65,    66,    -1,    49,    -1,    51,    -1,    -1,    54,    -1,
      56,    38,    39,    -1,    41,    42,    62,    44,    45,    65,
      66,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,    66,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    56,    38,
      39,    -1,    41,    42,    62,    -1,    -1,    65,    66,    -1,
      49,    -1,    -1,    52,    -1,    54,    -1,    56,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    65,    66,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    65,    66,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    65,    66,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    56,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    65,    66,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    56,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    65,    66,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    72,    73,    74,    75,    76,
     129,   130,    41,    42,    41,    41,     0,    55,    63,    64,
      73,   137,   137,    44,   131,    41,    49,    85,    88,    28,
     137,   137,    49,    57,    50,    44,    77,    79,    85,    41,
      45,   132,    38,    39,    41,    42,    49,    54,    56,    65,
      66,    85,    86,    87,    89,   111,   112,   118,    13,    17,
      19,    23,    24,    27,    41,    45,    51,    78,    80,    81,
      85,    88,    89,    90,    91,    92,   104,   105,   110,   113,
     117,   120,   121,   122,   129,   136,   137,     3,    41,     3,
      41,    41,    34,    47,    50,    46,   112,    41,    59,    60,
      82,   112,   115,    13,    41,    44,    81,    85,    89,    93,
      94,    95,   112,   114,   114,   115,    41,   111,     3,    41,
      43,    47,    48,    58,    61,    83,    84,    88,   122,   136,
      38,    41,    42,    52,   137,   136,    47,    83,    21,   106,
     107,   108,   109,   122,    38,    41,    87,   112,    89,    50,
     119,    15,    41,    83,   122,   128,    53,    77,    41,   137,
       5,    12,    45,    96,    97,   103,    96,   103,    93,    55,
      55,    77,    48,    41,    41,    41,   127,    41,    62,    82,
     112,   122,   126,   127,    83,    83,    52,    52,    52,    41,
      89,    17,    77,   107,   108,    21,   109,    51,    83,    41,
      62,    82,   112,   122,   126,   127,     3,   112,    98,    99,
     101,   112,    58,   102,   112,   115,    83,    84,    51,    44,
     124,   134,   135,    49,     3,   112,   126,    89,   115,     3,
      41,   135,    49,     3,     3,    83,   100,   112,   102,    47,
      63,    80,    93,    55,    82,   112,    82,   112,    58,    89,
      44,    45,    89,   123,   124,   125,   137,    47,   122,   128,
     123,    77,    52,   135,   123,   122,   126,    47,   137,    41,
     112,   116,    47,    47,    47,    47,    89,    58,    45,    47,
      45,    47,    41,   133,   135,     3,    50,     3,     3,    35,
      77,    52,    52,    89,   123,    89,    58,    45,    47,    47,
     123,    52,    41,    89,   137,    89,   134,    41,    45,    47,
      50,    58,    47,    38,    41,    89,   137,    89,   134
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
#line 1852 "y.tab.c"
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
#line 332 "..\\main\\golang.y"


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