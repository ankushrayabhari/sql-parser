/* A Bison parser, made by GNU Bison 3.7.1.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

using namespace hsql;

int yyerror(YYLTYPE* llocp, SQLParserResult* result, yyscan_t scanner, const char *msg) {
	result->setIsValid(false);
	result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
	return 0;
}


#line 107 "bison_parser.cpp"

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

#include "bison_parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_FLOATVAL = 5,                   /* FLOATVAL  */
  YYSYMBOL_INTVAL = 6,                     /* INTVAL  */
  YYSYMBOL_DEALLOCATE = 7,                 /* DEALLOCATE  */
  YYSYMBOL_PARAMETERS = 8,                 /* PARAMETERS  */
  YYSYMBOL_INTERSECT = 9,                  /* INTERSECT  */
  YYSYMBOL_TEMPORARY = 10,                 /* TEMPORARY  */
  YYSYMBOL_TIMESTAMP = 11,                 /* TIMESTAMP  */
  YYSYMBOL_INTERVAL = 12,                  /* INTERVAL  */
  YYSYMBOL_DISTINCT = 13,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 14,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 15,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 16,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 17,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 18,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 19,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 20,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 21,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 22,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 23,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 24,                   /* EXPLAIN  */
  YYSYMBOL_NATURAL = 25,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 26,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 27,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 28,                   /* SCHEMAS  */
  YYSYMBOL_SPATIAL = 29,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 30,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 31,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 32,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 33,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 34,                    /* COLUMN  */
  YYSYMBOL_CREATE = 35,                    /* CREATE  */
  YYSYMBOL_DELETE = 36,                    /* DELETE  */
  YYSYMBOL_DIRECT = 37,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 38,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 39,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 40,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 41,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 42,                   /* EXTRACT  */
  YYSYMBOL_CAST = 43,                      /* CAST  */
  YYSYMBOL_FORMAT = 44,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 45,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 46,                    /* HAVING  */
  YYSYMBOL_IMPORT = 47,                    /* IMPORT  */
  YYSYMBOL_INSERT = 48,                    /* INSERT  */
  YYSYMBOL_ISNULL = 49,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 50,                    /* OFFSET  */
  YYSYMBOL_RENAME = 51,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 52,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 53,                    /* SELECT  */
  YYSYMBOL_SORTED = 54,                    /* SORTED  */
  YYSYMBOL_TABLES = 55,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 56,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 57,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 58,                    /* UPDATE  */
  YYSYMBOL_VALUES = 59,                    /* VALUES  */
  YYSYMBOL_AFTER = 60,                     /* AFTER  */
  YYSYMBOL_ALTER = 61,                     /* ALTER  */
  YYSYMBOL_CROSS = 62,                     /* CROSS  */
  YYSYMBOL_DELTA = 63,                     /* DELTA  */
  YYSYMBOL_FLOAT = 64,                     /* FLOAT  */
  YYSYMBOL_GROUP = 65,                     /* GROUP  */
  YYSYMBOL_INDEX = 66,                     /* INDEX  */
  YYSYMBOL_INNER = 67,                     /* INNER  */
  YYSYMBOL_LIMIT = 68,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 69,                     /* LOCAL  */
  YYSYMBOL_MERGE = 70,                     /* MERGE  */
  YYSYMBOL_MINUS = 71,                     /* MINUS  */
  YYSYMBOL_ORDER = 72,                     /* ORDER  */
  YYSYMBOL_OUTER = 73,                     /* OUTER  */
  YYSYMBOL_RIGHT = 74,                     /* RIGHT  */
  YYSYMBOL_TABLE = 75,                     /* TABLE  */
  YYSYMBOL_UNION = 76,                     /* UNION  */
  YYSYMBOL_USING = 77,                     /* USING  */
  YYSYMBOL_WHERE = 78,                     /* WHERE  */
  YYSYMBOL_CALL = 79,                      /* CALL  */
  YYSYMBOL_CASE = 80,                      /* CASE  */
  YYSYMBOL_CHAR = 81,                      /* CHAR  */
  YYSYMBOL_COPY = 82,                      /* COPY  */
  YYSYMBOL_DATE = 83,                      /* DATE  */
  YYSYMBOL_DATETIME = 84,                  /* DATETIME  */
  YYSYMBOL_DESC = 85,                      /* DESC  */
  YYSYMBOL_DROP = 86,                      /* DROP  */
  YYSYMBOL_ELSE = 87,                      /* ELSE  */
  YYSYMBOL_FILE = 88,                      /* FILE  */
  YYSYMBOL_FROM = 89,                      /* FROM  */
  YYSYMBOL_FULL = 90,                      /* FULL  */
  YYSYMBOL_HASH = 91,                      /* HASH  */
  YYSYMBOL_INTO = 92,                      /* INTO  */
  YYSYMBOL_JOIN = 93,                      /* JOIN  */
  YYSYMBOL_LEFT = 94,                      /* LEFT  */
  YYSYMBOL_LIKE = 95,                      /* LIKE  */
  YYSYMBOL_LOAD = 96,                      /* LOAD  */
  YYSYMBOL_LONG = 97,                      /* LONG  */
  YYSYMBOL_NULL = 98,                      /* NULL  */
  YYSYMBOL_PLAN = 99,                      /* PLAN  */
  YYSYMBOL_SHOW = 100,                     /* SHOW  */
  YYSYMBOL_TEXT = 101,                     /* TEXT  */
  YYSYMBOL_THEN = 102,                     /* THEN  */
  YYSYMBOL_TIME = 103,                     /* TIME  */
  YYSYMBOL_VIEW = 104,                     /* VIEW  */
  YYSYMBOL_WHEN = 105,                     /* WHEN  */
  YYSYMBOL_WITH = 106,                     /* WITH  */
  YYSYMBOL_ADD = 107,                      /* ADD  */
  YYSYMBOL_ALL = 108,                      /* ALL  */
  YYSYMBOL_AND = 109,                      /* AND  */
  YYSYMBOL_ASC = 110,                      /* ASC  */
  YYSYMBOL_END = 111,                      /* END  */
  YYSYMBOL_FOR = 112,                      /* FOR  */
  YYSYMBOL_INT = 113,                      /* INT  */
  YYSYMBOL_KEY = 114,                      /* KEY  */
  YYSYMBOL_TINYINT = 115,                  /* TINYINT  */
  YYSYMBOL_SMALLINT = 116,                 /* SMALLINT  */
  YYSYMBOL_BIGINT = 117,                   /* BIGINT  */
  YYSYMBOL_NOT = 118,                      /* NOT  */
  YYSYMBOL_OFF = 119,                      /* OFF  */
  YYSYMBOL_SET = 120,                      /* SET  */
  YYSYMBOL_TOP = 121,                      /* TOP  */
  YYSYMBOL_AS = 122,                       /* AS  */
  YYSYMBOL_BY = 123,                       /* BY  */
  YYSYMBOL_IF = 124,                       /* IF  */
  YYSYMBOL_IN = 125,                       /* IN  */
  YYSYMBOL_IS = 126,                       /* IS  */
  YYSYMBOL_OF = 127,                       /* OF  */
  YYSYMBOL_ON = 128,                       /* ON  */
  YYSYMBOL_OR = 129,                       /* OR  */
  YYSYMBOL_TO = 130,                       /* TO  */
  YYSYMBOL_CONCAT = 131,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 132,                    /* ILIKE  */
  YYSYMBOL_SECOND = 133,                   /* SECOND  */
  YYSYMBOL_MINUTE = 134,                   /* MINUTE  */
  YYSYMBOL_HOUR = 135,                     /* HOUR  */
  YYSYMBOL_DAY = 136,                      /* DAY  */
  YYSYMBOL_MONTH = 137,                    /* MONTH  */
  YYSYMBOL_YEAR = 138,                     /* YEAR  */
  YYSYMBOL_QUARTER = 139,                  /* QUARTER  */
  YYSYMBOL_DECIMAL = 140,                  /* DECIMAL  */
  YYSYMBOL_TRUE = 141,                     /* TRUE  */
  YYSYMBOL_FALSE = 142,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 143,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 144,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 145,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 146,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 147,                 /* ROLLBACK  */
  YYSYMBOL_148_ = 148,                     /* '='  */
  YYSYMBOL_EQUALS = 149,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 150,                /* NOTEQUALS  */
  YYSYMBOL_151_ = 151,                     /* '<'  */
  YYSYMBOL_152_ = 152,                     /* '>'  */
  YYSYMBOL_LESS = 153,                     /* LESS  */
  YYSYMBOL_GREATER = 154,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 155,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 156,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 157,                  /* NOTNULL  */
  YYSYMBOL_158_ = 158,                     /* '+'  */
  YYSYMBOL_159_ = 159,                     /* '-'  */
  YYSYMBOL_160_ = 160,                     /* '*'  */
  YYSYMBOL_161_ = 161,                     /* '/'  */
  YYSYMBOL_162_ = 162,                     /* '%'  */
  YYSYMBOL_163_ = 163,                     /* '^'  */
  YYSYMBOL_UMINUS = 164,                   /* UMINUS  */
  YYSYMBOL_165_ = 165,                     /* '['  */
  YYSYMBOL_166_ = 166,                     /* ']'  */
  YYSYMBOL_167_ = 167,                     /* '('  */
  YYSYMBOL_168_ = 168,                     /* ')'  */
  YYSYMBOL_169_ = 169,                     /* '.'  */
  YYSYMBOL_170_ = 170,                     /* ';'  */
  YYSYMBOL_171_ = 171,                     /* ','  */
  YYSYMBOL_YYACCEPT = 172,                 /* $accept  */
  YYSYMBOL_input = 173,                    /* input  */
  YYSYMBOL_statement_list = 174,           /* statement_list  */
  YYSYMBOL_statement = 175,                /* statement  */
  YYSYMBOL_preparable_statement = 176,     /* preparable_statement  */
  YYSYMBOL_transaction_statement = 177,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 178,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 179,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 180,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 181,        /* execute_statement  */
  YYSYMBOL_import_statement = 182,         /* import_statement  */
  YYSYMBOL_file_type = 183,                /* file_type  */
  YYSYMBOL_file_path = 184,                /* file_path  */
  YYSYMBOL_opt_file_type = 185,            /* opt_file_type  */
  YYSYMBOL_export_statement = 186,         /* export_statement  */
  YYSYMBOL_show_statement = 187,           /* show_statement  */
  YYSYMBOL_create_statement = 188,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 189,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 190,     /* column_def_commalist  */
  YYSYMBOL_column_def = 191,               /* column_def  */
  YYSYMBOL_column_type = 192,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 193,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 194,           /* drop_statement  */
  YYSYMBOL_opt_exists = 195,               /* opt_exists  */
  YYSYMBOL_delete_statement = 196,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 197,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 198,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 199,          /* opt_column_list  */
  YYSYMBOL_update_statement = 200,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 201,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 202,            /* update_clause  */
  YYSYMBOL_select_statement = 203,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 204, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 205, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 206,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 207,          /* select_no_paren  */
  YYSYMBOL_set_operator = 208,             /* set_operator  */
  YYSYMBOL_set_type = 209,                 /* set_type  */
  YYSYMBOL_opt_all = 210,                  /* opt_all  */
  YYSYMBOL_select_clause = 211,            /* select_clause  */
  YYSYMBOL_opt_distinct = 212,             /* opt_distinct  */
  YYSYMBOL_select_list = 213,              /* select_list  */
  YYSYMBOL_opt_from_clause = 214,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 215,              /* from_clause  */
  YYSYMBOL_opt_where = 216,                /* opt_where  */
  YYSYMBOL_opt_group = 217,                /* opt_group  */
  YYSYMBOL_opt_order = 218,                /* opt_order  */
  YYSYMBOL_order_list = 219,               /* order_list  */
  YYSYMBOL_order_desc = 220,               /* order_desc  */
  YYSYMBOL_opt_order_type = 221,           /* opt_order_type  */
  YYSYMBOL_opt_top = 222,                  /* opt_top  */
  YYSYMBOL_opt_limit = 223,                /* opt_limit  */
  YYSYMBOL_expr_list = 224,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 225,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 226,             /* literal_list  */
  YYSYMBOL_expr_alias = 227,               /* expr_alias  */
  YYSYMBOL_expr = 228,                     /* expr  */
  YYSYMBOL_operand = 229,                  /* operand  */
  YYSYMBOL_scalar_expr = 230,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 231,               /* unary_expr  */
  YYSYMBOL_binary_expr = 232,              /* binary_expr  */
  YYSYMBOL_logic_expr = 233,               /* logic_expr  */
  YYSYMBOL_in_expr = 234,                  /* in_expr  */
  YYSYMBOL_case_expr = 235,                /* case_expr  */
  YYSYMBOL_case_list = 236,                /* case_list  */
  YYSYMBOL_exists_expr = 237,              /* exists_expr  */
  YYSYMBOL_comp_expr = 238,                /* comp_expr  */
  YYSYMBOL_function_expr = 239,            /* function_expr  */
  YYSYMBOL_extract_expr = 240,             /* extract_expr  */
  YYSYMBOL_cast_expr = 241,                /* cast_expr  */
  YYSYMBOL_datetime_field = 242,           /* datetime_field  */
  YYSYMBOL_date_literal = 243,             /* date_literal  */
  YYSYMBOL_interval_literal = 244,         /* interval_literal  */
  YYSYMBOL_between_expr = 245,             /* between_expr  */
  YYSYMBOL_column_name = 246,              /* column_name  */
  YYSYMBOL_literal = 247,                  /* literal  */
  YYSYMBOL_string_literal = 248,           /* string_literal  */
  YYSYMBOL_bool_literal = 249,             /* bool_literal  */
  YYSYMBOL_num_literal = 250,              /* num_literal  */
  YYSYMBOL_int_literal = 251,              /* int_literal  */
  YYSYMBOL_null_literal = 252,             /* null_literal  */
  YYSYMBOL_table_ref = 253,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 254,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 255, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 256,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 257,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 258,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 259,               /* table_name  */
  YYSYMBOL_table_alias = 260,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 261,          /* opt_table_alias  */
  YYSYMBOL_alias = 262,                    /* alias  */
  YYSYMBOL_opt_alias = 263,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 264,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 265,              /* with_clause  */
  YYSYMBOL_with_description_list = 266,    /* with_description_list  */
  YYSYMBOL_with_description = 267,         /* with_description  */
  YYSYMBOL_join_clause = 268,              /* join_clause  */
  YYSYMBOL_opt_join_type = 269,            /* opt_join_type  */
  YYSYMBOL_join_condition = 270,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 271,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 272           /* ident_commalist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   770

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  172
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  469

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   410


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   162,     2,     2,
     167,   168,   160,   158,   171,   159,   169,   161,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   170,
     151,   148,   152,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   165,     2,   166,   163,     2,     2,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   149,   150,   153,   154,   155,   156,   157,
     164
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   267,   267,   278,   284,   293,   296,   299,   302,   305,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   329,
     332,   335,   341,   342,   349,   356,   359,   363,   377,   383,
     392,   409,   413,   416,   425,   439,   442,   447,   461,   474,
     481,   488,   499,   500,   504,   505,   509,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   534,   535,   536,   546,   552,   558,   566,
     567,   576,   585,   598,   605,   616,   617,   627,   636,   637,
     641,   653,   657,   661,   675,   676,   679,   680,   691,   692,
     696,   706,   719,   726,   730,   734,   741,   744,   750,   762,
     763,   767,   771,   772,   776,   781,   782,   786,   791,   796,
     801,   805,   806,   810,   811,   815,   819,   820,   821,   827,
     828,   832,   833,   834,   835,   836,   837,   844,   845,   849,
     850,   854,   855,   859,   869,   870,   871,   872,   873,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   889,   890,
     894,   895,   896,   897,   898,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   916,   917,   921,   922,
     923,   924,   930,   931,   932,   933,   937,   938,   942,   943,
     947,   948,   949,   950,   951,   952,   953,   957,   958,   962,
     966,   970,   971,   972,   973,   974,   975,   976,   980,   984,
     988,   992,   993,   994,   995,   999,  1000,  1001,  1002,  1003,
    1004,  1008,  1012,  1013,  1017,  1018,  1022,  1026,  1034,  1035,
    1045,  1046,  1050,  1051,  1060,  1061,  1066,  1077,  1086,  1087,
    1092,  1093,  1098,  1099,  1104,  1105,  1110,  1111,  1120,  1121,
    1125,  1129,  1133,  1140,  1153,  1161,  1171,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,  1204,  1213,  1214,
    1219,  1220
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT",
  "TEMPORARY", "TIMESTAMP", "INTERVAL", "DISTINCT", "NVARCHAR", "RESTRICT",
  "TRUNCATE", "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL",
  "DEFAULT", "EXECUTE", "EXPLAIN", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE",
  "COLUMN", "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT",
  "INSERT", "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED",
  "TABLES", "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER",
  "CROSS", "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL",
  "MERGE", "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING",
  "WHERE", "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC",
  "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "TINYINT", "SMALLINT", "BIGINT", "NOT", "OFF", "SET", "TOP", "AS",
  "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "CONCAT", "ILIKE",
  "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "QUARTER", "DECIMAL",
  "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "$accept",
  "input", "statement_list", "statement", "preparable_statement",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "column_def_commalist", "column_def", "column_type",
  "opt_column_nullable", "drop_statement", "opt_exists",
  "delete_statement", "truncate_statement", "insert_statement",
  "opt_column_list", "update_statement", "update_clause_commalist",
  "update_clause", "select_statement", "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_order", "order_list",
  "order_desc", "opt_order_type", "opt_top", "opt_limit", "expr_list",
  "opt_literal_list", "literal_list", "expr_alias", "expr", "operand",
  "scalar_expr", "unary_expr", "binary_expr", "logic_expr", "in_expr",
  "case_expr", "case_list", "exists_expr", "comp_expr", "function_expr",
  "extract_expr", "cast_expr", "datetime_field", "date_literal",
  "interval_literal", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "table_ref", "table_ref_atomic",
  "nonjoin_table_ref_atomic", "table_ref_commalist", "table_ref_name",
  "table_ref_name_no_alias", "table_name", "table_alias",
  "opt_table_alias", "alias", "opt_alias", "opt_with_clause",
  "with_clause", "with_description_list", "with_description",
  "join_clause", "opt_join_type", "join_condition", "opt_semicolon",
  "ident_commalist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,    61,   403,
     404,    60,    62,   405,   406,   407,   408,   409,    43,    45,
      42,    47,    37,    94,   410,    91,    93,    40,    41,    46,
      59,    44
};
#endif

#define YYPACT_NINF (-363)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-259)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     549,    16,    48,    50,    78,    48,   -42,    46,   146,    90,
      48,    48,     3,    17,   206,   100,   100,   100,   221,    67,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,   -38,  -363,   262,   122,  -363,
     125,   204,  -363,   175,   175,    48,   302,    48,   194,  -363,
     -57,   197,   197,    48,  -363,   200,   152,  -363,  -363,  -363,
    -363,  -363,  -363,   424,  -363,   203,   -38,    29,  -363,   222,
    -363,   322,   132,   327,   208,    48,    48,   255,  -363,   246,
     168,   335,   339,   339,   306,    48,    48,  -363,   183,   206,
    -363,   345,   340,   184,   187,  -363,  -363,  -363,   -38,   249,
     235,   -38,   138,  -363,  -363,  -363,  -363,   339,   339,  -363,
    -363,  -363,   198,   196,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,   321,    27,   168,   276,  -363,   339,
     362,   230,   223,   -54,  -363,   263,  -363,   263,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,   276,  -363,  -363,   298,  -363,
    -363,    29,  -363,  -363,   276,   298,   276,   109,  -363,   275,
    -363,  -363,   132,  -363,   369,   267,   372,   254,  -126,   213,
     215,   217,   136,   303,   336,  -363,   169,    75,   389,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,   293,  -363,  -104,   220,  -363,   276,   335,
    -363,   346,  -363,  -363,   313,   232,  -363,    25,   138,   -38,
     233,  -363,   -49,   138,    75,   341,    -3,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,   317,  -363,   525,   -43,
    -363,   267,     8,     2,   353,   275,   276,   276,   -50,   121,
     253,   336,   567,    39,   257,   -46,   276,   276,   336,  -363,
     336,   -55,   256,   105,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,    48,
    -363,   419,   132,    75,  -363,   302,    13,   255,  -363,   276,
    -363,   423,  -363,  -363,  -363,  -363,   276,  -363,  -363,  -363,
    -363,   276,   276,   339,  -363,   260,  -363,  -363,   261,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   265,  -363,
     120,  -363,   372,  -363,  -363,   276,  -363,  -363,   269,   344,
      24,    96,   142,   276,   276,  -363,   353,   334,  -363,  -363,
    -363,   330,   528,   607,   336,   274,   169,  -363,   332,  -363,
     607,   607,   607,   607,   237,   237,   237,   237,    39,    39,
    -106,  -106,  -106,   311,  -363,  -363,    22,  -363,   267,  -363,
      93,  -363,   277,  -363,    23,  -363,    -7,  -363,  -363,  -363,
      75,    75,  -363,   440,   443,   445,  -363,   354,  -363,  -363,
      74,  -363,   276,   525,   276,   276,  -363,   137,   134,   285,
     336,   607,   169,   289,   104,  -363,  -363,   290,   368,  -363,
    -363,  -363,   382,   391,   392,   373,    13,   464,  -363,  -363,
    -363,   276,   350,  -363,   300,   301,   304,  -363,  -363,   -44,
     308,    75,   191,  -363,   276,  -363,   567,   312,   133,  -363,
    -363,    23,    13,  -363,  -363,  -363,    13,   166,   307,    75,
     276,  -363,  -363,   473,  -363,  -363,  -363,    75,  -363,  -363,
    -363,  -363,   287,   362,   -28,   315,   314,   276,   145,   276,
    -363,    11,    75,  -363,  -363,    75,   316,   318,  -363
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     239,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    23,    23,     0,   259,
       3,     6,    18,     5,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   238,     0,   228,    72,
      26,     0,    37,    43,    43,     0,     0,     0,     0,   227,
       0,    70,    70,     0,    35,     0,   240,   241,    22,    19,
      21,    20,     1,   239,     2,   120,     0,    81,    82,   112,
      68,     0,   130,     0,     0,     0,     0,   106,    30,     0,
      76,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       4,     0,   100,     0,     0,    94,    95,    93,     0,    97,
       0,     0,   126,   229,   211,   214,   216,     0,     0,   217,
     212,   213,     0,   129,   209,   210,   131,   205,   206,   207,
     215,   208,    25,    24,     0,     0,    76,     0,    71,     0,
       0,     0,     0,   106,    78,    33,    31,    33,    69,    66,
      67,   243,   242,   119,    99,     0,    89,    88,   112,    85,
      84,    86,    96,    92,     0,   112,     0,     0,    90,     0,
     198,    27,     0,    42,     0,   239,     0,     0,   201,     0,
       0,     0,     0,     0,     0,   203,     0,   105,   134,   140,
     141,   142,   136,   138,   143,   137,   155,   144,   145,   146,
     135,   148,   149,     0,   260,     0,     0,    74,     0,     0,
      77,     0,    29,    34,   103,   101,   127,   237,   126,     0,
     111,   113,   118,   126,   122,   124,   121,   191,   192,   193,
     194,   195,   196,   197,   199,   132,     0,    40,     0,     0,
      44,   239,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   151,   150,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,    80,    79,     0,     0,   106,   102,     0,
     235,     0,   236,   133,    83,    87,     0,   117,   116,   115,
      91,     0,     0,     0,    61,     0,    53,    52,     0,    60,
      59,    51,    58,    62,    49,    47,    48,    50,     0,    55,
      65,    39,     0,    41,   187,     0,   202,   204,     0,     0,
       0,     0,     0,     0,     0,   174,     0,     0,   147,   139,
     166,   167,     0,   162,     0,     0,     0,   153,     0,   165,
     164,   180,   181,   182,   183,   184,   185,   186,   157,   156,
     159,   158,   160,   161,    28,   261,     0,    32,   239,   104,
     218,   220,     0,   222,   233,   221,   110,   128,   234,   114,
     125,   123,    38,     0,     0,     0,    63,     0,    46,    45,
       0,   178,     0,     0,     0,     0,   172,     0,     0,     0,
       0,   163,     0,     0,     0,   154,    73,     0,     0,   255,
     247,   253,   251,   254,   249,     0,     0,     0,   232,   226,
     230,     0,     0,    98,     0,     0,     0,    64,   188,     0,
       0,   176,     0,   175,     0,   179,   200,     0,     0,   170,
     168,   233,     0,   250,   252,   248,     0,   219,   234,   109,
       0,    56,    57,     0,   189,   190,   173,   177,   171,   169,
     223,   244,   256,     0,   108,     0,     0,     0,     0,     0,
      54,     0,   257,   245,   231,   107,   201,     0,   246
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,   425,  -363,  -363,   141,  -363,  -363,  -363,
    -363,   212,   -79,   352,  -363,  -363,  -363,   446,  -363,   179,
     110,  -363,  -363,   442,  -363,  -363,  -363,   366,  -363,  -363,
     299,  -163,   -82,  -363,    97,   -65,   -47,  -363,  -363,   -78,
     268,  -363,  -363,  -363,  -116,  -363,   -25,  -363,   211,  -363,
    -363,    77,  -284,  -363,   227,   225,  -127,  -166,  -363,  -363,
    -363,  -363,  -363,  -363,   264,  -363,  -363,  -363,  -363,  -363,
     266,  -363,  -363,  -363,    44,   -59,   -73,  -363,  -363,   417,
    -363,  -363,  -362,    79,  -363,  -363,  -363,     1,  -363,    81,
     309,  -363,  -363,  -363,  -363,   420,  -363,  -363,  -363,  -363,
      60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    59,    23,   123,    24,
      25,    79,   135,   202,    26,    27,    28,    75,   229,   230,
     310,   378,    29,    85,    30,    31,    32,   131,    33,   133,
     134,    34,   148,   149,   150,    68,    98,    99,   153,    69,
     145,   204,   277,   278,   128,   413,   102,   210,   211,   289,
      92,   158,   205,   112,   113,   206,   207,   178,   179,   180,
     181,   182,   183,   184,   239,   185,   186,   187,   188,   189,
     224,   114,   115,   190,   191,   192,   117,   118,   119,   120,
     121,   359,   360,   361,   362,   363,    48,   364,   408,   409,
     410,   283,    35,    36,    56,    57,   365,   405,   463,    64,
     195
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     177,    94,   227,    39,   137,   316,    42,   242,   243,   136,
     136,    49,    50,   116,   466,    65,    38,   200,   459,   155,
     151,   144,   101,   151,   127,   254,   280,   212,   280,   214,
     216,   380,    82,    43,   159,   160,   287,    53,    95,   411,
     334,   232,    37,   233,   437,   238,    77,   292,    80,   245,
     193,    38,   394,    40,    87,   237,   136,   268,   412,   246,
     246,   288,    44,   246,   270,   246,   197,   271,   313,    96,
     335,   273,    54,    83,   452,   242,   125,   126,    51,   247,
     247,    41,   332,   247,   333,   247,   139,   140,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   225,   209,    97,   246,    52,   428,   320,
     321,   244,   168,   104,   105,   106,   164,   199,   398,   330,
     331,   107,   329,   208,   444,   311,   247,   285,   312,    66,
     213,   151,    67,   246,   246,    45,   104,   105,   106,   168,
     104,   105,   106,   279,   107,   407,   383,   281,   107,   165,
     169,   170,   171,   247,   247,   399,   454,    60,    61,   212,
     400,   366,   317,    93,   370,   371,   401,   402,   391,   318,
     254,   175,   168,   104,   105,   106,   314,   169,   170,   171,
     358,   107,    47,   403,   246,   141,  -256,   404,   156,   172,
     396,   398,   108,   162,   166,   397,   387,   388,   384,   265,
     266,   267,   268,   337,   247,   246,   157,   109,   323,    55,
     169,   170,   171,   116,   372,   108,   172,   215,   376,   108,
     136,    62,    65,   338,   426,   247,   324,   173,   399,   385,
     109,    95,   325,   400,   109,    46,   424,    63,   377,   401,
     402,   237,   418,   246,    58,   279,   246,   324,   423,   172,
     110,   111,   108,   386,   173,   419,   403,   421,   422,  -256,
     404,   389,    96,   247,  -224,    70,   247,   109,   174,   175,
     354,   393,   430,   110,   111,   279,   176,   110,   111,   168,
     104,   105,   106,    65,   439,   284,   249,   173,   107,   196,
     290,    71,    72,    73,   100,   174,   175,   447,    97,    74,
     246,   449,   446,   176,   279,    78,   168,   104,   105,   106,
     110,   111,   398,   464,    81,   107,   271,   169,   170,   171,
     247,    84,    88,    89,    91,   103,   124,   427,   174,   175,
     462,   122,   465,   127,   129,   130,   176,  -225,   132,   168,
     104,   105,   106,   104,   240,   170,   171,   138,   107,   399,
      66,   106,   146,   144,   400,   147,   172,   152,   154,   108,
     401,   402,   163,   253,   456,   194,   161,   162,   254,   201,
     100,   198,   226,    14,   109,   228,   231,   403,   170,   171,
     234,   404,   235,   172,   236,   269,   108,   272,  -259,  -259,
     275,   291,  -259,  -259,   173,   263,   264,   265,   266,   267,
     268,   109,   276,   279,   286,   293,    65,   248,   217,   218,
     219,   220,   221,   222,   223,   457,   172,   110,   111,   108,
     326,   241,   355,   336,  -258,   328,   368,   373,   374,   334,
     395,     1,   375,   382,   109,   174,   175,   381,   249,   246,
       2,   392,   254,   176,   110,   111,   414,     3,   406,   415,
       4,   416,   417,   425,   241,   433,     5,   429,   431,     6,
       7,   432,   174,   175,   434,   435,   436,   438,   441,   442,
     176,     8,     9,   440,   453,   443,   445,   110,   111,   455,
     448,   461,    10,   460,   250,   233,   468,   357,    90,   203,
      76,   379,   167,   420,    86,   174,   175,   369,   274,   356,
     315,   319,   322,   176,   367,   467,    11,   251,   143,   142,
      12,   451,   450,   458,   252,   253,   282,     0,     0,     0,
     254,   255,     0,     0,    13,     0,     0,     0,     0,     0,
      14,     0,     0,     0,     0,     0,   294,   256,   257,   258,
     259,   260,     0,     0,   261,   262,     0,   263,   264,   265,
     266,   267,   268,     0,     0,   295,     1,     0,     0,     0,
       0,     0,     0,   296,     0,     2,     0,     0,     0,    15,
      16,    17,     3,     0,     0,     4,     0,   249,     0,     0,
       0,     5,     0,     0,     6,     7,     0,     0,     0,   297,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
       0,     0,     0,     0,     0,     0,   298,    10,   299,   300,
       0,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,   301,   250,     0,     0,   302,     0,   303,     0,
       0,    11,     0,     0,     0,    12,     0,   390,   304,     0,
     305,   306,   307,     0,     0,     0,   327,     0,     0,    13,
       0,     0,     0,     0,   253,    14,   249,     0,     0,   254,
     255,     0,   250,     0,     0,   308,     0,     0,   309,     0,
       0,     0,     0,     0,     0,     0,   256,   257,   258,   259,
     260,     0,     0,   261,   262,   327,   263,   264,   265,   266,
     267,   268,     0,   253,    15,    16,    17,     0,   254,   255,
       0,     0,  -259,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,   257,   258,   259,   260,
       0,     0,   261,   262,     0,   263,   264,   265,   266,   267,
     268,     0,     0,   253,     0,     0,     0,     0,   254,  -259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -259,  -259,  -259,   259,   260,
       0,     0,   261,   262,     0,   263,   264,   265,   266,   267,
     268
};

static const yytype_int16 yycheck[] =
{
     127,    66,   165,     2,    83,     3,     5,   173,   174,    82,
      83,    10,    11,    72,     3,    53,     3,   133,    46,   101,
      98,    13,    69,   101,    78,   131,     3,   154,     3,   156,
     157,   315,    89,    75,   107,   108,    85,    20,     9,    46,
      95,   167,    26,   169,   406,   172,    45,    50,    47,   176,
     129,     3,   336,     3,    53,   105,   129,   163,    65,   109,
     109,   110,   104,   109,   168,   109,   131,   171,   231,    40,
     125,   198,    55,   130,   436,   241,    75,    76,    75,   129,
     129,     3,   248,   129,   250,   129,    85,    86,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   162,   151,    76,   109,   104,   392,   236,
     237,   176,     3,     4,     5,     6,    89,   171,    25,   246,
     247,    12,   168,   148,   168,   168,   129,   209,   171,   167,
     155,   209,    35,   109,   109,    89,     4,     5,     6,     3,
       4,     5,     6,   171,    12,   122,   122,   122,    12,   122,
      41,    42,    43,   129,   129,    62,   440,    16,    17,   286,
      67,   277,   160,    66,   291,   292,    73,    74,   334,   234,
     131,   160,     3,     4,     5,     6,   168,    41,    42,    43,
     167,    12,    92,    90,   109,    88,    93,    94,    50,    80,
     168,    25,    83,   171,   167,   358,   323,   324,   102,   160,
     161,   162,   163,    98,   129,   109,    68,    98,    87,     3,
      41,    42,    43,   272,   293,    83,    80,   108,    98,    83,
     293,     0,    53,   118,   390,   129,   105,   118,    62,    87,
      98,     9,   111,    67,    98,    89,   102,   170,   118,    73,
      74,   105,   168,   109,   144,   171,   109,   105,   111,    80,
     141,   142,    83,   111,   118,   382,    90,   384,   385,    93,
      94,   326,    40,   129,   171,     3,   129,    98,   159,   160,
     269,   336,   168,   141,   142,   171,   167,   141,   142,     3,
       4,     5,     6,    53,   411,   208,    49,   118,    12,    59,
     213,   169,   167,    89,    72,   159,   160,   424,    76,   124,
     109,   168,   111,   167,   171,     3,     3,     4,     5,     6,
     141,   142,    25,   168,   120,    12,   171,    41,    42,    43,
     129,   124,   122,   171,   121,     3,   118,   392,   159,   160,
     457,     4,   459,    78,    88,   167,   167,   171,     3,     3,
       4,     5,     6,     4,    41,    42,    43,    41,    12,    62,
     167,     6,   168,    13,    67,   168,    80,   108,   123,    83,
      73,    74,    41,   126,    77,     3,   168,   171,   131,   106,
      72,   148,     3,   106,    98,     3,   122,    90,    42,    43,
     167,    94,   167,    80,   167,    92,    83,   167,   151,   152,
      44,    50,   155,   156,   118,   158,   159,   160,   161,   162,
     163,    98,    89,   171,   171,    88,    53,    18,   133,   134,
     135,   136,   137,   138,   139,   128,    80,   141,   142,    83,
     167,   118,     3,   167,     0,   168,     3,   167,   167,    95,
      98,     7,   167,    89,    98,   159,   160,   168,    49,   109,
      16,   167,   131,   167,   141,   142,     6,    23,   171,     6,
      26,     6,    98,   168,   118,    73,    32,   168,   168,    35,
      36,    93,   159,   160,    73,    73,    93,     3,   168,   168,
     167,    47,    48,   123,   167,   171,   168,   141,   142,     6,
     168,   167,    58,   168,    95,   169,   168,   275,    63,   137,
      44,   312,   126,   383,    52,   159,   160,   286,   199,   272,
     232,   235,   238,   167,   279,   461,    82,   118,    91,    89,
      86,   432,   431,   453,   125,   126,   207,    -1,    -1,    -1,
     131,   132,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    11,   148,   149,   150,
     151,   152,    -1,    -1,   155,   156,    -1,   158,   159,   160,
     161,   162,   163,    -1,    -1,    30,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    16,    -1,    -1,    -1,   145,
     146,   147,    23,    -1,    -1,    26,    -1,    49,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    58,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    97,    95,    -1,    -1,   101,    -1,   103,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,   109,   113,    -1,
     115,   116,   117,    -1,    -1,    -1,   118,    -1,    -1,   100,
      -1,    -1,    -1,    -1,   126,   106,    49,    -1,    -1,   131,
     132,    -1,    95,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,
     152,    -1,    -1,   155,   156,   118,   158,   159,   160,   161,
     162,   163,    -1,   126,   145,   146,   147,    -1,   131,   132,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
      -1,    -1,   155,   156,    -1,   158,   159,   160,   161,   162,
     163,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   149,   150,   151,   152,
      -1,    -1,   155,   156,    -1,   158,   159,   160,   161,   162,
     163
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    16,    23,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   100,   106,   145,   146,   147,   173,   174,
     175,   176,   177,   179,   181,   182,   186,   187,   188,   194,
     196,   197,   198,   200,   203,   264,   265,    26,     3,   259,
       3,     3,   259,    75,   104,    89,    89,    92,   258,   259,
     259,    75,   104,    20,    55,     3,   266,   267,   144,   178,
     178,   178,     0,   170,   271,    53,   167,   206,   207,   211,
       3,   169,   167,    89,   124,   189,   189,   259,     3,   183,
     259,   120,    89,   130,   124,   195,   195,   259,   122,   171,
     175,   121,   222,   206,   207,     9,    40,    76,   208,   209,
      72,   208,   218,     3,     4,     5,     6,    12,    83,    98,
     141,   142,   225,   226,   243,   244,   247,   248,   249,   250,
     251,   252,     4,   180,   118,   259,   259,    78,   216,    88,
     167,   199,     3,   201,   202,   184,   248,   184,    41,   259,
     259,   206,   267,   251,    13,   212,   168,   168,   204,   205,
     206,   211,   108,   210,   123,   204,    50,    68,   223,   248,
     248,   168,   171,    41,    89,   122,   167,   199,     3,    41,
      42,    43,    80,   118,   159,   160,   167,   228,   229,   230,
     231,   232,   233,   234,   235,   237,   238,   239,   240,   241,
     245,   246,   247,   184,     3,   272,    59,   207,   148,   171,
     216,   106,   185,   185,   213,   224,   227,   228,   218,   208,
     219,   220,   228,   218,   228,   108,   228,   133,   134,   135,
     136,   137,   138,   139,   242,   247,     3,   203,     3,   190,
     191,   122,   167,   169,   167,   167,   167,   105,   228,   236,
      41,   118,   229,   229,   207,   228,   109,   129,    18,    49,
      95,   118,   125,   126,   131,   132,   148,   149,   150,   151,
     152,   155,   156,   158,   159,   160,   161,   162,   163,    92,
     168,   171,   167,   228,   202,    44,    89,   214,   215,   171,
       3,   122,   262,   263,   223,   204,   171,    85,   110,   221,
     223,    50,    50,    88,    11,    30,    38,    64,    81,    83,
      84,    97,   101,   103,   113,   115,   116,   117,   140,   143,
     192,   168,   171,   203,   168,   212,     3,   160,   207,   242,
     228,   228,   236,    87,   105,   111,   167,   118,   168,   168,
     228,   228,   229,   229,    95,   125,   167,    98,   118,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   259,     3,   226,   183,   167,   253,
     254,   255,   256,   257,   259,   268,   216,   227,     3,   220,
     228,   228,   184,   167,   167,   167,    98,   118,   193,   191,
     224,   168,    89,   122,   102,    87,   111,   228,   228,   207,
     109,   229,   167,   207,   224,    98,   168,   203,    25,    62,
      67,    73,    74,    90,    94,   269,   171,   122,   260,   261,
     262,    46,    65,   217,     6,     6,     6,    98,   168,   228,
     192,   228,   228,   111,   102,   168,   229,   207,   224,   168,
     168,   168,    93,    73,    73,    73,    93,   254,     3,   228,
     123,   168,   168,   171,   168,   168,   111,   228,   168,   168,
     261,   255,   254,   167,   224,     6,    77,   128,   272,    46,
     168,   167,   228,   270,   168,   228,     3,   246,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   172,   173,   174,   174,   175,   175,   175,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     177,   177,   178,   178,   179,   180,   181,   181,   182,   182,
     183,   184,   185,   185,   186,   187,   187,   187,   188,   188,
     188,   188,   189,   189,   190,   190,   191,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   193,   193,   193,   194,   194,   194,   195,
     195,   196,   197,   198,   198,   199,   199,   200,   201,   201,
     202,   203,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   209,   209,   209,   210,   210,   211,   212,
     212,   213,   214,   214,   215,   216,   216,   217,   217,   217,
     217,   218,   218,   219,   219,   220,   221,   221,   221,   222,
     222,   223,   223,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   228,   228,   228,   228,   228,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     231,   231,   231,   231,   231,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   233,   233,   234,   234,
     234,   234,   235,   235,   235,   235,   236,   236,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   239,   239,   240,
     241,   242,   242,   242,   242,   242,   242,   242,   243,   244,
     245,   246,   246,   246,   246,   247,   247,   247,   247,   247,
     247,   248,   249,   249,   250,   250,   251,   252,   253,   253,
     254,   254,   255,   255,   256,   256,   257,   258,   259,   259,
     260,   260,   261,   261,   262,   262,   263,   263,   264,   264,
     265,   266,   266,   267,   268,   268,   268,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   270,   271,   271,
     272,   272
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     0,     4,     1,     2,     5,     7,     5,
       1,     1,     3,     0,     5,     2,     3,     2,     8,     7,
       6,     7,     3,     0,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     2,     0,     4,     4,     3,     2,
       0,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     1,     1,     1,     3,     3,     3,
       3,     5,     2,     1,     1,     1,     1,     0,     7,     1,
       0,     1,     1,     0,     2,     2,     0,     5,     3,     2,
       0,     3,     0,     1,     3,     2,     1,     1,     0,     2,
       0,     2,     2,     4,     2,     4,     0,     1,     3,     1,
       0,     1,     3,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       2,     2,     2,     3,     4,     1,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     3,     3,     3,     5,     6,
       5,     6,     4,     6,     3,     5,     4,     5,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       5,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     4,     1,     3,     2,     1,     1,     3,
       1,     5,     1,     0,     2,     1,     1,     0,     1,     0,
       2,     1,     3,     3,     4,     6,     8,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     0,     1,     1,     0,
       1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = SQL_HSQL_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == SQL_HSQL_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use SQL_HSQL_error or SQL_HSQL_UNDEF. */
