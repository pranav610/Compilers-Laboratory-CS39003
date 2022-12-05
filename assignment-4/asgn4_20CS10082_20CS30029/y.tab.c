/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asgn4_20CS10082_20CS30029.y"
  /* C Declarations and Definitions */
    #include<iostream>
    extern int yylex();
    void yyerror(const char *s);
    extern char* yytext;
    extern int yylineno;

#line 78 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    _BOOL = 292,
    _COMPLEX = 293,
    _IMAGINARY = 294,
    SQUARE_BRACKET_OPEN = 295,
    SQUARE_BRACKET_CLOSE = 296,
    ROUND_BRACKET_OPEN = 297,
    ROUND_BRACKET_CLOSE = 298,
    CURLY_BRACKET_OPEN = 299,
    CURLY_BRACKET_CLOSE = 300,
    DOT = 301,
    ARROW = 302,
    INCREMENT = 303,
    DECREMENT = 304,
    BITWISE_AND = 305,
    MULTIPLY = 306,
    ADD = 307,
    SUBTRACT = 308,
    BITWISE_NOT = 309,
    LOGICAL_NOT = 310,
    DIVIDE = 311,
    MODULUS = 312,
    LEFT_SHIFT = 313,
    RIGHT_SHIFT = 314,
    LESS_THAN = 315,
    GREATER_THAN = 316,
    LESS_THAN_OR_EQUAL_TO = 317,
    GREATER_THAN_OR_EQUAL_TO = 318,
    EQUAL_TO = 319,
    NOT_EQUAL_TO = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    LOGICAL_AND = 323,
    LOGICAL_OR = 324,
    QUESTION_MARK = 325,
    COLON = 326,
    SEMICOLON = 327,
    ELLIPSIS = 328,
    ASSIGNMENT = 329,
    MULTIPLY_ASSIGNMENT = 330,
    DIVIDE_ASSIGNMENT = 331,
    MODULUS_ASSIGNMENT = 332,
    ADD_ASSIGNMENT = 333,
    SUBTRACT_ASSIGNMENT = 334,
    LEFT_SHIFT_ASSIGNMENT = 335,
    RIGHT_SHIFT_ASSIGNMENT = 336,
    BITWISE_AND_ASSIGNMENT = 337,
    BITWISE_XOR_ASSIGNMENT = 338,
    BITWISE_OR_ASSIGNMENT = 339,
    COMMA = 340,
    HASH = 341,
    CONSTANT = 342,
    IDENTIFIER = 343,
    STRING_LITERAL = 344,
    ENUMERATION_CONSTANT = 345
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define _BOOL 292
#define _COMPLEX 293
#define _IMAGINARY 294
#define SQUARE_BRACKET_OPEN 295
#define SQUARE_BRACKET_CLOSE 296
#define ROUND_BRACKET_OPEN 297
#define ROUND_BRACKET_CLOSE 298
#define CURLY_BRACKET_OPEN 299
#define CURLY_BRACKET_CLOSE 300
#define DOT 301
#define ARROW 302
#define INCREMENT 303
#define DECREMENT 304
#define BITWISE_AND 305
#define MULTIPLY 306
#define ADD 307
#define SUBTRACT 308
#define BITWISE_NOT 309
#define LOGICAL_NOT 310
#define DIVIDE 311
#define MODULUS 312
#define LEFT_SHIFT 313
#define RIGHT_SHIFT 314
#define LESS_THAN 315
#define GREATER_THAN 316
#define LESS_THAN_OR_EQUAL_TO 317
#define GREATER_THAN_OR_EQUAL_TO 318
#define EQUAL_TO 319
#define NOT_EQUAL_TO 320
#define BITWISE_XOR 321
#define BITWISE_OR 322
#define LOGICAL_AND 323
#define LOGICAL_OR 324
#define QUESTION_MARK 325
#define COLON 326
#define SEMICOLON 327
#define ELLIPSIS 328
#define ASSIGNMENT 329
#define MULTIPLY_ASSIGNMENT 330
#define DIVIDE_ASSIGNMENT 331
#define MODULUS_ASSIGNMENT 332
#define ADD_ASSIGNMENT 333
#define SUBTRACT_ASSIGNMENT 334
#define LEFT_SHIFT_ASSIGNMENT 335
#define RIGHT_SHIFT_ASSIGNMENT 336
#define BITWISE_AND_ASSIGNMENT 337
#define BITWISE_XOR_ASSIGNMENT 338
#define BITWISE_OR_ASSIGNMENT 339
#define COMMA 340
#define HASH 341
#define CONSTANT 342
#define IDENTIFIER 343
#define STRING_LITERAL 344
#define ENUMERATION_CONSTANT 345

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 9 "asgn4_20CS10082_20CS30029.y"
    /* Placeholder for values */
    int intval;
    float floatval;
    char charval;
    char *stringval;

#line 317 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   803

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  335

