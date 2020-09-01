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
  YYSYMBOL_HINT = 92,                      /* HINT  */
  YYSYMBOL_INTO = 93,                      /* INTO  */
  YYSYMBOL_JOIN = 94,                      /* JOIN  */
  YYSYMBOL_LEFT = 95,                      /* LEFT  */
  YYSYMBOL_LIKE = 96,                      /* LIKE  */
  YYSYMBOL_LOAD = 97,                      /* LOAD  */
  YYSYMBOL_LONG = 98,                      /* LONG  */
  YYSYMBOL_NULL = 99,                      /* NULL  */
  YYSYMBOL_PLAN = 100,                     /* PLAN  */
  YYSYMBOL_SHOW = 101,                     /* SHOW  */
  YYSYMBOL_TEXT = 102,                     /* TEXT  */
  YYSYMBOL_THEN = 103,                     /* THEN  */
  YYSYMBOL_TIME = 104,                     /* TIME  */
  YYSYMBOL_VIEW = 105,                     /* VIEW  */
  YYSYMBOL_WHEN = 106,                     /* WHEN  */
  YYSYMBOL_WITH = 107,                     /* WITH  */
  YYSYMBOL_ADD = 108,                      /* ADD  */
  YYSYMBOL_ALL = 109,                      /* ALL  */
  YYSYMBOL_AND = 110,                      /* AND  */
  YYSYMBOL_ASC = 111,                      /* ASC  */
  YYSYMBOL_END = 112,                      /* END  */
  YYSYMBOL_FOR = 113,                      /* FOR  */
  YYSYMBOL_INT = 114,                      /* INT  */
  YYSYMBOL_KEY = 115,                      /* KEY  */
  YYSYMBOL_TINYINT = 116,                  /* TINYINT  */
  YYSYMBOL_SMALLINT = 117,                 /* SMALLINT  */
  YYSYMBOL_BIGINT = 118,                   /* BIGINT  */
  YYSYMBOL_NOT = 119,                      /* NOT  */
  YYSYMBOL_OFF = 120,                      /* OFF  */
  YYSYMBOL_SET = 121,                      /* SET  */
  YYSYMBOL_TOP = 122,                      /* TOP  */
  YYSYMBOL_AS = 123,                       /* AS  */
  YYSYMBOL_BY = 124,                       /* BY  */
  YYSYMBOL_IF = 125,                       /* IF  */
  YYSYMBOL_IN = 126,                       /* IN  */
  YYSYMBOL_IS = 127,                       /* IS  */
  YYSYMBOL_OF = 128,                       /* OF  */
  YYSYMBOL_ON = 129,                       /* ON  */
  YYSYMBOL_OR = 130,                       /* OR  */
  YYSYMBOL_TO = 131,                       /* TO  */
  YYSYMBOL_CONCAT = 132,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 133,                    /* ILIKE  */
  YYSYMBOL_SECOND = 134,                   /* SECOND  */
  YYSYMBOL_MINUTE = 135,                   /* MINUTE  */
  YYSYMBOL_HOUR = 136,                     /* HOUR  */
  YYSYMBOL_DAY = 137,                      /* DAY  */
  YYSYMBOL_MONTH = 138,                    /* MONTH  */
  YYSYMBOL_YEAR = 139,                     /* YEAR  */
  YYSYMBOL_QUARTER = 140,                  /* QUARTER  */
  YYSYMBOL_DECIMAL = 141,                  /* DECIMAL  */
  YYSYMBOL_TRUE = 142,                     /* TRUE  */
  YYSYMBOL_FALSE = 143,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 144,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 145,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 146,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 147,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 148,                 /* ROLLBACK  */
  YYSYMBOL_149_ = 149,                     /* '='  */
  YYSYMBOL_EQUALS = 150,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 151,                /* NOTEQUALS  */
  YYSYMBOL_152_ = 152,                     /* '<'  */
  YYSYMBOL_153_ = 153,                     /* '>'  */
  YYSYMBOL_LESS = 154,                     /* LESS  */
  YYSYMBOL_GREATER = 155,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 156,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 157,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 158,                  /* NOTNULL  */
  YYSYMBOL_159_ = 159,                     /* '+'  */
  YYSYMBOL_160_ = 160,                     /* '-'  */
  YYSYMBOL_161_ = 161,                     /* '*'  */
  YYSYMBOL_162_ = 162,                     /* '/'  */
  YYSYMBOL_163_ = 163,                     /* '%'  */
  YYSYMBOL_164_ = 164,                     /* '^'  */
  YYSYMBOL_UMINUS = 165,                   /* UMINUS  */
  YYSYMBOL_166_ = 166,                     /* '['  */
  YYSYMBOL_167_ = 167,                     /* ']'  */
  YYSYMBOL_168_ = 168,                     /* '('  */
  YYSYMBOL_169_ = 169,                     /* ')'  */
  YYSYMBOL_170_ = 170,                     /* '.'  */
  YYSYMBOL_171_ = 171,                     /* ';'  */
  YYSYMBOL_172_ = 172,                     /* ','  */
  YYSYMBOL_YYACCEPT = 173,                 /* $accept  */
  YYSYMBOL_input = 174,                    /* input  */
  YYSYMBOL_statement_list = 175,           /* statement_list  */
  YYSYMBOL_statement = 176,                /* statement  */
  YYSYMBOL_preparable_statement = 177,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 178,                /* opt_hints  */
  YYSYMBOL_hint_list = 179,                /* hint_list  */
  YYSYMBOL_hint = 180,                     /* hint  */
  YYSYMBOL_transaction_statement = 181,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 182,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 183,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 184,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 185,        /* execute_statement  */
  YYSYMBOL_import_statement = 186,         /* import_statement  */
  YYSYMBOL_file_type = 187,                /* file_type  */
  YYSYMBOL_file_path = 188,                /* file_path  */
  YYSYMBOL_opt_file_type = 189,            /* opt_file_type  */
  YYSYMBOL_export_statement = 190,         /* export_statement  */
  YYSYMBOL_show_statement = 191,           /* show_statement  */
  YYSYMBOL_create_statement = 192,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 193,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 194,     /* column_def_commalist  */
  YYSYMBOL_column_def = 195,               /* column_def  */
  YYSYMBOL_column_type = 196,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 197,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 198,           /* drop_statement  */
  YYSYMBOL_opt_exists = 199,               /* opt_exists  */
  YYSYMBOL_delete_statement = 200,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 201,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 202,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 203,          /* opt_column_list  */
  YYSYMBOL_update_statement = 204,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 205,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 206,            /* update_clause  */
  YYSYMBOL_select_statement = 207,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 208, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 209, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 210,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 211,          /* select_no_paren  */
  YYSYMBOL_set_operator = 212,             /* set_operator  */
  YYSYMBOL_set_type = 213,                 /* set_type  */
  YYSYMBOL_opt_all = 214,                  /* opt_all  */
  YYSYMBOL_select_clause = 215,            /* select_clause  */
  YYSYMBOL_opt_distinct = 216,             /* opt_distinct  */
  YYSYMBOL_select_list = 217,              /* select_list  */
  YYSYMBOL_opt_from_clause = 218,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 219,              /* from_clause  */
  YYSYMBOL_opt_where = 220,                /* opt_where  */
  YYSYMBOL_opt_group = 221,                /* opt_group  */
  YYSYMBOL_opt_order = 222,                /* opt_order  */
  YYSYMBOL_order_list = 223,               /* order_list  */
  YYSYMBOL_order_desc = 224,               /* order_desc  */
  YYSYMBOL_opt_order_type = 225,           /* opt_order_type  */
  YYSYMBOL_opt_top = 226,                  /* opt_top  */
  YYSYMBOL_opt_limit = 227,                /* opt_limit  */
  YYSYMBOL_expr_list = 228,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 229,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 230,             /* literal_list  */
  YYSYMBOL_expr_alias = 231,               /* expr_alias  */
  YYSYMBOL_expr = 232,                     /* expr  */
  YYSYMBOL_operand = 233,                  /* operand  */
  YYSYMBOL_scalar_expr = 234,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 235,               /* unary_expr  */
  YYSYMBOL_binary_expr = 236,              /* binary_expr  */
  YYSYMBOL_logic_expr = 237,               /* logic_expr  */
  YYSYMBOL_in_expr = 238,                  /* in_expr  */
  YYSYMBOL_case_expr = 239,                /* case_expr  */
  YYSYMBOL_case_list = 240,                /* case_list  */
  YYSYMBOL_exists_expr = 241,              /* exists_expr  */
  YYSYMBOL_comp_expr = 242,                /* comp_expr  */
  YYSYMBOL_function_expr = 243,            /* function_expr  */
  YYSYMBOL_extract_expr = 244,             /* extract_expr  */
  YYSYMBOL_cast_expr = 245,                /* cast_expr  */
  YYSYMBOL_datetime_field = 246,           /* datetime_field  */
  YYSYMBOL_date_literal = 247,             /* date_literal  */
  YYSYMBOL_interval_literal = 248,         /* interval_literal  */
  YYSYMBOL_between_expr = 249,             /* between_expr  */
  YYSYMBOL_column_name = 250,              /* column_name  */
  YYSYMBOL_literal = 251,                  /* literal  */
  YYSYMBOL_string_literal = 252,           /* string_literal  */
  YYSYMBOL_bool_literal = 253,             /* bool_literal  */
  YYSYMBOL_num_literal = 254,              /* num_literal  */
  YYSYMBOL_int_literal = 255,              /* int_literal  */
  YYSYMBOL_null_literal = 256,             /* null_literal  */
  YYSYMBOL_table_ref = 257,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 258,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 259, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 260,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 261,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 262,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 263,               /* table_name  */
  YYSYMBOL_table_alias = 264,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 265,          /* opt_table_alias  */
  YYSYMBOL_alias = 266,                    /* alias  */
  YYSYMBOL_opt_alias = 267,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 268,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 269,              /* with_clause  */
  YYSYMBOL_with_description_list = 270,    /* with_description_list  */
  YYSYMBOL_with_description = 271,         /* with_description  */
  YYSYMBOL_join_clause = 272,              /* join_clause  */
  YYSYMBOL_opt_join_type = 273,            /* opt_join_type  */
  YYSYMBOL_join_condition = 274,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 275,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 276           /* ident_commalist  */
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
#define YYLAST   799

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  173
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  267
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  483

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   411


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
       2,     2,     2,     2,     2,     2,     2,   163,     2,     2,
     168,   169,   161,   159,   172,   160,   170,   162,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   171,
     152,   149,   153,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   166,     2,   167,   164,     2,     2,     2,     2,     2,
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
     145,   146,   147,   148,   150,   151,   154,   155,   156,   157,
     158,   165
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   267,   267,   278,   284,   293,   297,   301,   304,   307,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   331,
     332,   337,   338,   342,   346,   358,   361,   364,   370,   371,
     378,   385,   388,   392,   406,   412,   421,   438,   442,   445,
     454,   468,   471,   476,   490,   503,   510,   517,   528,   529,
     533,   534,   538,   544,   545,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   557,   558,   559,   563,
     564,   565,   575,   581,   587,   595,   596,   605,   614,   627,
     634,   645,   646,   656,   665,   666,   670,   682,   686,   690,
     704,   705,   708,   709,   720,   721,   725,   735,   748,   755,
     759,   763,   770,   773,   779,   791,   792,   796,   800,   801,
     805,   810,   811,   815,   820,   825,   830,   834,   835,   839,
     840,   844,   848,   849,   850,   856,   857,   861,   862,   863,
     864,   865,   866,   873,   874,   878,   879,   883,   884,   888,
     898,   899,   900,   901,   902,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   918,   919,   923,   924,   925,   926,
     927,   931,   932,   933,   934,   935,   936,   937,   938,   939,
     940,   941,   945,   946,   950,   951,   952,   953,   959,   960,
     961,   962,   966,   967,   971,   972,   976,   977,   978,   979,
     980,   981,   982,   986,   987,   991,   995,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1009,  1013,  1017,  1021,  1022,  1023,
    1024,  1028,  1029,  1030,  1031,  1032,  1033,  1037,  1041,  1042,
    1046,  1047,  1051,  1055,  1063,  1064,  1074,  1075,  1079,  1080,
    1089,  1090,  1095,  1106,  1115,  1116,  1121,  1122,  1127,  1128,
    1133,  1134,  1139,  1140,  1149,  1150,  1154,  1158,  1162,  1169,
    1182,  1190,  1200,  1219,  1220,  1221,  1222,  1223,  1224,  1225,
    1226,  1227,  1228,  1233,  1242,  1243,  1248,  1249
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
  "DROP", "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN",
  "LEFT", "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN",
  "TIME", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR",
  "INT", "KEY", "TINYINT", "SMALLINT", "BIGINT", "NOT", "OFF", "SET",
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "QUARTER",
  "DECIMAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN", "COMMIT",
  "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,    61,
     404,   405,    60,    62,   406,   407,   408,   409,   410,    43,
      45,    42,    47,    37,    94,   411,    91,    93,    40,    41,
      46,    59,    44
};
#endif