#define YYERRCODE SQL_HSQL_UNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_IDENTIFIER: /* IDENTIFIER  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1906 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1912 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1918 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1924 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement_list: /* statement_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 1937 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1943 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1949 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 1955 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 1961 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1967 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 1973 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 1979 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 146 "bison_parser.y"
            { }
#line 1985 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1991 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 146 "bison_parser.y"
            { }
#line 1997 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2003 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2009 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2015 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 146 "bison_parser.y"
            { }
#line 2021 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def_commalist: /* column_def_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2034 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2040 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).column_type_t)); }
#line 2046 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 146 "bison_parser.y"
            { }
#line 2052 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2058 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 146 "bison_parser.y"
            { }
#line 2064 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2070 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2076 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2082 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_list: /* opt_column_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2095 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2101 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause_commalist: /* update_clause_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2114 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2120 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2126 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2132 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2138 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2144 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2150 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2156 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2162 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 146 "bison_parser.y"
            { }
#line 2168 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2174 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 146 "bison_parser.y"
            { }
#line 2180 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_list: /* select_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2193 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2199 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2205 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2211 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2217 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order: /* opt_order  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2230 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_list: /* order_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2243 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2249 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 146 "bison_parser.y"
            { }
#line 2255 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2261 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2267 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_list: /* expr_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2280 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_literal_list: /* opt_literal_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2293 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal_list: /* literal_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2306 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2312 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2318 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2324 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2330 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2336 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2342 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2348 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2354 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2360 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2384 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2390 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 146 "bison_parser.y"
            { }