#define YYUNDEFTOK  2
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    38,    40,    42,    46,    48,    50,    52,
      54,    56,    58,    60,    62,    66,    69,    72,    74,    78,
      80,    82,    84,    86,    88,    92,    94,    96,    98,   100,
     102,   106,   108,   112,   114,   116,   118,   122,   124,   126,
     130,   132,   134,   138,   140,   142,   144,   146,   150,   152,
     154,   158,   160,   164,   166,   170,   172,   176,   178,   182,
     184,   188,   190,   194,   196,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   224,   226,   230,   236,
     240,   243,   246,   248,   250,   252,   256,   259,   262,   264,
     268,   270,   274,   276,   278,   280,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   312,
     314,   318,   321,   324,   326,   328,   332,   335,   338,   340,
     344,   346,   350,   352,   354,   358,   362,   366,   369,   372,
     374,   376,   378,   380,   382,   384,   386,   390,   393,   396,
     399,   402,   405,   408,   410,   414,   416,   420,   422,   426,
     428,   432,   434,   438,   440,   444,   448,   450,   452,   456,
     458,   462,   465,   467,   471,   473,   477,   479,   485,   487,
     489,   491,   493,   495,   499,   501,   503,   507,   511,   514,
     517,   519,   523,   525,   529,   533,   536,   539,   541,   543,
     547,   549,   551,   553,   557,   559,   561,   563,   569,   571,
     575,   577,   581,   585,   588,   590,   592
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "SQUARE_BRACKET_OPEN", "SQUARE_BRACKET_CLOSE",
  "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE", "CURLY_BRACKET_OPEN",
  "CURLY_BRACKET_CLOSE", "DOT", "ARROW", "INCREMENT", "DECREMENT",
  "BITWISE_AND", "MULTIPLY", "ADD", "SUBTRACT", "BITWISE_NOT",
  "LOGICAL_NOT", "DIVIDE", "MODULUS", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_OR_EQUAL_TO",
  "GREATER_THAN_OR_EQUAL_TO", "EQUAL_TO", "NOT_EQUAL_TO", "BITWISE_XOR",
  "BITWISE_OR", "LOGICAL_AND", "LOGICAL_OR", "QUESTION_MARK", "COLON",
  "SEMICOLON", "ELLIPSIS", "ASSIGNMENT", "MULTIPLY_ASSIGNMENT",
  "DIVIDE_ASSIGNMENT", "MODULUS_ASSIGNMENT", "ADD_ASSIGNMENT",
  "SUBTRACT_ASSIGNMENT", "LEFT_SHIFT_ASSIGNMENT", "RIGHT_SHIFT_ASSIGNMENT",
  "BITWISE_AND_ASSIGNMENT", "BITWISE_XOR_ASSIGNMENT",
  "BITWISE_OR_ASSIGNMENT", "COMMA", "HASH", "CONSTANT", "IDENTIFIER",
  "STRING_LITERAL", "ENUMERATION_CONSTANT", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-205)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     730,  -209,  -209,  -209,  -209,   -75,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,    35,   730,   730,  -209,   730,   730,   693,
    -209,  -209,    -5,    45,   129,   -24,     7,  -209,   539,   -30,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,    -3,  -209,
      76,   129,  -209,    76,   148,  -209,    35,    52,   730,    76,
    -209,     4,    30,   -10,  -209,  -209,  -209,  -209,    63,   548,
     482,    41,   566,   566,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,   174,   172,   596,  -209,    -6,    48,
      73,   122,   113,    91,    78,    79,    80,   124,  -209,  -209,
    -209,   259,  -209,  -209,   116,   138,   441,   596,  -209,   -27,
     482,  -209,  -209,   -23,   764,  -209,   764,   119,   596,    68,
      -7,   148,  -209,    59,  -209,   482,  -209,  -209,   596,   596,
      77,    81,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   596,  -209,  -209,   596,   596,
     596,   596,   596,   596,   596,   596,   596,   596,   596,   596,
     596,   596,   596,   596,   596,   596,   596,    95,   596,    99,
     108,   384,   145,   107,   168,   596,   171,   175,   161,   149,
    -209,  -209,  -209,  -209,   188,   259,  -209,  -209,   185,  -209,
    -209,  -209,  -209,   129,   614,   184,  -209,   -32,   200,   201,
     173,   176,   203,  -209,  -209,  -209,  -209,   216,  -209,   596,
    -209,  -209,  -209,   273,   219,  -209,  -209,     9,  -209,  -209,
    -209,   247,   -25,   248,   214,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,    -6,    -6,    48,    48,    73,    73,    73,    73,
     122,   122,   113,    91,    78,    79,    80,   -45,  -209,   231,
    -209,   384,   268,   330,   233,   596,   234,   596,   596,   384,
    -209,  -209,  -209,   596,   275,  -209,   277,   596,  -209,  -209,
    -209,   730,   232,   285,  -209,    41,  -209,  -209,  -209,   148,
     285,  -209,  -209,   596,   596,   384,  -209,   288,   596,   260,
    -209,   -22,  -209,   -21,   -12,  -209,   278,  -209,  -209,   293,
     250,  -209,    -2,  -209,  -209,  -209,  -209,   596,   266,   596,
     384,   384,   384,  -209,  -209,  -209,    94,   -11,   596,   267,
     328,  -209,  -209,  -209,   270,   311,   596,   384,  -209,   384,
     316,  -209,  -209,   384,  -209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    94,    97,   122,   102,   117,    92,   101,   125,    99,
     100,    95,   123,    98,   103,    93,   104,    96,   124,   105,
     106,   107,   201,   128,    87,    87,   108,    87,    87,     0,
     198,   200,   115,     0,   138,     0,    80,    88,    90,     0,
     127,    86,    82,    83,    84,    85,     1,   199,     0,   145,
     143,   137,    79,   128,     0,   205,   128,     0,   203,   128,
     129,   126,   120,     0,   118,   144,   146,    89,    90,     0,
       0,   162,     0,     0,    25,    26,    27,    28,    29,    30,
       3,     2,     4,     6,    19,    31,     0,    33,    37,    40,
      43,    48,    51,    53,    55,    57,    59,    61,    63,   156,
      91,   179,   202,   206,     0,   138,   142,     0,   113,     0,
       0,    23,    76,     0,   112,   155,   112,     0,     0,     0,
       0,     0,   161,     0,   164,     0,    20,    21,     0,    16,
       0,     0,    11,    12,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,    31,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   186,     0,     0,     0,   186,     0,     0,     2,   185,
     182,   183,   168,   169,     0,   178,   180,   170,     0,   171,
     172,   173,   130,   138,   140,   137,   153,   128,     0,     0,
       0,   147,   141,    78,   121,   114,   119,     0,     5,     0,
     111,   109,   110,     0,     0,   167,   157,   162,   159,   163,
     165,     0,     0,     0,    15,    17,     9,    10,    64,    34,
      35,    36,    38,    39,    41,    42,    44,    45,    46,    47,
      49,    50,    52,    54,    56,    58,    60,     0,   196,     0,
     195,   186,     0,   186,     0,     0,     0,     0,     0,   186,
     177,   181,   184,     0,    26,   139,     0,     0,   151,   136,
     135,     0,     0,    24,    77,   162,    32,   166,   158,     0,
       0,     7,     8,     0,     0,   186,   176,     0,   186,     0,
     194,     0,   197,     0,     0,   174,     0,   134,   131,     0,
     148,   154,     0,   160,    18,    62,   175,     0,     0,   186,
     186,   186,   186,   132,   133,    13,   162,     0,   186,     0,
     187,   189,   190,    14,     0,     0,   186,   186,   191,   186,
       0,   188,   193,   186,   192
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,  -209,  -209,  -209,  -209,   -39,  -209,   -78,    53,    71,
      84,    70,   205,   208,   210,   207,   209,  -209,  -103,   -52,
    -209,   -69,  -111,   -35,  -209,     0,   181,  -209,   322,  -209,
     -34,   -26,   261,  -209,  -209,  -209,   281,    33,  -209,   -17,
    -209,  -209,   -95,  -209,  -209,   326,   282,  -209,  -209,   115,
    -209,   -73,  -116,   120,  -208,  -209,  -209,   274,  -157,  -209,
     334,  -209,  -209,   211,  -209,  -158,  -209,  -209,  -209,  -209,
     369,  -209,  -209,  -209
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    83,    84,   223,   224,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   112,
     145,   179,   204,    22,    35,    56,    42,    36,    37,    24,
      25,   115,   211,    26,    33,    63,    64,    27,    28,    68,
      39,    61,    50,   266,   198,    40,    51,   199,   200,   201,
     202,   117,   100,   120,   121,   122,   123,   124,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,    29,
      30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   113,    99,    55,   203,   218,    38,   214,   147,   279,
     194,  -152,    59,    32,   252,   203,   281,   256,   205,    34,
     208,   310,   311,   103,    41,    41,   284,    41,    41,    23,
     111,   312,   324,   126,   127,   108,   114,   207,   216,  -116,
     209,   113,   104,   315,   105,   148,   106,   146,    52,   118,
     149,   150,   221,  -152,   278,   119,   113,   249,    60,   222,
     209,    62,   209,   209,   209,   203,   180,    49,   146,    99,
     229,   230,   231,   209,   209,   109,   114,   225,   217,   146,
     114,   118,   114,   316,    66,    62,    34,   119,   210,    48,
     210,   114,    53,   228,   286,   289,   101,   247,   263,   118,
     151,   152,   295,   116,   107,   119,   197,   -81,   279,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,    34,   306,   146,
     308,   153,   154,   219,   118,   276,     3,    54,    49,   323,
     119,   161,   265,   116,   162,     3,   163,   116,   164,   116,
     180,   319,    12,   320,   321,   322,   215,   274,   116,   192,
     325,    12,   213,   303,    18,   226,   193,   248,   330,   227,
     331,   250,   332,    18,   146,    69,   334,   159,   160,   251,
     268,   305,   155,   156,   157,   158,   291,   253,   293,   294,
      70,     3,    71,   165,   166,   254,    72,    73,    74,    75,
      76,    77,    78,    79,   232,   233,    43,    12,    44,    45,
     255,   296,   267,   257,   128,   299,   129,   258,   288,    18,
     130,   131,   132,   133,   234,   235,    49,    99,    66,   240,
     241,   304,   259,   260,   209,    80,    81,    82,   317,   236,
     237,   238,   239,   269,   270,   146,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   262,   271,   273,
     277,  -149,     1,   167,   168,     2,     3,   169,   170,   171,
       4,   197,     5,     6,     7,   172,   173,   174,     8,     9,
      10,    11,    12,   175,    13,    14,    69,    15,   272,   176,
     280,   282,    16,    17,    18,   177,    19,    20,    21,   283,
      69,    70,   285,   101,   287,   290,   292,    72,    73,    74,
      75,    76,    77,    78,    79,    70,   297,   275,   298,   313,
     301,    72,    73,    74,    75,    76,    77,    78,    79,   275,
     307,  -186,   309,     1,   314,  -150,     2,     3,   318,   326,
     327,     4,   328,     5,     6,     7,    80,   178,    82,     8,
       9,    10,    11,    12,   329,    13,    14,    69,    15,   333,
      80,    81,    82,    16,    17,    18,   242,    19,    20,    21,
     243,   245,    70,   244,   246,    67,    65,   212,    72,    73,
      74,    75,    76,    77,    78,    79,   300,   195,   167,   168,
     206,   102,   169,   170,   171,   302,   261,   220,    47,     0,
     172,   173,   174,     0,     0,     0,     0,     0,   175,     0,
       0,    69,     0,     0,   176,     0,     0,    80,    81,    82,
     177,     0,     0,     0,     0,     0,    70,     0,   101,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
       0,    80,   178,    82,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     0,     7,     0,     0,
       0,     0,     9,    10,     0,    12,     0,    13,    14,    69,
       0,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,    70,     0,     0,     0,     0,   196,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,    80,
      81,    82,    16,    17,    18,    69,    19,    20,    21,     0,
       0,     0,     0,  -204,     0,     0,     0,     0,     0,     0,
     110,     0,     0,    69,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,   125,     0,
       0,     0,     0,    54,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,    82,    70,     0,
       0,    69,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    81,    82,    70,     0,     0,     0,
       0,     0,    72,    73,    74,   264,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     1,     0,     0,     2,
       3,    80,    81,    82,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21,
       2,     3,     0,     0,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     0,     9,    10,     0,    12,     0,    13,
      14,     0,     0,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    70,    54,    38,   107,   121,    23,   118,    86,   217,
     105,    43,    42,    88,   171,   118,    41,   175,    45,    51,
      43,    43,    43,    58,    24,    25,    71,    27,    28,    29,
      69,    43,    43,    72,    73,    45,    70,   110,    45,    44,
      85,   110,    59,    45,    40,    51,    42,    86,    72,    40,
      56,    57,   125,    85,    45,    46,   125,   168,    88,   128,
      85,    88,    85,    85,    85,   168,   101,    34,   107,   121,
     148,   149,   150,    85,    85,    85,   110,   129,    85,   118,
     114,    40,   116,    85,    51,    88,    51,    46,   114,    44,
     116,   125,    85,   145,   251,   253,    44,   166,   193,    40,
      52,    53,   259,    70,    74,    46,   106,    72,   316,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    51,   285,   168,
     288,    58,    59,    74,    40,   213,     7,    74,   105,    45,
      46,    50,   194,   110,    66,     7,    67,   114,    68,   116,
     185,   309,    23,   310,   311,   312,    88,   209,   125,    43,
     318,    23,    43,   279,    35,    88,    28,    72,   326,    88,
     327,    72,   329,    35,   213,    27,   333,    64,    65,    71,
     197,   284,    60,    61,    62,    63,   255,    42,   257,   258,
      42,     7,    44,    69,    70,    88,    48,    49,    50,    51,
      52,    53,    54,    55,   151,   152,    25,    23,    27,    28,
      42,   263,    28,    42,    40,   267,    42,    42,   253,    35,
      46,    47,    48,    49,   153,   154,   193,   279,   195,   159,
     160,   283,    71,    45,    85,    87,    88,    89,   307,   155,
     156,   157,   158,    43,    43,   284,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    72,    85,    43,
      41,    85,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   271,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    85,    30,
      43,    43,    33,    34,    35,    36,    37,    38,    39,    85,
      27,    42,    71,    44,    36,    72,    72,    48,    49,    50,
      51,    52,    53,    54,    55,    42,    41,    44,    41,    41,
      88,    48,    49,    50,    51,    52,    53,    54,    55,    44,
      42,    72,    72,     3,    41,    85,     6,     7,    72,    72,
      12,    11,    72,    13,    14,    15,    87,    88,    89,    19,
      20,    21,    22,    23,    43,    25,    26,    27,    28,    43,
      87,    88,    89,    33,    34,    35,   161,    37,    38,    39,
     162,   164,    42,   163,   165,    53,    50,   116,    48,    49,
      50,    51,    52,    53,    54,    55,   271,   105,     4,     5,
     109,    57,     8,     9,    10,   275,   185,   123,    29,    -1,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    30,    -1,    -1,    87,    88,    89,
      36,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    -1,    28,
      -1,    87,    88,    89,    33,    34,    35,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    88,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    -1,    87,
      88,    89,    33,    34,    35,    27,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    27,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    74,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    42,    -1,
      -1,    27,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    87,    88,    89,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     0,    -1,    -1,     3,    -1,    -1,     6,
       7,    87,    88,    89,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,
      37,    38,    39,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,    37,    38,    39,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    33,    34,    35,    37,
      38,    39,   114,   116,   120,   121,   124,   128,   129,   160,
     161,   162,    88,   125,    51,   115,   118,   119,   130,   131,
     136,   116,   117,   117,   117,   117,     0,   161,    44,   128,
     133,   137,    72,    85,    74,   114,   116,   163,   164,    42,
      88,   132,    88,   126,   127,   136,   128,   119,   130,    27,
      42,    44,    48,    49,    50,    51,    52,    53,    54,    55,
      87,    88,    89,    92,    93,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     143,    44,   151,   114,   130,    40,    42,    74,    45,    85,
      42,    96,   110,   112,   121,   122,   128,   142,    40,    46,
     144,   145,   146,   147,   148,    42,    96,    96,    40,    42,
      46,    47,    48,    49,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   111,    96,    98,    51,    56,
      57,    52,    53,    58,    59,    60,    61,    62,    63,    64,
      65,    50,    66,    67,    68,    69,    70,     4,     5,     8,
       9,    10,    16,    17,    18,    24,    30,    36,    88,   112,
     114,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    43,    28,   133,   137,    88,   116,   135,   138,
     139,   140,   141,   109,   113,    45,   127,   142,    43,    85,
     122,   123,   123,    43,   113,    88,    45,    85,   143,    74,
     148,   142,   112,    94,    95,   110,    88,    88,   110,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   104,   105,   106,   107,   112,    72,   113,
      72,    71,   149,    42,    88,    42,   156,    42,    42,    71,
      45,   154,    72,   133,    51,   110,   134,    28,   130,    43,
      43,    85,    85,    43,   110,    44,    98,    41,    45,   145,
      43,    41,    43,    85,    71,    71,   149,    36,   114,   156,
      72,   112,    72,   112,   112,   149,   110,    41,    41,   110,
     140,    88,   144,   143,   110,   109,   149,    42,   156,    72,
      43,    43,    43,    41,    41,    45,    85,   112,    72,   156,
     149,   149,   149,    45,    43,   156,    72,    12,    72,    43,
     156,   149,   149,    43,   149
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   114,
     115,   115,   116,   116,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   120,   120,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   129,   130,   131,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   143,   143,   143,   144,
     144,   145,   145,   146,   147,   147,   148,   148,   149,   149,
     149,   149,   149,   149,   150,   150,   150,   151,   152,   152,
     153,   153,   154,   154,   155,   156,   156,   157,   157,   157,
     158,   158,   158,   158,   159,   159,   159,   159,   160,   160,
     161,   161,   162,   163,   163,   164,   164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     6,     7,     1,     0,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     0,     2,     2,     2,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     5,     6,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     0,     1,
       3,     5,     6,     6,     5,     4,     4,     1,     0,     1,
       0,     1,     0,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     1,     0,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     3,     1,     0,
       1,     2,     1,     1,     2,     1,     0,     5,     7,     5,
       5,     7,     9,     8,     3,     2,     2,     3,     1,     2,
       1,     1,     4,     1,     0,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 37 "asgn4_20CS10082_20CS30029.y"
                        { printf("primary-expression --> identifier\n"); }