#define YYPACT_NINF (-311)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-265)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     547,    37,    73,   113,   125,    73,   -38,   -18,   110,   116,
      73,    73,   -37,    20,   217,    92,    92,    92,   232,    67,
    -311,   143,  -311,   143,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,   -34,  -311,   236,    88,  -311,
      91,   176,  -311,   155,   155,    73,   275,    73,   158,  -311,
     -46,   160,   160,    73,  -311,   170,   131,  -311,  -311,  -311,
    -311,  -311,  -311,   395,  -311,   204,  -311,  -311,   182,   -34,
      30,  -311,    11,  -311,   318,    53,   323,   209,    73,    73,
     252,  -311,   243,   165,   331,   334,   334,   300,    73,    73,
    -311,   175,   217,  -311,   177,   338,   333,   178,   183,  -311,
    -311,  -311,   -34,   245,   231,   -34,    99,  -311,  -311,  -311,
    -311,   334,   334,  -311,  -311,  -311,   188,   187,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,   319,   -57,
     165,   249,  -311,   334,   364,   101,   220,   -51,  -311,   263,
    -311,   263,  -311,  -311,  -311,  -311,  -311,   368,  -311,  -311,
     249,  -311,  -311,   303,  -311,  -311,    30,  -311,  -311,   249,
     303,   249,   114,  -311,   348,  -311,  -311,    53,  -311,   375,
     273,   379,   265,    -6,   229,   230,   233,   141,   294,   307,
    -311,   127,    -3,   396,  -311,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,   306,  -311,
      45,   235,  -311,   249,   331,  -311,   356,  -311,  -311,   237,
      79,  -311,   315,   240,  -311,    12,    99,   -34,   244,  -311,
     -49,    99,    -3,   357,    -1,  -311,  -311,  -311,  -311,  -311,
    -311,  -311,  -311,  -311,   320,  -311,   539,   104,  -311,   273,
      10,    13,   362,   348,   249,   249,   119,   124,   251,   307,
     595,    26,   253,   -89,   249,   249,   307,  -311,   307,   -44,
     255,   -55,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,    73,  -311,   417,
      53,    -3,  -311,   275,    53,  -311,   368,     9,   252,  -311,
     249,  -311,   421,  -311,  -311,  -311,  -311,   249,  -311,  -311,
    -311,  -311,   249,   249,   334,  -311,   257,  -311,  -311,   261,
    -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,  -311,   264,
    -311,    87,  -311,   379,  -311,  -311,   249,  -311,  -311,   266,
     344,    68,    82,   129,   249,   249,  -311,   362,   342,  -311,
    -311,  -311,   324,   549,   635,   307,   271,   127,  -311,   341,
    -311,   635,   635,   635,   635,   347,   347,   347,   347,    26,
      26,   -90,   -90,   -90,   309,  -311,  -311,   117,  -311,   136,
    -311,   273,  -311,   289,  -311,   272,  -311,    15,  -311,   169,
    -311,  -311,  -311,    -3,    -3,  -311,   440,   441,   442,  -311,
     352,  -311,  -311,   146,  -311,   249,   539,   249,   249,  -311,
     132,    98,   283,   307,   635,   127,   287,   148,  -311,  -311,
    -311,   288,   365,  -311,  -311,  -311,   385,   387,   391,   371,
       9,   463,  -311,  -311,  -311,   249,   345,  -311,   301,   302,
     304,  -311,  -311,    33,   311,    -3,   133,  -311,   249,  -311,
     595,   321,   153,  -311,  -311,    15,     9,  -311,  -311,  -311,
       9,   291,   305,    -3,   249,  -311,  -311,   466,  -311,  -311,
    -311,    -3,  -311,  -311,  -311,  -311,   299,   364,   -24,   322,
     310,   249,   154,   249,  -311,    14,    -3,  -311,  -311,    -3,
     325,   328,  -311
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   265,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   244,     0,   234,    78,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   233,
       0,    76,    76,     0,    41,     0,   246,   247,    28,    25,
      27,    26,     1,   245,     2,     0,     6,     5,   126,     0,
      87,    88,   118,    74,     0,   136,     0,     0,     0,     0,
     112,    36,     0,    82,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   106,     0,     0,   100,
     101,    99,     0,   103,     0,     0,   132,   235,   217,   220,
     222,     0,     0,   223,   218,   219,     0,   135,   215,   216,
     137,   211,   212,   213,   221,   214,    31,    30,     0,     0,
      82,     0,    77,     0,     0,     0,     0,   112,    84,    39,
      37,    39,    75,    72,    73,   249,   248,     0,   125,   105,
       0,    95,    94,   118,    91,    90,    92,   102,    98,     0,
     118,     0,     0,    96,     0,   204,    33,     0,    48,     0,
     245,     0,     0,   207,     0,     0,     0,     0,     0,     0,
     209,     0,   111,   140,   146,   147,   148,   142,   144,   149,
     143,   161,   150,   151,   152,   141,   154,   155,     0,   266,
       0,     0,    80,     0,     0,    83,     0,    35,    40,    23,
       0,    21,   109,   107,   133,   243,   132,     0,   117,   119,
     124,   132,   128,   130,   127,   197,   198,   199,   200,   201,
     202,   203,   205,   138,     0,    46,     0,     0,    50,   245,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   156,     0,     0,     0,     0,     0,   158,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
       0,    86,    85,     0,     0,    19,     0,     0,   112,   108,
       0,   241,     0,   242,   139,    89,    93,     0,   123,   122,
     121,    97,     0,     0,     0,    67,     0,    59,    58,     0,
      66,    65,    57,    64,    68,    55,    53,    54,    56,     0,
      61,    71,    45,     0,    47,   193,     0,   208,   210,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,   153,
     145,   172,   173,     0,   168,     0,     0,     0,   159,     0,
     171,   170,   186,   187,   188,   189,   190,   191,   192,   163,
     162,   165,   164,   166,   167,    34,   267,     0,    38,     0,
      22,   245,   110,   224,   226,     0,   228,   239,   227,   116,
     134,   240,   120,   131,   129,    44,     0,     0,     0,    69,
       0,    52,    51,     0,   184,     0,     0,     0,     0,   178,
       0,     0,     0,     0,   169,     0,     0,     0,   160,    79,
      24,     0,     0,   261,   253,   259,   257,   260,   255,     0,
       0,     0,   238,   232,   236,     0,     0,   104,     0,     0,
       0,    70,   194,     0,     0,   182,     0,   181,     0,   185,
     206,     0,     0,   176,   174,   239,     0,   256,   258,   254,
       0,   225,   240,   115,     0,    62,    63,     0,   195,   196,
     179,   183,   177,   175,   229,   250,   262,     0,   114,     0,
       0,     0,     0,     0,    60,     0,   263,   251,   237,   113,
     207,     0,   252
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -311,  -311,  -311,   426,  -311,   470,  -311,   208,  -311,   134,
    -311,  -311,  -311,  -311,   215,   -85,   360,  -311,  -311,  -311,
     461,  -311,   189,   118,  -311,  -311,   464,  -311,  -311,  -311,
     383,  -311,  -311,   313,  -166,   -80,  -311,    90,   -66,   -48,
    -311,  -311,   -76,   278,  -311,  -311,  -311,  -123,  -311,    40,
    -311,   222,  -311,  -311,  -161,  -293,  -311,   -12,   234,  -131,
    -172,  -311,  -311,  -311,  -311,  -311,  -311,   274,  -311,  -311,
    -311,  -311,  -311,   282,  -311,  -311,  -311,    46,   -62,   -77,
    -311,  -311,   431,  -311,  -311,  -310,    81,  -311,  -311,  -311,
       0,  -311,    85,   316,  -311,  -311,  -311,  -311,   443,  -311,
    -311,  -311,  -311,    65
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   210,   211,    22,    59,
      23,   127,    24,    25,    82,   139,   207,    26,    27,    28,
      78,   237,   238,   321,   391,    29,    88,    30,    31,    32,
     135,    33,   137,   138,    34,   153,   154,   155,    71,   102,
     103,   158,    72,   150,   212,   288,   289,   132,   427,   106,
     218,   219,   300,    96,   163,   213,   116,   117,   214,   215,
     183,   184,   185,   186,   187,   188,   189,   247,   190,   191,
     192,   193,   194,   232,   118,   119,   195,   196,   197,   121,
     122,   123,   124,   125,   372,   373,   374,   375,   376,    48,
     377,   422,   423,   424,   294,    35,    36,    56,    57,   378,
     419,   477,    64,   200
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     182,   141,    39,    98,   235,    42,   250,   251,   140,   140,
      49,    50,    38,   120,   205,   291,   327,   480,   291,    68,
      99,   254,   473,   149,   105,   160,   156,   131,   220,   156,
     222,   224,   169,   393,   164,   165,   298,    43,    51,    99,
      53,   255,   262,    85,   348,    80,   246,    83,   198,   303,
     253,   100,   345,    90,   407,   295,   140,   108,   109,   110,
     301,   254,   299,    37,   349,   111,   170,    44,    52,   202,
     100,    45,   281,   324,   276,    54,    38,   250,   129,   130,
     340,   255,   346,   104,   343,    86,   344,   101,   143,   144,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   233,   101,   254,   217,   254,
     451,   171,   442,   331,   332,   252,    40,   173,   108,   109,
     110,   204,   254,   341,   342,    70,   111,   255,    41,   255,
     173,   108,   109,   110,    69,   292,   112,   296,   421,   111,
     466,   156,   255,   254,   173,   108,   109,   110,   290,   161,
      60,    61,   113,   111,    68,   174,   175,   176,   262,    97,
     201,   468,   240,   255,   241,   379,   220,   162,   174,   175,
     176,   383,   384,   404,   328,   180,   329,   371,   254,   325,
      68,   145,   174,   175,   176,   397,   389,   273,   274,   275,
     276,   396,   254,   216,   177,   114,   115,   112,   255,    46,
     221,   438,   458,   400,   401,   411,   390,   177,   254,    47,
     112,   334,   255,   113,   278,   425,   398,   279,   120,   385,
      55,   177,   120,   223,   112,   245,   113,   140,   255,   254,
     335,   440,    62,   178,   426,   335,   336,    58,    63,    73,
     113,   399,   254,   254,   437,   460,   178,   245,   285,   255,
      65,   286,   173,   108,   109,   110,   114,   115,    74,    75,
     178,   111,   255,   255,   433,    76,   435,   436,   367,   114,
     115,   402,   369,   322,   179,   180,   323,   365,    81,    84,
      77,   406,   181,   114,   115,    87,   409,   179,   180,   167,
     174,   175,   176,    91,   453,   181,    94,   173,   108,   109,
     110,   179,   180,    92,    95,   410,   111,   461,   167,   181,
     173,   108,   109,   110,   412,   432,   412,   444,   290,   111,
     290,   107,   463,   478,   412,   290,   279,   126,   128,   177,
     131,   133,   112,   134,   136,   248,   175,   176,   108,   441,
     476,   142,   479,    69,   110,   147,   149,   151,   113,   175,
     176,   413,   152,   413,   157,   159,   414,   166,   414,   167,
     168,   413,   415,   416,   415,   416,   414,   199,   178,   203,
     206,   209,   415,   416,   177,   104,   470,   112,   234,   417,
      14,   417,   236,  -262,   418,  -262,   418,   177,   239,   417,
     112,   114,   115,   113,   418,  -264,   257,   242,   243,   277,
     283,   244,     1,   280,   287,   284,   113,   302,   304,   179,
     180,     2,   290,   249,   256,    68,   297,   181,     3,   337,
     366,     4,   339,   347,   381,   386,   249,     5,   471,   387,
       6,     7,   388,   395,   254,   394,   114,   115,   345,   405,
     408,   262,     8,     9,   420,   257,   428,   429,   430,   114,
     115,   431,   439,    10,   179,   180,   443,   445,   447,   446,
     448,  -230,   181,  -231,   449,   450,   452,   179,   180,   454,
     455,   456,   469,   467,   261,   181,   457,    11,   475,   262,
     459,    12,   225,   226,   227,   228,   229,   230,   231,    93,
     462,   474,   258,    67,   370,   241,    13,   482,   368,  -265,
    -265,   208,    14,  -265,  -265,    79,   271,   272,   273,   274,
     275,   276,   392,   172,   434,   259,    89,   282,   326,   382,
     333,   481,   260,   261,   380,   330,   148,   465,   262,   263,
     464,   293,   472,     0,     0,   146,     0,     0,     0,     0,
       0,    15,    16,    17,     0,   264,   265,   266,   267,   268,
     305,     0,   269,   270,     1,   271,   272,   273,   274,   275,
     276,     0,     0,     2,     0,     0,     0,     0,     0,   306,
       3,     0,     0,     4,     0,     0,     0,   307,     0,     5,
       0,     0,     6,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,   257,     0,
       0,     0,     0,   308,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     309,     0,   310,   311,     0,     0,     0,     0,     0,    11,
       0,     0,     0,    12,     0,     0,     0,   312,     0,     0,
       0,   313,     0,   314,   257,   258,     0,     0,    13,     0,
       0,     0,     0,   315,    14,   316,   317,   318,     0,   403,
       0,     0,     0,     0,     0,     0,     0,     0,   338,     0,
       0,     0,     0,     0,     0,     0,   261,     0,     0,     0,
     319,   262,   263,   320,   257,     0,     0,     0,     0,     0,
       0,   258,     0,    15,    16,    17,     0,     0,   264,   265,
     266,   267,   268,     0,     0,   269,   270,     0,   271,   272,
     273,   274,   275,   276,   338,     0,     0,     0,     0,     0,
       0,     0,   261,     0,     0,     0,     0,   262,   263,     0,
       0,  -265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   264,   265,   266,   267,   268,     0,
       0,   269,   270,     0,   271,   272,   273,   274,   275,   276,
       0,     0,   261,     0,     0,     0,     0,   262,  -265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -265,  -265,  -265,   267,   268,     0,
       0,   269,   270,     0,   271,   272,   273,   274,   275,   276
};