#line 2402 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2408 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2414 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2420 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2426 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2432 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2438 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2444 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2450 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2456 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2462 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2468 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2474 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_commalist: /* table_ref_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2493 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2499 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2505 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 147 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2511 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2517 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2523 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2529 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2535 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2541 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2547 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2553 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2559 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2565 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 146 "bison_parser.y"
            { }
#line 2571 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2577 "bison_parser.cpp"
        break;

    case YYSYMBOL_ident_commalist: /* ident_commalist  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2590 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = SQL_HSQL_EMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 73 "bison_parser.y"
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
	yylloc.total_column = 0;
	yylloc.string_length = 0;
}

#line 2697 "bison_parser.cpp"

  yylsp[0] = yylloc;
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
  YY_STACK_PRINT (yyss, yyssp);

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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == SQL_HSQL_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= SQL_YYEOF)
    {
      yychar = SQL_YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == SQL_HSQL_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = SQL_HSQL_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
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
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = SQL_HSQL_EMPTY;
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: statement_list opt_semicolon  */
#line 267 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 2915 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 278 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2926 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 284 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2937 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement  */
#line 293 "bison_parser.y"
                                  {
			(yyval.statement) = (yyvsp[0].prep_stmt);
		}
#line 2945 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement  */
#line 296 "bison_parser.y"
                                     {
			(yyval.statement) = (yyvsp[0].statement);
		}