#line 1873 "y.tab.c"
    break;

  case 3:
#line 39 "asgn4_20CS10082_20CS30029.y"
                        { printf("primary-expression --> constant\n"); }
#line 1879 "y.tab.c"
    break;

  case 4:
#line 41 "asgn4_20CS10082_20CS30029.y"
                        { printf("primary-expression --> string-literal\n"); }
#line 1885 "y.tab.c"
    break;

  case 5:
#line 43 "asgn4_20CS10082_20CS30029.y"
                        { printf("primary-expression --> ( expression )\n"); }
#line 1891 "y.tab.c"
    break;

  case 6:
#line 47 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> primary-expression\n"); }
#line 1897 "y.tab.c"
    break;

  case 7:
#line 49 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> postfix-expression [ expression ]\n"); }
#line 1903 "y.tab.c"
    break;

  case 8:
#line 51 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> postfix-expression ( argument-expression-list_opt )\n"); }
#line 1909 "y.tab.c"
    break;

  case 9:
#line 53 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> postfix-expression . identifier\n"); }
#line 1915 "y.tab.c"
    break;

  case 10:
#line 55 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> postfix-expression -> identifier\n"); }
#line 1921 "y.tab.c"
    break;

  case 11:
#line 57 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> postfix-expression ++\n"); }
#line 1927 "y.tab.c"
    break;

  case 12:
