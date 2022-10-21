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
     t_eof = 319
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
#line 271 "y.tab.c"

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
#define YYLAST   503

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  190
/* YYNRULES -- Number of states.  */
#define YYNSTATES  341

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    67,    65,     2,    66,     2,    68,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    10,    13,    15,    17,    19,    21,
      24,    27,    34,    36,    39,    44,    46,    50,    53,    55,
      57,    61,    64,    66,    68,    71,    73,    78,    82,    84,
      86,    89,    91,    93,    97,   100,   102,   104,   106,   108,
     110,   112,   114,   116,   118,   120,   122,   124,   126,   128,
     133,   139,   144,   148,   154,   161,   165,   170,   175,   179,
     184,   188,   192,   197,   201,   208,   215,   221,   226,   231,
     235,   238,   241,   243,   249,   255,   257,   263,   269,   274,
     277,   281,   283,   285,   288,   290,   292,   294,   296,   298,
     300,   302,   304,   307,   310,   316,   320,   323,   326,   329,
     331,   334,   337,   340,   343,   347,   350,   353,   356,   360,
     362,   364,   366,   368,   371,   375,   377,   381,   384,   387,
     389,   393,   396,   398,   403,   405,   408,   411,   414,   418,
     420,   421,   425,   429,   431,   435,   437,   439,   440,   442,
     444,   446,   447,   449,   452,   460,   464,   466,   468,   473,
     482,   489,   493,   497,   501,   504,   506,   509,   511,   515,
     519,   522,   526,   528,   532,   540,   550,   557,   563,   569,
     575,   580,   584,   586,   591,   596,   600,   602,   606,   613,
     618,   626,   631,   640,   642,   644,   648,   650,   653,   655,
     657
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,    70,    71,   144,    -1,    71,   144,    -1,
      70,   144,    -1,    72,    -1,    73,    -1,    74,    -1,   136,
      -1,    16,    41,    -1,     7,    42,    -1,     6,    41,    49,
      76,    50,    75,    -1,    83,    -1,    80,    83,    -1,    49,
      78,    50,    83,    -1,    77,    -1,    76,    47,    77,    -1,
      41,    82,    -1,    41,    -1,    79,    -1,    78,    47,    79,
      -1,    41,    82,    -1,    82,    -1,    81,    -1,    80,    81,
      -1,    82,    -1,     6,    49,    82,    50,    -1,     6,    49,
      50,    -1,     3,    -1,    41,    -1,    85,    84,    -1,    45,
      -1,    44,    -1,    85,    86,   144,    -1,    85,   144,    -1,
      87,    -1,   124,    -1,    99,    -1,    97,    -1,    98,    -1,
     111,    -1,   129,    -1,    92,    -1,   120,    -1,   127,    -1,
     117,    -1,   136,    -1,   143,    -1,    89,    -1,    13,    41,
      90,   119,    -1,    13,    41,    90,   119,     3,    -1,    13,
      41,    90,    88,    -1,    41,    91,   119,    -1,    41,    91,
     129,     3,   130,    -1,    13,    41,    90,   129,     3,   130,
      -1,    41,    91,    88,    -1,    41,   129,    90,   119,    -1,
      13,    41,    90,   133,    -1,    41,    91,   133,    -1,    41,
     129,    90,   133,    -1,    41,    91,   134,    -1,    41,    90,
     134,    -1,    13,    41,    90,   134,    -1,    13,    41,   135,
      -1,    41,    91,    62,    49,   135,    50,    -1,    13,    41,
      41,    90,    41,   142,    -1,    13,    41,    90,    41,   142,
      -1,    41,    91,    41,   142,    -1,    41,   143,    90,    96,
      -1,   119,    53,   119,    -1,     9,    92,    -1,     3,    48,
      -1,    48,    -1,    47,    41,    90,   119,    47,    -1,    47,
      41,    90,    88,    47,    -1,    43,    -1,    47,    41,    91,
     119,    47,    -1,    47,    41,    91,    88,    47,    -1,    41,
      49,   118,    50,    -1,    95,    92,    -1,    94,    34,    94,
      -1,    41,    -1,    38,    -1,    41,    57,    -1,    38,    -1,
      39,    -1,    41,    -1,    42,    -1,    54,    -1,    56,    -1,
      92,    -1,    93,    -1,    24,    41,    -1,    41,    58,    -1,
      19,   121,    55,   119,   100,    -1,    19,   119,   100,    -1,
      19,   100,    -1,   101,   110,    -1,   102,   110,    -1,    44,
      -1,    44,   144,    -1,   101,   103,    -1,   101,   104,    -1,
     102,   103,    -1,     5,   108,   109,    -1,    12,   109,    -1,
     106,   107,    -1,   119,    47,    -1,   106,   119,    47,    -1,
     119,    -1,   105,    -1,   119,    -1,    58,    -1,    58,    63,
      -1,   109,    86,   144,    -1,    45,    -1,   112,   113,   115,
      -1,   112,   113,    -1,   112,   115,    -1,   112,    -1,    17,
     122,    83,    -1,   113,   114,    -1,   114,    -1,    21,    17,
     122,    83,    -1,   116,    -1,   115,   116,    -1,    21,    83,
      -1,    27,   118,    -1,   118,    47,   119,    -1,   119,    -1,
      -1,   119,    46,    96,    -1,   125,   119,   126,    -1,    96,
      -1,    41,    61,    41,    -1,    87,    -1,    92,    -1,    -1,
      88,    -1,    59,    -1,    60,    -1,    -1,   119,    -1,    41,
      35,    -1,    23,   121,    55,   122,    55,   123,    83,    -1,
      23,   122,    83,    -1,    49,    -1,    50,    -1,    13,    41,
     129,     3,    -1,    13,    41,   129,     3,    90,   129,     3,
     130,    -1,    13,    41,   129,     3,    90,   133,    -1,    51,
      38,    52,    -1,    51,    41,    52,    -1,    51,    42,    52,
      -1,    51,    52,    -1,   128,    -1,   128,   129,    -1,   131,
      -1,   131,    47,   130,    -1,    44,   132,    45,    -1,    44,
      45,    -1,    44,   130,    45,    -1,    96,    -1,   132,    47,
      96,    -1,    62,    49,   129,     3,    47,    96,    50,    -1,
      62,    49,   129,     3,    47,    96,    47,    38,    96,    -1,
      41,    51,    96,    58,    96,    52,    -1,    41,    51,    58,
      96,    52,    -1,    41,    51,    96,    58,    52,    -1,    15,
      51,     3,    52,     3,    -1,   137,   138,   144,   139,    -1,
      22,    41,    28,    -1,    44,    -1,   138,   144,    41,     3,
      -1,   138,   144,    41,    41,    -1,   138,   144,    41,    -1,
      45,    -1,    41,    58,    96,    -1,   140,    47,   144,    41,
      58,    96,    -1,    41,    58,    41,   141,    -1,   140,    47,
     144,    41,    58,    41,   141,    -1,    44,   144,   140,    45,
      -1,    44,   144,   140,    47,   144,    45,    47,   144,    -1,
     131,    -1,   141,    -1,   141,    47,   142,    -1,    95,    -1,
      95,   143,    -1,    55,    -1,    63,    -1,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    27,
      30,    33,    37,    38,    39,    42,    43,    47,    48,    52,
      53,    57,    58,    62,    63,    66,    67,    68,    71,    72,
      74,    77,    80,    81,    82,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   123,
     127,   130,   131,   132,   133,   135,   136,   137,   140,   141,
     144,   147,   148,   151,   154,   155,   156,   157,   158,   159,
     160,   161,   164,   167,   170,   171,   172,   175,   176,   180,
     181,   182,   187,   188,   191,   194,   198,   201,   202,   205,
     209,   210,   213,   214,   215,   220,   224,   225,   226,   227,
     230,   234,   235,   239,   243,   244,   247,   250,   253,   254,
     255,   258,   259,   260,   263,   266,   267,   268,   271,   272,
     273,   274,   277,   278,   281,   282,   285,   288,   291,   292,
     293,   296,   297,   298,   299,   302,   303,   306,   307,   309,
     310,   311,   314,   315,   318,   319,   322,   323,   324,   327,
     330,   333,   336,   337,   338,   339,   342,   345,   346,   347,
     348,   351,   352,   353,   356,   357,   360,   361,   364,   365,
     366
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
  "t_eof", "'+'", "'-'", "'*'", "'/'", "$accept", "START", "GLOBAL",
  "PACKAGE", "IMPORT", "FUNC", "FUNC_SECOND_PART", "FUNC_PARAM",
  "FUNC_PARAM_FULFILL", "FUNC_PARAM_SECOND", "FUNC_PARAM_FULFILL_SECOND",
  "FUNC_RETURN_VALUE", "FUNC_RETURN_VALUE_FULFILL", "TYPE_AND_STRUCT",
  "BODY", "BODY_END", "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN",
  "DEFER", "ASSIGNMENT", "SHORT_ASSIGN", "FUNC_CALL", "SHIFT", "SHIFT_AC",
  "METHOD", "VALUE", "GOTO", "LABEL", "SWITCH", "SWITCH_BODY",
  "SWITCH_BODY_START", "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT",
  "MULTIPLE_ARG", "FIRST_PART", "SECOND_PART", "CASE_STATEMENT",
  "CASE_BODY", "SWITCH_BODY_END", "IF", "IF_FIRST", "MULTY_ELSEIF_SECOND",
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
     315,   316,   317,   318,   319,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    71,    71,    72,
      73,    74,    75,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    81,    82,    82,
      83,    84,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      89,    90,    90,    90,    90,    91,    91,    91,    92,    92,
      93,    94,    94,    95,    96,    96,    96,    96,    96,    96,
      96,    96,    97,    98,    99,    99,    99,   100,   100,   101,
     101,   101,   102,   102,   103,   104,   105,   106,   106,   107,
     108,   108,   109,   109,   109,   110,   111,   111,   111,   111,
     112,   113,   113,   114,   115,   115,   116,   117,   118,   118,
     118,   119,   119,   119,   120,   121,   121,   121,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   135,
     136,   137,   138,   138,   138,   138,   139,   140,   140,   140,
     140,   141,   141,   141,   142,   142,   143,   143,   144,   144,
     144
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     2,
       2,     6,     1,     2,     4,     1,     3,     2,     1,     1,
       3,     2,     1,     1,     2,     1,     4,     3,     1,     1,
       2,     1,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     4,     3,     5,     6,     3,     4,     4,     3,     4,
       3,     3,     4,     3,     6,     6,     5,     4,     4,     3,
       2,     2,     1,     5,     5,     1,     5,     5,     4,     2,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     5,     3,     2,     2,     2,     1,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     1,
       1,     1,     1,     2,     3,     1,     3,     2,     2,     1,
       3,     2,     1,     4,     1,     2,     2,     2,     3,     1,
       0,     3,     3,     1,     3,     1,     1,     0,     1,     1,
       1,     0,     1,     2,     7,     3,     1,     1,     4,     8,
       6,     3,     3,     3,     2,     1,     2,     1,     3,     3,
       2,     3,     1,     3,     7,     9,     6,     5,     5,     5,
       4,     3,     1,     4,     4,     3,     1,     3,     6,     4,
       7,     4,     8,     1,     1,     3,     1,     2,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     0,    10,     9,     0,     1,   188,   189,   190,
       0,     4,     3,   172,     0,     0,   171,     2,     0,    18,
       0,    15,   175,   176,   170,    28,    29,    17,     0,     0,
     173,   174,    16,     0,    32,     0,    11,     0,    23,    25,
      12,     0,     0,    29,     0,    19,    22,    24,    13,     0,
       0,   141,   137,   137,     0,   130,     0,    31,     0,    30,
       0,    35,    48,    42,   186,    38,    39,    37,    40,   119,
      45,    43,    36,    44,   155,    41,    46,    47,    34,    27,
       0,    21,     0,     0,     0,    70,     0,     0,    84,    85,
      86,    87,   146,    88,    89,   139,   140,   138,    90,    91,
       0,   133,     0,     0,     0,     0,    86,    99,   135,    90,
      96,     0,     0,     0,     0,     0,     0,    92,   127,   129,
       0,     0,    75,     0,    72,   130,    83,    93,     0,     0,
       0,   186,     0,     0,     0,     0,     0,   154,    33,    79,
     187,     0,   117,   122,   118,   124,   156,    26,    20,    14,
       0,     0,     0,     0,     0,    63,     0,     0,     0,   120,
       0,     0,   100,     0,     0,   115,   101,   102,    97,   103,
      98,    95,     0,   141,   145,     0,    71,     0,     0,   134,
       0,    61,    86,     0,    55,    52,     0,    58,    60,     0,
       0,   151,   152,   153,   141,   126,   121,   116,     0,   125,
       0,     0,     0,    86,     0,    51,    49,     0,    57,    62,
     148,    82,    81,    80,   131,    69,   147,   132,   110,     0,
       0,   111,   112,   105,     0,     0,   128,     0,     0,    78,
       0,     0,   183,   184,    67,     0,     0,    56,    59,    68,
       0,     0,     0,    66,     0,    50,     0,     0,   106,   109,
     104,   107,   113,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   162,     0,   157,     0,     0,     0,
       0,     0,    53,   123,     0,    65,    54,     0,   150,   108,
     114,    86,   142,     0,    74,    73,    77,    76,     0,     0,
     161,     0,   159,     0,     0,     0,   185,     0,    64,   169,
       0,   143,   144,   167,   168,     0,   158,   163,     0,   181,
       0,     0,   149,   166,    86,   177,     0,     0,   179,     0,
       0,     0,   164,     0,     0,     0,    86,   178,   182,   165,
     180
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    46,    30,    31,    54,
      55,    47,    48,    49,   205,    69,    51,   263,    71,   107,
      72,   139,   140,   108,   109,   110,    96,   111,    75,    76,
      77,   120,   121,   122,   176,   177,   228,   229,   258,   230,
     233,   178,    78,    79,   152,   153,   154,   155,    80,   128,
     112,    81,   124,   113,   293,    82,   114,   227,    83,    84,
      85,   275,   242,   277,   197,   191,   165,    86,    11,    24,
      34,   305,   243,   244,    87,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -297