static const yytype_int16 yycheck[] =
{
     131,    86,     2,    69,   170,     5,   178,   179,    85,    86,
      10,    11,     3,    75,   137,     3,     3,     3,     3,    53,
       9,   110,    46,    13,    72,   105,   102,    78,   159,   105,
     161,   162,    89,   326,   111,   112,    85,    75,    75,     9,
      20,   130,   132,    89,    99,    45,   177,    47,   133,    50,
     181,    40,    96,    53,   347,   216,   133,     4,     5,     6,
     221,   110,   111,    26,   119,    12,   123,   105,   105,   135,
      40,    89,   203,   239,   164,    55,     3,   249,    78,    79,
     169,   130,   126,    72,   256,   131,   258,    76,    88,    89,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   167,    76,   110,   156,   110,
     420,   168,   405,   244,   245,   181,     3,     3,     4,     5,
       6,   172,   110,   254,   255,    35,    12,   130,     3,   130,
       3,     4,     5,     6,   168,   123,    83,   217,   123,    12,
     450,   217,   130,   110,     3,     4,     5,     6,   172,    50,
      16,    17,    99,    12,    53,    41,    42,    43,   132,    69,
      59,   454,   168,   130,   170,   288,   297,    68,    41,    42,
      43,   302,   303,   345,   161,   161,   242,   168,   110,   169,
      53,    91,    41,    42,    43,   103,    99,   161,   162,   163,
     164,   123,   110,   153,    80,   142,   143,    83,   130,    89,
     160,   103,   169,   334,   335,   371,   119,    80,   110,    93,
      83,    87,   130,    99,   169,    46,    87,   172,   280,   304,
       3,    80,   284,   109,    83,   106,    99,   304,   130,   110,
     106,   403,     0,   119,    65,   106,   112,   145,   171,     3,
      99,   112,   110,   110,   112,   112,   119,   106,   169,   130,
     107,   172,     3,     4,     5,     6,   142,   143,   170,   168,
     119,    12,   130,   130,   395,    89,   397,   398,   280,   142,
     143,   337,   284,   169,   160,   161,   172,   277,     3,   121,
     125,   347,   168,   142,   143,   125,   169,   160,   161,   172,
      41,    42,    43,   123,   425,   168,    92,     3,     4,     5,
       6,   160,   161,   172,   122,   169,    12,   438,   172,   168,
       3,     4,     5,     6,    25,   169,    25,   169,   172,    12,
     172,     3,   169,   169,    25,   172,   172,     4,   119,    80,
      78,    88,    83,   168,     3,    41,    42,    43,     4,   405,
     471,    41,   473,   168,     6,   168,    13,   169,    99,    42,
      43,    62,   169,    62,   109,   124,    67,   169,    67,   172,
      41,    62,    73,    74,    73,    74,    67,     3,   119,   149,
     107,     3,    73,    74,    80,    72,    77,    83,     3,    90,
     107,    90,     3,    94,    95,    94,    95,    80,   123,    90,
      83,   142,   143,    99,    95,     0,    49,   168,   168,    93,
      44,   168,     7,   168,    89,   168,    99,    50,    88,   160,
     161,    16,   172,   119,    18,    53,   172,   168,    23,   168,
       3,    26,   169,   168,     3,   168,   119,    32,   129,   168,
      35,    36,   168,    89,   110,   169,   142,   143,    96,   168,
      99,   132,    47,    48,   172,    49,     6,     6,     6,   142,
     143,    99,   169,    58,   160,   161,   169,   169,    73,    94,
      73,   172,   168,   172,    73,    94,     3,   160,   161,   124,
     169,   169,     6,   168,   127,   168,   172,    82,   168,   132,
     169,    86,   134,   135,   136,   137,   138,   139,   140,    63,
     169,   169,    96,    23,   286,   170,   101,   169,   283,   152,
     153,   141,   107,   156,   157,    44,   159,   160,   161,   162,
     163,   164,   323,   130,   396,   119,    52,   204,   240,   297,
     246,   475,   126,   127,   290,   243,    95,   446,   132,   133,
     445,   215,   467,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,   146,   147,   148,    -1,   149,   150,   151,   152,   153,
      11,    -1,   156,   157,     7,   159,   160,   161,   162,   163,
     164,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    30,
      23,    -1,    -1,    26,    -1,    -1,    -1,    38,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    64,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   102,    -1,   104,    49,    96,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   114,   107,   116,   117,   118,    -1,   110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
     141,   132,   133,   144,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,   146,   147,   148,    -1,    -1,   149,   150,
     151,   152,   153,    -1,    -1,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,   151,   152,   153,    -1,
      -1,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
      -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,   150,   151,   152,   153,    -1,
      -1,   156,   157,    -1,   159,   160,   161,   162,   163,   164
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    16,    23,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   146,   147,   148,   174,   175,
     176,   177,   181,   183,   185,   186,   190,   191,   192,   198,
     200,   201,   202,   204,   207,   268,   269,    26,     3,   263,
       3,     3,   263,    75,   105,    89,    89,    93,   262,   263,
     263,    75,   105,    20,    55,     3,   270,   271,   145,   182,
     182,   182,     0,   171,   275,   107,   178,   178,    53,   168,
     210,   211,   215,     3,   170,   168,    89,   125,   193,   193,
     263,     3,   187,   263,   121,    89,   131,   125,   199,   199,
     263,   123,   172,   176,    92,   122,   226,   210,   211,     9,
      40,    76,   212,   213,    72,   212,   222,     3,     4,     5,
       6,    12,    83,    99,   142,   143,   229,   230,   247,   248,
     251,   252,   253,   254,   255,   256,     4,   184,   119,   263,
     263,    78,   220,    88,   168,   203,     3,   205,   206,   188,
     252,   188,    41,   263,   263,   210,   271,   168,   255,    13,
     216,   169,   169,   208,   209,   210,   215,   109,   214,   124,
     208,    50,    68,   227,   252,   252,   169,   172,    41,    89,
     123,   168,   203,     3,    41,    42,    43,    80,   119,   160,
     161,   168,   232,   233,   234,   235,   236,   237,   238,   239,
     241,   242,   243,   244,   245,   249,   250,   251,   188,     3,
     276,    59,   211,   149,   172,   220,   107,   189,   189,     3,
     179,   180,   217,   228,   231,   232,   222,   212,   223,   224,
     232,   222,   232,   109,   232,   134,   135,   136,   137,   138,
     139,   140,   246,   251,     3,   207,     3,   194,   195,   123,
     168,   170,   168,   168,   168,   106,   232,   240,    41,   119,
     233,   233,   211,   232,   110,   130,    18,    49,    96,   119,
     126,   127,   132,   133,   149,   150,   151,   152,   153,   156,
     157,   159,   160,   161,   162,   163,   164,    93,   169,   172,
     168,   232,   206,    44,   168,   169,   172,    89,   218,   219,
     172,     3,   123,   266,   267,   227,   208,   172,    85,   111,
     225,   227,    50,    50,    88,    11,    30,    38,    64,    81,
      83,    84,    98,   102,   104,   114,   116,   117,   118,   141,
     144,   196,   169,   172,   207,   169,   216,     3,   161,   211,
     246,   232,   232,   240,    87,   106,   112,   168,   119,   169,
     169,   232,   232,   233,   233,    96,   126,   168,    99,   119,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   263,     3,   230,   187,   230,
     180,   168,   257,   258,   259,   260,   261,   263,   272,   220,
     231,     3,   224,   232,   232,   188,   168,   168,   168,    99,
     119,   197,   195,   228,   169,    89,   123,   103,    87,   112,
     232,   232,   211,   110,   233,   168,   211,   228,    99,   169,
     169,   207,    25,    62,    67,    73,    74,    90,    95,   273,
     172,   123,   264,   265,   266,    46,    65,   221,     6,     6,
       6,    99,   169,   232,   196,   232,   232,   112,   103,   169,
     233,   211,   228,   169,   169,   169,    94,    73,    73,    73,
      94,   258,     3,   232,   124,   169,   169,   172,   169,   169,
     112,   232,   169,   169,   265,   259,   258,   168,   228,     6,
      77,   129,   276,    46,   169,   168,   232,   274,   169,   232,
       3,   250,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   173,   174,   175,   175,   176,   176,   176,   176,   176,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   182,   182,
     183,   184,   185,   185,   186,   186,   187,   188,   189,   189,
     190,   191,   191,   191,   192,   192,   192,   192,   193,   193,
     194,   194,   195,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   197,
     197,   197,   198,   198,   198,   199,   199,   200,   201,   202,
     202,   203,   203,   204,   205,   205,   206,   207,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   213,
     213,   213,   214,   214,   215,   216,   216,   217,   218,   218,
     219,   220,   220,   221,   221,   221,   221,   222,   222,   223,
     223,   224,   225,   225,   225,   226,   226,   227,   227,   227,
     227,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     232,   232,   232,   232,   232,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   234,   235,   235,   235,   235,
     235,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   237,   237,   238,   238,   238,   238,   239,   239,
     239,   239,   240,   240,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   244,   245,   246,   246,   246,
     246,   246,   246,   246,   247,   248,   249,   250,   250,   250,
     250,   251,   251,   251,   251,   251,   251,   252,   253,   253,
     254,   254,   255,   256,   257,   257,   258,   258,   259,   259,
     260,   260,   261,   262,   263,   263,   264,   264,   265,   265,
     266,   266,   267,   267,   268,   268,   269,   270,   270,   271,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   274,   275,   275,   276,   276
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     1,     3,     1,     4,     2,     2,     2,     1,     0,
       4,     1,     2,     5,     7,     5,     1,     1,     3,     0,
       5,     2,     3,     2,     8,     7,     6,     7,     3,     0,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       6,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       2,     0,     4,     4,     3,     2,     0,     4,     2,     8,
       5,     3,     0,     5,     1,     3,     3,     2,     2,     6,
       1,     1,     1,     3,     3,     3,     3,     5,     2,     1,
       1,     1,     1,     0,     7,     1,     0,     1,     1,     0,
       2,     2,     0,     5,     3,     2,     0,     3,     0,     1,
       3,     2,     1,     1,     0,     2,     0,     2,     2,     4,
       2,     4,     0,     1,     3,     1,     0,     1,     3,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     5,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     3,     2,     1,     1,     3,     1,     5,     1,     0,
       2,     1,     1,     0,     1,     0,     2,     1,     3,     3,
       4,     6,     8,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     0,     1,     1,     0,     1,     3
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
#line 1921 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1927 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1933 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1939 "bison_parser.cpp"
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
#line 1952 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1958 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1964 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_hints: /* opt_hints  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1977 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint_list: /* hint_list  */
#line 149 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 1990 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 1996 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2002 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2008 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2014 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2020 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2026 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 146 "bison_parser.y"
            { }
#line 2032 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2038 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 146 "bison_parser.y"
            { }
#line 2044 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2050 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2056 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2062 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 146 "bison_parser.y"
            { }
#line 2068 "bison_parser.cpp"
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
#line 2081 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2087 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).column_type_t)); }
#line 2093 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 146 "bison_parser.y"
            { }
#line 2099 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2105 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 146 "bison_parser.y"
            { }
#line 2111 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2117 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2123 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2129 "bison_parser.cpp"
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
#line 2142 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2148 "bison_parser.cpp"
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
#line 2161 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2167 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2173 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2179 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2185 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2191 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2197 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2203 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2209 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 146 "bison_parser.y"
            { }
#line 2215 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2221 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 146 "bison_parser.y"
            { }
#line 2227 "bison_parser.cpp"
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
#line 2240 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2246 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2252 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2258 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2264 "bison_parser.cpp"
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
#line 2277 "bison_parser.cpp"
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
#line 2290 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2296 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 146 "bison_parser.y"
            { }
#line 2302 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2308 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2314 "bison_parser.cpp"
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
#line 2327 "bison_parser.cpp"
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
#line 2340 "bison_parser.cpp"
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
#line 2353 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2359 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2365 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2371 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2377 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2383 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2389 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2395 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2401 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2407 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2413 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2419 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2425 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2431 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2437 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2443 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 146 "bison_parser.y"
            { }
#line 2449 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2455 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2461 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2467 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2473 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2479 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2485 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2491 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2497 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2503 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2509 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2515 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2521 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2527 "bison_parser.cpp"
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
#line 2540 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2552 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 147 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2558 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2564 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2570 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2576 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2582 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2588 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2594 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2600 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2606 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2612 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 146 "bison_parser.y"
            { }
#line 2618 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2624 "bison_parser.cpp"
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
#line 2637 "bison_parser.cpp"
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

#line 2744 "bison_parser.cpp"

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
#line 2962 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 278 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 2973 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 284 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 2984 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 293 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 2993 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 297 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3002 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 301 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3010 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 304 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3018 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 307 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3026 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 314 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3032 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 315 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3038 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 316 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3044 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 317 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3050 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 318 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3056 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 319 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3062 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 320 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3068 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 321 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3074 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 322 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3080 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 331 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3086 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 332 "bison_parser.y"
                        { (yyval.expr_vec) = nullptr; }
#line 3092 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 337 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3098 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 338 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3104 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 342 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3113 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 346 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3123 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 358 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3131 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 361 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3139 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 364 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3147 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 378 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3157 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 388 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3166 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 392 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3176 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 406 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3187 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 412 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3198 "bison_parser.cpp"
    break;

  case 36: /* file_type: IDENTIFIER  */
#line 421 "bison_parser.y"
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
#line 3217 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 438 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3223 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 442 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3231 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 445 "bison_parser.y"
                                     { (yyval.import_type_t) = kImportAuto; }
#line 3237 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 454 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3248 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 468 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3256 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 471 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3266 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 476 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3276 "bison_parser.cpp"
    break;

  case 44: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 490 "bison_parser.y"
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
#line 3294 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 503 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3306 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 510 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3318 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 517 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3331 "bison_parser.cpp"
    break;

  case 48: /* opt_not_exists: IF NOT EXISTS  */
#line 528 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3337 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: %empty  */
#line 529 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3343 "bison_parser.cpp"
    break;

  case 50: /* column_def_commalist: column_def  */
#line 533 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3349 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 534 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3355 "bison_parser.cpp"
    break;

  case 52: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 538 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3363 "bison_parser.cpp"
    break;

  case 53: /* column_type: TINYINT  */
#line 544 "bison_parser.y"
                        { (yyval.column_type_t) = new ColumnType{DataType::INT, "8"}; }
#line 3369 "bison_parser.cpp"
    break;

  case 54: /* column_type: SMALLINT  */
#line 545 "bison_parser.y"
                         { (yyval.column_type_t) = new ColumnType{DataType::INT, "16"}; }
#line 3375 "bison_parser.cpp"
    break;

  case 55: /* column_type: INT  */
#line 546 "bison_parser.y"
                    { (yyval.column_type_t) = new ColumnType{DataType::INT, "32"}; }
#line 3381 "bison_parser.cpp"
    break;

  case 56: /* column_type: BIGINT  */
#line 547 "bison_parser.y"
                       { (yyval.column_type_t) = new ColumnType{DataType::INT, "64"}; }
#line 3387 "bison_parser.cpp"
    break;

  case 57: /* column_type: LONG  */
#line 548 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::INT, "64"}; }
#line 3393 "bison_parser.cpp"
    break;

  case 58: /* column_type: FLOAT  */
#line 549 "bison_parser.y"
                      { (yyval.column_type_t) = new ColumnType{DataType::FLOAT}; }
#line 3399 "bison_parser.cpp"
    break;

  case 59: /* column_type: DOUBLE  */
#line 550 "bison_parser.y"
                       { (yyval.column_type_t) = new ColumnType{DataType::DOUBLE}; }
#line 3405 "bison_parser.cpp"
    break;

  case 60: /* column_type: DECIMAL '(' INTVAL ',' INTVAL ')'  */
#line 551 "bison_parser.y"
                                                  { (yyval.column_type_t) = new ColumnType{DataType::DECIMAL, (yyvsp[-3].sval), (yyvsp[-1].sval)}; }
#line 3411 "bison_parser.cpp"
    break;

  case 61: /* column_type: BOOLEAN  */
#line 552 "bison_parser.y"
                        { (yyval.column_type_t) = new ColumnType{DataType::BOOLEAN}; }
#line 3417 "bison_parser.cpp"
    break;

  case 62: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 553 "bison_parser.y"
                                       { (yyval.column_type_t) = new ColumnType{DataType::VARCHAR, (yyvsp[-1].sval)}; }
#line 3423 "bison_parser.cpp"
    break;

  case 63: /* column_type: CHAR '(' INTVAL ')'  */
#line 554 "bison_parser.y"
                                    { (yyval.column_type_t) = new ColumnType{DataType::CHAR, (yyvsp[-1].sval)}; }
#line 3429 "bison_parser.cpp"
    break;

  case 64: /* column_type: TEXT  */
#line 555 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::TEXT}; }
#line 3435 "bison_parser.cpp"
    break;

  case 65: /* column_type: DATETIME  */
#line 556 "bison_parser.y"
                         { (yyval.column_type_t) = new ColumnType{DataType::DATETIME}; }
#line 3441 "bison_parser.cpp"
    break;

  case 66: /* column_type: DATE  */
#line 557 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::DATE}; }
#line 3447 "bison_parser.cpp"
    break;

  case 67: /* column_type: TIMESTAMP  */
#line 558 "bison_parser.y"
                          { (yyval.column_type_t) = new ColumnType{DataType::TIMESTAMP}; }
#line 3453 "bison_parser.cpp"
    break;

  case 68: /* column_type: TIME  */
#line 559 "bison_parser.y"
                     { (yyval.column_type_t) = new ColumnType{DataType::TIME}; }
#line 3459 "bison_parser.cpp"
    break;

  case 69: /* opt_column_nullable: NULL  */
#line 563 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3465 "bison_parser.cpp"
    break;

  case 70: /* opt_column_nullable: NOT NULL  */
#line 564 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3471 "bison_parser.cpp"
    break;

  case 71: /* opt_column_nullable: %empty  */
#line 565 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3477 "bison_parser.cpp"
    break;

  case 72: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 575 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3488 "bison_parser.cpp"
    break;

  case 73: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 581 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3499 "bison_parser.cpp"
    break;

  case 74: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 587 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3509 "bison_parser.cpp"
    break;

  case 75: /* opt_exists: IF EXISTS  */
#line 595 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3515 "bison_parser.cpp"
    break;

  case 76: /* opt_exists: %empty  */
#line 596 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3521 "bison_parser.cpp"
    break;

  case 77: /* delete_statement: DELETE FROM table_name opt_where  */
#line 605 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3532 "bison_parser.cpp"
    break;

  case 78: /* truncate_statement: TRUNCATE table_name  */
#line 614 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3542 "bison_parser.cpp"
    break;

  case 79: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 627 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3554 "bison_parser.cpp"
    break;

  case 80: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 634 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3566 "bison_parser.cpp"
    break;

  case 81: /* opt_column_list: '(' ident_commalist ')'  */
#line 645 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3572 "bison_parser.cpp"
    break;

  case 82: /* opt_column_list: %empty  */
#line 646 "bison_parser.y"
                                    { (yyval.str_vec) = nullptr; }
#line 3578 "bison_parser.cpp"
    break;

  case 83: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 656 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3589 "bison_parser.cpp"
    break;

  case 84: /* update_clause_commalist: update_clause  */
#line 665 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3595 "bison_parser.cpp"
    break;

  case 85: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 666 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3601 "bison_parser.cpp"
    break;

  case 86: /* update_clause: IDENTIFIER '=' expr  */
#line 670 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3611 "bison_parser.cpp"
    break;

  case 87: /* select_statement: opt_with_clause select_with_paren  */
#line 682 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3620 "bison_parser.cpp"
    break;

  case 88: /* select_statement: opt_with_clause select_no_paren  */
#line 686 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3629 "bison_parser.cpp"
    break;

  case 89: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 690 "bison_parser.y"
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
#line 3645 "bison_parser.cpp"
    break;

  case 92: /* select_within_set_operation_no_parentheses: select_clause  */
#line 708 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3651 "bison_parser.cpp"
    break;

  case 93: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 709 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3664 "bison_parser.cpp"
    break;

  case 94: /* select_with_paren: '(' select_no_paren ')'  */
#line 720 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3670 "bison_parser.cpp"
    break;

  case 95: /* select_with_paren: '(' select_with_paren ')'  */
#line 721 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3676 "bison_parser.cpp"
    break;

  case 96: /* select_no_paren: select_clause opt_order opt_limit  */
#line 725 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3691 "bison_parser.cpp"
    break;

  case 97: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 735 "bison_parser.y"
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
#line 3706 "bison_parser.cpp"
    break;

  case 98: /* set_operator: set_type opt_all  */
#line 748 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3715 "bison_parser.cpp"
    break;

  case 99: /* set_type: UNION  */
#line 755 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3724 "bison_parser.cpp"
    break;

  case 100: /* set_type: INTERSECT  */
#line 759 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3733 "bison_parser.cpp"
    break;

  case 101: /* set_type: EXCEPT  */
#line 763 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3742 "bison_parser.cpp"
    break;

  case 102: /* opt_all: ALL  */
#line 770 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3750 "bison_parser.cpp"
    break;

  case 103: /* opt_all: %empty  */
#line 773 "bison_parser.y"
                                    {
		(yyval.bval) = false;
	}
#line 3758 "bison_parser.cpp"
    break;

  case 104: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 779 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3772 "bison_parser.cpp"
    break;

  case 105: /* opt_distinct: DISTINCT  */
#line 791 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3778 "bison_parser.cpp"
    break;

  case 106: /* opt_distinct: %empty  */
#line 792 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3784 "bison_parser.cpp"
    break;

  case 108: /* opt_from_clause: from_clause  */
#line 800 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3790 "bison_parser.cpp"
    break;

  case 109: /* opt_from_clause: %empty  */
#line 801 "bison_parser.y"
                             { (yyval.table) = nullptr; }
#line 3796 "bison_parser.cpp"
    break;

  case 110: /* from_clause: FROM table_ref  */
#line 805 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3802 "bison_parser.cpp"
    break;

  case 111: /* opt_where: WHERE expr  */
#line 810 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3808 "bison_parser.cpp"
    break;

  case 112: /* opt_where: %empty  */
#line 811 "bison_parser.y"
                                    { (yyval.expr) = nullptr; }
#line 3814 "bison_parser.cpp"
    break;

  case 113: /* opt_group: GROUP BY expr_list HAVING expr  */
#line 815 "bison_parser.y"
                                               {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-2].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3824 "bison_parser.cpp"
    break;

  case 114: /* opt_group: GROUP BY expr_list  */
#line 820 "bison_parser.y"
                                   {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[0].expr_vec);
			(yyval.group_t)->having = nullptr;
		}
