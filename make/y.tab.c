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
#define YYLAST   719

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  222
/* YYNRULES -- Number of states.  */
#define YYNSTATES  407

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
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   148,   154,   159,   163,   167,   173,
     180,   184,   189,   194,   198,   203,   207,   211,   216,   220,
     227,   234,   240,   245,   249,   253,   257,   263,   267,   270,
     273,   275,   281,   287,   289,   295,   301,   304,   307,   310,
     313,   316,   320,   322,   324,   328,   332,   335,   338,   341,
     344,   348,   352,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   380,   383,   389,   393,   396,   399,
     402,   404,   407,   409,   412,   415,   418,   422,   425,   428,
     431,   435,   437,   439,   441,   443,   447,   450,   452,   456,
     459,   462,   464,   468,   474,   477,   479,   483,   485,   487,
     489,   491,   493,   496,   501,   503,   506,   509,   512,   516,
     518,   519,   523,   527,   529,   533,   535,   537,   538,   540,
     542,   544,   545,   547,   550,   558,   562,   564,   566,   571,
     580,   587,   591,   595,   599,   602,   604,   607,   609,   613,
     617,   620,   624,   626,   630,   638,   648,   655,   661,   667,
     673,   678,   682,   687,   689,   694,   699,   703,   705,   709,
     716,   721,   729,   734,   743,   745,   747,   751,   753,   755,
     757,   764,   770
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      73,     0,    -1,    73,    74,   154,    -1,    74,   154,    -1,
      73,   154,    -1,    75,    -1,    76,    -1,    77,    -1,   147,
      -1,   155,    -1,    16,    41,    -1,     7,    42,    -1,     7,
      49,   101,    50,    -1,     7,    49,    63,   101,    50,    -1,
       7,    41,    42,    -1,     6,    41,    49,    79,    50,    78,
      -1,    86,    -1,    83,    86,    -1,    49,    81,    50,    86,
      -1,    80,    -1,    79,    47,    80,    -1,    41,    85,    -1,
      41,    -1,    -1,    82,    -1,    81,    47,    82,    -1,    41,
      85,    -1,    85,    -1,    84,    -1,    83,    84,    -1,    85,
      -1,     6,    49,    85,    50,    -1,     6,    49,    50,    -1,
       3,    -1,    41,    -1,    88,    87,    -1,    45,    -1,   108,
      -1,    88,    89,   154,    -1,    90,    -1,   135,    -1,   105,
      -1,   103,    -1,   104,    -1,   118,    -1,   140,    -1,    95,
      -1,   131,    -1,   138,    -1,   128,    -1,   147,    -1,   145,
      -1,    92,    -1,    13,    41,    93,   130,    -1,    13,    41,
      93,   130,     3,    -1,    13,    41,    93,    91,    -1,    41,
      94,   130,    -1,    41,    93,   130,    -1,    41,    94,   140,
       3,   141,    -1,    13,    41,    93,   140,     3,   141,    -1,
      41,    94,    91,    -1,    41,   140,    93,   130,    -1,    13,
      41,    93,   144,    -1,    41,    94,   144,    -1,    41,   140,
      93,   144,    -1,    41,    94,   145,    -1,    41,    93,   145,
      -1,    13,    41,    93,   145,    -1,    13,    41,   146,    -1,
      41,    94,    62,    49,   146,    50,    -1,    13,    41,    41,
      93,    41,   153,    -1,    13,    41,    93,    41,   153,    -1,
      41,    94,    41,   153,    -1,    99,    93,   102,    -1,   100,
      93,   130,    -1,    13,    41,   100,    -1,    13,    41,   100,
      93,   130,    -1,   130,    53,   130,    -1,     9,    95,    -1,
       3,    48,    -1,    48,    -1,    47,    41,    93,   130,    47,
      -1,    47,    41,    93,    91,    47,    -1,    43,    -1,    47,
      41,    94,   130,    47,    -1,    47,    41,    94,    91,    47,
      -1,    96,    50,    -1,    41,    49,    -1,    99,    49,    -1,
      96,    63,    -1,    96,   129,    -1,    98,    34,    98,    -1,
      41,    -1,    38,    -1,    41,    57,    41,    -1,    99,    57,
      41,    -1,    65,    41,    -1,    65,     3,    -1,    66,    41,
      -1,    42,   154,    -1,    41,    42,   154,    -1,   101,    42,
     154,    -1,   101,    41,    42,   154,    -1,    38,    -1,    39,
      -1,    41,    -1,    42,    -1,    54,    -1,    56,    -1,    95,
      -1,    97,    -1,   100,    -1,    99,    -1,    24,    41,    -1,
      41,    58,    -1,    19,   132,    55,   130,   106,    -1,    19,
     130,   106,    -1,    19,   106,    -1,   107,   117,    -1,   109,
     117,    -1,   108,    -1,   107,   110,    -1,    44,    -1,   108,
     154,    -1,   107,   111,    -1,   109,   110,    -1,     5,   115,
     116,    -1,    12,   116,    -1,   113,   114,    -1,   130,    47,
      -1,   113,   130,    47,    -1,   130,    -1,   112,    -1,   130,
      -1,    58,    -1,   116,   123,   154,    -1,   116,   154,    -1,
      45,    -1,   119,   124,   126,    -1,   119,   124,    -1,   119,
     126,    -1,   119,    -1,    17,   133,   120,    -1,    17,   132,
      55,   133,   120,    -1,   121,   122,    -1,   108,    -1,   121,
     123,   154,    -1,    45,    -1,    89,    -1,    26,    -1,    25,
      -1,   125,    -1,   124,   125,    -1,    21,    17,   133,   120,
      -1,   127,    -1,   126,   127,    -1,    21,   120,    -1,    27,
     129,    -1,   129,    47,   130,    -1,   130,    -1,    -1,   130,
      46,   102,    -1,   136,   130,   137,    -1,   102,    -1,    41,
      61,    41,    -1,    90,    -1,    95,    -1,    -1,    91,    -1,
      59,    -1,    60,    -1,    -1,   130,    -1,    41,    35,    -1,
      23,   132,    55,   133,    55,   134,   120,    -1,    23,   133,
     120,    -1,    49,    -1,    50,    -1,    13,    41,   140,     3,
      -1,    13,    41,   140,     3,    93,   140,     3,   141,    -1,
      13,    41,   140,     3,    93,   144,    -1,    51,    38,    52,
      -1,    51,    41,    52,    -1,    51,    42,    52,    -1,    51,
      52,    -1,   139,    -1,   139,   140,    -1,   142,    -1,   142,
      47,   141,    -1,    44,   143,    45,    -1,    44,    45,    -1,
      44,   141,    45,    -1,   102,    -1,   143,    47,   102,    -1,
      62,    49,   140,     3,    47,   102,    50,    -1,    62,    49,
     140,     3,    47,   102,    47,    38,   102,    -1,    41,    51,
     102,    58,   102,    52,    -1,    41,    51,    58,   102,    52,
      -1,    41,    51,   102,    58,    52,    -1,    15,    51,     3,
      52,     3,    -1,   148,   149,   154,   150,    -1,    22,    41,
      28,    -1,    22,    41,    28,    63,    -1,    44,    -1,   149,
     154,    41,     3,    -1,   149,   154,    41,    41,    -1,   149,
     154,    41,    -1,    45,    -1,    41,    58,   102,    -1,   151,
      47,   154,    41,    58,   102,    -1,    41,    58,    41,   152,
      -1,   151,    47,   154,    41,    58,    41,   152,    -1,    44,
     154,   151,    45,    -1,    44,   154,   151,    47,   154,    45,
      47,   154,    -1,   142,    -1,   152,    -1,   152,    47,   153,
      -1,    55,    -1,    63,    -1,    64,    -1,    22,    41,    11,
     156,   154,   157,    -1,    44,   154,    41,    49,    50,    -1,
      45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    16,    16,    17,    18,    21,    22,    23,    24,    25,
      28,    31,    32,    33,    34,    37,    41,    42,    43,    46,
      47,    51,    52,    53,    57,    58,    62,    63,    67,    68,
      71,    72,    73,    76,    77,    79,    82,    85,    86,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   131,   135,   138,
     139,   140,   141,   143,   144,   145,   148,   151,   152,   153,
     154,   157,   160,   161,   164,   165,   168,   169,   170,   173,
     174,   175,   176,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   191,   194,   197,   198,   199,   202,   203,
     207,   208,   211,   212,   216,   217,   220,   223,   227,   230,
     231,   234,   238,   239,   242,   243,   244,   249,   253,   254,
     255,   256,   259,   260,   263,   267,   268,   272,   277,   278,
     279,   283,   284,   288,   292,   293,   296,   299,   302,   303,
     304,   307,   308,   309,   312,   315,   316,   317,   320,   321,
     322,   323,   326,   327,   330,   331,   334,   337,   340,   341,
     342,   345,   346,   347,   348,   351,   352,   355,   356,   358,
     359,   360,   363,   364,   367,   368,   371,   372,   373,   376,
     379,   382,   383,   386,   387,   388,   389,   392,   395,   396,
     397,   398,   401,   402,   403,   406,   407,   414,   415,   416,
     419,   422,   425
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
  "SHORT_ASSIGN", "FUNC_CALL", "FUNC_CALL_START", "SHIFT", "SHIFT_AC",
  "METHOD", "POINTER", "PARAM_IMPORT", "VALUE", "GOTO", "LABEL", "SWITCH",
  "SWITCH_BODY", "SWITCH_BODY_START", "ABSORB_EMPTYNESS",
  "SWITCH_BODY_START_WITH_DEFAULT", "CASE", "DEFAULT", "MULTIPLE_ARG",
  "FIRST_PART", "SECOND_PART", "CASE_STATEMENT", "CASE_BODY",
  "SWITCH_BODY_END", "IF", "IF_FIRST", "BODY_FOR_LOOP",
  "BODY_FOR_LOOP_START", "BODY_FOR_LOOP_END", "LOOP_FILLING",
  "MULTY_ELSEIF_SECOND", "ELSEIF_SECOND", "MULTY_ELSE_THIRD", "ELSE_THIRD",
  "RETURN", "PARAM", "EXPR", "SHORT_EXPR", "INIT_STATE", "CONDITION",
  "POST_STATE", "FOR", "EXPR_START", "EXPR_END", "ARRAY_BODY",
  "ARRAY_INDEX", "MULTI_AR", "PLENTY", "PLENTY_OLD", "ENUM", "MAKE",
  "SLICE", "MAPS", "STRUCT", "STRUCT_START", "STRUCT_BODY", "STRUCT_END",
  "STRUCT_ENUM", "STRUCT_FIELD", "ST_EMBEDDED", "END_SYMBOLS", "INTERFACE",
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
      84,    84,    84,    85,    85,    86,    87,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    92,    93,
      93,    93,    93,    94,    94,    94,    95,    96,    96,    96,
      96,    97,    98,    98,    99,    99,   100,   100,   100,   101,
     101,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   104,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   111,   112,   113,
     113,   114,   115,   115,   116,   116,   116,   117,   118,   118,
     118,   118,   119,   119,   120,   121,   121,   122,   123,   123,
     123,   124,   124,   125,   126,   126,   127,   128,   129,   129,
     129,   130,   130,   130,   131,   132,   132,   132,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   137,   138,   138,
     138,   139,   139,   139,   139,   140,   140,   141,   141,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   145,   146,
     147,   148,   148,   149,   149,   149,   149,   150,   151,   151,
     151,   151,   152,   152,   152,   153,   153,   154,   154,   154,
     155,   156,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     5,     3,     6,     1,     2,     4,     1,
       3,     2,     1,     0,     1,     3,     2,     1,     1,     2,
       1,     4,     3,     1,     1,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     4,     3,     3,     5,     6,
       3,     4,     4,     3,     4,     3,     3,     4,     3,     6,
       6,     5,     4,     3,     3,     3,     5,     3,     2,     2,
       1,     5,     5,     1,     5,     5,     2,     2,     2,     2,
       2,     3,     1,     1,     3,     3,     2,     2,     2,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     5,     3,     2,     2,     2,
       1,     2,     1,     2,     2,     2,     3,     2,     2,     2,
       3,     1,     1,     1,     1,     3,     2,     1,     3,     2,
       2,     1,     3,     5,     2,     1,     3,     1,     1,     1,
       1,     1,     2,     4,     1,     2,     2,     2,     3,     1,
       0,     3,     3,     1,     3,     1,     1,     0,     1,     1,
       1,     0,     1,     2,     7,     3,     1,     1,     4,     8,
       6,     3,     3,     3,     2,     1,     2,     1,     3,     3,
       2,     3,     1,     3,     7,     9,     6,     5,     5,     5,
       4,     3,     4,     1,     4,     4,     3,     1,     3,     6,
       4,     7,     4,     8,     1,     1,     3,     1,     1,     1,
       6,     5,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     6,     7,
       8,     0,     9,     0,     0,    11,     0,    10,     0,     1,
     217,   218,   219,     0,     4,     3,   203,     0,    23,    14,
       0,     0,     0,     0,     0,   201,     2,     0,    22,     0,
      19,     0,    99,     0,     0,     0,    12,     0,     0,   202,
     206,   207,   200,    33,    34,    21,    23,     0,   100,    13,
       0,   101,     0,     0,   204,   205,    20,     0,   122,     0,
      15,     0,    28,    30,    16,     0,    37,   102,     0,   222,
     220,     0,    34,     0,    24,    27,    29,    17,     0,     0,
     167,   167,     0,   167,     0,   160,     0,    36,     0,     0,
       0,    35,     0,    39,    52,    46,   160,     0,     0,    42,
      43,    41,    44,   141,    49,    47,    40,    48,   185,    45,
      51,    50,   123,     0,    32,     0,    26,     0,     0,     0,
      78,     0,     0,     0,   103,   104,   105,   106,   176,   107,
     108,   169,   170,   165,   168,   109,   110,     0,   112,   111,
     163,     0,     0,     0,     0,   117,     0,   120,     0,     0,
       0,     0,     0,     0,   113,   105,   109,   112,   111,   157,
     159,     0,    83,     0,    80,    87,     0,     0,   114,     0,
       0,     0,     0,     0,     0,     0,   184,    97,    96,    98,
      38,    86,    89,    90,     0,    88,     0,     0,     0,     0,
     139,   151,   140,   154,   186,   221,    31,    25,    18,     0,
       0,     0,    75,     0,    68,     0,     0,     0,     0,   171,
     145,   142,     0,     0,     0,     0,   137,   121,   124,   118,
     125,   119,   116,     0,   171,   175,     0,    79,     0,    93,
      92,   106,     0,     0,    94,   164,   105,    57,    66,   105,
       0,    60,    56,     0,    63,    65,     0,   181,   182,   183,
       0,    95,    73,    74,   171,   156,   152,   138,     0,   155,
       0,     0,   105,     0,    55,    53,     0,    62,    67,     0,
     178,    93,    92,    91,   161,    77,     0,   150,   149,   147,
     148,   144,     0,   177,   162,   132,     0,     0,   133,   134,
     127,     0,     0,   158,     0,     0,     0,     0,     0,     0,
     214,   215,    72,     0,     0,    61,    64,     0,     0,     0,
      71,     0,    54,     0,    76,     0,   143,   146,   128,   131,
     126,   129,     0,   136,   115,     0,     0,     0,     0,     0,
     197,   198,     0,     0,   190,   192,     0,   187,     0,     0,
       0,     0,     0,    58,   153,     0,    70,    59,     0,   180,
     130,   135,   105,   172,     0,    82,    81,    85,    84,   196,
     191,     0,   189,     0,     0,     0,   216,     0,    69,   199,
       0,   173,   174,   188,   193,     0,   212,     0,     0,   179,
     105,   208,     0,     0,   210,     0,     0,     0,   194,     0,
       0,     0,   105,   209,   213,   195,   211
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    70,    39,    40,    83,
      84,    71,    72,    73,    74,   101,    75,   290,   103,   144,
     104,   180,   181,   166,   106,   146,   147,   167,   168,    33,
     150,   109,   110,   111,   155,   156,   220,   158,   227,   228,
     295,   296,   328,   297,   300,   229,   112,   113,   265,   222,
     291,   332,   200,   201,   202,   203,   114,   169,   151,   115,
     152,   153,   364,   116,   154,   294,   117,   118,   119,   346,
     310,   348,   254,   120,   214,   121,    11,    27,    52,   375,
     311,   312,   122,    12,    48,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -331