#line 59 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> postfix-expression --\n"); }
#line 1933 "y.tab.c"
    break;

  case 13:
#line 61 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> ( type-name ) { initializer-list }\n"); }
#line 1939 "y.tab.c"
    break;

  case 14:
#line 63 "asgn4_20CS10082_20CS30029.y"
                        { printf("postfix-expression --> ( type-name ) { initializer-list , }\n"); }
#line 1945 "y.tab.c"
    break;

  case 15:
#line 67 "asgn4_20CS10082_20CS30029.y"
                                   { printf("argument-expression-list_opt --> argument-expression-list\n"); }
#line 1951 "y.tab.c"
    break;

  case 16:
#line 69 "asgn4_20CS10082_20CS30029.y"
                                   { printf("argument-expression-list_opt --> epsilon\n"); }
#line 1957 "y.tab.c"
    break;

  case 17:
#line 73 "asgn4_20CS10082_20CS30029.y"
                               { printf("argument-expression-list --> assignment-expression\n"); }
#line 1963 "y.tab.c"
    break;

  case 18:
#line 75 "asgn4_20CS10082_20CS30029.y"
                               { printf("argument-expression-list --> argument-expression-list , assignment-expression\n"); }
#line 1969 "y.tab.c"
    break;

  case 19:
#line 79 "asgn4_20CS10082_20CS30029.y"
                        { printf("unary-expression --> postfix-expression\n"); }
#line 1975 "y.tab.c"
    break;

  case 20:
#line 81 "asgn4_20CS10082_20CS30029.y"
                        { printf("unary-expression --> ++ unary-expression\n"); }
#line 1981 "y.tab.c"
    break;

  case 21:
#line 83 "asgn4_20CS10082_20CS30029.y"
                        { printf("unary-expression --> -- unary-expression\n"); }
#line 1987 "y.tab.c"
    break;

  case 22:
#line 85 "asgn4_20CS10082_20CS30029.y"
                        { printf("unary-expression --> unary-operator cast-expression\n"); }
#line 1993 "y.tab.c"
    break;

  case 23:
#line 87 "asgn4_20CS10082_20CS30029.y"
                        { printf("unary-expression --> sizeof unary-expression\n"); }
#line 1999 "y.tab.c"
    break;

  case 24:
#line 89 "asgn4_20CS10082_20CS30029.y"
                        { printf("unary-expression --> sizeof ( type-name )\n"); }
#line 2005 "y.tab.c"
    break;

  case 25:
#line 93 "asgn4_20CS10082_20CS30029.y"
                    { printf("unary-operator --> &\n"); }
#line 2011 "y.tab.c"
    break;

  case 26:
#line 95 "asgn4_20CS10082_20CS30029.y"
                    { printf("unary-operator --> *\n"); }
#line 2017 "y.tab.c"
    break;

  case 27:
#line 97 "asgn4_20CS10082_20CS30029.y"
                    { printf("unary-operator --> +\n"); }
#line 2023 "y.tab.c"
    break;

  case 28:
#line 99 "asgn4_20CS10082_20CS30029.y"
                    { printf("unary-operator --> -\n"); }
#line 2029 "y.tab.c"
    break;

  case 29:
#line 101 "asgn4_20CS10082_20CS30029.y"
                    { printf("unary-operator --> ~\n"); }
#line 2035 "y.tab.c"
    break;

  case 30:
#line 103 "asgn4_20CS10082_20CS30029.y"
                    { printf("unary-operator --> !\n"); }
#line 2041 "y.tab.c"
    break;

  case 31:
#line 107 "asgn4_20CS10082_20CS30029.y"
                      { printf("cast-expression --> unary-expression\n"); }
#line 2047 "y.tab.c"
    break;

  case 32:
#line 109 "asgn4_20CS10082_20CS30029.y"
                      { printf("cast-expression --> ( type-name ) cast-expression\n"); }
#line 2053 "y.tab.c"
    break;

  case 33:
#line 113 "asgn4_20CS10082_20CS30029.y"
                                { printf("multiplicative-expression --> cast-expression\n"); }
#line 2059 "y.tab.c"
    break;

  case 34:
#line 115 "asgn4_20CS10082_20CS30029.y"
                                { printf("multiplicative-expression --> multiplicative-expression * cast-expression\n"); }
#line 2065 "y.tab.c"
    break;

  case 35:
#line 117 "asgn4_20CS10082_20CS30029.y"
                                { printf("multiplicative-expression --> multiplicative-expression / cast-expression\n"); }
#line 2071 "y.tab.c"
    break;

  case 36:
#line 119 "asgn4_20CS10082_20CS30029.y"
                                { printf("multiplicative-expression --> multiplicative-expression %% cast-expression\n"); }
#line 2077 "y.tab.c"
    break;

  case 37:
#line 123 "asgn4_20CS10082_20CS30029.y"
                          { printf("additive-expression --> multiplicative-expression\n"); }
#line 2083 "y.tab.c"
    break;

  case 38:
#line 125 "asgn4_20CS10082_20CS30029.y"
                          { printf("additive-expression --> additive-expression + multiplicative-expression\n"); }
#line 2089 "y.tab.c"
    break;

  case 39:
#line 127 "asgn4_20CS10082_20CS30029.y"
                          { printf("additive-expression --> additive-expression - multiplicative-expression\n"); }
#line 2095 "y.tab.c"
    break;

  case 40:
#line 131 "asgn4_20CS10082_20CS30029.y"
                       { printf("shift-expression --> additive-expression\n"); }
#line 2101 "y.tab.c"
    break;

  case 41:
#line 133 "asgn4_20CS10082_20CS30029.y"
                       { printf("shift-expression --> shift-expression << additive-expression\n"); }
#line 2107 "y.tab.c"
    break;

  case 42:
#line 135 "asgn4_20CS10082_20CS30029.y"
                       { printf("shift-expression --> shift-expression >> additive-expression\n"); }
#line 2113 "y.tab.c"
    break;

  case 43:
#line 139 "asgn4_20CS10082_20CS30029.y"
                            { printf("relational-expression --> shift-expression\n"); }
#line 2119 "y.tab.c"
    break;

  case 44:
#line 141 "asgn4_20CS10082_20CS30029.y"
                            { printf("relational-expression --> relational-expression < shift-expression\n"); }
#line 2125 "y.tab.c"
    break;

  case 45:
#line 143 "asgn4_20CS10082_20CS30029.y"
                            { printf("relational-expression --> relational-expression > shift-expression\n"); }
#line 2131 "y.tab.c"
    break;

  case 46:
#line 145 "asgn4_20CS10082_20CS30029.y"
                            { printf("relational-expression --> relational-expression <= shift-expression\n"); }
#line 2137 "y.tab.c"
    break;

  case 47:
#line 147 "asgn4_20CS10082_20CS30029.y"
                            { printf("relational-expression --> relational-expression >= shift-expression\n"); }
#line 2143 "y.tab.c"
    break;

  case 48:
#line 151 "asgn4_20CS10082_20CS30029.y"
                          { printf("equality-expression --> relational-expression\n"); }
#line 2149 "y.tab.c"
    break;

  case 49:
#line 153 "asgn4_20CS10082_20CS30029.y"
                          { printf("equality-expression --> equality-expression == relational-expression\n"); }
#line 2155 "y.tab.c"
    break;

  case 50:
#line 155 "asgn4_20CS10082_20CS30029.y"
                          { printf("equality-expression --> equality-expression != relational-expression\n"); }
#line 2161 "y.tab.c"
    break;

  case 51:
#line 159 "asgn4_20CS10082_20CS30029.y"
                     { printf("AND-expression --> equality-expression\n"); }
#line 2167 "y.tab.c"
    break;

  case 52:
#line 161 "asgn4_20CS10082_20CS30029.y"
                     { printf("AND-expression --> AND-expression & equality-expression\n"); }
#line 2173 "y.tab.c"
    break;

  case 53:
#line 165 "asgn4_20CS10082_20CS30029.y"
                              { printf("exclusive-OR-expression --> AND-expression\n"); }
#line 2179 "y.tab.c"
    break;

  case 54:
#line 167 "asgn4_20CS10082_20CS30029.y"
                              { printf("exclusive-OR-expression --> exclusive-OR-expression ^ AND-expression\n"); }
#line 2185 "y.tab.c"
    break;

  case 55:
#line 171 "asgn4_20CS10082_20CS30029.y"
                              { printf("inclusive-OR-expression --> exclusive-OR-expression\n"); }
#line 2191 "y.tab.c"
    break;

  case 56:
#line 173 "asgn4_20CS10082_20CS30029.y"
                              { printf("inclusive-OR-expression --> inclusive-OR-expression | exclusive-OR-expression\n"); }
#line 2197 "y.tab.c"
    break;

  case 57:
#line 177 "asgn4_20CS10082_20CS30029.y"
                             { printf("logical-AND-expression --> inclusive-OR-expression\n"); }
#line 2203 "y.tab.c"
    break;

  case 58:
#line 179 "asgn4_20CS10082_20CS30029.y"
                             { printf("logical-AND-expression --> logical-AND-expression && inclusive-OR-expression\n"); }
#line 2209 "y.tab.c"
    break;

  case 59:
#line 183 "asgn4_20CS10082_20CS30029.y"
                            { printf("logical-OR-expression --> logical-AND-expression\n"); }
#line 2215 "y.tab.c"
    break;

  case 60:
#line 185 "asgn4_20CS10082_20CS30029.y"
                            { printf("logical-OR-expression --> logical-OR-expression || logical-AND-expression\n"); }
#line 2221 "y.tab.c"
    break;

  case 61:
#line 189 "asgn4_20CS10082_20CS30029.y"
                             { printf("conditional-expression --> logical-OR-expression\n"); }
#line 2227 "y.tab.c"
    break;

  case 62:
#line 191 "asgn4_20CS10082_20CS30029.y"
                             { printf("conditional-expression --> logical-OR-expression ? expression : conditional-expression\n"); }
#line 2233 "y.tab.c"
    break;

  case 63:
#line 195 "asgn4_20CS10082_20CS30029.y"
                            { printf("assignment-expression --> conditional-expression\n"); }
#line 2239 "y.tab.c"
    break;

  case 64:
#line 197 "asgn4_20CS10082_20CS30029.y"
                            { printf("assignment-expression --> unary-expression assignment-operator assignment-expression\n"); }
#line 2245 "y.tab.c"
    break;

  case 65:
#line 201 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> =\n"); }
#line 2251 "y.tab.c"
    break;

  case 66:
#line 203 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> *=\n"); }
#line 2257 "y.tab.c"
    break;

  case 67:
#line 205 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> /=\n"); }
#line 2263 "y.tab.c"
    break;

  case 68:
#line 207 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> %%=\n"); }
#line 2269 "y.tab.c"
    break;

  case 69:
#line 209 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> +=\n"); }
#line 2275 "y.tab.c"
    break;

  case 70:
#line 211 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> -=\n"); }
#line 2281 "y.tab.c"
    break;

  case 71:
#line 213 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> <<=\n"); }
#line 2287 "y.tab.c"
    break;

  case 72:
#line 215 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> >>=\n"); }
#line 2293 "y.tab.c"
    break;

  case 73:
#line 217 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> &=\n"); }
#line 2299 "y.tab.c"
    break;

  case 74:
#line 219 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> ^=\n"); }
#line 2305 "y.tab.c"
    break;

  case 75:
#line 221 "asgn4_20CS10082_20CS30029.y"
                          { printf("assignment-operator --> |=\n"); }
#line 2311 "y.tab.c"
    break;

  case 76:
#line 225 "asgn4_20CS10082_20CS30029.y"
                 { printf("expression --> assignment-expression\n"); }
#line 2317 "y.tab.c"
    break;

  case 77:
#line 227 "asgn4_20CS10082_20CS30029.y"
                 { printf("expression --> expression , assignment-expression\n"); }
#line 2323 "y.tab.c"
    break;

  case 78:
#line 231 "asgn4_20CS10082_20CS30029.y"
                          { printf("constant-expression --> conditional-expression\n"); }
#line 2329 "y.tab.c"
    break;

  case 79:
#line 237 "asgn4_20CS10082_20CS30029.y"
                 { printf("declaration --> declaration-specifiers init-declarator-list_opt ;\n"); }
#line 2335 "y.tab.c"
    break;

  case 80:
#line 241 "asgn4_20CS10082_20CS30029.y"
                               { printf("init-declarator-list_opt --> init-declarator-list\n"); }
#line 2341 "y.tab.c"
    break;

  case 81:
#line 243 "asgn4_20CS10082_20CS30029.y"
                               { printf("init-declarator-list_opt --> epsilon\n"); }
#line 2347 "y.tab.c"
    break;

  case 82:
#line 247 "asgn4_20CS10082_20CS30029.y"
                             { printf("declaration-specifiers --> storage-class-specifier declaration-specifiers_opt\n"); }