static const yytype_int16 yypact[] =
{
     221,    -9,     5,    12,    30,    77,   166,  -297,  -297,  -297,
    -297,    87,    88,  -297,  -297,   115,  -297,  -297,  -297,  -297,
     166,  -297,  -297,  -297,   166,   107,  -297,  -297,   113,    65,
     170,  -297,   101,  -297,  -297,  -297,  -297,  -297,   107,    32,
    -297,  -297,  -297,   139,  -297,   132,  -297,   119,  -297,  -297,
    -297,   181,    53,    65,   234,  -297,  -297,  -297,  -297,   123,
     152,   346,   238,   229,   184,   393,   118,  -297,   255,  -297,
     166,  -297,  -297,  -297,   123,  -297,  -297,  -297,  -297,   213,
    -297,  -297,  -297,  -297,   188,  -297,  -297,  -297,  -297,  -297,
     198,  -297,   132,   225,   157,  -297,   123,   104,   231,  -297,
      -5,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,  -297,
     252,  -297,   125,   225,   393,   249,   215,   166,  -297,   243,
    -297,    29,    15,   271,   247,   257,   225,  -297,   269,   274,
     291,   288,  -297,   301,  -297,   393,  -297,  -297,   305,   306,
     299,   308,   133,   133,   300,   302,   310,  -297,  -297,  -297,
    -297,    26,   213,  -297,   330,  -297,  -297,  -297,  -297,  -297,
     307,   133,   322,   318,   361,  -297,   262,   423,   393,  -297,
     145,   109,  -297,   393,   312,  -297,  -297,  -297,  -297,  -297,
    -297,  -297,   393,   346,  -297,   393,  -297,    86,   261,  -297,
     314,  -297,   158,   317,  -297,   125,   365,  -297,  -297,   337,
     423,  -297,  -297,  -297,   346,  -297,  -297,   330,   225,  -297,
     368,   332,   133,   158,   328,  -297,     8,   378,  -297,  -297,
     133,  -297,  -297,  -297,  -297,   274,  -297,  -297,  -297,   393,
     312,   214,   319,   282,   271,   334,   274,   393,   393,  -297,
     369,   280,  -297,   336,  -297,   138,   348,   274,  -297,  -297,
     225,   338,   350,  -297,   188,  -297,   348,   -14,  -297,   228,
     282,  -297,  -297,   166,  -297,   399,   349,   194,   351,   206,
     423,   339,   374,  -297,  -297,   356,   357,   284,   362,   350,
     406,   364,  -297,  -297,   414,  -297,  -297,   417,  -297,  -297,
    -297,   189,   274,   225,  -297,  -297,  -297,  -297,   370,   418,
    -297,   348,  -297,   423,   363,   285,  -297,   377,  -297,  -297,
     348,  -297,  -297,  -297,  -297,   381,  -297,  -297,   442,  -297,
     166,   423,  -297,  -297,   128,  -297,   209,   263,  -297,   371,
     379,   398,  -297,   447,   166,   423,   128,  -297,  -297,  -297,
    -297
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -297,  -297,   434,  -297,  -297,  -297,  -297,  -297,   405,  -297,
     352,  -297,   403,    57,   -38,  -297,  -297,   394,   264,  -121,
    -297,   -92,   259,   -47,  -297,   286,   -49,  -102,  -297,  -297,
    -297,  -120,  -297,  -297,   329,  -297,  -297,  -297,  -297,  -297,
     224,   341,  -297,  -297,  -297,   315,   316,  -141,  -297,   323,
     -55,  -297,   408,   -57,  -297,  -297,  -297,  -297,  -297,  -297,
     -58,  -223,  -210,  -297,  -142,   -17,   230,    96,  -297,  -297,
    -297,  -297,  -296,  -189,   -44,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -142
static const yytype_int16 yytable[] =
{
      22,    50,    74,   181,    73,   163,   126,   123,   142,    58,
     129,   255,    95,   209,    27,   119,   119,   141,    28,   194,
     173,   218,   143,   282,   253,    74,   156,   149,   328,   -81,
     150,   276,    12,   286,   173,    35,   276,    68,    43,   164,
     340,   174,   215,   204,   135,    88,   276,    13,   214,   149,
     199,   200,   136,    14,   167,   159,    35,   248,   142,   170,
     175,   168,   276,   285,   148,   224,   209,   141,    35,   211,
      44,    15,   143,    36,   175,   169,    44,    16,   316,   163,
     129,    45,   196,     1,     2,   195,    37,   322,   184,   130,
     306,   276,   141,     3,    36,   237,    10,   150,   249,     4,
     276,    10,    56,    89,    40,   217,    36,   130,   216,    90,
      91,   172,   130,   225,   264,   288,   266,   268,   231,   160,
     237,   130,    35,   198,   160,    43,   235,   234,   257,   132,
     236,    23,    17,   133,   134,    35,   130,    25,   271,   274,
      18,    19,    41,    26,   247,   161,   219,   250,    29,    56,
     161,   162,   134,   160,    32,    68,   162,   134,    33,   131,
      36,   132,   -81,    44,    94,   133,   134,   135,   298,    68,
     274,   167,   241,    53,   259,   136,   137,   135,   168,   138,
     162,   134,   267,   269,    74,   136,    73,   280,    52,    68,
      59,   167,   -81,    97,    60,   226,   280,   315,    61,   287,
      62,   317,   241,     4,    63,    64,   135,   135,    65,   240,
     292,    74,   283,    73,   136,   136,   325,    38,   130,   327,
      39,    17,    66,   -81,   311,   127,    67,     1,     2,    18,
      19,   337,    68,   339,   151,   278,    17,     3,   135,    68,
     167,   295,   115,     4,    18,    19,   136,   168,   157,   -81,
     329,   115,   167,   297,   330,   312,   131,   290,   132,   168,
     167,   261,   133,   134,   135,   -82,    68,    98,    99,    44,
     116,   101,   136,  -141,   167,   289,    98,    99,   102,   116,
     101,    92,   117,   103,    93,   104,   166,   102,   105,   106,
     171,    59,   103,   144,   104,    60,   145,   146,  -136,    61,
     221,    62,   182,   222,     4,    63,    64,   147,   185,    65,
     331,   239,   183,   332,   326,   117,   185,   167,    98,    99,
     167,   100,   101,    66,   272,   273,   118,   118,   338,   302,
     319,   303,   320,    68,   103,    17,   104,    98,    99,   186,
     192,   101,   187,    18,    19,   136,   189,   190,   102,   131,
      68,   208,   201,   103,   202,   104,    98,    99,   210,   213,
     101,   193,   203,   212,   220,   240,   245,   102,   246,    68,
     232,   251,   103,   252,   104,    98,    99,   254,   100,   101,
     214,   256,   262,   279,    98,    99,   102,   100,   101,   265,
     284,   103,   272,   104,   241,   102,   294,   299,   296,   214,
     103,   300,   104,   304,   301,   105,   106,    98,    99,   307,
     100,   101,    98,    99,   308,   100,   101,   309,   272,   273,
     310,   318,   313,   103,   321,   104,   334,   270,   103,   333,
     104,    98,    99,   323,   100,   101,   335,    98,    99,    20,
     291,   101,   102,    42,   158,    70,   238,   103,   102,   104,
      57,   179,   223,   103,   260,   104,    98,    99,   188,   100,
     101,    98,    99,   180,   100,   101,     0,   206,   207,     0,
     314,   125,   103,     0,   104,   281,     0,   103,     0,   104,
      98,    99,     0,   324,   101,    98,    99,     0,   336,   101,
       0,     0,     0,     0,     0,     0,   103,     0,   104,     0,
       0,   103,     0,   104
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-297)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    39,    51,   123,    51,    97,    63,    62,    66,    47,
      65,     3,    59,   154,    20,    62,    63,    66,    24,   140,
       5,   163,    66,   246,   213,    74,    84,    74,   324,    34,
      74,   241,    41,   256,     5,     3,   246,    51,     6,    97,
     336,    12,   163,    17,    49,    51,   256,    42,    62,    96,
     142,   143,    57,    41,    46,    93,     3,   199,   116,   114,
      45,    53,   272,   252,    70,   167,   207,   116,     3,   161,
      44,    41,   116,    41,    45,   113,    44,     0,   301,   171,
     135,    49,   140,     6,     7,   140,    29,   310,   126,     3,
     279,   301,   141,    16,    41,   187,     0,   141,   200,    22,
     310,     5,    45,    50,     3,   163,    41,     3,   163,    52,
      53,   117,     3,   168,   234,   257,   237,   238,   173,    15,
     212,     3,     3,   140,    15,     6,   183,   182,   220,    43,
     185,    44,    55,    47,    48,     3,     3,    49,   240,   241,
      63,    64,    41,    28,   199,    41,   163,   204,    41,    92,
      41,    47,    48,    15,    41,    51,    47,    48,    45,    41,
      41,    43,    34,    44,    41,    47,    48,    49,   270,    51,
     272,    46,    44,    41,   229,    57,    58,    49,    53,    61,
      47,    48,   237,   238,   233,    57,   233,   245,    49,    51,
       9,    46,    34,    41,    13,    50,   254,   299,    17,   257,
      19,   303,    44,    22,    23,    24,    49,    49,    27,    51,
     265,   260,   250,   260,    57,    57,   318,    47,     3,   321,
      50,    55,    41,    34,    35,    41,    45,     6,     7,    63,
      64,   333,    51,   335,    21,   241,    55,    16,    49,    51,
      46,    47,    13,    22,    63,    64,    57,    53,    50,    34,
      41,    13,    46,    47,    45,   293,    41,   263,    43,    53,
      46,    47,    47,    48,    49,    34,    51,    38,    39,    44,
      41,    42,    57,    44,    46,    47,    38,    39,    49,    41,
      42,    47,    44,    54,    50,    56,    34,    49,    59,    60,
      41,     9,    54,    38,    56,    13,    41,    42,    55,    17,
      38,    19,    55,    41,    22,    23,    24,    52,    47,    27,
      47,    50,    55,    50,   320,    44,    47,    46,    38,    39,
      46,    41,    42,    41,    44,    45,    62,    63,   334,    45,
      45,    47,    47,    51,    54,    55,    56,    38,    39,    48,
      41,    42,    41,    63,    64,    57,    41,    41,    49,    41,
      51,    21,    52,    54,    52,    56,    38,    39,    51,    41,
      42,    62,    52,    41,     3,    51,    49,    49,     3,    51,
      58,     3,    54,    41,    56,    38,    39,    49,    41,    42,
      62,     3,    63,    47,    38,    39,    49,    41,    42,    55,
      52,    54,    44,    56,    44,    49,    47,    58,    47,    62,
      54,    45,    56,    41,    47,    59,    60,    38,    39,     3,
      41,    42,    38,    39,    50,    41,    42,     3,    44,    45,
       3,    58,    52,    54,    47,    56,    47,    58,    54,    58,
      56,    38,    39,    52,    41,    42,    38,    38,    39,     5,
      41,    42,    49,    38,    92,    51,   187,    54,    49,    56,
      47,   122,   166,    54,   230,    56,    38,    39,   135,    41,
      42,    38,    39,   122,    41,    42,    -1,   152,   152,    -1,
      52,    63,    54,    -1,    56,   245,    -1,    54,    -1,    56,
      38,    39,    -1,    41,    42,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    56,    -1,
      -1,    54,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    70,    71,    72,    73,    74,
     136,   137,    41,    42,    41,    41,     0,    55,    63,    64,
      71,   144,   144,    44,   138,    49,    28,   144,   144,    41,
      76,    77,    41,    45,   139,     3,    41,    82,    47,    50,
       3,    41,    77,     6,    44,    49,    75,    80,    81,    82,
      83,    85,    49,    41,    78,    79,    82,    81,    83,     9,
      13,    17,    19,    23,    24,    27,    41,    45,    51,    84,
      86,    87,    89,    92,    95,    97,    98,    99,   111,   112,
     117,   120,   124,   127,   128,   129,   136,   143,   144,    50,
      82,    82,    47,    50,    41,    92,    95,    41,    38,    39,
      41,    42,    49,    54,    56,    59,    60,    88,    92,    93,
      94,    96,   119,   122,   125,    13,    41,    44,    87,    92,
     100,   101,   102,   119,   121,   121,   122,    41,   118,   119,
       3,    41,    43,    47,    48,    49,    57,    58,    61,    90,
      91,    95,   129,   143,    38,    41,    42,    52,   144,    92,
     143,    21,   113,   114,   115,   116,   129,    50,    79,    83,
      15,    41,    47,    90,   129,   135,    34,    46,    53,    83,
     119,    41,   144,     5,    12,    45,   103,   104,   110,   103,
     110,   100,    55,    55,    83,    47,    48,    41,   118,    41,
      41,   134,    41,    62,    88,   119,   129,   133,   134,    90,
      90,    52,    52,    52,    17,    83,   114,   115,    21,   116,
      51,    90,    41,    41,    62,    88,   119,   129,   133,   134,
       3,    38,    41,    94,    96,   119,    50,   126,   105,   106,
     108,   119,    58,   109,   119,   122,   119,    90,    91,    50,
      51,    44,   131,   141,   142,    49,     3,   119,   133,    96,
     122,     3,    41,   142,    49,     3,     3,    90,   107,   119,
     109,    47,    63,    86,   100,    55,    88,   119,    88,   119,
      58,    96,    44,    45,    96,   130,   131,   132,   144,    47,
     129,   135,   130,    83,    52,   142,   130,   129,   133,    47,
     144,    41,   119,   123,    47,    47,    47,    47,    96,    58,
      45,    47,    45,    47,    41,   140,   142,     3,    50,     3,
       3,    35,    83,    52,    52,    96,   130,    96,    58,    45,
      47,    47,   130,    52,    41,    96,   144,    96,   141,    41,
      45,    47,    50,    58,    47,    38,    41,    96,   144,    96,
     141
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
#line 1841 "y.tab.c"
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
#line 370 "..\\main\\golang.y"


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