#line 3834 "bison_parser.cpp"
    break;

  case 115: /* opt_group: HAVING expr  */
#line 825 "bison_parser.y"
                            {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = nullptr;
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3844 "bison_parser.cpp"
    break;

  case 116: /* opt_group: %empty  */
#line 830 "bison_parser.y"
                                    { (yyval.group_t) = nullptr; }
#line 3850 "bison_parser.cpp"
    break;

  case 117: /* opt_order: ORDER BY order_list  */
#line 834 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3856 "bison_parser.cpp"
    break;

  case 118: /* opt_order: %empty  */
#line 835 "bison_parser.y"
                                    { (yyval.order_vec) = nullptr; }
#line 3862 "bison_parser.cpp"
    break;

  case 119: /* order_list: order_desc  */
#line 839 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3868 "bison_parser.cpp"
    break;

  case 120: /* order_list: order_list ',' order_desc  */
#line 840 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3874 "bison_parser.cpp"
    break;

  case 121: /* order_desc: expr opt_order_type  */
#line 844 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3880 "bison_parser.cpp"
    break;

  case 122: /* opt_order_type: ASC  */
#line 848 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3886 "bison_parser.cpp"
    break;

  case 123: /* opt_order_type: DESC  */
#line 849 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3892 "bison_parser.cpp"
    break;

  case 124: /* opt_order_type: %empty  */
#line 850 "bison_parser.y"
                                    { (yyval.order_type) = kOrderAsc; }
#line 3898 "bison_parser.cpp"
    break;

  case 125: /* opt_top: TOP int_literal  */
#line 856 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3904 "bison_parser.cpp"
    break;

  case 126: /* opt_top: %empty  */
#line 857 "bison_parser.y"
                                    { (yyval.limit) = nullptr; }
#line 3910 "bison_parser.cpp"
    break;

  case 127: /* opt_limit: LIMIT expr  */
#line 861 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3916 "bison_parser.cpp"
    break;

  case 128: /* opt_limit: OFFSET expr  */
#line 862 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3922 "bison_parser.cpp"
    break;

  case 129: /* opt_limit: LIMIT expr OFFSET expr  */
#line 863 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3928 "bison_parser.cpp"
    break;

  case 130: /* opt_limit: LIMIT ALL  */
#line 864 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3934 "bison_parser.cpp"
    break;

  case 131: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 865 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3940 "bison_parser.cpp"
    break;

  case 132: /* opt_limit: %empty  */
#line 866 "bison_parser.y"
                                    { (yyval.limit) = nullptr; }
#line 3946 "bison_parser.cpp"
    break;

  case 133: /* expr_list: expr_alias  */
#line 873 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3952 "bison_parser.cpp"
    break;

  case 134: /* expr_list: expr_list ',' expr_alias  */
#line 874 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3958 "bison_parser.cpp"
    break;

  case 135: /* opt_literal_list: literal_list  */
#line 878 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 3964 "bison_parser.cpp"
    break;

  case 136: /* opt_literal_list: %empty  */
#line 879 "bison_parser.y"
                                    { (yyval.expr_vec) = nullptr; }
#line 3970 "bison_parser.cpp"
    break;

  case 137: /* literal_list: literal  */
#line 883 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3976 "bison_parser.cpp"
    break;

  case 138: /* literal_list: literal_list ',' literal  */
#line 884 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3982 "bison_parser.cpp"
    break;

  case 139: /* expr_alias: expr opt_alias  */
#line 888 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 3994 "bison_parser.cpp"
    break;

  case 145: /* operand: '(' expr ')'  */
#line 906 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4000 "bison_parser.cpp"
    break;

  case 153: /* operand: '(' select_no_paren ')'  */
#line 914 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4006 "bison_parser.cpp"
    break;

  case 156: /* unary_expr: '-' operand  */
#line 923 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4012 "bison_parser.cpp"
    break;

  case 157: /* unary_expr: NOT operand  */
#line 924 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4018 "bison_parser.cpp"
    break;

  case 158: /* unary_expr: operand ISNULL  */
#line 925 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4024 "bison_parser.cpp"
    break;

  case 159: /* unary_expr: operand IS NULL  */
#line 926 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4030 "bison_parser.cpp"
    break;

  case 160: /* unary_expr: operand IS NOT NULL  */
#line 927 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4036 "bison_parser.cpp"
    break;

  case 162: /* binary_expr: operand '-' operand  */
#line 932 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4042 "bison_parser.cpp"
    break;

  case 163: /* binary_expr: operand '+' operand  */
#line 933 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4048 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand '/' operand  */
#line 934 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4054 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand '*' operand  */
#line 935 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4060 "bison_parser.cpp"
    break;

  case 166: /* binary_expr: operand '%' operand  */
#line 936 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4066 "bison_parser.cpp"
    break;

  case 167: /* binary_expr: operand '^' operand  */
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4072 "bison_parser.cpp"
    break;

  case 168: /* binary_expr: operand LIKE operand  */
#line 938 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4078 "bison_parser.cpp"
    break;

  case 169: /* binary_expr: operand NOT LIKE operand  */
#line 939 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4084 "bison_parser.cpp"
    break;

  case 170: /* binary_expr: operand ILIKE operand  */
#line 940 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4090 "bison_parser.cpp"
    break;

  case 171: /* binary_expr: operand CONCAT operand  */
#line 941 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4096 "bison_parser.cpp"
    break;

  case 172: /* logic_expr: expr AND expr  */
#line 945 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4102 "bison_parser.cpp"
    break;

  case 173: /* logic_expr: expr OR expr  */
#line 946 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4108 "bison_parser.cpp"
    break;

  case 174: /* in_expr: operand IN '(' expr_list ')'  */
#line 950 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4114 "bison_parser.cpp"
    break;

  case 175: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 951 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4120 "bison_parser.cpp"
    break;

  case 176: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 952 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4126 "bison_parser.cpp"
    break;

  case 177: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 953 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4132 "bison_parser.cpp"
    break;

  case 178: /* case_expr: CASE expr case_list END  */
#line 959 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4138 "bison_parser.cpp"
    break;

  case 179: /* case_expr: CASE expr case_list ELSE expr END  */
#line 960 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4144 "bison_parser.cpp"
    break;

  case 180: /* case_expr: CASE case_list END  */
#line 961 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4150 "bison_parser.cpp"
    break;

  case 181: /* case_expr: CASE case_list ELSE expr END  */
#line 962 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4156 "bison_parser.cpp"
    break;

  case 182: /* case_list: WHEN expr THEN expr  */
#line 966 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4162 "bison_parser.cpp"
    break;

  case 183: /* case_list: case_list WHEN expr THEN expr  */
#line 967 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4168 "bison_parser.cpp"
    break;

  case 184: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 971 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4174 "bison_parser.cpp"
    break;

  case 185: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 972 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4180 "bison_parser.cpp"
    break;

  case 186: /* comp_expr: operand '=' operand  */
#line 976 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4186 "bison_parser.cpp"
    break;

  case 187: /* comp_expr: operand EQUALS operand  */
#line 977 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4192 "bison_parser.cpp"
    break;

  case 188: /* comp_expr: operand NOTEQUALS operand  */
#line 978 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4198 "bison_parser.cpp"
    break;

  case 189: /* comp_expr: operand '<' operand  */
#line 979 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4204 "bison_parser.cpp"
    break;

  case 190: /* comp_expr: operand '>' operand  */
#line 980 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4210 "bison_parser.cpp"
    break;

  case 191: /* comp_expr: operand LESSEQ operand  */
#line 981 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4216 "bison_parser.cpp"
    break;

  case 192: /* comp_expr: operand GREATEREQ operand  */
#line 982 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4222 "bison_parser.cpp"
    break;

  case 193: /* function_expr: IDENTIFIER '(' ')'  */
#line 986 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4228 "bison_parser.cpp"
    break;

  case 194: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 987 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4234 "bison_parser.cpp"
    break;

  case 195: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 991 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4240 "bison_parser.cpp"
    break;

  case 196: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 995 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), std::move(*(yyvsp[-1].column_type_t))); }