#line 2353 "y.tab.c"
    break;

  case 83:
#line 249 "asgn4_20CS10082_20CS30029.y"
                             { printf("declaration-specifiers --> type-specifier declaration-specifiers_opt\n"); }
#line 2359 "y.tab.c"
    break;

  case 84:
#line 251 "asgn4_20CS10082_20CS30029.y"
                             { printf("declaration-specifiers --> type-qualifier declaration-specifiers_opt\n"); }
#line 2365 "y.tab.c"
    break;

  case 85:
#line 253 "asgn4_20CS10082_20CS30029.y"
                             { printf("declaration-specifiers --> function-specifier declaration-specifiers_opt\n"); }
#line 2371 "y.tab.c"
    break;

  case 86:
#line 257 "asgn4_20CS10082_20CS30029.y"
                                 { printf("declaration-specifiers_opt --> declaration-specifiers\n"); }
#line 2377 "y.tab.c"
    break;

  case 87:
#line 259 "asgn4_20CS10082_20CS30029.y"
                                 { printf("declaration-specifiers_opt --> epsilon\n"); }
#line 2383 "y.tab.c"
    break;

  case 88:
#line 263 "asgn4_20CS10082_20CS30029.y"
                          { printf("init-declarator-list --> init-declarator\n"); }
#line 2389 "y.tab.c"
    break;

  case 89:
#line 265 "asgn4_20CS10082_20CS30029.y"
                          { printf("init-declarator-list --> init-declarator-list , init-declarator\n"); }
#line 2395 "y.tab.c"
    break;

  case 90:
#line 269 "asgn4_20CS10082_20CS30029.y"
                     { printf("init-declarator --> declarator\n"); }
#line 2401 "y.tab.c"
    break;

  case 91:
#line 271 "asgn4_20CS10082_20CS30029.y"
                     { printf("init-declarator --> declarator = initializer\n"); }
#line 2407 "y.tab.c"
    break;

  case 92:
#line 275 "asgn4_20CS10082_20CS30029.y"
                              { printf("storage-class-specifier --> extern\n"); }
#line 2413 "y.tab.c"
    break;

  case 93:
#line 277 "asgn4_20CS10082_20CS30029.y"
                              { printf("storage-class-specifier --> static\n"); }
#line 2419 "y.tab.c"
    break;

  case 94:
#line 279 "asgn4_20CS10082_20CS30029.y"
                              { printf("storage-class-specifier --> auto\n"); }
#line 2425 "y.tab.c"
    break;

  case 95:
#line 281 "asgn4_20CS10082_20CS30029.y"
                              { printf("storage-class-specifier --> register\n"); }
#line 2431 "y.tab.c"
    break;

  case 96:
#line 285 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> void\n"); }
#line 2437 "y.tab.c"
    break;

  case 97:
#line 287 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> char\n"); }
#line 2443 "y.tab.c"
    break;

  case 98:
#line 289 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> short\n"); }
#line 2449 "y.tab.c"
    break;

  case 99:
#line 291 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> int\n"); }
#line 2455 "y.tab.c"
    break;

  case 100:
#line 293 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> long\n"); }
#line 2461 "y.tab.c"
    break;

  case 101:
#line 295 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> float\n"); }
#line 2467 "y.tab.c"
    break;

  case 102:
#line 297 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> double\n"); }
#line 2473 "y.tab.c"
    break;

  case 103:
#line 299 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> signed\n"); }
#line 2479 "y.tab.c"
    break;

  case 104:
#line 301 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> unsigned\n"); }
#line 2485 "y.tab.c"
    break;

  case 105:
#line 303 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> _Bool\n"); }
#line 2491 "y.tab.c"
    break;

  case 106:
#line 305 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> _Complex\n"); }
#line 2497 "y.tab.c"
    break;

  case 107:
#line 307 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> _Imaginary\n"); }
#line 2503 "y.tab.c"
    break;

  case 108:
#line 309 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-specifier --> enum-specifier\n"); }
#line 2509 "y.tab.c"
    break;

  case 109:
#line 313 "asgn4_20CS10082_20CS30029.y"
                              { printf("specifier-qualifier-list --> type-specifier specifier-qualifier-list_opt\n"); }
#line 2515 "y.tab.c"
    break;

  case 110:
#line 315 "asgn4_20CS10082_20CS30029.y"
                              { printf("specifier-qualifier-list --> type-qualifier specifier-qualifier-list_opt\n"); }
#line 2521 "y.tab.c"
    break;

  case 111:
#line 319 "asgn4_20CS10082_20CS30029.y"
                                  { printf("specifier-qualifier-list_opt --> specifier-qualifier-list\n"); }
#line 2527 "y.tab.c"
    break;

  case 112:
#line 321 "asgn4_20CS10082_20CS30029.y"
                                  { printf("specifier-qualifier-list_opt --> epsilon\n"); }
#line 2533 "y.tab.c"
    break;

  case 113:
#line 325 "asgn4_20CS10082_20CS30029.y"
                     { printf("enum-specifier --> enum identifier_opt { enumerator-list }\n"); }
#line 2539 "y.tab.c"
    break;

  case 114:
#line 327 "asgn4_20CS10082_20CS30029.y"
                     { printf("enum-specifier --> enum identifier_opt { enumerator-list , }\n"); }
#line 2545 "y.tab.c"
    break;

  case 115:
#line 329 "asgn4_20CS10082_20CS30029.y"
                     { printf("enum-specifier --> enum identifier\n"); }
#line 2551 "y.tab.c"
    break;

  case 116:
#line 333 "asgn4_20CS10082_20CS30029.y"
                    { printf("identifier_opt --> identifier\n"); }
#line 2557 "y.tab.c"
    break;

  case 117:
#line 335 "asgn4_20CS10082_20CS30029.y"
                    { printf("identifier_opt --> epsilon\n"); }
#line 2563 "y.tab.c"
    break;

  case 118:
#line 339 "asgn4_20CS10082_20CS30029.y"
                     { printf("enumerator-list --> enumerator\n"); }
#line 2569 "y.tab.c"
    break;

  case 119:
#line 341 "asgn4_20CS10082_20CS30029.y"
                     { printf("enumerator-list --> enumerator-list , enumerator\n"); }
#line 2575 "y.tab.c"
    break;

  case 120:
#line 345 "asgn4_20CS10082_20CS30029.y"
                 { printf("enumerator --> enumeration-constant\n"); }
#line 2581 "y.tab.c"
    break;

  case 121:
#line 347 "asgn4_20CS10082_20CS30029.y"
                 { printf("enumerator --> enumeration-constant = constant-expression\n"); }
#line 2587 "y.tab.c"
    break;

  case 122:
#line 351 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-qualifier --> const\n"); }
#line 2593 "y.tab.c"
    break;

  case 123:
#line 353 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-qualifier --> restrict\n"); }
#line 2599 "y.tab.c"
    break;

  case 124:
#line 355 "asgn4_20CS10082_20CS30029.y"
                     { printf("type-qualifier --> volatile\n"); }
#line 2605 "y.tab.c"
    break;

  case 125:
#line 359 "asgn4_20CS10082_20CS30029.y"
                        { printf("function-specifier --> inline\n"); }
#line 2611 "y.tab.c"
    break;

  case 126:
#line 363 "asgn4_20CS10082_20CS30029.y"
                 { printf("declarator --> pointer_opt direct-declarator\n"); }
#line 2617 "y.tab.c"
    break;

  case 127:
#line 367 "asgn4_20CS10082_20CS30029.y"
                 { printf("pointer_opt --> pointer\n"); }