#line 2953 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 299 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 2961 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 302 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 2969 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 305 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 2977 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 312 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 2983 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 313 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 2989 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 314 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 2995 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 315 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3001 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 316 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3007 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 317 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3013 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 318 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3019 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 319 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3025 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 320 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3031 "bison_parser.cpp"
    break;

  case 19: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 329 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3039 "bison_parser.cpp"
    break;

  case 20: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 332 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3047 "bison_parser.cpp"
    break;

  case 21: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 335 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3055 "bison_parser.cpp"
    break;

  case 24: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 349 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3065 "bison_parser.cpp"
    break;

  case 26: /* execute_statement: EXECUTE IDENTIFIER  */
#line 359 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3074 "bison_parser.cpp"
    break;

  case 27: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 363 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3084 "bison_parser.cpp"
    break;

  case 28: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 377 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3095 "bison_parser.cpp"
    break;

  case 29: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 383 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3106 "bison_parser.cpp"
    break;

  case 30: /* file_type: IDENTIFIER  */
#line 392 "bison_parser.y"
                           {
			if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
				(yyval.import_type_t) = kImportCSV;
			} else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
				(yyval.import_type_t) = kImportTbl;
			} else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
				(yyval.import_type_t) = kImportBinary;
			} else {
				free((yyvsp[0].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
				YYERROR;
			}
			free((yyvsp[0].sval));
		}
#line 3125 "bison_parser.cpp"
    break;

  case 31: /* file_path: string_literal  */
#line 409 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3131 "bison_parser.cpp"
    break;

  case 32: /* opt_file_type: WITH FORMAT file_type  */
#line 413 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3139 "bison_parser.cpp"
    break;

  case 33: /* opt_file_type: %empty  */
#line 416 "bison_parser.y"
                                     { (yyval.import_type_t) = kImportAuto; }
#line 3145 "bison_parser.cpp"
    break;

  case 34: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 425 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3156 "bison_parser.cpp"
    break;

  case 35: /* show_statement: SHOW TABLES  */
#line 439 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3164 "bison_parser.cpp"
    break;

  case 36: /* show_statement: SHOW COLUMNS table_name  */
#line 442 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3174 "bison_parser.cpp"
    break;

  case 37: /* show_statement: DESCRIBE table_name  */
#line 447 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3184 "bison_parser.cpp"
    break;

  case 38: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 461 "bison_parser.y"
                                                                                      {
			(yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
			(yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
			if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
				free((yyvsp[-2].sval));
				yyerror(&yyloc, result, scanner, "File type is unknown.");
			 	YYERROR;
			}
			free((yyvsp[-2].sval));
			(yyval.create_stmt)->filePath = (yyvsp[0].sval);
		}
#line 3202 "bison_parser.cpp"
    break;

  case 39: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 474 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3214 "bison_parser.cpp"
    break;

  case 40: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 481 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3226 "bison_parser.cpp"
    break;

  case 41: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 488 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3239 "bison_parser.cpp"
    break;

  case 42: /* opt_not_exists: IF NOT EXISTS  */
#line 499 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3245 "bison_parser.cpp"
    break;

  case 43: /* opt_not_exists: %empty  */
#line 500 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3251 "bison_parser.cpp"
    break;

  case 44: /* column_def_commalist: column_def  */
#line 504 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3257 "bison_parser.cpp"
    break;

  case 45: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 505 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3263 "bison_parser.cpp"
    break;

  case 46: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 509 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3271 "bison_parser.cpp"
    break;

  case 47: /* column_type: TINYINT  */
#line 515 "bison_parser.y"
                        { (yyval.column_type_t) = new ColumnType{DataType::INT, "8"}; }
#line 3277 "bison_parser.cpp"
    break;

  case 48: /* column_type: SMALLINT  */
#line 516 "bison_parser.y"
                         { (yyval.column_type_t) = new ColumnType{DataType::INT, "16"}; }
#line 3283 "bison_parser.cpp"
    break;

  case 49: /* column_type: INT  */
#line 517 "bison_parser.y"
                    { (yyval.column_type_t) = new ColumnType{DataType::INT, "32"}; }
#line 3289 "bison_parser.cpp"
    break;

  case 50: /* column_type: BIGINT  */
#line 518 "bison_parser.y"
                       { (yyval.column_type_t) = new ColumnType{DataType::INT, "64"}; }
#line 3295 "bison_parser.cpp"
    break;

  case 51: /* column_type: LONG  */
#line 519 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::INT, "64"}; }
#line 3301 "bison_parser.cpp"
    break;

  case 52: /* column_type: FLOAT  */
#line 520 "bison_parser.y"
                      { (yyval.column_type_t) = new ColumnType{DataType::FLOAT}; }
#line 3307 "bison_parser.cpp"
    break;

  case 53: /* column_type: DOUBLE  */
#line 521 "bison_parser.y"
                       { (yyval.column_type_t) = new ColumnType{DataType::DOUBLE}; }
#line 3313 "bison_parser.cpp"
    break;

  case 54: /* column_type: DECIMAL '(' INTVAL ',' INTVAL ')'  */
#line 522 "bison_parser.y"
                                                  { (yyval.column_type_t) = new ColumnType{DataType::DECIMAL, (yyvsp[-3].sval), (yyvsp[-1].sval)}; }
#line 3319 "bison_parser.cpp"
    break;

  case 55: /* column_type: BOOLEAN  */
#line 523 "bison_parser.y"
                        { (yyval.column_type_t) = new ColumnType{DataType::BOOLEAN}; }
#line 3325 "bison_parser.cpp"
    break;

  case 56: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 524 "bison_parser.y"
                                       { (yyval.column_type_t) = new ColumnType{DataType::VARCHAR, (yyvsp[-1].sval)}; }
#line 3331 "bison_parser.cpp"
    break;

  case 57: /* column_type: CHAR '(' INTVAL ')'  */
#line 525 "bison_parser.y"
                                    { (yyval.column_type_t) = new ColumnType{DataType::CHAR, (yyvsp[-1].sval)}; }
#line 3337 "bison_parser.cpp"
    break;

  case 58: /* column_type: TEXT  */
#line 526 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::TEXT}; }
#line 3343 "bison_parser.cpp"
    break;

  case 59: /* column_type: DATETIME  */
#line 527 "bison_parser.y"
                         { (yyval.column_type_t) = new ColumnType{DataType::DATETIME}; }
#line 3349 "bison_parser.cpp"
    break;

  case 60: /* column_type: DATE  */
#line 528 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::DATE}; }
#line 3355 "bison_parser.cpp"
    break;

  case 61: /* column_type: TIMESTAMP  */
#line 529 "bison_parser.y"
                          { (yyval.column_type_t) = new ColumnType{DataType::TIMESTAMP}; }
#line 3361 "bison_parser.cpp"
    break;

  case 62: /* column_type: TIME  */
#line 530 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::TIME}; }
#line 3367 "bison_parser.cpp"
    break;

  case 63: /* opt_column_nullable: NULL  */
#line 534 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3373 "bison_parser.cpp"
    break;

  case 64: /* opt_column_nullable: NOT NULL  */
#line 535 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3379 "bison_parser.cpp"
    break;

  case 65: /* opt_column_nullable: %empty  */
#line 536 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3385 "bison_parser.cpp"
    break;

  case 66: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 546 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3396 "bison_parser.cpp"
    break;

  case 67: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 552 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3407 "bison_parser.cpp"
    break;

  case 68: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 558 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3417 "bison_parser.cpp"
    break;

  case 69: /* opt_exists: IF EXISTS  */
#line 566 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3423 "bison_parser.cpp"
    break;

  case 70: /* opt_exists: %empty  */
#line 567 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3429 "bison_parser.cpp"
    break;

  case 71: /* delete_statement: DELETE FROM table_name opt_where  */
#line 576 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3440 "bison_parser.cpp"
    break;

  case 72: /* truncate_statement: TRUNCATE table_name  */
#line 585 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3450 "bison_parser.cpp"
    break;

  case 73: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 598 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3462 "bison_parser.cpp"
    break;

  case 74: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 605 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3474 "bison_parser.cpp"
    break;

  case 75: /* opt_column_list: '(' ident_commalist ')'  */
#line 616 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3480 "bison_parser.cpp"
    break;

  case 76: /* opt_column_list: %empty  */
#line 617 "bison_parser.y"
                                    { (yyval.str_vec) = nullptr; }
#line 3486 "bison_parser.cpp"
    break;

  case 77: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 627 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3497 "bison_parser.cpp"
    break;

  case 78: /* update_clause_commalist: update_clause  */
#line 636 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3503 "bison_parser.cpp"
    break;

  case 79: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 637 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3509 "bison_parser.cpp"
    break;

  case 80: /* update_clause: IDENTIFIER '=' expr  */
#line 641 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3519 "bison_parser.cpp"
    break;

  case 81: /* select_statement: opt_with_clause select_with_paren  */
#line 653 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3528 "bison_parser.cpp"
    break;

  case 82: /* select_statement: opt_with_clause select_no_paren  */
#line 657 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3537 "bison_parser.cpp"
    break;

  case 83: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 661 "bison_parser.y"
                                                                                                               {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
		}
#line 3553 "bison_parser.cpp"
    break;

  case 86: /* select_within_set_operation_no_parentheses: select_clause  */
#line 679 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3559 "bison_parser.cpp"
    break;

  case 87: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 680 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3572 "bison_parser.cpp"
    break;

  case 88: /* select_with_paren: '(' select_no_paren ')'  */
#line 691 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3578 "bison_parser.cpp"
    break;

  case 89: /* select_with_paren: '(' select_with_paren ')'  */
#line 692 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3584 "bison_parser.cpp"
    break;

  case 90: /* select_no_paren: select_clause opt_order opt_limit  */
#line 696 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3599 "bison_parser.cpp"
    break;

  case 91: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 706 "bison_parser.y"
                                                                                           {
			(yyval.select_stmt) = (yyvsp[-4].select_stmt);
			if ((yyval.select_stmt)->setOperations == nullptr) {
				(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
			}
			(yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
			(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
			(yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
		}
#line 3614 "bison_parser.cpp"
    break;

  case 92: /* set_operator: set_type opt_all  */
#line 719 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3623 "bison_parser.cpp"
    break;

  case 93: /* set_type: UNION  */
#line 726 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3632 "bison_parser.cpp"
    break;

  case 94: /* set_type: INTERSECT  */
#line 730 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3641 "bison_parser.cpp"
    break;

  case 95: /* set_type: EXCEPT  */
#line 734 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3650 "bison_parser.cpp"
    break;

  case 96: /* opt_all: ALL  */
#line 741 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3658 "bison_parser.cpp"
    break;

  case 97: /* opt_all: %empty  */
#line 744 "bison_parser.y"
                                    {
		(yyval.bval) = false;
	}
#line 3666 "bison_parser.cpp"
    break;

  case 98: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 750 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3680 "bison_parser.cpp"
    break;

  case 99: /* opt_distinct: DISTINCT  */
#line 762 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3686 "bison_parser.cpp"
    break;

  case 100: /* opt_distinct: %empty  */
#line 763 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3692 "bison_parser.cpp"
    break;

  case 102: /* opt_from_clause: from_clause  */
#line 771 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3698 "bison_parser.cpp"
    break;

  case 103: /* opt_from_clause: %empty  */
#line 772 "bison_parser.y"
                             { (yyval.table) = nullptr; }
#line 3704 "bison_parser.cpp"
    break;

  case 104: /* from_clause: FROM table_ref  */
#line 776 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3710 "bison_parser.cpp"
    break;

  case 105: /* opt_where: WHERE expr  */
#line 781 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3716 "bison_parser.cpp"
    break;

  case 106: /* opt_where: %empty  */
#line 782 "bison_parser.y"
                                    { (yyval.expr) = nullptr; }
#line 3722 "bison_parser.cpp"
    break;

  case 107: /* opt_group: GROUP BY expr_list HAVING expr  */
#line 786 "bison_parser.y"
                                               {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-2].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3732 "bison_parser.cpp"
    break;

  case 108: /* opt_group: GROUP BY expr_list  */
#line 791 "bison_parser.y"
                                   {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[0].expr_vec);
			(yyval.group_t)->having = nullptr;
		}
#line 3742 "bison_parser.cpp"
    break;

  case 109: /* opt_group: HAVING expr  */
#line 796 "bison_parser.y"
                            {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = nullptr;
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3752 "bison_parser.cpp"
    break;

  case 110: /* opt_group: %empty  */
#line 801 "bison_parser.y"
                                    { (yyval.group_t) = nullptr; }
#line 3758 "bison_parser.cpp"
    break;

  case 111: /* opt_order: ORDER BY order_list  */
#line 805 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3764 "bison_parser.cpp"
    break;

  case 112: /* opt_order: %empty  */
#line 806 "bison_parser.y"
                                    { (yyval.order_vec) = nullptr; }
#line 3770 "bison_parser.cpp"
    break;

  case 113: /* order_list: order_desc  */
#line 810 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3776 "bison_parser.cpp"
    break;

  case 114: /* order_list: order_list ',' order_desc  */
#line 811 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3782 "bison_parser.cpp"
    break;

  case 115: /* order_desc: expr opt_order_type  */
#line 815 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3788 "bison_parser.cpp"
    break;

  case 116: /* opt_order_type: ASC  */
#line 819 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3794 "bison_parser.cpp"
    break;

  case 117: /* opt_order_type: DESC  */
#line 820 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3800 "bison_parser.cpp"
    break;

  case 118: /* opt_order_type: %empty  */
#line 821 "bison_parser.y"
                                    { (yyval.order_type) = kOrderAsc; }
#line 3806 "bison_parser.cpp"
    break;

  case 119: /* opt_top: TOP int_literal  */
#line 827 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3812 "bison_parser.cpp"
    break;

  case 120: /* opt_top: %empty  */
#line 828 "bison_parser.y"
                                    { (yyval.limit) = nullptr; }
#line 3818 "bison_parser.cpp"
    break;

  case 121: /* opt_limit: LIMIT expr  */
#line 832 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3824 "bison_parser.cpp"
    break;

  case 122: /* opt_limit: OFFSET expr  */
#line 833 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3830 "bison_parser.cpp"
    break;

  case 123: /* opt_limit: LIMIT expr OFFSET expr  */
#line 834 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3836 "bison_parser.cpp"
    break;

  case 124: /* opt_limit: LIMIT ALL  */
#line 835 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3842 "bison_parser.cpp"
    break;

  case 125: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 836 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3848 "bison_parser.cpp"
    break;

  case 126: /* opt_limit: %empty  */
#line 837 "bison_parser.y"
                                    { (yyval.limit) = nullptr; }
#line 3854 "bison_parser.cpp"
    break;

  case 127: /* expr_list: expr_alias  */
#line 844 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3860 "bison_parser.cpp"
    break;

  case 128: /* expr_list: expr_list ',' expr_alias  */
#line 845 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3866 "bison_parser.cpp"
    break;

  case 129: /* opt_literal_list: literal_list  */
#line 849 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3872 "bison_parser.cpp"
    break;

  case 130: /* opt_literal_list: %empty  */
#line 850 "bison_parser.y"
                                    { (yyval.expr_vec) = nullptr; }
#line 3878 "bison_parser.cpp"
    break;

  case 131: /* literal_list: literal  */
#line 854 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3884 "bison_parser.cpp"
    break;

  case 132: /* literal_list: literal_list ',' literal  */
#line 855 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3890 "bison_parser.cpp"
    break;

  case 133: /* expr_alias: expr opt_alias  */
#line 859 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3902 "bison_parser.cpp"
    break;

  case 139: /* operand: '(' expr ')'  */
#line 877 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 3908 "bison_parser.cpp"
    break;

  case 147: /* operand: '(' select_no_paren ')'  */
#line 885 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 3914 "bison_parser.cpp"
    break;

  case 150: /* unary_expr: '-' operand  */
#line 894 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 3920 "bison_parser.cpp"
    break;

  case 151: /* unary_expr: NOT operand  */
#line 895 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 3926 "bison_parser.cpp"
    break;

  case 152: /* unary_expr: operand ISNULL  */
#line 896 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 3932 "bison_parser.cpp"
    break;

  case 153: /* unary_expr: operand IS NULL  */
#line 897 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 3938 "bison_parser.cpp"
    break;

  case 154: /* unary_expr: operand IS NOT NULL  */
#line 898 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 3944 "bison_parser.cpp"
    break;

  case 156: /* binary_expr: operand '-' operand  */
#line 903 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 3950 "bison_parser.cpp"
    break;

  case 157: /* binary_expr: operand '+' operand  */
#line 904 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 3956 "bison_parser.cpp"
    break;

  case 158: /* binary_expr: operand '/' operand  */
#line 905 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 3962 "bison_parser.cpp"
    break;

  case 159: /* binary_expr: operand '*' operand  */
#line 906 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 3968 "bison_parser.cpp"
    break;

  case 160: /* binary_expr: operand '%' operand  */
#line 907 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 3974 "bison_parser.cpp"
    break;

  case 161: /* binary_expr: operand '^' operand  */
#line 908 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 3980 "bison_parser.cpp"
    break;

  case 162: /* binary_expr: operand LIKE operand  */
#line 909 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 3986 "bison_parser.cpp"
    break;

  case 163: /* binary_expr: operand NOT LIKE operand  */
#line 910 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 3992 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand ILIKE operand  */
#line 911 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 3998 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand CONCAT operand  */
#line 912 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4004 "bison_parser.cpp"
    break;

  case 166: /* logic_expr: expr AND expr  */
#line 916 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4010 "bison_parser.cpp"
    break;

  case 167: /* logic_expr: expr OR expr  */
#line 917 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4016 "bison_parser.cpp"
    break;

  case 168: /* in_expr: operand IN '(' expr_list ')'  */
#line 921 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4022 "bison_parser.cpp"
    break;

  case 169: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 922 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4028 "bison_parser.cpp"
    break;

  case 170: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 923 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4034 "bison_parser.cpp"
    break;

  case 171: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 924 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4040 "bison_parser.cpp"
    break;

  case 172: /* case_expr: CASE expr case_list END  */
#line 930 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4046 "bison_parser.cpp"
    break;

  case 173: /* case_expr: CASE expr case_list ELSE expr END  */
#line 931 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4052 "bison_parser.cpp"
    break;

  case 174: /* case_expr: CASE case_list END  */
#line 932 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4058 "bison_parser.cpp"
    break;

  case 175: /* case_expr: CASE case_list ELSE expr END  */
#line 933 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4064 "bison_parser.cpp"
    break;

  case 176: /* case_list: WHEN expr THEN expr  */
#line 937 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4070 "bison_parser.cpp"
    break;

  case 177: /* case_list: case_list WHEN expr THEN expr  */
#line 938 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4076 "bison_parser.cpp"
    break;

  case 178: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 942 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4082 "bison_parser.cpp"
    break;

  case 179: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 943 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4088 "bison_parser.cpp"
    break;

  case 180: /* comp_expr: operand '=' operand  */
#line 947 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4094 "bison_parser.cpp"
    break;

  case 181: /* comp_expr: operand EQUALS operand  */
#line 948 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4100 "bison_parser.cpp"
    break;

  case 182: /* comp_expr: operand NOTEQUALS operand  */
#line 949 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4106 "bison_parser.cpp"
    break;

  case 183: /* comp_expr: operand '<' operand  */
#line 950 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4112 "bison_parser.cpp"
    break;

  case 184: /* comp_expr: operand '>' operand  */
#line 951 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4118 "bison_parser.cpp"
    break;

  case 185: /* comp_expr: operand LESSEQ operand  */
#line 952 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4124 "bison_parser.cpp"
    break;

  case 186: /* comp_expr: operand GREATEREQ operand  */
#line 953 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4130 "bison_parser.cpp"
    break;

  case 187: /* function_expr: IDENTIFIER '(' ')'  */
#line 957 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4136 "bison_parser.cpp"
    break;

  case 188: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 958 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4142 "bison_parser.cpp"
    break;

  case 189: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 962 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4148 "bison_parser.cpp"
    break;

  case 190: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 966 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), std::move(*(yyvsp[-1].column_type_t))); }
#line 4154 "bison_parser.cpp"
    break;

  case 191: /* datetime_field: SECOND  */
#line 970 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4160 "bison_parser.cpp"
    break;

  case 192: /* datetime_field: MINUTE  */
#line 971 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4166 "bison_parser.cpp"
    break;

  case 193: /* datetime_field: HOUR  */
#line 972 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4172 "bison_parser.cpp"
    break;

  case 194: /* datetime_field: DAY  */
#line 973 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4178 "bison_parser.cpp"
    break;

  case 195: /* datetime_field: MONTH  */
#line 974 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4184 "bison_parser.cpp"
    break;

  case 196: /* datetime_field: YEAR  */
#line 975 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4190 "bison_parser.cpp"
    break;

  case 197: /* datetime_field: QUARTER  */
#line 976 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeQuarter; }
#line 4196 "bison_parser.cpp"
    break;

  case 198: /* date_literal: DATE string_literal  */
#line 980 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeDate((yyvsp[0].expr)->name); }
#line 4202 "bison_parser.cpp"
    break;

  case 199: /* interval_literal: INTERVAL string_literal datetime_field  */
#line 984 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeInterval((yyvsp[-1].expr)->name, (yyvsp[0].datetime_field)); }
#line 4208 "bison_parser.cpp"
    break;

  case 200: /* between_expr: operand BETWEEN operand AND operand  */
#line 988 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4214 "bison_parser.cpp"
    break;

  case 201: /* column_name: IDENTIFIER  */
#line 992 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4220 "bison_parser.cpp"
    break;

  case 202: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 993 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4226 "bison_parser.cpp"
    break;

  case 203: /* column_name: '*'  */
#line 994 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4232 "bison_parser.cpp"
    break;

  case 204: /* column_name: IDENTIFIER '.' '*'  */
#line 995 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4238 "bison_parser.cpp"
    break;

  case 211: /* string_literal: STRING  */
#line 1008 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4244 "bison_parser.cpp"
    break;

  case 212: /* bool_literal: TRUE  */
#line 1012 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4250 "bison_parser.cpp"
    break;

  case 213: /* bool_literal: FALSE  */
#line 1013 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4256 "bison_parser.cpp"
    break;

  case 214: /* num_literal: FLOATVAL  */
#line 1017 "bison_parser.y"
                         { (yyval.expr) = Expr::makeFloatLiteral((yyvsp[0].sval)); }
#line 4262 "bison_parser.cpp"
    break;

  case 216: /* int_literal: INTVAL  */
#line 1022 "bison_parser.y"
                       { (yyval.expr) = Expr::makeIntLiteral((yyvsp[0].sval)); }
#line 4268 "bison_parser.cpp"
    break;

  case 217: /* null_literal: NULL  */
#line 1026 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4274 "bison_parser.cpp"
    break;

  case 219: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1035 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4285 "bison_parser.cpp"
    break;

  case 223: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1051 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4296 "bison_parser.cpp"
    break;

  case 224: /* table_ref_commalist: table_ref_atomic  */
#line 1060 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4302 "bison_parser.cpp"
    break;

  case 225: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1061 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4308 "bison_parser.cpp"
    break;

  case 226: /* table_ref_name: table_name opt_table_alias  */
#line 1066 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4320 "bison_parser.cpp"
    break;

  case 227: /* table_ref_name_no_alias: table_name  */
#line 1077 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4330 "bison_parser.cpp"
    break;

  case 228: /* table_name: IDENTIFIER  */
#line 1086 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4336 "bison_parser.cpp"
    break;

  case 229: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1087 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4342 "bison_parser.cpp"
    break;

  case 231: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1093 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4348 "bison_parser.cpp"
    break;

  case 233: /* opt_table_alias: %empty  */
#line 1099 "bison_parser.y"
                                    { (yyval.alias_t) = nullptr; }
#line 4354 "bison_parser.cpp"
    break;

  case 234: /* alias: AS IDENTIFIER  */
#line 1104 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4360 "bison_parser.cpp"
    break;

  case 235: /* alias: IDENTIFIER  */
#line 1105 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4366 "bison_parser.cpp"
    break;

  case 237: /* opt_alias: %empty  */
#line 1111 "bison_parser.y"
                                    { (yyval.alias_t) = nullptr; }
#line 4372 "bison_parser.cpp"
    break;

  case 239: /* opt_with_clause: %empty  */
#line 1121 "bison_parser.y"
                                    { (yyval.with_description_vec) = nullptr; }
#line 4378 "bison_parser.cpp"
    break;

  case 240: /* with_clause: WITH with_description_list  */
#line 1125 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4384 "bison_parser.cpp"
    break;

  case 241: /* with_description_list: with_description  */
#line 1129 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4393 "bison_parser.cpp"
    break;

  case 242: /* with_description_list: with_description_list ',' with_description  */
#line 1133 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4402 "bison_parser.cpp"
    break;

  case 243: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1140 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4412 "bison_parser.cpp"
    break;

  case 244: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1154 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4424 "bison_parser.cpp"
    break;

  case 245: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1162 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4437 "bison_parser.cpp"
    break;

  case 246: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1172 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-6].uval);
			(yyval.table)->join->left = (yyvsp[-7].table);
			(yyval.table)->join->right = (yyvsp[-4].table);
			auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
			auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
			if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
			if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
			(yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
			delete (yyvsp[-1].expr);
		}
#line 4457 "bison_parser.cpp"
    break;

  case 247: /* opt_join_type: INNER  */
#line 1190 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4463 "bison_parser.cpp"
    break;

  case 248: /* opt_join_type: LEFT OUTER  */
#line 1191 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4469 "bison_parser.cpp"
    break;

  case 249: /* opt_join_type: LEFT  */
#line 1192 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4475 "bison_parser.cpp"
    break;

  case 250: /* opt_join_type: RIGHT OUTER  */
#line 1193 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4481 "bison_parser.cpp"
    break;

  case 251: /* opt_join_type: RIGHT  */
#line 1194 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4487 "bison_parser.cpp"
    break;

  case 252: /* opt_join_type: FULL OUTER  */
#line 1195 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4493 "bison_parser.cpp"
    break;

  case 253: /* opt_join_type: OUTER  */
#line 1196 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4499 "bison_parser.cpp"
    break;

  case 254: /* opt_join_type: FULL  */
#line 1197 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4505 "bison_parser.cpp"
    break;

  case 255: /* opt_join_type: CROSS  */
#line 1198 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4511 "bison_parser.cpp"
    break;

  case 256: /* opt_join_type: %empty  */
#line 1199 "bison_parser.y"
                                                { (yyval.uval) = kJoinInner; }
#line 4517 "bison_parser.cpp"
    break;

  case 260: /* ident_commalist: IDENTIFIER  */
#line 1219 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4523 "bison_parser.cpp"
    break;

  case 261: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1220 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4529 "bison_parser.cpp"
    break;


#line 4533 "bison_parser.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == SQL_HSQL_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= SQL_YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == SQL_YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, result, scanner);
          yychar = SQL_HSQL_EMPTY;
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != SQL_HSQL_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1223 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