#line 4246 "bison_parser.cpp"
    break;

  case 197: /* datetime_field: SECOND  */
#line 999 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4252 "bison_parser.cpp"
    break;

  case 198: /* datetime_field: MINUTE  */
#line 1000 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4258 "bison_parser.cpp"
    break;

  case 199: /* datetime_field: HOUR  */
#line 1001 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4264 "bison_parser.cpp"
    break;

  case 200: /* datetime_field: DAY  */
#line 1002 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4270 "bison_parser.cpp"
    break;

  case 201: /* datetime_field: MONTH  */
#line 1003 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4276 "bison_parser.cpp"
    break;

  case 202: /* datetime_field: YEAR  */
#line 1004 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4282 "bison_parser.cpp"
    break;

  case 203: /* datetime_field: QUARTER  */
#line 1005 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeQuarter; }
#line 4288 "bison_parser.cpp"
    break;

  case 204: /* date_literal: DATE string_literal  */
#line 1009 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeDate((yyvsp[0].expr)->name); }
#line 4294 "bison_parser.cpp"
    break;

  case 205: /* interval_literal: INTERVAL string_literal datetime_field  */
#line 1013 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeInterval((yyvsp[-1].expr)->name, (yyvsp[0].datetime_field)); }
#line 4300 "bison_parser.cpp"
    break;

  case 206: /* between_expr: operand BETWEEN operand AND operand  */