#line 2623 "y.tab.c"
    break;

  case 128:
#line 369 "asgn4_20CS10082_20CS30029.y"
                 { printf("pointer_opt --> epsilon\n"); }
#line 2629 "y.tab.c"
    break;

  case 129:
#line 373 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> identifier\n"); }
#line 2635 "y.tab.c"
    break;

  case 130:
#line 375 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> ( declarator )\n"); }
#line 2641 "y.tab.c"
    break;

  case 131:
#line 377 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> direct-declarator [ type-qualifier-list_opt assignment-expression_opt ]\n"); }
#line 2647 "y.tab.c"
    break;

  case 132:
#line 379 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> direct-declarator [ static type-qualifier-list_opt assignment-expression ]\n"); }
#line 2653 "y.tab.c"
    break;

  case 133:
#line 381 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> direct-declarator [ type-qualifier-list static assignment-expression ]\n"); }
#line 2659 "y.tab.c"
    break;

  case 134:
#line 383 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> direct-declarator [ type-qualifier-list_opt * ]\n"); }
#line 2665 "y.tab.c"
    break;

  case 135:
#line 385 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> direct-declarator ( parameter-type-list )\n"); }
#line 2671 "y.tab.c"
    break;

  case 136:
#line 387 "asgn4_20CS10082_20CS30029.y"
                       { printf("direct-declarator --> direct-declarator ( identifier-list_opt )\n"); }
#line 2677 "y.tab.c"
    break;

  case 137:
#line 391 "asgn4_20CS10082_20CS30029.y"
                             { printf("type-qualifier-list_opt --> type-qualifier-list\n"); }
#line 2683 "y.tab.c"
    break;

  case 138:
#line 393 "asgn4_20CS10082_20CS30029.y"
                             { printf("type-qualifier-list_opt --> epsilon\n"); }
#line 2689 "y.tab.c"
    break;

  case 139:
#line 397 "asgn4_20CS10082_20CS30029.y"
                               { printf("assignment-expression_opt --> assignment-expression\n"); }
#line 2695 "y.tab.c"
    break;

  case 140:
#line 399 "asgn4_20CS10082_20CS30029.y"
                               { printf("assignment-expression_opt --> epsilon\n"); }
#line 2701 "y.tab.c"
    break;

  case 141:
#line 403 "asgn4_20CS10082_20CS30029.y"
                         { printf("identifier-list_opt --> identifier-list\n"); }
#line 2707 "y.tab.c"
    break;

  case 142:
#line 405 "asgn4_20CS10082_20CS30029.y"
                         { printf("identifier-list_opt --> epsilon\n"); }
#line 2713 "y.tab.c"
    break;

  case 143:
#line 409 "asgn4_20CS10082_20CS30029.y"
             { printf("pointer --> * type-qualifier-list_opt\n"); }
#line 2719 "y.tab.c"
    break;

  case 144:
#line 411 "asgn4_20CS10082_20CS30029.y"
             { printf("pointer --> * type-qualifier-list_opt pointer\n"); }
#line 2725 "y.tab.c"
    break;

  case 145:
#line 415 "asgn4_20CS10082_20CS30029.y"
                         { printf("type-qualifier-list --> type-qualifier\n"); }
#line 2731 "y.tab.c"
    break;

  case 146:
#line 417 "asgn4_20CS10082_20CS30029.y"
                         { printf("type-qualifier-list --> type-qualifier-list type-qualifier\n"); }
#line 2737 "y.tab.c"
    break;

  case 147:
#line 421 "asgn4_20CS10082_20CS30029.y"
                          { printf("parameter-type-list --> parameter-declaration\n"); }
#line 2743 "y.tab.c"
    break;

  case 148:
#line 423 "asgn4_20CS10082_20CS30029.y"
                          { printf("parameter-type-list --> parameter-list , parameter-declaration\n"); }
#line 2749 "y.tab.c"
    break;

  case 149:
#line 427 "asgn4_20CS10082_20CS30029.y"
                    { printf("parameter-list --> parameter-declaration\n"); }
#line 2755 "y.tab.c"
    break;

  case 150:
#line 429 "asgn4_20CS10082_20CS30029.y"
                    { printf("parameter-list --> parameter-list , parameter-declaration\n"); }
#line 2761 "y.tab.c"
    break;

  case 151:
#line 433 "asgn4_20CS10082_20CS30029.y"
                           { printf("parameter-declaration --> declaration-specifiers declarator\n"); }
#line 2767 "y.tab.c"
    break;

  case 152:
#line 435 "asgn4_20CS10082_20CS30029.y"
                           { printf("parameter-declaration --> declaration-specifiers\n"); }
#line 2773 "y.tab.c"
    break;

  case 153:
#line 439 "asgn4_20CS10082_20CS30029.y"
                      { printf("identifier-list --> identifier\n"); }
#line 2779 "y.tab.c"
    break;

  case 154:
#line 441 "asgn4_20CS10082_20CS30029.y"
                      { printf("identifier-list --> identifier-list , identifier\n"); }
#line 2785 "y.tab.c"
    break;

  case 155:
#line 445 "asgn4_20CS10082_20CS30029.y"
                { printf("type-name --> specifier-qualifier-list\n"); }
#line 2791 "y.tab.c"
    break;

  case 156:
#line 449 "asgn4_20CS10082_20CS30029.y"
                  { printf("initializer --> assignment-expression\n"); }
#line 2797 "y.tab.c"
    break;

  case 157:
#line 451 "asgn4_20CS10082_20CS30029.y"
                  { printf("initializer --> { initializer-list }\n"); }
#line 2803 "y.tab.c"
    break;

  case 158:
#line 453 "asgn4_20CS10082_20CS30029.y"
                  { printf("initializer --> { initializer-list , }\n"); }
#line 2809 "y.tab.c"
    break;

  case 159:
#line 457 "asgn4_20CS10082_20CS30029.y"
                       { printf("initializer-list --> designation_opt initializer\n"); }
#line 2815 "y.tab.c"
    break;

  case 160:
#line 459 "asgn4_20CS10082_20CS30029.y"
                       { printf("initializer-list --> initializer-list , designation_opt initializer\n"); }
#line 2821 "y.tab.c"
    break;

  case 161:
#line 463 "asgn4_20CS10082_20CS30029.y"
                      { printf("designation_opt --> designation\n"); }
#line 2827 "y.tab.c"
    break;

  case 162:
#line 465 "asgn4_20CS10082_20CS30029.y"
                      { printf("designation_opt --> epsilon\n"); }
#line 2833 "y.tab.c"
    break;

  case 163:
#line 468 "asgn4_20CS10082_20CS30029.y"
                  { printf("designation --> designator-list =\n"); }
#line 2839 "y.tab.c"
    break;

  case 164:
#line 472 "asgn4_20CS10082_20CS30029.y"
                      { printf("designator-list --> designator\n"); }
#line 2845 "y.tab.c"
    break;

  case 165:
#line 474 "asgn4_20CS10082_20CS30029.y"
                      { printf("designator-list --> designator-list designator\n"); }
#line 2851 "y.tab.c"
    break;

  case 166:
#line 478 "asgn4_20CS10082_20CS30029.y"
                { printf("designator --> [ constant-expression ]\n"); }
#line 2857 "y.tab.c"
    break;

  case 167:
#line 480 "asgn4_20CS10082_20CS30029.y"
                { printf("designator --> . identifier\n"); }
#line 2863 "y.tab.c"
    break;

  case 168:
#line 486 "asgn4_20CS10082_20CS30029.y"
                { printf("statement --> labeled-statement\n"); }