static const yytype_int16 yypact[] =
{
     236,    13,   190,    67,   152,   158,   238,  -331,  -331,  -331,
    -331,   159,  -331,   163,   196,  -331,    92,  -331,    46,  -331,
    -331,  -331,  -331,   238,  -331,  -331,  -331,   238,   253,  -331,
     258,   238,   207,   203,   313,   259,  -331,   151,    12,   136,
    -331,   238,  -331,   247,   288,   238,  -331,   238,   238,  -331,
      47,  -331,  -331,  -331,  -331,  -331,   253,   185,  -331,  -331,
     238,  -331,   317,   318,  -331,  -331,  -331,   325,  -331,    75,
    -331,    99,  -331,  -331,  -331,   320,   238,  -331,   332,  -331,
    -331,    49,    12,   226,  -331,  -331,  -331,  -331,   348,   351,
     310,   349,   360,   310,   363,   516,   208,  -331,   342,    86,
     377,  -331,   238,  -331,  -331,  -331,   387,    36,    77,  -331,
    -331,  -331,  -331,   346,  -331,  -331,  -331,  -331,   379,  -331,
    -331,  -331,  -331,   369,  -331,   385,  -331,    75,   395,   157,
    -331,   213,   134,   401,   412,  -331,   176,  -331,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,   394,  -331,   417,    36,    77,
    -331,    23,   399,   395,   516,  -331,   116,   238,    58,   294,
     403,   428,   404,   395,  -331,   277,  -331,   213,  -331,   414,
     419,   421,  -331,   429,  -331,  -331,   473,   432,  -331,   434,
     537,   406,    77,   426,   436,   437,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   414,   439,  -331,   443,   615,   516,   124,
     346,  -331,   456,  -331,  -331,  -331,  -331,  -331,  -331,   441,
      77,   425,    77,   491,  -331,    53,   267,   615,   516,   444,
     238,  -331,   290,   278,   516,   438,  -331,  -331,  -331,  -331,
    -331,  -331,  -331,   516,   444,  -331,   516,  -331,   154,   108,
     359,   437,   615,   447,  -331,  -331,   138,   419,  -331,   241,
     446,  -331,    23,   494,  -331,  -331,   479,  -331,  -331,  -331,
      77,  -331,  -331,   419,   444,  -331,  -331,   456,   395,  -331,
     496,   460,   241,   453,  -331,    61,   503,  -331,  -331,   516,
      77,  -331,  -331,  -331,  -331,   419,   395,  -331,  -331,  -331,
    -331,  -331,   238,  -331,  -331,  -331,   516,   438,   237,  -331,
     255,   294,   452,   419,   516,   516,   461,   556,   575,   368,
    -331,   469,  -331,    26,   464,   419,  -331,   395,   467,   478,
    -331,   379,  -331,   464,   419,   100,  -331,  -331,  -331,   331,
     255,  -331,   238,  -331,  -331,   596,   476,   326,   477,   374,
    -331,  -331,   474,   508,  -331,  -331,   485,   487,    91,   495,
     478,   529,   490,  -331,  -331,   534,  -331,  -331,   539,  -331,
    -331,  -331,   311,   419,   395,  -331,  -331,  -331,  -331,  -331,
    -331,   464,  -331,   615,   493,   355,  -331,   501,  -331,  -331,
     464,  -331,  -331,  -331,  -331,   634,  -331,   238,   615,  -331,
     160,  -331,   291,   303,  -331,   498,   512,   505,  -331,   653,
     238,   615,   160,  -331,  -331,  -331,  -331
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -331,  -331,   555,  -331,  -331,  -331,  -331,  -331,   507,  -331,
     440,  -331,   497,    29,   -57,  -331,  -331,   486,   306,  -174,
    -331,   -62,   328,   -63,  -331,  -331,   353,   -59,   -70,   545,
    -138,  -331,  -331,  -331,  -155,  -331,   -47,  -331,   413,  -331,
    -331,  -331,  -331,  -331,   283,   427,  -331,  -331,  -144,  -331,
    -331,   361,  -331,   384,   388,  -194,  -331,   481,   -89,  -331,
     347,   -80,  -331,  -331,  -331,  -331,  -331,  -331,   -85,  -265,
    -248,  -331,  -208,    -3,   276,   286,  -331,  -331,  -331,  -331,
    -330,  -237,    -5,  -331,  -331,  -331
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -172
static const yytype_int16 yytable[] =
{
      24,    25,   159,   277,   232,   108,   170,   251,   269,   221,
      76,   182,   105,   163,    87,    53,   107,   170,    36,   235,
     149,   149,    37,   149,    76,   130,    42,   145,   145,   131,
     145,   148,   148,   204,   148,   320,    58,   274,   243,   171,
      61,   209,    62,    63,   157,   197,   198,   213,   316,   353,
      64,   182,    53,    54,    13,    77,   171,    34,   357,   262,
     394,   347,   212,   224,   322,   223,   347,    55,   209,   217,
     211,   208,   406,   269,    35,   347,   218,    98,    53,   284,
     171,    76,   356,   194,   174,   195,   197,   198,    65,   187,
      54,   247,   252,   196,   210,   347,   253,   190,    85,   124,
     194,   174,    53,   226,   306,    67,   383,   217,    17,   263,
     125,   126,   157,   376,   218,   389,    82,   359,    99,   100,
     256,   224,   275,   347,   194,   174,   276,   188,   225,   285,
     336,   338,   347,    30,    31,   298,   372,   171,   373,   286,
      54,   264,   326,    68,   301,   212,   334,   303,   271,   209,
     279,    98,   108,   211,   302,    32,    85,   171,    19,   105,
     257,   226,   273,   107,     1,     2,  -103,   315,    68,   342,
     243,   345,   -92,   354,     3,   210,   304,   248,   255,   171,
       4,   194,   174,    56,   317,    98,    57,   175,    53,   308,
     324,    67,    50,    18,   -92,   177,    51,   172,   304,    99,
     100,   173,   174,    26,   309,   345,   175,   329,   278,   175,
     -92,   171,    28,    20,   177,   337,   339,   177,   325,   172,
     382,    21,    22,   173,   174,   175,    54,    98,   351,    68,
     108,    14,    15,   177,    69,   384,   351,   105,    29,    16,
     358,   107,     1,     2,    44,    45,   363,   391,    30,    31,
     393,   172,     3,    46,   157,   173,   174,   175,     4,   176,
     108,   403,   195,   405,    88,   177,   178,   105,    89,   179,
     196,   107,    90,   127,    91,   -92,   128,    92,    93,    94,
     287,   288,    95,   217,   331,   309,    10,   327,    44,    45,
     175,    10,   308,    20,    38,   333,    96,    59,   177,    88,
      41,    21,    22,    89,   349,   281,    98,    90,   282,    91,
      20,   -92,    92,    93,    94,   287,   288,    95,    21,    22,
      99,   100,    49,   133,   217,   333,   175,   361,   293,    88,
      60,    96,   395,    89,   177,   289,   396,    90,    68,    91,
     217,    98,    92,    93,    94,   -92,   381,    95,   134,   135,
     397,   136,   137,   398,  -171,    99,   100,    47,    78,   138,
     175,    96,   133,    79,   139,    97,   140,   199,   177,   141,
     142,    98,   217,   366,    81,    99,   100,   217,   360,   218,
     183,   123,   392,   184,   185,    99,   100,   134,   135,   129,
     136,   137,   132,    68,   186,   404,   143,   143,   138,   143,
     386,   161,   387,   139,   164,   140,   134,   135,   175,   165,
     137,   258,   343,   344,    99,   100,   177,  -105,   189,   205,
     217,   368,   139,    20,   140,   134,   135,   218,   165,   137,
      98,    21,    22,    99,   100,   206,   138,   191,   160,    68,
     162,   139,   215,   140,   134,   135,   -93,   249,   137,  -166,
     192,   216,    99,   100,   219,   138,    35,    98,   233,   234,
     139,   236,   140,   134,   135,   217,   272,   137,   250,   237,
     238,    99,   100,   244,   138,   245,    98,   268,   257,   139,
     260,   140,   134,   135,   261,   165,   137,   273,   258,   259,
      99,   100,   270,   138,   280,   313,   299,   314,   139,   318,
     140,   319,   321,   141,   142,   307,   323,   335,   343,    99,
     100,   239,   135,   340,   240,   241,   350,   134,   135,   355,
     165,   137,   309,   365,   367,   186,   369,   139,   138,   140,
     370,   242,   377,   139,   371,   140,   374,   379,    99,   100,
     378,   273,   380,   401,    99,   100,   134,   135,   388,   165,
     137,   385,   343,   344,   134,   135,   399,   165,   137,   400,
      23,   102,   139,    66,   140,   138,   305,   207,    86,   283,
     139,   230,   140,    99,   100,   134,   135,    43,   246,   137,
     330,    99,   100,   292,   266,   231,   138,   193,   267,   352,
       0,   139,     0,   140,   134,   135,     0,   165,   137,     0,
       0,     0,    99,   100,     0,     0,     0,     0,   341,     0,
     139,     0,   140,   134,   135,     0,   165,   137,     0,     0,
       0,    99,   100,     0,     0,     0,     0,     0,     0,   139,
       0,   140,     0,   242,   134,   135,     0,   362,   137,     0,
      99,   100,     0,     0,     0,   138,     0,     0,     0,     0,
     139,     0,   140,   134,   135,     0,   165,   137,     0,     0,
       0,    99,   100,     0,     0,     0,     0,     0,     0,   139,
       0,   140,   134,   135,     0,   390,   137,     0,     0,     0,
      99,   100,     0,     0,     0,     0,     0,     0,   139,     0,
     140,   134,   135,     0,   402,   137,     0,     0,     0,    99,
     100,     0,     0,     0,     0,     0,     0,   139,     0,   140,
       0,     0,     0,     0,     0,     0,     0,     0,    99,   100
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-331)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     6,    91,   211,   159,    75,    95,   181,   202,   153,
      57,    96,    75,    93,    71,     3,    75,   106,    23,   163,
      90,    91,    27,    93,    71,    88,    31,    90,    91,    88,
      93,    90,    91,   118,    93,   272,    41,   211,   176,     3,
      45,    15,    47,    48,    91,   107,   108,   132,   256,   314,
       3,   136,     3,    41,    41,    60,     3,    11,   323,   197,
     390,   309,   132,     5,     3,   154,   314,    38,    15,    46,
     132,   128,   402,   267,    28,   323,    53,    51,     3,   217,
       3,   128,   319,    47,    48,    49,   148,   149,    41,     3,
      41,   180,   181,    57,    41,   343,   181,   102,    69,    50,
      47,    48,     3,    45,   242,     6,   371,    46,    41,   198,
      81,    82,   159,   350,    53,   380,    41,   325,    65,    66,
     182,     5,   211,   371,    47,    48,   211,    41,    12,   218,
     304,   305,   380,    41,    42,   224,    45,     3,    47,   219,
      41,    17,   286,    44,   233,   215,   301,   236,   210,    15,
     212,    51,   222,   215,   234,    63,   127,     3,     0,   222,
      52,    45,    62,   222,     6,     7,    58,   256,    44,   307,
     308,   309,    34,   317,    16,    41,   238,   180,   181,     3,
      22,    47,    48,    47,   264,    51,    50,    49,     3,    51,
     279,     6,    41,    41,    34,    57,    45,    43,   260,    65,
      66,    47,    48,    44,    44,   343,    49,   296,   211,    49,
      34,     3,    49,    55,    57,   304,   305,    57,   280,    43,
     364,    63,    64,    47,    48,    49,    41,    51,   313,    44,
     300,    41,    42,    57,    49,   373,   321,   300,    42,    49,
     325,   300,     6,     7,    41,    42,   335,   385,    41,    42,
     388,    43,    16,    50,   301,    47,    48,    49,    22,    51,
     330,   399,    49,   401,     9,    57,    58,   330,    13,    61,
      57,   330,    17,    47,    19,    34,    50,    22,    23,    24,
      25,    26,    27,    46,    47,    44,     0,   292,    41,    42,
      49,     5,    51,    55,    41,   300,    41,    50,    57,     9,
      42,    63,    64,    13,   309,    38,    51,    17,    41,    19,
      55,    34,    22,    23,    24,    25,    26,    27,    63,    64,
      65,    66,    63,    13,    46,   330,    49,   332,    50,     9,
      42,    41,    41,    13,    57,    45,    45,    17,    44,    19,
      46,    51,    22,    23,    24,    34,    35,    27,    38,    39,
      47,    41,    42,    50,    44,    65,    66,    44,    41,    49,
      49,    41,    13,    45,    54,    45,    56,    21,    57,    59,
      60,    51,    46,    47,    49,    65,    66,    46,    47,    53,
      38,    49,   387,    41,    42,    65,    66,    38,    39,    41,
      41,    42,    41,    44,    52,   400,    90,    91,    49,    93,
      45,    41,    47,    54,    41,    56,    38,    39,    49,    41,
      42,    52,    44,    45,    65,    66,    57,    58,    41,    50,
      46,    47,    54,    55,    56,    38,    39,    53,    41,    42,
      51,    63,    64,    65,    66,    50,    49,    50,    91,    44,
      93,    54,    41,    56,    38,    39,    34,    41,    42,    55,
      63,    34,    65,    66,    55,    49,    28,    51,    55,    55,
      54,    47,    56,    38,    39,    46,    41,    42,    62,    48,
      41,    65,    66,    41,    49,    41,    51,    21,    52,    54,
      41,    56,    38,    39,    41,    41,    42,    62,    52,    52,
      65,    66,    51,    49,     3,    49,    58,     3,    54,     3,
      56,    41,    49,    59,    60,    58,     3,    55,    44,    65,
      66,    38,    39,    52,    41,    42,    47,    38,    39,    52,
      41,    42,    44,    47,    47,    52,    52,    54,    49,    56,
      45,    58,     3,    54,    47,    56,    41,     3,    65,    66,
      50,    62,     3,    38,    65,    66,    38,    39,    47,    41,
      42,    58,    44,    45,    38,    39,    58,    41,    42,    47,
       5,    75,    54,    56,    56,    49,   238,   127,    71,   216,
      54,   158,    56,    65,    66,    38,    39,    32,    41,    42,
     297,    65,    66,   222,   200,   158,    49,   106,   200,   313,
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
      56,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    16,    22,    73,    74,    75,    76,    77,
     147,   148,   155,    41,    41,    42,    49,    41,    41,     0,
      55,    63,    64,    74,   154,   154,    44,   149,    49,    42,
      41,    42,    63,   101,    11,    28,   154,   154,    41,    79,
      80,    42,   154,   101,    41,    42,    50,    44,   156,    63,
      41,    45,   150,     3,    41,    85,    47,    50,   154,    50,
      42,   154,   154,   154,     3,    41,    80,     6,    44,    49,
      78,    83,    84,    85,    86,    88,   108,   154,    41,    45,
     157,    49,    41,    81,    82,    85,    84,    86,     9,    13,
      17,    19,    22,    23,    24,    27,    41,    45,    51,    65,
      66,    87,    89,    90,    92,    95,    96,    99,   100,   103,
     104,   105,   118,   119,   128,   131,   135,   138,   139,   140,
     145,   147,   154,    49,    50,    85,    85,    47,    50,    41,
      95,    99,    41,    13,    38,    39,    41,    42,    49,    54,
      56,    59,    60,    90,    91,    95,    97,    98,    99,   100,
     102,   130,   132,   133,   136,   106,   107,   108,   109,   130,
     132,    41,   132,   133,    41,    41,    95,    99,   100,   129,
     130,     3,    43,    47,    48,    49,    51,    57,    58,    61,
      93,    94,   140,    38,    41,    42,    52,     3,    41,    41,
     154,    50,    63,   129,    47,    49,    57,    93,    93,    21,
     124,   125,   126,   127,   140,    50,    50,    82,    86,    15,
      41,    93,   100,   140,   146,    41,    34,    46,    53,    55,
     108,   120,   121,   130,     5,    12,    45,   110,   111,   117,
     110,   117,   106,    55,    55,   120,    47,    48,    41,    38,
      41,    42,    58,   102,    41,    41,    41,   130,   145,    41,
      62,    91,   130,   140,   144,   145,    93,    52,    52,    52,
      41,    41,   102,   130,    17,   120,   125,   126,    21,   127,
      51,    93,    41,    62,    91,   130,   140,   144,   145,    93,
       3,    38,    41,    98,   102,   130,   133,    25,    26,    45,
      89,   122,   123,    50,   137,   112,   113,   115,   130,    58,
     116,   130,   133,   130,    93,    94,   102,    58,    51,    44,
     142,   152,   153,    49,     3,   130,   144,   133,     3,    41,
     153,    49,     3,     3,   130,    93,   120,   154,   114,   130,
     116,    47,   123,   154,   106,    55,    91,   130,    91,   130,
      52,    52,   102,    44,    45,   102,   141,   142,   143,   154,
      47,   140,   146,   141,   120,    52,   153,   141,   140,   144,
      47,   154,    41,   130,   134,    47,    47,    47,    47,    52,
      45,    47,    45,    47,    41,   151,   153,     3,    50,     3,
       3,    35,   120,   141,   102,    58,    45,    47,    47,   141,
      41,   102,   154,   102,   152,    41,    45,    47,    50,    58,
      47,    38,    41,   102,   154,   102,   152
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
#line 1939 "y.tab.c"
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
#line 428 "..\\main\\golang.y"


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