#line 1017 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4306 "bison_parser.cpp"
    break;

  case 207: /* column_name: IDENTIFIER  */
#line 1021 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4312 "bison_parser.cpp"
    break;

  case 208: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1022 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4318 "bison_parser.cpp"
    break;

  case 209: /* column_name: '*'  */
#line 1023 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4324 "bison_parser.cpp"
    break;

  case 210: /* column_name: IDENTIFIER '.' '*'  */
#line 1024 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4330 "bison_parser.cpp"
    break;

  case 217: /* string_literal: STRING  */
#line 1037 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4336 "bison_parser.cpp"
    break;

  case 218: /* bool_literal: TRUE  */
#line 1041 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4342 "bison_parser.cpp"
    break;

  case 219: /* bool_literal: FALSE  */
#line 1042 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4348 "bison_parser.cpp"
    break;

  case 220: /* num_literal: FLOATVAL  */
#line 1046 "bison_parser.y"
                         { (yyval.expr) = Expr::makeFloatLiteral((yyvsp[0].sval)); }
#line 4354 "bison_parser.cpp"
    break;

  case 222: /* int_literal: INTVAL  */
#line 1051 "bison_parser.y"
                       { (yyval.expr) = Expr::makeIntLiteral((yyvsp[0].sval)); }
#line 4360 "bison_parser.cpp"
    break;

  case 223: /* null_literal: NULL  */