#line 2869 "y.tab.c"
    break;

  case 169:
#line 488 "asgn4_20CS10082_20CS30029.y"
                { printf("statement --> compound-statement\n"); }
#line 2875 "y.tab.c"
    break;

  case 170:
#line 490 "asgn4_20CS10082_20CS30029.y"
                { printf("statement --> expression-statement\n"); }
#line 2881 "y.tab.c"
    break;

  case 171:
#line 492 "asgn4_20CS10082_20CS30029.y"
                { printf("statement --> selection-statement\n"); }
#line 2887 "y.tab.c"
    break;

  case 172:
#line 494 "asgn4_20CS10082_20CS30029.y"
                { printf("statement --> iteration-statement\n"); }
#line 2893 "y.tab.c"
    break;

  case 173:
#line 496 "asgn4_20CS10082_20CS30029.y"
                { printf("statement --> jump-statement\n"); }
#line 2899 "y.tab.c"
    break;

  case 174:
#line 500 "asgn4_20CS10082_20CS30029.y"
                        { printf("labeled-statement --> identifier : statement\n"); }
#line 2905 "y.tab.c"
    break;

  case 175:
#line 502 "asgn4_20CS10082_20CS30029.y"
                        { printf("labeled-statement --> case constant-expression : statement\n"); }
#line 2911 "y.tab.c"
    break;

  case 176:
#line 504 "asgn4_20CS10082_20CS30029.y"
                        { printf("labeled-statement --> default : statement\n"); }
#line 2917 "y.tab.c"
    break;

  case 177:
#line 508 "asgn4_20CS10082_20CS30029.y"
                        { printf("compound-statement --> { block-item-list_opt }\n"); }
#line 2923 "y.tab.c"
    break;

  case 178:
#line 512 "asgn4_20CS10082_20CS30029.y"
                         { printf("block-item-list_opt --> block-item-list\n"); }
#line 2929 "y.tab.c"
    break;

  case 179:
#line 514 "asgn4_20CS10082_20CS30029.y"
                         { printf("block-item-list_opt --> epsilon\n"); }
#line 2935 "y.tab.c"
    break;

  case 180:
#line 518 "asgn4_20CS10082_20CS30029.y"
                     { printf("block-item-list --> block-item\n"); }
#line 2941 "y.tab.c"
    break;

  case 181:
#line 520 "asgn4_20CS10082_20CS30029.y"
                     { printf("block-item-list --> block-item-list block-item\n"); }
#line 2947 "y.tab.c"
    break;

  case 182:
#line 524 "asgn4_20CS10082_20CS30029.y"
                 { printf("block-item --> declaration\n"); }
#line 2953 "y.tab.c"
    break;

  case 183:
#line 526 "asgn4_20CS10082_20CS30029.y"
                 { printf("block-item --> statement\n"); }
#line 2959 "y.tab.c"
    break;

  case 184:
#line 530 "asgn4_20CS10082_20CS30029.y"
                           { printf("expression-statement --> expression_opt ;\n"); }
#line 2965 "y.tab.c"
    break;

  case 185:
#line 534 "asgn4_20CS10082_20CS30029.y"
                     { printf("expression_opt --> expression\n"); }
#line 2971 "y.tab.c"
    break;

  case 186:
#line 536 "asgn4_20CS10082_20CS30029.y"
                     { printf("expression_opt --> epsilon\n"); }
#line 2977 "y.tab.c"
    break;

  case 187:
#line 540 "asgn4_20CS10082_20CS30029.y"
                           { printf("selection-statement --> if ( expression ) statement\n"); }
#line 2983 "y.tab.c"
    break;

  case 188:
#line 542 "asgn4_20CS10082_20CS30029.y"
                           { printf("selection-statement --> if ( expression ) statement else statement\n"); }
#line 2989 "y.tab.c"
    break;

  case 189:
#line 544 "asgn4_20CS10082_20CS30029.y"
                           { printf("selection-statement --> switch ( expression ) statement\n"); }
#line 2995 "y.tab.c"
    break;

  case 190:
#line 548 "asgn4_20CS10082_20CS30029.y"
                          { printf("iteration-statement --> while ( expression ) statement\n"); }
#line 3001 "y.tab.c"
    break;

  case 191:
#line 550 "asgn4_20CS10082_20CS30029.y"
                          { printf("iteration-statement --> do statement while ( expression ) ;\n"); }
#line 3007 "y.tab.c"
    break;

  case 192:
#line 552 "asgn4_20CS10082_20CS30029.y"
                          { printf("iteration-statement --> for ( expression_opt ; expression_opt ; expression_opt ) statement\n"); }
#line 3013 "y.tab.c"
    break;

  case 193:
#line 554 "asgn4_20CS10082_20CS30029.y"
                          { printf("iteration-statement --> for ( declaration expression_opt ; expression_opt ) statement\n"); }
#line 3019 "y.tab.c"
    break;

  case 194:
#line 558 "asgn4_20CS10082_20CS30029.y"
                     { printf("jump-statement --> goto identifier ;\n"); }
#line 3025 "y.tab.c"
    break;

  case 195:
#line 560 "asgn4_20CS10082_20CS30029.y"
                     { printf("jump-statement --> continue ;\n"); }
#line 3031 "y.tab.c"
    break;

  case 196:
#line 562 "asgn4_20CS10082_20CS30029.y"
                     { printf("jump-statement --> break ;\n"); }
#line 3037 "y.tab.c"
    break;

  case 197:
#line 564 "asgn4_20CS10082_20CS30029.y"
                     { printf("jump-statement --> return expression_opt ;\n"); }
#line 3043 "y.tab.c"
    break;

  case 198:
#line 570 "asgn4_20CS10082_20CS30029.y"
                       { printf("translation-unit --> external-declaration\n"); }
#line 3049 "y.tab.c"
    break;

  case 199:
#line 572 "asgn4_20CS10082_20CS30029.y"
                       { printf("translation-unit --> translation-unit external-declaration\n"); }
#line 3055 "y.tab.c"
    break;

  case 200:
#line 576 "asgn4_20CS10082_20CS30029.y"
                           { printf("external-declaration --> function-definition\n"); }
#line 3061 "y.tab.c"
    break;

  case 201:
#line 578 "asgn4_20CS10082_20CS30029.y"
                           { printf("external-declaration --> declaration\n"); }
#line 3067 "y.tab.c"
    break;

  case 202:
#line 582 "asgn4_20CS10082_20CS30029.y"
                          { printf("function-definition --> declaration-specifiers declarator declaration-list_opt compound-statement\n"); }
#line 3073 "y.tab.c"
    break;

  case 203:
#line 586 "asgn4_20CS10082_20CS30029.y"
                           { printf("declaration-list_opt --> declaration-list\n"); }
#line 3079 "y.tab.c"
    break;

  case 204:
#line 588 "asgn4_20CS10082_20CS30029.y"
                           { printf("declaration-list_opt --> epsilon\n"); }
#line 3085 "y.tab.c"
    break;

  case 205:
#line 591 "asgn4_20CS10082_20CS30029.y"
                        { printf("declaration-list --> declaration\n"); }
#line 3091 "y.tab.c"
    break;

  case 206:
#line 593 "asgn4_20CS10082_20CS30029.y"
                        { printf("declaration-list --> declaration-list declaration\n"); }
#line 3097 "y.tab.c"
    break;


#line 3101 "y.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 596 "asgn4_20CS10082_20CS30029.y"


void yyerror(const char *s) {
    printf("Error occurred: %s\n", s);
    printf("Line no.: %d\n", yylineno);
    printf("Unable to parse: %s\n", yytext);    
}
