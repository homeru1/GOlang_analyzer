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
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNRULES -- Number of states.  */
#define YYNSTATES  322

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
      24,    27,    34,    44,    47,    49,    54,    58,    61,    63,
      65,    69,    72,    74,    76,    78,    80,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   100,   105,   111,   116,
     120,   126,   133,   137,   142,   147,   151,   156,   160,   164,
     169,   173,   180,   187,   193,   198,   203,   207,   210,   213,
     215,   221,   227,   229,   235,   241,   246,   249,   253,   255,
     257,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     279,   282,   288,   292,   295,   298,   301,   303,   306,   309,
     312,   315,   319,   322,   325,   328,   332,   334,   336,   338,
     340,   343,   347,   349,   353,   356,   359,   361,   365,   368,
     370,   375,   377,   380,   383,   386,   390,   392,   393,   397,
     401,   403,   407,   409,   411,   412,   414,   416,   418,   419,
     421,   424,   432,   436,   438,   440,   445,   454,   461,   465,
     469,   473,   476,   478,   481,   483,   487,   491,   494,   498,
     500,   504,   512,   522,   529,   535,   541,   547,   552,   556,
     558,   563,   568,   572,   574,   578,   585,   590,   598,   603,
     612,   614,   616,   620,   622,   625,   627,   629
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      70,     0,    -1,    70,    71,   137,    -1,    71,   137,    -1,
      70,   137,    -1,    72,    -1,    73,    -1,    74,    -1,   129,
      -1,    16,    41,    -1,     7,    42,    -1,     6,    41,    49,
      75,    50,    76,    -1,     6,    41,    49,    75,    50,    49,
      75,    50,    76,    -1,    41,     3,    -1,    41,    -1,    75,
      47,    41,     3,    -1,    75,    47,    41,    -1,    78,    77,
      -1,    45,    -1,    44,    -1,    78,    79,   137,    -1,    78,
     137,    -1,    80,    -1,   117,    -1,    92,    -1,    90,    -1,
      91,    -1,   104,    -1,   122,    -1,    85,    -1,   113,    -1,
     120,    -1,   110,    -1,   129,    -1,   136,    -1,    82,    -1,
      13,    41,    83,   112,    -1,    13,    41,    83,   112,     3,
      -1,    13,    41,    83,    81,    -1,    41,    84,   112,    -1,
      41,    84,   122,     3,   123,    -1,    13,    41,    83,   122,
       3,   123,    -1,    41,    84,    81,    -1,    41,   122,    83,
     112,    -1,    13,    41,    83,   126,    -1,    41,    84,   126,
      -1,    41,   122,    83,   126,    -1,    41,    84,   127,    -1,
      41,    83,   127,    -1,    13,    41,    83,   127,    -1,    13,
      41,   128,    -1,    41,    84,    62,    49,   128,    50,    -1,
      13,    41,    41,    83,    41,   135,    -1,    13,    41,    83,
      41,   135,    -1,    41,    84,    41,   135,    -1,    41,   136,
      83,    89,    -1,   112,    53,   112,    -1,     9,    85,    -1,
       3,    48,    -1,    48,    -1,    47,    41,    83,   112,    47,
      -1,    47,    41,    83,    81,    47,    -1,    43,    -1,    47,
      41,    84,   112,    47,    -1,    47,    41,    84,    81,    47,
      -1,    41,    49,   111,    50,    -1,    88,    85,    -1,    87,
      34,    87,    -1,    41,    -1,    38,    -1,    41,    57,    -1,
      38,    -1,    39,    -1,    41,    -1,    42,    -1,    54,    -1,
      56,    -1,    85,    -1,    86,    -1,    24,    41,    -1,    41,
      58,    -1,    19,   114,    55,   112,    93,    -1,    19,   112,
      93,    -1,    19,    93,    -1,    94,   103,    -1,    95,   103,
      -1,    44,    -1,    44,   137,    -1,    94,    96,    -1,    94,
      97,    -1,    95,    96,    -1,     5,   101,   102,    -1,    12,
     102,    -1,    99,   100,    -1,   112,    47,    -1,    99,   112,
      47,    -1,   112,    -1,    98,    -1,   112,    -1,    58,    -1,
      58,    63,    -1,   102,    79,   137,    -1,    45,    -1,   105,
     106,   108,    -1,   105,   106,    -1,   105,   108,    -1,   105,
      -1,    17,   115,    76,    -1,   106,   107,    -1,   107,    -1,
      21,    17,   115,    76,    -1,   109,    -1,   108,   109,    -1,
      21,    76,    -1,    27,   111,    -1,   111,    47,   112,    -1,
     112,    -1,    -1,   112,    46,    89,    -1,   118,   112,   119,
      -1,    89,    -1,    41,    61,    41,    -1,    80,    -1,    85,
      -1,    -1,    81,    -1,    59,    -1,    60,    -1,    -1,   112,
      -1,    41,    35,    -1,    23,   114,    55,   115,    55,   116,
      76,    -1,    23,   115,    76,    -1,    49,    -1,    50,    -1,
      13,    41,   122,     3,    -1,    13,    41,   122,     3,    83,
     122,     3,   123,    -1,    13,    41,   122,     3,    83,   126,
      -1,    51,    38,    52,    -1,    51,    41,    52,    -1,    51,
      42,    52,    -1,    51,    52,    -1,   121,    -1,   121,   122,
      -1,   124,    -1,   124,    47,   123,    -1,    44,   125,    45,
      -1,    44,    45,    -1,    44,   123,    45,    -1,    89,    -1,
     125,    47,    89,    -1,    62,    49,   122,     3,    47,    89,
      50,    -1,    62,    49,   122,     3,    47,    89,    47,    38,
      89,    -1,    41,    51,    89,    58,    89,    52,    -1,    41,
      51,    58,    89,    52,    -1,    41,    51,    89,    58,    52,
      -1,    15,    51,     3,    52,     3,    -1,   130,   131,   137,
     132,    -1,    22,    41,    28,    -1,    44,    -1,   131,   137,
      41,     3,    -1,   131,   137,    41,    41,    -1,   131,   137,
      41,    -1,    45,    -1,    41,    58,    89,    -1,   133,    47,
     137,    41,    58,    89,    -1,    41,    58,    41,   134,    -1,
     133,    47,   137,    41,    58,    41,   134,    -1,    44,   137,
     133,    45,    -1,    44,   137,   133,    47,   137,    45,    47,
     137,    -1,   124,    -1,   134,    -1,   134,    47,   135,    -1,
      88,    -1,    88,   136,    -1,    55,    -1,    63,    -1,    64,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    27,
      30,    33,    34,    37,    38,    39,    40,    42,    45,    48,
      49,    50,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    91,    95,    98,    99,
     100,   101,   103,   104,   105,   108,   109,   112,   115,   116,
     119,   122,   123,   124,   125,   126,   127,   128,   129,   132,
     135,   138,   139,   140,   143,   144,   148,   149,   150,   155,
     156,   159,   162,   166,   169,   170,   173,   177,   178,   181,
     182,   183,   188,   192,   193,   194,   195,   198,   202,   203,
     207,   211,   212,   215,   218,   221,   222,   223,   226,   227,
     228,   231,   234,   235,   236,   239,   240,   241,   242,   245,
     246,   249,   250,   253,   256,   259,   260,   261,   264,   265,
     266,   267,   270,   271,   274,   275,   277,   278,   279,   282,
     283,   286,   287,   290,   291,   292,   295,   298,   301,   304,
     305,   306,   307,   310,   313,   314,   315,   316,   319,   320,
     321,   324,   325,   328,   329,   332,   333,   334
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
  "PACKAGE", "IMPORT", "FUNC", "FUNC_PARAM", "BODY", "BODY_END",
  "BODY_START", "BODY_FILLING", "VAR", "BOOLEAN", "DEFER", "ASSIGNMENT",
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
     315,   316,   317,   318,   319,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    70,    71,    71,    71,    71,    72,
      73,    74,    74,    75,    75,    75,    75,    76,    77,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    82,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    86,    87,    87,
      88,    89,    89,    89,    89,    89,    89,    89,    89,    90,
      91,    92,    92,    92,    93,    93,    94,    94,    94,    95,
      95,    96,    97,    98,    99,    99,   100,   101,   101,   102,
     102,   102,   103,   104,   104,   104,   104,   105,   106,   106,
     107,   108,   108,   109,   110,   111,   111,   111,   112,   112,
     112,   113,   114,   114,   114,   115,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   120,   120,   120,   121,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   128,   129,   130,   131,
     131,   131,   131,   132,   133,   133,   133,   133,   134,   134,
     134,   135,   135,   136,   136,   137,   137,   137
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     2,
       2,     6,     9,     2,     1,     4,     3,     2,     1,     1,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     5,     4,     3,
       5,     6,     3,     4,     4,     3,     4,     3,     3,     4,
       3,     6,     6,     5,     4,     4,     3,     2,     2,     1,
       5,     5,     1,     5,     5,     4,     2,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     5,     3,     2,     2,     2,     1,     2,     2,     2,
       2,     3,     2,     2,     2,     3,     1,     1,     1,     1,
       2,     3,     1,     3,     2,     2,     1,     3,     2,     1,
       4,     1,     2,     2,     2,     3,     1,     0,     3,     3,
       1,     3,     1,     1,     0,     1,     1,     1,     0,     1,
       2,     7,     3,     1,     1,     4,     8,     6,     3,     3,
       3,     2,     1,     2,     1,     3,     3,     2,     3,     1,
       3,     7,     9,     6,     5,     5,     5,     4,     3,     1,
       4,     4,     3,     1,     3,     6,     4,     7,     4,     8,
       1,     1,     3,     1,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     0,    10,     9,     0,     1,   175,   176,   177,
       0,     4,     3,   159,     0,     0,   158,     2,     0,    14,
       0,   162,   163,   157,    13,     0,     0,   160,   161,    16,
      19,     0,    11,     0,    15,     0,     0,     0,   128,   124,
     124,     0,   117,     0,    18,     0,    17,     0,    22,    35,
      29,   173,    25,    26,    24,    27,   106,    32,    30,    23,
      31,   142,    28,    33,    34,    21,     0,     0,    57,     0,
       0,    71,    72,    73,    74,   133,    75,    76,   126,   127,
     125,    77,    78,     0,   120,     0,     0,     0,     0,    73,
      86,   122,    77,    83,     0,     0,     0,     0,     0,     0,
      79,   114,   116,     0,     0,    62,     0,    59,   117,    70,
      80,     0,     0,     0,   173,     0,     0,     0,     0,     0,
     141,    20,    66,   174,     0,   104,   109,   105,   111,   143,
      12,     0,     0,     0,     0,     0,    50,     0,     0,     0,
     107,     0,     0,    87,     0,     0,   102,    88,    89,    84,
      90,    85,    82,     0,   128,   132,     0,    58,     0,     0,
     121,     0,    48,    73,     0,    42,    39,     0,    45,    47,
       0,     0,   138,   139,   140,   128,   113,   108,   103,     0,
     112,     0,     0,     0,    73,     0,    38,    36,     0,    44,
      49,   135,    69,    68,    67,   118,    56,   134,   119,    97,
       0,     0,    98,    99,    92,     0,     0,   115,     0,     0,
      65,     0,     0,   170,   171,    54,     0,     0,    43,    46,
      55,     0,     0,     0,    53,     0,    37,     0,     0,    93,
      96,    91,    94,   100,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,   147,   149,     0,   144,     0,     0,
       0,     0,     0,    40,   110,     0,    52,    41,     0,   137,
      95,   101,    73,   129,     0,    61,    60,    64,    63,     0,
       0,   148,     0,   146,     0,     0,     0,   172,     0,    51,
     156,     0,   130,   131,   154,   155,     0,   145,   150,     0,
     168,     0,     0,   136,   153,    73,   164,     0,     0,   166,
       0,     0,     0,   151,     0,     0,     0,    73,   165,   169,
     152,   167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    30,   186,    56,    43,
     244,    58,    90,    59,   122,   123,    91,    92,    93,    79,
      94,    62,    63,    64,   103,   104,   105,   157,   158,   209,
     210,   239,   211,   214,   159,    65,    66,   135,   136,   137,
     138,    67,   111,    95,    68,   107,    96,   274,    69,    97,
     208,    70,    71,    72,   256,   223,   258,   178,   172,   146,
      73,    11,    24,    33,   286,   224,   225,    74,    21
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -266
static const yytype_int16 yypact[] =
{
     124,   -17,    28,    65,    84,    97,   -21,  -266,  -266,  -266,
    -266,    39,    94,  -266,  -266,   134,  -266,  -266,  -266,  -266,
     -21,  -266,  -266,  -266,   -21,   129,  -266,  -266,    64,    90,
     165,    19,  -266,  -266,  -266,   151,    52,  -266,  -266,   231,
    -266,   129,  -266,   205,  -266,   194,   201,   202,   327,   115,
     244,   212,   365,   162,  -266,   156,  -266,   -21,  -266,  -266,
    -266,   201,  -266,  -266,  -266,  -266,   233,  -266,  -266,  -266,
    -266,   223,  -266,  -266,  -266,  -266,   219,    -1,  -266,   201,
     230,   241,  -266,    80,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,   242,  -266,    42,   219,   365,   246,   138,
     -21,  -266,   229,  -266,    34,    24,   105,   236,   237,   219,
    -266,   247,   253,   254,   249,  -266,   267,  -266,   365,  -266,
    -266,   272,   273,   210,   277,    44,    44,   269,   274,   283,
    -266,  -266,  -266,  -266,    14,   233,  -266,   303,  -266,  -266,
    -266,   285,    44,   284,   289,   334,  -266,   217,   408,   365,
    -266,   171,   232,  -266,   365,   290,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,   365,   327,  -266,   365,  -266,    30,   215,
    -266,   301,  -266,   310,   304,  -266,    42,   352,  -266,  -266,
     308,   408,  -266,  -266,  -266,   327,  -266,  -266,   303,   219,
    -266,   353,   317,    44,   310,   311,  -266,    22,   360,  -266,
    -266,    44,  -266,  -266,  -266,  -266,   253,  -266,  -266,  -266,
     365,   290,     3,   309,   288,   105,   316,   253,   365,   365,
    -266,   336,   278,  -266,   326,  -266,    15,   335,   253,  -266,
    -266,   219,   328,   338,  -266,   223,  -266,   335,    72,  -266,
     160,   288,  -266,  -266,   -21,  -266,   384,   337,   184,   341,
     243,   408,   331,   357,  -266,  -266,   340,   344,   137,   356,
     338,   390,   350,  -266,  -266,   402,  -266,  -266,   405,  -266,
    -266,  -266,    98,   253,   219,  -266,  -266,  -266,  -266,   358,
     389,  -266,   335,  -266,   408,   351,   146,  -266,   368,  -266,
    -266,   335,  -266,  -266,  -266,  -266,   364,  -266,  -266,   413,
    -266,   -21,   408,  -266,  -266,   101,  -266,   195,   220,  -266,
     354,   370,   380,  -266,   418,   -21,   408,   101,  -266,  -266,
    -266,  -266
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,   415,  -266,  -266,  -266,   383,   -35,  -266,  -266,
     386,   176,  -108,  -266,   -26,   264,   -41,  -266,   287,   -40,
    -136,  -266,  -266,  -266,   -95,  -266,  -266,   330,  -266,  -266,
    -266,  -266,  -266,   225,   332,  -266,  -266,  -266,   307,   313,
    -131,  -266,   321,   -42,  -266,   394,   -46,  -266,  -266,  -266,
    -266,  -266,  -266,   -36,  -211,  -155,  -266,  -116,   -91,   227,
     183,  -266,  -266,  -266,  -266,  -265,  -171,   -34,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -129
static const yytype_int16 yytable[] =
{
      22,    42,    60,    61,   109,    78,   190,   106,   102,   102,
     112,   162,   205,   124,    27,   175,   263,   125,    28,   126,
     132,    61,    37,   234,    12,   236,   267,   133,   199,   154,
     141,   185,   179,   113,    17,   139,   196,    75,   132,   154,
     309,   140,    18,    19,   145,   230,   155,   113,   118,   148,
     242,   131,   321,   200,   144,   151,   119,   190,    40,   124,
      38,   150,   266,   125,   229,   126,    55,   257,   148,   156,
      13,   297,   257,   115,   165,   149,   112,   116,   117,   156,
     303,   176,   257,    23,   124,   252,   255,   177,   148,   287,
     133,   143,   117,    34,   153,   149,    40,    16,   257,   180,
     181,    41,   197,     1,     2,    31,    14,   206,   198,    32,
     247,   249,   212,     3,   -68,   279,   192,   255,   216,     4,
     245,   215,   269,    55,   217,    15,   144,   257,    98,   118,
       1,     2,   -68,   292,   195,   -68,   257,   119,   228,   231,
       3,   113,   218,    25,   296,   222,     4,   118,   298,   100,
     118,   148,    17,    81,    82,   119,    99,    84,   119,   100,
      18,    19,    26,   306,    85,   113,   308,   218,   240,    86,
      29,    87,   -68,    60,    61,   238,   248,   250,   318,   114,
     320,   115,   283,    10,   284,   116,   117,   118,    10,    55,
     261,   300,    39,   301,   127,   119,   264,   128,   129,   261,
      60,    61,   268,   114,   273,   115,   148,   270,   130,   116,
     117,   118,    35,    55,    46,    36,   259,   148,    47,   119,
     120,   207,    48,   121,    49,   101,   101,     4,    50,    51,
     148,   276,    52,   113,    44,   113,   310,   149,   271,   293,
     311,    35,    77,    80,    76,   141,    53,   141,    81,    82,
      54,   173,    84,   110,   134,   202,    55,    98,   203,    85,
      17,    55,   166,    40,    86,   220,    87,   312,    18,    19,
     313,   142,   174,   142,    55,   -69,   147,   143,   117,   143,
     117,    55,    81,    82,  -123,    99,    84,   152,  -128,   148,
     278,   163,   164,    85,   166,   307,   149,    46,    86,   148,
      87,    47,   167,    88,    89,    48,   119,    49,   168,   319,
       4,    50,    51,   170,   171,    52,    81,    82,   114,    83,
      84,   182,   253,   254,   189,   193,   183,    81,    82,    53,
     194,    84,    86,    17,    87,   184,   191,   201,    85,    55,
      55,    18,    19,    86,   -68,    87,    81,    82,   213,    83,
      84,   195,   221,   226,   222,   227,   232,    85,   233,   118,
     235,   221,    86,   237,    87,    81,    82,   119,    83,    84,
     195,   246,   243,   260,    81,    82,    85,    83,    84,   253,
     265,    86,   222,    87,   275,   281,    88,    89,   277,   280,
      86,   282,    87,   288,   251,    81,    82,   285,    83,    84,
     289,   253,   254,    81,    82,   290,    83,    84,   291,   299,
     294,    86,   314,    87,    85,   302,   304,   315,   316,    86,
      20,    87,    81,    82,    45,   272,    84,    81,    82,    57,
      83,    84,   219,    85,   204,   160,   241,   161,    86,   169,
      87,   295,   187,    86,   108,    87,    81,    82,   188,    83,
      84,    81,    82,   262,   305,    84,    81,    82,     0,   317,
      84,     0,    86,     0,    87,     0,     0,    86,     0,    87,
       0,     0,    86,     0,    87
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-266)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       6,    36,    43,    43,    50,    46,   137,    49,    49,    50,
      52,   106,   148,    53,    20,   123,   227,    53,    24,    53,
      61,    61,     3,   194,    41,     3,   237,    61,   144,     5,
      15,    17,   123,     3,    55,    71,   144,    43,    79,     5,
     305,    76,    63,    64,    80,   181,    12,     3,    49,    46,
      47,    57,   317,   144,    80,    97,    57,   188,    44,    99,
      41,    96,   233,    99,   180,    99,    51,   222,    46,    45,
      42,   282,   227,    43,   109,    53,   118,    47,    48,    45,
     291,   123,   237,    44,   124,   221,   222,   123,    46,   260,
     124,    47,    48,     3,   100,    53,    44,     0,   253,   125,
     126,    49,   144,     6,     7,    41,    41,   149,   144,    45,
     218,   219,   154,    16,    34,   251,   142,   253,   164,    22,
     215,   163,   238,    51,   166,    41,   152,   282,    13,    49,
       6,     7,    34,    35,    62,    34,   291,    57,   180,   185,
      16,     3,   168,    49,   280,    44,    22,    49,   284,    44,
      49,    46,    55,    38,    39,    57,    41,    42,    57,    44,
      63,    64,    28,   299,    49,     3,   302,   193,   210,    54,
      41,    56,    34,   214,   214,   201,   218,   219,   314,    41,
     316,    43,    45,     0,    47,    47,    48,    49,     5,    51,
     226,    45,    41,    47,    38,    57,   231,    41,    42,   235,
     241,   241,   238,    41,   246,    43,    46,    47,    52,    47,
      48,    49,    47,    51,     9,    50,   222,    46,    13,    57,
      58,    50,    17,    61,    19,    49,    50,    22,    23,    24,
      46,    47,    27,     3,     3,     3,    41,    53,   244,   274,
      45,    47,    41,    41,    50,    15,    41,    15,    38,    39,
      45,    41,    42,    41,    21,    38,    51,    13,    41,    49,
      55,    51,    47,    44,    54,    50,    56,    47,    63,    64,
      50,    41,    62,    41,    51,    34,    34,    47,    48,    47,
      48,    51,    38,    39,    55,    41,    42,    41,    44,    46,
      47,    55,    55,    49,    47,   301,    53,     9,    54,    46,
      56,    13,    48,    59,    60,    17,    57,    19,    41,   315,
      22,    23,    24,    41,    41,    27,    38,    39,    41,    41,
      42,    52,    44,    45,    21,    41,    52,    38,    39,    41,
      41,    42,    54,    55,    56,    52,    51,     3,    49,    51,
      51,    63,    64,    54,    34,    56,    38,    39,    58,    41,
      42,    62,    51,    49,    44,     3,     3,    49,    41,    49,
      49,    51,    54,     3,    56,    38,    39,    57,    41,    42,
      62,    55,    63,    47,    38,    39,    49,    41,    42,    44,
      52,    54,    44,    56,    47,    45,    59,    60,    47,    58,
      54,    47,    56,     3,    58,    38,    39,    41,    41,    42,
      50,    44,    45,    38,    39,     3,    41,    42,     3,    58,
      52,    54,    58,    56,    49,    47,    52,    47,    38,    54,
       5,    56,    38,    39,    41,    41,    42,    38,    39,    43,
      41,    42,   168,    49,   147,   105,   211,   105,    54,   118,
      56,    52,   135,    54,    50,    56,    38,    39,   135,    41,
      42,    38,    39,   226,    41,    42,    38,    39,    -1,    41,
      42,    -1,    54,    -1,    56,    -1,    -1,    54,    -1,    56,
      -1,    -1,    54,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    70,    71,    72,    73,    74,
     129,   130,    41,    42,    41,    41,     0,    55,    63,    64,
      71,   137,   137,    44,   131,    49,    28,   137,   137,    41,
      75,    41,    45,   132,     3,    47,    50,     3,    41,    41,
      44,    49,    76,    78,     3,    75,     9,    13,    17,    19,
      23,    24,    27,    41,    45,    51,    77,    79,    80,    82,
      85,    88,    90,    91,    92,   104,   105,   110,   113,   117,
     120,   121,   122,   129,   136,   137,    50,    41,    85,    88,
      41,    38,    39,    41,    42,    49,    54,    56,    59,    60,
      81,    85,    86,    87,    89,   112,   115,   118,    13,    41,
      44,    80,    85,    93,    94,    95,   112,   114,   114,   115,
      41,   111,   112,     3,    41,    43,    47,    48,    49,    57,
      58,    61,    83,    84,    88,   122,   136,    38,    41,    42,
      52,   137,    85,   136,    21,   106,   107,   108,   109,   122,
      76,    15,    41,    47,    83,   122,   128,    34,    46,    53,
      76,   112,    41,   137,     5,    12,    45,    96,    97,   103,
      96,   103,    93,    55,    55,    76,    47,    48,    41,   111,
      41,    41,   127,    41,    62,    81,   112,   122,   126,   127,
      83,    83,    52,    52,    52,    17,    76,   107,   108,    21,
     109,    51,    83,    41,    41,    62,    81,   112,   122,   126,
     127,     3,    38,    41,    87,    89,   112,    50,   119,    98,
      99,   101,   112,    58,   102,   112,   115,   112,    83,    84,
      50,    51,    44,   124,   134,   135,    49,     3,   112,   126,
      89,   115,     3,    41,   135,    49,     3,     3,    83,   100,
     112,   102,    47,    63,    79,    93,    55,    81,   112,    81,
     112,    58,    89,    44,    45,    89,   123,   124,   125,   137,
      47,   122,   128,   123,    76,    52,   135,   123,   122,   126,
      47,   137,    41,   112,   116,    47,    47,    47,    47,    89,
      58,    45,    47,    45,    47,    41,   133,   135,     3,    50,
       3,     3,    35,    76,    52,    52,    89,   123,    89,    58,
      45,    47,    47,   123,    52,    41,    89,   137,    89,   134,
      41,    45,    47,    50,    58,    47,    38,    41,    89,   137,
      89,   134
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
#line 1815 "y.tab.c"
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
#line 338 "..\\main\\golang.y"


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