#line 1055 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4366 "bison_parser.cpp"
    break;

  case 225: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1064 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4377 "bison_parser.cpp"
    break;

  case 229: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1080 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4388 "bison_parser.cpp"
    break;

  case 230: /* table_ref_commalist: table_ref_atomic  */
#line 1089 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4394 "bison_parser.cpp"
    break;

  case 231: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1090 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4400 "bison_parser.cpp"
    break;

  case 232: /* table_ref_name: table_name opt_table_alias  */
#line 1095 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4412 "bison_parser.cpp"
    break;

  case 233: /* table_ref_name_no_alias: table_name  */
#line 1106 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4422 "bison_parser.cpp"
    break;

  case 234: /* table_name: IDENTIFIER  */
#line 1115 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4428 "bison_parser.cpp"
    break;

  case 235: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1116 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4434 "bison_parser.cpp"
    break;

  case 237: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1122 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4440 "bison_parser.cpp"
    break;

  case 239: /* opt_table_alias: %empty  */
#line 1128 "bison_parser.y"
                                    { (yyval.alias_t) = nullptr; }
#line 4446 "bison_parser.cpp"
    break;

  case 240: /* alias: AS IDENTIFIER  */
#line 1133 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4452 "bison_parser.cpp"
    break;

  case 241: /* alias: IDENTIFIER  */
#line 1134 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4458 "bison_parser.cpp"
    break;

  case 243: /* opt_alias: %empty  */
#line 1140 "bison_parser.y"
                                    { (yyval.alias_t) = nullptr; }
#line 4464 "bison_parser.cpp"
    break;

  case 245: /* opt_with_clause: %empty  */
#line 1150 "bison_parser.y"
                                    { (yyval.with_description_vec) = nullptr; }
#line 4470 "bison_parser.cpp"
    break;

  case 246: /* with_clause: WITH with_description_list  */
#line 1154 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4476 "bison_parser.cpp"
    break;

  case 247: /* with_description_list: with_description  */
#line 1158 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4485 "bison_parser.cpp"
    break;

  case 248: /* with_description_list: with_description_list ',' with_description  */
#line 1162 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4494 "bison_parser.cpp"
    break;

  case 249: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1169 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4504 "bison_parser.cpp"
    break;

  case 250: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1183 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4516 "bison_parser.cpp"
    break;

  case 251: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1191 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4529 "bison_parser.cpp"
    break;

  case 252: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1201 "bison_parser.y"
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
#line 4549 "bison_parser.cpp"
    break;

  case 253: /* opt_join_type: INNER  */
#line 1219 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4555 "bison_parser.cpp"
    break;

  case 254: /* opt_join_type: LEFT OUTER  */
#line 1220 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4561 "bison_parser.cpp"
    break;

  case 255: /* opt_join_type: LEFT  */
#line 1221 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4567 "bison_parser.cpp"
    break;

  case 256: /* opt_join_type: RIGHT OUTER  */
#line 1222 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4573 "bison_parser.cpp"
    break;

  case 257: /* opt_join_type: RIGHT  */
#line 1223 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4579 "bison_parser.cpp"
    break;

  case 258: /* opt_join_type: FULL OUTER  */
#line 1224 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4585 "bison_parser.cpp"
    break;

  case 259: /* opt_join_type: OUTER  */
#line 1225 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4591 "bison_parser.cpp"
    break;

  case 260: /* opt_join_type: FULL  */
#line 1226 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4597 "bison_parser.cpp"
    break;

  case 261: /* opt_join_type: CROSS  */
#line 1227 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4603 "bison_parser.cpp"
    break;

  case 262: /* opt_join_type: %empty  */
#line 1228 "bison_parser.y"
                                                { (yyval.uval) = kJoinInner; }
#line 4609 "bison_parser.cpp"
    break;

  case 266: /* ident_commalist: IDENTIFIER  */
#line 1248 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4615 "bison_parser.cpp"
    break;

  case 267: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1249 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4621 "bison_parser.cpp"
    break;


#line 4625 "bison_parser.cpp"

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

#line 1252 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
