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
  YYSYMBOL_ARRAY = 132,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 133,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 134,                    /* ILIKE  */
  YYSYMBOL_SECOND = 135,                   /* SECOND  */
  YYSYMBOL_MINUTE = 136,                   /* MINUTE  */
  YYSYMBOL_HOUR = 137,                     /* HOUR  */
  YYSYMBOL_DAY = 138,                      /* DAY  */
  YYSYMBOL_MONTH = 139,                    /* MONTH  */
  YYSYMBOL_YEAR = 140,                     /* YEAR  */
  YYSYMBOL_QUARTER = 141,                  /* QUARTER  */
  YYSYMBOL_DECIMAL = 142,                  /* DECIMAL  */
  YYSYMBOL_TRUE = 143,                     /* TRUE  */
  YYSYMBOL_FALSE = 144,                    /* FALSE  */
  YYSYMBOL_BOOLEAN = 145,                  /* BOOLEAN  */
  YYSYMBOL_TRANSACTION = 146,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 147,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 148,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 149,                 /* ROLLBACK  */
  YYSYMBOL_150_ = 150,                     /* '='  */
  YYSYMBOL_EQUALS = 151,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 152,                /* NOTEQUALS  */
  YYSYMBOL_153_ = 153,                     /* '<'  */
  YYSYMBOL_154_ = 154,                     /* '>'  */
  YYSYMBOL_LESS = 155,                     /* LESS  */
  YYSYMBOL_GREATER = 156,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 157,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 158,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 159,                  /* NOTNULL  */
  YYSYMBOL_160_ = 160,                     /* '+'  */
  YYSYMBOL_161_ = 161,                     /* '-'  */
  YYSYMBOL_162_ = 162,                     /* '*'  */
  YYSYMBOL_163_ = 163,                     /* '/'  */
  YYSYMBOL_164_ = 164,                     /* '%'  */
  YYSYMBOL_165_ = 165,                     /* '^'  */
  YYSYMBOL_UMINUS = 166,                   /* UMINUS  */
  YYSYMBOL_167_ = 167,                     /* '['  */
  YYSYMBOL_168_ = 168,                     /* ']'  */
  YYSYMBOL_169_ = 169,                     /* '('  */
  YYSYMBOL_170_ = 170,                     /* ')'  */
  YYSYMBOL_171_ = 171,                     /* '.'  */
  YYSYMBOL_172_ = 172,                     /* ';'  */
  YYSYMBOL_173_ = 173,                     /* ','  */
  YYSYMBOL_174_ = 174,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 175,                 /* $accept  */
  YYSYMBOL_input = 176,                    /* input  */
  YYSYMBOL_statement_list = 177,           /* statement_list  */
  YYSYMBOL_statement = 178,                /* statement  */
  YYSYMBOL_preparable_statement = 179,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 180,                /* opt_hints  */
  YYSYMBOL_hint_list = 181,                /* hint_list  */
  YYSYMBOL_hint = 182,                     /* hint  */
  YYSYMBOL_transaction_statement = 183,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 184,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 185,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 186,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 187,        /* execute_statement  */
  YYSYMBOL_import_statement = 188,         /* import_statement  */
  YYSYMBOL_file_type = 189,                /* file_type  */
  YYSYMBOL_file_path = 190,                /* file_path  */
  YYSYMBOL_opt_file_type = 191,            /* opt_file_type  */
  YYSYMBOL_export_statement = 192,         /* export_statement  */
  YYSYMBOL_show_statement = 193,           /* show_statement  */
  YYSYMBOL_create_statement = 194,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 195,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 196,     /* column_def_commalist  */
  YYSYMBOL_column_def = 197,               /* column_def  */
  YYSYMBOL_column_type = 198,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 199,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 200,           /* drop_statement  */
  YYSYMBOL_opt_exists = 201,               /* opt_exists  */
  YYSYMBOL_delete_statement = 202,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 203,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 204,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 205,          /* opt_column_list  */
  YYSYMBOL_update_statement = 206,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 207,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 208,            /* update_clause  */
  YYSYMBOL_select_statement = 209,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 210, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 211, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 212,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 213,          /* select_no_paren  */
  YYSYMBOL_set_operator = 214,             /* set_operator  */
  YYSYMBOL_set_type = 215,                 /* set_type  */
  YYSYMBOL_opt_all = 216,                  /* opt_all  */
  YYSYMBOL_select_clause = 217,            /* select_clause  */
  YYSYMBOL_opt_distinct = 218,             /* opt_distinct  */
  YYSYMBOL_select_list = 219,              /* select_list  */
  YYSYMBOL_opt_from_clause = 220,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 221,              /* from_clause  */
  YYSYMBOL_opt_where = 222,                /* opt_where  */
  YYSYMBOL_opt_group = 223,                /* opt_group  */
  YYSYMBOL_opt_order = 224,                /* opt_order  */
  YYSYMBOL_order_list = 225,               /* order_list  */
  YYSYMBOL_order_desc = 226,               /* order_desc  */
  YYSYMBOL_opt_order_type = 227,           /* opt_order_type  */
  YYSYMBOL_opt_top = 228,                  /* opt_top  */
  YYSYMBOL_opt_limit = 229,                /* opt_limit  */
  YYSYMBOL_expr_list = 230,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 231,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 232,             /* literal_list  */
  YYSYMBOL_expr_alias = 233,               /* expr_alias  */
  YYSYMBOL_expr = 234,                     /* expr  */
  YYSYMBOL_operand = 235,                  /* operand  */
  YYSYMBOL_scalar_expr = 236,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 237,               /* unary_expr  */
  YYSYMBOL_binary_expr = 238,              /* binary_expr  */
  YYSYMBOL_logic_expr = 239,               /* logic_expr  */
  YYSYMBOL_in_expr = 240,                  /* in_expr  */
  YYSYMBOL_case_expr = 241,                /* case_expr  */
  YYSYMBOL_case_list = 242,                /* case_list  */
  YYSYMBOL_exists_expr = 243,              /* exists_expr  */
  YYSYMBOL_comp_expr = 244,                /* comp_expr  */
  YYSYMBOL_function_expr = 245,            /* function_expr  */
  YYSYMBOL_extract_expr = 246,             /* extract_expr  */
  YYSYMBOL_cast_expr = 247,                /* cast_expr  */
  YYSYMBOL_datetime_field = 248,           /* datetime_field  */
  YYSYMBOL_date_literal = 249,             /* date_literal  */
  YYSYMBOL_interval_literal = 250,         /* interval_literal  */
  YYSYMBOL_array_expr = 251,               /* array_expr  */
  YYSYMBOL_array_index = 252,              /* array_index  */
  YYSYMBOL_between_expr = 253,             /* between_expr  */
  YYSYMBOL_column_name = 254,              /* column_name  */
  YYSYMBOL_literal = 255,                  /* literal  */
  YYSYMBOL_string_literal = 256,           /* string_literal  */
  YYSYMBOL_bool_literal = 257,             /* bool_literal  */
  YYSYMBOL_num_literal = 258,              /* num_literal  */
  YYSYMBOL_int_literal = 259,              /* int_literal  */
  YYSYMBOL_null_literal = 260,             /* null_literal  */
  YYSYMBOL_param_expr = 261,               /* param_expr  */
  YYSYMBOL_table_ref = 262,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 263,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 264, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 265,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 266,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 267,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 268,               /* table_name  */
  YYSYMBOL_table_alias = 269,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 270,          /* opt_table_alias  */
  YYSYMBOL_alias = 271,                    /* alias  */
  YYSYMBOL_opt_alias = 272,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 273,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 274,              /* with_clause  */
  YYSYMBOL_with_description_list = 275,    /* with_description_list  */
  YYSYMBOL_with_description = 276,         /* with_description  */
  YYSYMBOL_join_clause = 277,              /* join_clause  */
  YYSYMBOL_opt_join_type = 278,            /* opt_join_type  */
  YYSYMBOL_join_condition = 279,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 280,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 281           /* ident_commalist  */
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
#define YYLAST   804

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  107
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  494

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   412


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
       2,     2,     2,     2,     2,     2,     2,   164,     2,     2,
     169,   170,   162,   160,   173,   161,   171,   163,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   172,
     153,   150,   154,   174,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   167,     2,   168,   165,     2,     2,     2,     2,     2,
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
     145,   146,   147,   148,   149,   151,   152,   155,   156,   157,
     158,   159,   166
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   268,   268,   289,   295,   304,   308,   312,   315,   318,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   342,
     343,   348,   349,   353,   357,   369,   372,   375,   381,   382,
     389,   396,   399,   403,   417,   423,   432,   449,   453,   456,
     465,   479,   482,   487,   501,   514,   521,   528,   539,   540,
     544,   545,   549,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   574,
     575,   576,   586,   592,   598,   606,   607,   616,   625,   638,
     645,   656,   657,   667,   676,   677,   681,   693,   697,   701,
     715,   716,   719,   720,   731,   732,   736,   746,   759,   766,
     770,   774,   781,   784,   790,   802,   803,   807,   811,   812,
     816,   821,   822,   826,   831,   836,   841,   845,   846,   850,
     851,   855,   859,   860,   861,   867,   868,   872,   873,   874,
     875,   876,   877,   884,   885,   889,   890,   894,   895,   899,
     909,   910,   911,   912,   913,   917,   918,   919,   920,   921,
     922,   923,   924,   925,   926,   927,   931,   932,   936,   937,
     938,   939,   940,   944,   945,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   958,   959,   963,   964,   965,   966,
     972,   973,   974,   975,   979,   980,   984,   985,   989,   990,
     991,   992,   993,   994,   995,   999,  1000,  1004,  1008,  1012,
    1013,  1014,  1015,  1016,  1017,  1018,  1022,  1026,  1030,  1034,
    1038,  1042,  1043,  1044,  1045,  1049,  1050,  1051,  1052,  1053,
    1054,  1055,  1059,  1063,  1064,  1068,  1069,  1073,  1077,  1081,
    1093,  1094,  1104,  1105,  1109,  1110,  1119,  1120,  1125,  1136,
    1145,  1146,  1151,  1152,  1157,  1158,  1163,  1164,  1169,  1170,
    1179,  1180,  1184,  1188,  1192,  1199,  1212,  1220,  1230,  1249,
    1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,  1263,
    1272,  1273,  1278,  1279
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
  "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY",
  "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR",
  "QUARTER", "DECIMAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION", "BEGIN",
  "COMMIT", "ROLLBACK", "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS",
  "GREATER", "LESSEQ", "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'^'", "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','",
  "'?'", "$accept", "input", "statement_list", "statement",
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
  "interval_literal", "array_expr", "array_index", "between_expr",
  "column_name", "literal", "string_literal", "bool_literal",
  "num_literal", "int_literal", "null_literal", "param_expr", "table_ref",
  "table_ref_atomic", "nonjoin_table_ref_atomic", "table_ref_commalist",
  "table_ref_name", "table_ref_name_no_alias", "table_name", "table_alias",
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
      61,   405,   406,    60,    62,   407,   408,   409,   410,   411,
      43,    45,    42,    47,    37,    94,   412,    91,    93,    40,
      41,    46,    59,    44,    63
};
#endif

#define YYPACT_NINF (-241)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-271)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     509,    39,    23,    37,   120,    23,   131,    45,    60,    68,
      23,    23,   137,    -1,   207,    92,    92,    92,   243,   100,
    -241,   155,  -241,   155,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,   -33,  -241,   274,   123,  -241,
     132,   217,  -241,   190,   190,    23,   322,    23,   216,  -241,
     -62,   221,   221,    23,  -241,   215,   180,  -241,  -241,  -241,
    -241,  -241,  -241,   504,  -241,   270,  -241,  -241,   244,   -33,
      90,  -241,   187,  -241,   370,    56,   372,   258,    23,    23,
     301,  -241,   304,   224,   393,   395,   395,   359,    23,    23,
    -241,   234,   207,  -241,   235,   399,   396,   236,   240,  -241,
    -241,  -241,   -33,   303,   289,   -33,   -16,  -241,  -241,  -241,
    -241,   395,   395,  -241,  -241,  -241,  -241,   248,   249,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
     375,     1,   224,   246,  -241,   395,   414,   201,   269,   -55,
    -241,   316,  -241,   316,  -241,  -241,  -241,  -241,  -241,   418,
    -241,  -241,   246,  -241,  -241,   353,  -241,  -241,    90,  -241,
    -241,   246,   353,   246,    79,  -241,   247,  -241,  -241,    56,
    -241,   423,   320,   425,   306,   185,   261,   262,   263,   138,
     292,   266,   315,  -241,   148,   -53,   345,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,  -241,   344,  -241,  -107,   271,  -241,   246,   393,
    -241,   394,  -241,  -241,   273,    47,  -241,   350,   272,  -241,
      15,   -16,   -33,   275,  -241,    84,   -16,   -53,   400,    83,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,   355,
    -241,   517,    91,  -241,   320,    16,    10,   391,   247,   246,
     246,   218,   -39,   277,   315,   576,   246,    40,   279,   -75,
     246,   246,   315,  -241,   315,   139,   282,   156,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   399,    23,  -241,   449,    56,   -53,  -241,
     322,    56,  -241,   418,    14,   301,  -241,   246,  -241,   452,
    -241,  -241,  -241,  -241,   246,  -241,  -241,  -241,  -241,   246,
     246,   395,  -241,   287,  -241,  -241,   288,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,   291,  -241,   157,  -241,
     425,  -241,  -241,   246,  -241,  -241,   293,   373,   213,   175,
     196,   246,   246,  -241,   391,   369,   -92,  -241,  -241,  -241,
     357,   527,   615,   315,   299,   148,  -241,   371,   302,   615,
     615,   615,   615,   637,   637,   637,   637,    40,    40,   101,
     101,   101,  -109,   305,  -241,  -241,   141,  -241,   174,  -241,
     320,  -241,    73,  -241,   308,  -241,    34,  -241,   -21,  -241,
    -241,  -241,   -53,   -53,  -241,   468,   469,   476,  -241,   384,
    -241,  -241,   182,  -241,   246,   517,   246,   246,  -241,   229,
     183,   317,  -241,   315,   615,   148,   318,   191,  -241,  -241,
    -241,  -241,   321,   392,  -241,  -241,  -241,   412,   417,   419,
     406,    14,   490,  -241,  -241,  -241,   246,   377,  -241,   324,
     343,   341,  -241,  -241,    54,   347,   -53,   230,  -241,   246,
    -241,   576,   348,   197,  -241,  -241,    34,    14,  -241,  -241,
    -241,    14,   307,   346,   -53,   246,  -241,  -241,   513,  -241,
    -241,  -241,   -53,  -241,  -241,  -241,  -241,    -3,   414,   -25,
     351,   354,   246,   198,   246,  -241,    12,   -53,  -241,  -241,
     -53,   358,   352,  -241
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   271,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   250,     0,   240,    78,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   239,
       0,    76,    76,     0,    41,     0,   252,   253,    28,    25,
      27,    26,     1,   251,     2,     0,     6,     5,   126,     0,
      87,    88,   118,    74,     0,   136,     0,     0,     0,     0,
     112,    36,     0,    82,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   106,     0,     0,   100,
     101,    99,     0,   103,     0,     0,   132,   241,   222,   225,
     227,     0,     0,   228,   223,   224,   229,     0,   135,   220,
     221,   137,   215,   216,   217,   226,   218,   219,    31,    30,
       0,     0,    82,     0,    77,     0,     0,     0,     0,   112,
      84,    39,    37,    39,    75,    72,    73,   255,   254,     0,
     125,   105,     0,    95,    94,   118,    91,    90,    92,   102,
      98,     0,   118,     0,     0,    96,     0,   206,    33,     0,
      48,     0,   251,     0,     0,   211,     0,     0,     0,     0,
       0,     0,     0,   213,     0,   111,   140,   147,   148,   149,
     142,   144,   150,   143,   163,   151,   152,   153,   154,   146,
     141,   156,   157,     0,   272,     0,     0,    80,     0,     0,
      83,     0,    35,    40,    23,     0,    21,   109,   107,   133,
     249,   132,     0,   117,   119,   124,   132,   128,   130,   127,
     199,   200,   201,   202,   203,   204,   205,   207,   138,     0,
      46,     0,     0,    50,   251,   106,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,   158,     0,     0,
       0,     0,     0,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    81,     0,     0,    86,    85,
       0,     0,    19,     0,     0,   112,   108,     0,   247,     0,
     248,   139,    89,    93,     0,   123,   122,   121,    97,     0,
       0,     0,    67,     0,    59,    58,     0,    66,    65,    57,
      64,    68,    55,    53,    54,    56,     0,    61,    71,    45,
       0,    47,   195,     0,   212,   214,     0,     0,     0,     0,
       0,     0,     0,   182,     0,     0,     0,   155,   145,   174,
     175,     0,   170,     0,     0,     0,   161,     0,   173,   172,
     188,   189,   190,   191,   192,   193,   194,   165,   164,   167,
     166,   168,   169,     0,    34,   273,     0,    38,     0,    22,
     251,   110,   230,   232,     0,   234,   245,   233,   116,   134,
     246,   120,   131,   129,    44,     0,     0,     0,    69,     0,
      52,    51,     0,   186,     0,     0,     0,     0,   180,     0,
       0,     0,   208,     0,   171,     0,     0,     0,   162,   209,
      79,    24,     0,     0,   267,   259,   265,   263,   266,   261,
       0,     0,     0,   244,   238,   242,     0,     0,   104,     0,
       0,     0,    70,   196,     0,     0,   184,     0,   183,     0,
     187,   210,     0,     0,   178,   176,   245,     0,   262,   264,
     260,     0,   231,   246,   115,     0,    62,    63,     0,   197,
     198,   181,   185,   179,   177,   235,   256,   268,     0,   114,
       0,     0,     0,     0,     0,    60,     0,   269,   257,   243,
     113,   211,     0,   258
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,   461,  -241,   503,  -241,   238,  -241,   314,
    -241,  -241,  -241,  -241,   252,   -85,   390,  -241,  -241,  -241,
     493,  -241,   204,   133,  -241,  -241,   491,  -241,  -241,  -241,
     416,  -241,  -241,   337,  -164,   -66,  -241,    96,   -65,   -29,
    -241,  -241,   -64,   309,  -241,  -241,  -241,  -103,  -241,  -113,
    -241,   245,  -241,  -241,   -89,  -240,  -241,   -58,   253,  -133,
    -168,  -241,  -241,  -241,  -241,  -241,  -241,   310,  -241,  -241,
    -241,  -241,  -241,   311,  -241,  -241,  -241,  -241,  -241,    67,
     -72,   -79,  -241,  -241,   -86,  -241,  -241,  -241,  -192,   103,
    -241,  -241,  -241,     0,  -241,   102,   349,  -241,  -241,  -241,
    -241,   471,  -241,  -241,  -241,  -241,    86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   215,   216,    22,    59,
      23,   129,    24,    25,    82,   141,   212,    26,    27,    28,
      78,   242,   243,   328,   400,    29,    88,    30,    31,    32,
     137,    33,   139,   140,    34,   155,   156,   157,    71,   102,
     103,   160,    72,   152,   217,   295,   296,   134,   438,   106,
     223,   224,   307,    96,   165,   218,   117,   118,   219,   220,
     186,   187,   188,   189,   190,   191,   192,   252,   193,   194,
     195,   196,   197,   237,   119,   120,   198,   199,   200,   201,
     202,   122,   123,   124,   125,   126,   127,   381,   382,   383,
     384,   385,    48,   386,   433,   434,   435,   301,    35,    36,
      56,    57,   387,   430,   488,    64,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     185,   143,    39,   121,    98,    42,   142,   142,   240,   150,
      49,    50,   255,   334,   257,   491,   346,    38,   298,    53,
      68,   484,   423,   133,   268,   436,    38,    85,   225,   151,
     227,   229,   166,   167,   163,   260,   210,   298,   158,   162,
      40,   158,   221,   105,   437,    80,   251,    83,   341,   226,
     203,   259,   164,    90,    54,   261,   142,   260,   283,   424,
     108,   109,   110,   285,   425,    37,   286,   342,   111,    86,
     426,   427,   207,   343,   481,   288,   412,   261,   131,   132,
     331,   297,   175,   108,   109,   110,   255,   428,   145,   146,
     171,   111,   429,   402,   351,   348,   352,   238,   423,    99,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   417,   338,   339,   209,   258,
     176,   177,   178,    41,   172,   260,   482,   349,   350,   222,
     100,    70,   302,   310,    45,   424,    69,   308,   299,   112,
     425,   175,   108,   109,   110,   261,   426,   427,   297,    46,
     111,   175,   108,   109,   110,   113,   303,   432,   158,   179,
     111,    47,   112,   428,   260,    97,   101,  -268,   429,   305,
     173,   225,   335,   268,   183,   453,   392,   393,   113,   176,
     177,   178,   336,   380,   261,   414,   332,   147,   228,   176,
     177,   178,   388,   260,   260,   306,    99,   373,   180,   114,
     115,    68,   279,   280,   281,   282,    43,   283,   409,   410,
      55,   181,    51,   261,   261,   121,   422,   292,   179,   121,
     293,   112,   114,   115,   469,   479,   394,   100,   179,   376,
     116,   112,   142,   378,   268,   353,    44,   113,    58,   462,
     182,   183,    52,    62,   250,   451,  -236,   113,   184,   175,
     108,   109,   110,   116,    68,   356,   398,   180,   111,   104,
     206,   329,    65,   101,   330,   354,   282,   180,   283,   477,
     181,   444,    63,   446,   447,   357,   399,    73,   406,   411,
     181,   114,   115,   407,   374,   260,   449,   176,   177,   178,
     416,   114,   115,   260,    74,   175,   108,   109,   110,   182,
     183,    75,   342,   464,   111,   261,    76,   184,   408,   182,
     183,   420,   116,   261,   169,    77,   472,   184,   175,   108,
     109,   110,   116,   260,   250,    81,   179,   111,   260,   112,
      60,    61,   423,   253,   177,   178,   405,    84,    91,   260,
     260,   448,   471,   261,   421,   113,    87,   169,   261,   487,
     452,   490,   443,    92,   245,   297,   246,   177,   178,   261,
     261,   455,    94,   262,   297,   180,    95,   474,   489,   424,
     297,   286,   179,   107,   425,   112,   128,   130,   181,   133,
     426,   427,   230,   231,   232,   233,   234,   235,   236,   114,
     115,   113,   135,   136,   263,   179,   138,   428,   112,   108,
     144,  -268,   429,    69,   149,   110,   153,   182,   183,   151,
     154,   254,   159,   161,   113,   184,   170,   204,   168,   208,
     116,   214,   169,   211,   181,   104,   239,    14,   241,   244,
     247,   248,   249,   256,   254,   114,   115,   284,   290,   294,
     287,   264,   291,   311,    68,   297,   344,   181,   304,   347,
     309,   355,   375,   182,   183,   390,   395,   396,   114,   115,
     397,   184,   404,   403,   265,   353,   116,   260,   415,   283,
     418,   266,   267,   419,   439,   440,   182,   183,   268,   269,
    -237,   431,   441,   442,   184,   458,   457,   450,   454,   116,
     459,   456,   460,   463,   466,   270,   271,   272,   273,   274,
     461,   465,   275,   276,  -270,   277,   278,   279,   280,   281,
     282,     1,   283,   467,   468,   478,     1,   470,   473,   480,
       2,   485,   493,   486,    93,     2,    67,     3,   312,   246,
       4,   379,     3,   213,   401,     4,     5,    79,   445,     6,
       7,     5,   377,    89,     6,     7,   289,   313,   174,   391,
     389,     8,     9,   492,   333,   314,     8,     9,   475,   337,
     476,   340,    10,   148,   483,     0,     0,    10,     0,   300,
       0,     0,     0,     0,     0,     0,   263,     0,     0,     0,
       0,   315,     0,     0,     0,     0,    11,     0,     0,     0,
      12,    11,     0,     0,     0,    12,     0,     0,   316,     0,
     317,   318,     0,     0,     0,    13,     0,     0,     0,     0,
      13,    14,     0,     0,     0,   319,    14,     0,     0,   320,
       0,   321,     0,   264,     0,   263,     0,     0,     0,     0,
       0,   322,     0,   323,   324,   325,     0,   413,     0,     0,
       0,     0,     0,     0,     0,     0,   345,     0,     0,     0,
       0,    15,    16,    17,   267,     0,    15,    16,    17,   326,
     268,   269,   327,     0,   263,     0,     0,     0,     0,     0,
       0,     0,   264,     0,     0,     0,     0,   270,   271,   272,
     273,   274,     0,     0,   275,   276,   263,   277,   278,   279,
     280,   281,   282,     0,   283,   345,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,   268,
     269,  -271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   270,   271,   272,   273,
     274,     0,     0,   275,   276,     0,   277,   278,   279,   280,
     281,   282,   267,   283,     0,     0,     0,     0,   268,  -271,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   267,  -271,  -271,  -271,   273,   274,
     268,     0,   275,   276,     0,   277,   278,   279,   280,   281,
     282,     0,   283,     0,     0,     0,     0,     0,     0,     0,
    -271,  -271,     0,     0,  -271,  -271,     0,   277,   278,   279,
     280,   281,   282,     0,   283
};

static const yytype_int16 yycheck[] =
{
     133,    86,     2,    75,    69,     5,    85,    86,   172,    95,
      10,    11,   180,     3,   182,     3,   256,     3,     3,    20,
      53,    46,    25,    78,   133,    46,     3,    89,   161,    13,
     163,   164,   111,   112,    50,   110,   139,     3,   102,   105,
       3,   105,   155,    72,    65,    45,   179,    47,    87,   162,
     135,   184,    68,    53,    55,   130,   135,   110,   167,    62,
       4,     5,     6,   170,    67,    26,   173,   106,    12,   131,
      73,    74,   137,   112,    77,   208,   168,   130,    78,    79,
     244,   173,     3,     4,     5,     6,   254,    90,    88,    89,
      89,    12,    95,   333,   262,   170,   264,   169,    25,     9,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   355,   249,   250,   173,   184,
      41,    42,    43,     3,   123,   110,   129,   260,   261,   158,
      40,    35,   221,    50,    89,    62,   169,   226,   123,    83,
      67,     3,     4,     5,     6,   130,    73,    74,   173,    89,
      12,     3,     4,     5,     6,    99,   222,   123,   222,    80,
      12,    93,    83,    90,   110,    69,    76,    94,    95,    85,
     169,   304,   162,   133,   162,   415,   309,   310,    99,    41,
      42,    43,   247,   169,   130,   353,   170,    91,   109,    41,
      42,    43,   295,   110,   110,   111,     9,   283,   119,   143,
     144,    53,   162,   163,   164,   165,    75,   167,   341,   342,
       3,   132,    75,   130,   130,   287,   380,   170,    80,   291,
     173,    83,   143,   144,   170,   465,   311,    40,    80,   287,
     174,    83,   311,   291,   133,    96,   105,    99,   146,   431,
     161,   162,   105,     0,   106,   413,   173,    99,   169,     3,
       4,     5,     6,   174,    53,    99,    99,   119,    12,    72,
      59,   170,   107,    76,   173,   126,   165,   119,   167,   461,
     132,   404,   172,   406,   407,   119,   119,     3,   103,   344,
     132,   143,   144,    87,   284,   110,   103,    41,    42,    43,
     355,   143,   144,   110,   171,     3,     4,     5,     6,   161,
     162,   169,   106,   436,    12,   130,    89,   169,   112,   161,
     162,   170,   174,   130,   173,   125,   449,   169,     3,     4,
       5,     6,   174,   110,   106,     3,    80,    12,   110,    83,
      16,    17,    25,    41,    42,    43,   123,   121,   123,   110,
     110,   112,   112,   130,   170,    99,   125,   173,   130,   482,
     415,   484,   170,   173,   169,   173,   171,    42,    43,   130,
     130,   170,    92,    18,   173,   119,   122,   170,   170,    62,
     173,   173,    80,     3,    67,    83,     4,   119,   132,    78,
      73,    74,   135,   136,   137,   138,   139,   140,   141,   143,
     144,    99,    88,   169,    49,    80,     3,    90,    83,     4,
      41,    94,    95,   169,   169,     6,   170,   161,   162,    13,
     170,   119,   109,   124,    99,   169,    41,     3,   170,   150,
     174,     3,   173,   107,   132,    72,     3,   107,     3,   123,
     169,   169,   169,   167,   119,   143,   144,    93,    44,    89,
     169,    96,   169,    88,    53,   173,   169,   132,   173,   170,
      50,   169,     3,   161,   162,     3,   169,   169,   143,   144,
     169,   169,    89,   170,   119,    96,   174,   110,   169,   167,
      99,   126,   127,   168,     6,     6,   161,   162,   133,   134,
     173,   173,     6,    99,   169,    73,    94,   170,   170,   174,
      73,   170,    73,     3,   170,   150,   151,   152,   153,   154,
      94,   124,   157,   158,     0,   160,   161,   162,   163,   164,
     165,     7,   167,   170,   173,   169,     7,   170,   170,     6,
      16,   170,   170,   169,    63,    16,    23,    23,    11,   171,
      26,   293,    23,   143,   330,    26,    32,    44,   405,    35,
      36,    32,   290,    52,    35,    36,   209,    30,   132,   304,
     297,    47,    48,   486,   245,    38,    47,    48,   456,   248,
     457,   251,    58,    92,   478,    -1,    -1,    58,    -1,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    82,    -1,    -1,    -1,    86,    -1,    -1,    81,    -1,
      83,    84,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
     101,   107,    -1,    -1,    -1,    98,   107,    -1,    -1,   102,
      -1,   104,    -1,    96,    -1,    49,    -1,    -1,    -1,    -1,
      -1,   114,    -1,   116,   117,   118,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
      -1,   147,   148,   149,   127,    -1,   147,   148,   149,   142,
     133,   134,   145,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,   150,   151,   152,
     153,   154,    -1,    -1,   157,   158,    49,   160,   161,   162,
     163,   164,   165,    -1,   167,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,   133,
     134,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,    -1,   157,   158,    -1,   160,   161,   162,   163,
     164,   165,   127,   167,    -1,    -1,    -1,    -1,   133,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   150,   151,   152,   153,   154,
     133,    -1,   157,   158,    -1,   160,   161,   162,   163,   164,
     165,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,   154,    -1,    -1,   157,   158,    -1,   160,   161,   162,
     163,   164,   165,    -1,   167
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    16,    23,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   147,   148,   149,   176,   177,
     178,   179,   183,   185,   187,   188,   192,   193,   194,   200,
     202,   203,   204,   206,   209,   273,   274,    26,     3,   268,
       3,     3,   268,    75,   105,    89,    89,    93,   267,   268,
     268,    75,   105,    20,    55,     3,   275,   276,   146,   184,
     184,   184,     0,   172,   280,   107,   180,   180,    53,   169,
     212,   213,   217,     3,   171,   169,    89,   125,   195,   195,
     268,     3,   189,   268,   121,    89,   131,   125,   201,   201,
     268,   123,   173,   178,    92,   122,   228,   212,   213,     9,
      40,    76,   214,   215,    72,   214,   224,     3,     4,     5,
       6,    12,    83,    99,   143,   144,   174,   231,   232,   249,
     250,   255,   256,   257,   258,   259,   260,   261,     4,   186,
     119,   268,   268,    78,   222,    88,   169,   205,     3,   207,
     208,   190,   256,   190,    41,   268,   268,   212,   276,   169,
     259,    13,   218,   170,   170,   210,   211,   212,   217,   109,
     216,   124,   210,    50,    68,   229,   256,   256,   170,   173,
      41,    89,   123,   169,   205,     3,    41,    42,    43,    80,
     119,   132,   161,   162,   169,   234,   235,   236,   237,   238,
     239,   240,   241,   243,   244,   245,   246,   247,   251,   252,
     253,   254,   255,   190,     3,   281,    59,   213,   150,   173,
     222,   107,   191,   191,     3,   181,   182,   219,   230,   233,
     234,   224,   214,   225,   226,   234,   224,   234,   109,   234,
     135,   136,   137,   138,   139,   140,   141,   248,   255,     3,
     209,     3,   196,   197,   123,   169,   171,   169,   169,   169,
     106,   234,   242,    41,   119,   235,   167,   235,   213,   234,
     110,   130,    18,    49,    96,   119,   126,   127,   133,   134,
     150,   151,   152,   153,   154,   157,   158,   160,   161,   162,
     163,   164,   165,   167,    93,   170,   173,   169,   234,   208,
      44,   169,   170,   173,    89,   220,   221,   173,     3,   123,
     271,   272,   229,   210,   173,    85,   111,   227,   229,    50,
      50,    88,    11,    30,    38,    64,    81,    83,    84,    98,
     102,   104,   114,   116,   117,   118,   142,   145,   198,   170,
     173,   209,   170,   218,     3,   162,   213,   248,   234,   234,
     242,    87,   106,   112,   169,   119,   230,   170,   170,   234,
     234,   235,   235,    96,   126,   169,    99,   119,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   259,   268,     3,   232,   189,   232,   182,
     169,   262,   263,   264,   265,   266,   268,   277,   222,   233,
       3,   226,   234,   234,   190,   169,   169,   169,    99,   119,
     199,   197,   230,   170,    89,   123,   103,    87,   112,   234,
     234,   213,   168,   110,   235,   169,   213,   230,    99,   168,
     170,   170,   209,    25,    62,    67,    73,    74,    90,    95,
     278,   173,   123,   269,   270,   271,    46,    65,   223,     6,
       6,     6,    99,   170,   234,   198,   234,   234,   112,   103,
     170,   235,   213,   230,   170,   170,   170,    94,    73,    73,
      73,    94,   263,     3,   234,   124,   170,   170,   173,   170,
     170,   112,   234,   170,   170,   270,   264,   263,   169,   230,
       6,    77,   129,   281,    46,   170,   169,   234,   279,   170,
     234,     3,   254,   170
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   175,   176,   177,   177,   178,   178,   178,   178,   178,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   182,   182,   183,   183,   183,   184,   184,
     185,   186,   187,   187,   188,   188,   189,   190,   191,   191,
     192,   193,   193,   193,   194,   194,   194,   194,   195,   195,
     196,   196,   197,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   199,
     199,   199,   200,   200,   200,   201,   201,   202,   203,   204,
     204,   205,   205,   206,   207,   207,   208,   209,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   213,   214,   215,
     215,   215,   216,   216,   217,   218,   218,   219,   220,   220,
     221,   222,   222,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   227,   227,   227,   228,   228,   229,   229,   229,
     229,   229,   229,   230,   230,   231,   231,   232,   232,   233,
     234,   234,   234,   234,   234,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   236,   236,   237,   237,
     237,   237,   237,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   239,   239,   240,   240,   240,   240,
     241,   241,   241,   241,   242,   242,   243,   243,   244,   244,
     244,   244,   244,   244,   244,   245,   245,   246,   247,   248,
     248,   248,   248,   248,   248,   248,   249,   250,   251,   252,
     253,   254,   254,   254,   254,   255,   255,   255,   255,   255,
     255,   255,   256,   257,   257,   258,   258,   259,   260,   261,
     262,   262,   263,   263,   264,   264,   265,   265,   266,   267,
     268,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     273,   273,   274,   275,   275,   276,   277,   277,   277,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   279,
     280,   280,   281,   281
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
       1,     1,     1,     1,     1,     3,     1,     1,     2,     2,
       2,     3,     4,     1,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     3,     3,     3,     5,     6,     5,     6,
       4,     6,     3,     5,     4,     5,     4,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     6,     6,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     4,     4,
       5,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     4,     1,     3,     2,     1,
       1,     3,     1,     5,     1,     0,     2,     1,     1,     0,
       1,     0,     2,     1,     3,     3,     4,     6,     8,     1,
       2,     1,     2,     1,     2,     1,     1,     1,     0,     1,
       1,     0,     1,     3
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
#line 1934 "bison_parser.cpp"
        break;

    case YYSYMBOL_STRING: /* STRING  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1940 "bison_parser.cpp"
        break;

    case YYSYMBOL_FLOATVAL: /* FLOATVAL  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 1946 "bison_parser.cpp"
        break;

    case YYSYMBOL_INTVAL: /* INTVAL  */
#line 146 "bison_parser.y"
            { }
#line 1952 "bison_parser.cpp"
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
#line 1965 "bison_parser.cpp"
        break;

    case YYSYMBOL_statement: /* statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1971 "bison_parser.cpp"
        break;

    case YYSYMBOL_preparable_statement: /* preparable_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 1977 "bison_parser.cpp"
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
#line 1990 "bison_parser.cpp"
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
#line 2003 "bison_parser.cpp"
        break;

    case YYSYMBOL_hint: /* hint  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2009 "bison_parser.cpp"
        break;

    case YYSYMBOL_transaction_statement: /* transaction_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2015 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_statement: /* prepare_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2021 "bison_parser.cpp"
        break;

    case YYSYMBOL_prepare_target_query: /* prepare_target_query  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2027 "bison_parser.cpp"
        break;

    case YYSYMBOL_execute_statement: /* execute_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2033 "bison_parser.cpp"
        break;

    case YYSYMBOL_import_statement: /* import_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2039 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_type: /* file_type  */
#line 146 "bison_parser.y"
            { }
#line 2045 "bison_parser.cpp"
        break;

    case YYSYMBOL_file_path: /* file_path  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2051 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_file_type: /* opt_file_type  */
#line 146 "bison_parser.y"
            { }
#line 2057 "bison_parser.cpp"
        break;

    case YYSYMBOL_export_statement: /* export_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2063 "bison_parser.cpp"
        break;

    case YYSYMBOL_show_statement: /* show_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2069 "bison_parser.cpp"
        break;

    case YYSYMBOL_create_statement: /* create_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2075 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_not_exists: /* opt_not_exists  */
#line 146 "bison_parser.y"
            { }
#line 2081 "bison_parser.cpp"
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
#line 2094 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_def: /* column_def  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2100 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_type: /* column_type  */
#line 146 "bison_parser.y"
            { }
#line 2106 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_column_nullable: /* opt_column_nullable  */
#line 146 "bison_parser.y"
            { }
#line 2112 "bison_parser.cpp"
        break;

    case YYSYMBOL_drop_statement: /* drop_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2118 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_exists: /* opt_exists  */
#line 146 "bison_parser.y"
            { }
#line 2124 "bison_parser.cpp"
        break;

    case YYSYMBOL_delete_statement: /* delete_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2130 "bison_parser.cpp"
        break;

    case YYSYMBOL_truncate_statement: /* truncate_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2136 "bison_parser.cpp"
        break;

    case YYSYMBOL_insert_statement: /* insert_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2142 "bison_parser.cpp"
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
#line 2155 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_statement: /* update_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2161 "bison_parser.cpp"
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
#line 2174 "bison_parser.cpp"
        break;

    case YYSYMBOL_update_clause: /* update_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2180 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_statement: /* select_statement  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2186 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation: /* select_within_set_operation  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2192 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_within_set_operation_no_parentheses: /* select_within_set_operation_no_parentheses  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2198 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_with_paren: /* select_with_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2204 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_no_paren: /* select_no_paren  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2210 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_operator: /* set_operator  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2216 "bison_parser.cpp"
        break;

    case YYSYMBOL_set_type: /* set_type  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2222 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_all: /* opt_all  */
#line 146 "bison_parser.y"
            { }
#line 2228 "bison_parser.cpp"
        break;

    case YYSYMBOL_select_clause: /* select_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2234 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_distinct: /* opt_distinct  */
#line 146 "bison_parser.y"
            { }
#line 2240 "bison_parser.cpp"
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
#line 2253 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_from_clause: /* opt_from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2259 "bison_parser.cpp"
        break;

    case YYSYMBOL_from_clause: /* from_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2265 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_where: /* opt_where  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2271 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_group: /* opt_group  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2277 "bison_parser.cpp"
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
#line 2290 "bison_parser.cpp"
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
#line 2303 "bison_parser.cpp"
        break;

    case YYSYMBOL_order_desc: /* order_desc  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2309 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_order_type: /* opt_order_type  */
#line 146 "bison_parser.y"
            { }
#line 2315 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_top: /* opt_top  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2321 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_limit: /* opt_limit  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2327 "bison_parser.cpp"
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
#line 2340 "bison_parser.cpp"
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
#line 2353 "bison_parser.cpp"
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
#line 2366 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr_alias: /* expr_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2372 "bison_parser.cpp"
        break;

    case YYSYMBOL_expr: /* expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2378 "bison_parser.cpp"
        break;

    case YYSYMBOL_operand: /* operand  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2384 "bison_parser.cpp"
        break;

    case YYSYMBOL_scalar_expr: /* scalar_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2390 "bison_parser.cpp"
        break;

    case YYSYMBOL_unary_expr: /* unary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2396 "bison_parser.cpp"
        break;

    case YYSYMBOL_binary_expr: /* binary_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2402 "bison_parser.cpp"
        break;

    case YYSYMBOL_logic_expr: /* logic_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2408 "bison_parser.cpp"
        break;

    case YYSYMBOL_in_expr: /* in_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2414 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_expr: /* case_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2420 "bison_parser.cpp"
        break;

    case YYSYMBOL_case_list: /* case_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2426 "bison_parser.cpp"
        break;

    case YYSYMBOL_exists_expr: /* exists_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2432 "bison_parser.cpp"
        break;

    case YYSYMBOL_comp_expr: /* comp_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2438 "bison_parser.cpp"
        break;

    case YYSYMBOL_function_expr: /* function_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2444 "bison_parser.cpp"
        break;

    case YYSYMBOL_extract_expr: /* extract_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2450 "bison_parser.cpp"
        break;

    case YYSYMBOL_cast_expr: /* cast_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2456 "bison_parser.cpp"
        break;

    case YYSYMBOL_datetime_field: /* datetime_field  */
#line 146 "bison_parser.y"
            { }
#line 2462 "bison_parser.cpp"
        break;

    case YYSYMBOL_date_literal: /* date_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2468 "bison_parser.cpp"
        break;

    case YYSYMBOL_interval_literal: /* interval_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2474 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_expr: /* array_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2480 "bison_parser.cpp"
        break;

    case YYSYMBOL_array_index: /* array_index  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2486 "bison_parser.cpp"
        break;

    case YYSYMBOL_between_expr: /* between_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2492 "bison_parser.cpp"
        break;

    case YYSYMBOL_column_name: /* column_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2498 "bison_parser.cpp"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2504 "bison_parser.cpp"
        break;

    case YYSYMBOL_string_literal: /* string_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2510 "bison_parser.cpp"
        break;

    case YYSYMBOL_bool_literal: /* bool_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2516 "bison_parser.cpp"
        break;

    case YYSYMBOL_num_literal: /* num_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2522 "bison_parser.cpp"
        break;

    case YYSYMBOL_int_literal: /* int_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2528 "bison_parser.cpp"
        break;

    case YYSYMBOL_null_literal: /* null_literal  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2534 "bison_parser.cpp"
        break;

    case YYSYMBOL_param_expr: /* param_expr  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2540 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref: /* table_ref  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2546 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_atomic: /* table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2552 "bison_parser.cpp"
        break;

    case YYSYMBOL_nonjoin_table_ref_atomic: /* nonjoin_table_ref_atomic  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2558 "bison_parser.cpp"
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
#line 2571 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name: /* table_ref_name  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2577 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_ref_name_no_alias: /* table_ref_name_no_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2583 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_name: /* table_name  */
#line 147 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2589 "bison_parser.cpp"
        break;

    case YYSYMBOL_table_alias: /* table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2595 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_table_alias: /* opt_table_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2601 "bison_parser.cpp"
        break;

    case YYSYMBOL_alias: /* alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2607 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_alias: /* opt_alias  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2613 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_with_clause: /* opt_with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2619 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_clause: /* with_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2625 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description_list: /* with_description_list  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2631 "bison_parser.cpp"
        break;

    case YYSYMBOL_with_description: /* with_description  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2637 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_clause: /* join_clause  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2643 "bison_parser.cpp"
        break;

    case YYSYMBOL_opt_join_type: /* opt_join_type  */
#line 146 "bison_parser.y"
            { }
#line 2649 "bison_parser.cpp"
        break;

    case YYSYMBOL_join_condition: /* join_condition  */
#line 157 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2655 "bison_parser.cpp"
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
#line 2668 "bison_parser.cpp"
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

#line 2775 "bison_parser.cpp"

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
#line 268 "bison_parser.y"
                                             {
			for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
				// Transfers ownership of the statement.
				result->addStatement(stmt);
			}

			unsigned param_id = 0;
			for (void* param : yyloc.param_list) {
				if (param != nullptr) {
					Expr* expr = (Expr*) param;
					expr->ival = param_id;
					result->addParameter(expr);
					++param_id;
				}
			}
			delete (yyvsp[-1].stmt_vec);
		}
#line 3003 "bison_parser.cpp"
    break;

  case 3: /* statement_list: statement  */
#line 289 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3014 "bison_parser.cpp"
    break;

  case 4: /* statement_list: statement_list ';' statement  */
#line 295 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3025 "bison_parser.cpp"
    break;

  case 5: /* statement: prepare_statement opt_hints  */
#line 304 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3034 "bison_parser.cpp"
    break;

  case 6: /* statement: preparable_statement opt_hints  */
#line 308 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3043 "bison_parser.cpp"
    break;

  case 7: /* statement: show_statement  */
#line 312 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3051 "bison_parser.cpp"
    break;

  case 8: /* statement: import_statement  */
#line 315 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3059 "bison_parser.cpp"
    break;

  case 9: /* statement: export_statement  */
#line 318 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3067 "bison_parser.cpp"
    break;

  case 10: /* preparable_statement: select_statement  */
#line 325 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3073 "bison_parser.cpp"
    break;

  case 11: /* preparable_statement: create_statement  */
#line 326 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3079 "bison_parser.cpp"
    break;

  case 12: /* preparable_statement: insert_statement  */
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3085 "bison_parser.cpp"
    break;

  case 13: /* preparable_statement: delete_statement  */
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3091 "bison_parser.cpp"
    break;

  case 14: /* preparable_statement: truncate_statement  */
#line 329 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3097 "bison_parser.cpp"
    break;

  case 15: /* preparable_statement: update_statement  */
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3103 "bison_parser.cpp"
    break;

  case 16: /* preparable_statement: drop_statement  */
#line 331 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3109 "bison_parser.cpp"
    break;

  case 17: /* preparable_statement: execute_statement  */
#line 332 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3115 "bison_parser.cpp"
    break;

  case 18: /* preparable_statement: transaction_statement  */
#line 333 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3121 "bison_parser.cpp"
    break;

  case 19: /* opt_hints: WITH HINT '(' hint_list ')'  */
#line 342 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3127 "bison_parser.cpp"
    break;

  case 20: /* opt_hints: %empty  */
#line 343 "bison_parser.y"
                        { (yyval.expr_vec) = nullptr; }
#line 3133 "bison_parser.cpp"
    break;

  case 21: /* hint_list: hint  */
#line 348 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3139 "bison_parser.cpp"
    break;

  case 22: /* hint_list: hint_list ',' hint  */
#line 349 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3145 "bison_parser.cpp"
    break;

  case 23: /* hint: IDENTIFIER  */
#line 353 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3154 "bison_parser.cpp"
    break;

  case 24: /* hint: IDENTIFIER '(' literal_list ')'  */
#line 357 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3164 "bison_parser.cpp"
    break;

  case 25: /* transaction_statement: BEGIN opt_transaction_keyword  */
#line 369 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3172 "bison_parser.cpp"
    break;

  case 26: /* transaction_statement: ROLLBACK opt_transaction_keyword  */
#line 372 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3180 "bison_parser.cpp"
    break;

  case 27: /* transaction_statement: COMMIT opt_transaction_keyword  */
#line 375 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3188 "bison_parser.cpp"
    break;

  case 30: /* prepare_statement: PREPARE IDENTIFIER FROM prepare_target_query  */
#line 389 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3198 "bison_parser.cpp"
    break;

  case 32: /* execute_statement: EXECUTE IDENTIFIER  */
#line 399 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3207 "bison_parser.cpp"
    break;

  case 33: /* execute_statement: EXECUTE IDENTIFIER '(' opt_literal_list ')'  */
#line 403 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3217 "bison_parser.cpp"
    break;

  case 34: /* import_statement: IMPORT FROM file_type FILE file_path INTO table_name  */
#line 417 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3228 "bison_parser.cpp"
    break;

  case 35: /* import_statement: COPY table_name FROM file_path opt_file_type  */
#line 423 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3239 "bison_parser.cpp"
    break;

  case 36: /* file_type: IDENTIFIER  */
#line 432 "bison_parser.y"
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
#line 3258 "bison_parser.cpp"
    break;

  case 37: /* file_path: string_literal  */
#line 449 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3264 "bison_parser.cpp"
    break;

  case 38: /* opt_file_type: WITH FORMAT file_type  */
#line 453 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3272 "bison_parser.cpp"
    break;

  case 39: /* opt_file_type: %empty  */
#line 456 "bison_parser.y"
                                     { (yyval.import_type_t) = kImportAuto; }
#line 3278 "bison_parser.cpp"
    break;

  case 40: /* export_statement: COPY table_name TO file_path opt_file_type  */
#line 465 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3289 "bison_parser.cpp"
    break;

  case 41: /* show_statement: SHOW TABLES  */
#line 479 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3297 "bison_parser.cpp"
    break;

  case 42: /* show_statement: SHOW COLUMNS table_name  */
#line 482 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3307 "bison_parser.cpp"
    break;

  case 43: /* show_statement: DESCRIBE table_name  */
#line 487 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3317 "bison_parser.cpp"
    break;

  case 44: /* create_statement: CREATE TABLE opt_not_exists table_name FROM IDENTIFIER FILE file_path  */
#line 501 "bison_parser.y"
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
#line 3335 "bison_parser.cpp"
    break;

  case 45: /* create_statement: CREATE TABLE opt_not_exists table_name '(' column_def_commalist ')'  */
#line 514 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3347 "bison_parser.cpp"
    break;

  case 46: /* create_statement: CREATE TABLE opt_not_exists table_name AS select_statement  */
#line 521 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3359 "bison_parser.cpp"
    break;

  case 47: /* create_statement: CREATE VIEW opt_not_exists table_name opt_column_list AS select_statement  */
#line 528 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3372 "bison_parser.cpp"
    break;

  case 48: /* opt_not_exists: IF NOT EXISTS  */
#line 539 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3378 "bison_parser.cpp"
    break;

  case 49: /* opt_not_exists: %empty  */
#line 540 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3384 "bison_parser.cpp"
    break;

  case 50: /* column_def_commalist: column_def  */
#line 544 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3390 "bison_parser.cpp"
    break;

  case 51: /* column_def_commalist: column_def_commalist ',' column_def  */
#line 545 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3396 "bison_parser.cpp"
    break;

  case 52: /* column_def: IDENTIFIER column_type opt_column_nullable  */
#line 549 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3404 "bison_parser.cpp"
    break;

  case 53: /* column_type: TINYINT  */
#line 555 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT, 8}; }
#line 3410 "bison_parser.cpp"
    break;

  case 54: /* column_type: SMALLINT  */
#line 556 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::INT, 16}; }
#line 3416 "bison_parser.cpp"
    break;

  case 55: /* column_type: INT  */
#line 557 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT, 32}; }
#line 3422 "bison_parser.cpp"
    break;

  case 56: /* column_type: BIGINT  */
#line 558 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::INT, 64}; }
#line 3428 "bison_parser.cpp"
    break;

  case 57: /* column_type: LONG  */
#line 559 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::INT, 64}; }
#line 3434 "bison_parser.cpp"
    break;

  case 58: /* column_type: FLOAT  */
#line 560 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3440 "bison_parser.cpp"
    break;

  case 59: /* column_type: DOUBLE  */
#line 561 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3446 "bison_parser.cpp"
    break;

  case 60: /* column_type: DECIMAL '(' INTVAL ',' INTVAL ')'  */
#line 562 "bison_parser.y"
                                                  { (yyval.column_type_t) = ColumnType{DataType::DECIMAL, (yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3452 "bison_parser.cpp"
    break;

  case 61: /* column_type: BOOLEAN  */
#line 563 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3458 "bison_parser.cpp"
    break;

  case 62: /* column_type: VARCHAR '(' INTVAL ')'  */
#line 564 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3464 "bison_parser.cpp"
    break;

  case 63: /* column_type: CHAR '(' INTVAL ')'  */
#line 565 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3470 "bison_parser.cpp"
    break;

  case 64: /* column_type: TEXT  */
#line 566 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3476 "bison_parser.cpp"
    break;

  case 65: /* column_type: DATETIME  */
#line 567 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3482 "bison_parser.cpp"
    break;

  case 66: /* column_type: DATE  */
#line 568 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3488 "bison_parser.cpp"
    break;

  case 67: /* column_type: TIMESTAMP  */
#line 569 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIMESTAMP}; }
#line 3494 "bison_parser.cpp"
    break;

  case 68: /* column_type: TIME  */
#line 570 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TIME}; }
#line 3500 "bison_parser.cpp"
    break;

  case 69: /* opt_column_nullable: NULL  */
#line 574 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3506 "bison_parser.cpp"
    break;

  case 70: /* opt_column_nullable: NOT NULL  */
#line 575 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3512 "bison_parser.cpp"
    break;

  case 71: /* opt_column_nullable: %empty  */
#line 576 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3518 "bison_parser.cpp"
    break;

  case 72: /* drop_statement: DROP TABLE opt_exists table_name  */
#line 586 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3529 "bison_parser.cpp"
    break;

  case 73: /* drop_statement: DROP VIEW opt_exists table_name  */
#line 592 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3540 "bison_parser.cpp"
    break;

  case 74: /* drop_statement: DEALLOCATE PREPARE IDENTIFIER  */
#line 598 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3550 "bison_parser.cpp"
    break;

  case 75: /* opt_exists: IF EXISTS  */
#line 606 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3556 "bison_parser.cpp"
    break;

  case 76: /* opt_exists: %empty  */
#line 607 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3562 "bison_parser.cpp"
    break;

  case 77: /* delete_statement: DELETE FROM table_name opt_where  */
#line 616 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3573 "bison_parser.cpp"
    break;

  case 78: /* truncate_statement: TRUNCATE table_name  */
#line 625 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3583 "bison_parser.cpp"
    break;

  case 79: /* insert_statement: INSERT INTO table_name opt_column_list VALUES '(' literal_list ')'  */
#line 638 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3595 "bison_parser.cpp"
    break;

  case 80: /* insert_statement: INSERT INTO table_name opt_column_list select_no_paren  */
#line 645 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3607 "bison_parser.cpp"
    break;

  case 81: /* opt_column_list: '(' ident_commalist ')'  */
#line 656 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3613 "bison_parser.cpp"
    break;

  case 82: /* opt_column_list: %empty  */
#line 657 "bison_parser.y"
                                    { (yyval.str_vec) = nullptr; }
#line 3619 "bison_parser.cpp"
    break;

  case 83: /* update_statement: UPDATE table_ref_name_no_alias SET update_clause_commalist opt_where  */
#line 667 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3630 "bison_parser.cpp"
    break;

  case 84: /* update_clause_commalist: update_clause  */
#line 676 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3636 "bison_parser.cpp"
    break;

  case 85: /* update_clause_commalist: update_clause_commalist ',' update_clause  */
#line 677 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3642 "bison_parser.cpp"
    break;

  case 86: /* update_clause: IDENTIFIER '=' expr  */
#line 681 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3652 "bison_parser.cpp"
    break;

  case 87: /* select_statement: opt_with_clause select_with_paren  */
#line 693 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3661 "bison_parser.cpp"
    break;

  case 88: /* select_statement: opt_with_clause select_no_paren  */
#line 697 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3670 "bison_parser.cpp"
    break;

  case 89: /* select_statement: opt_with_clause select_with_paren set_operator select_within_set_operation opt_order opt_limit  */
#line 701 "bison_parser.y"
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
#line 3686 "bison_parser.cpp"
    break;

  case 92: /* select_within_set_operation_no_parentheses: select_clause  */
#line 719 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3692 "bison_parser.cpp"
    break;

  case 93: /* select_within_set_operation_no_parentheses: select_clause set_operator select_within_set_operation  */
#line 720 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3705 "bison_parser.cpp"
    break;

  case 94: /* select_with_paren: '(' select_no_paren ')'  */
#line 731 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3711 "bison_parser.cpp"
    break;

  case 95: /* select_with_paren: '(' select_with_paren ')'  */
#line 732 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3717 "bison_parser.cpp"
    break;

  case 96: /* select_no_paren: select_clause opt_order opt_limit  */
#line 736 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3732 "bison_parser.cpp"
    break;

  case 97: /* select_no_paren: select_clause set_operator select_within_set_operation opt_order opt_limit  */
#line 746 "bison_parser.y"
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
#line 3747 "bison_parser.cpp"
    break;

  case 98: /* set_operator: set_type opt_all  */
#line 759 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 3756 "bison_parser.cpp"
    break;

  case 99: /* set_type: UNION  */
#line 766 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 3765 "bison_parser.cpp"
    break;

  case 100: /* set_type: INTERSECT  */
#line 770 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 3774 "bison_parser.cpp"
    break;

  case 101: /* set_type: EXCEPT  */
#line 774 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 3783 "bison_parser.cpp"
    break;

  case 102: /* opt_all: ALL  */
#line 781 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 3791 "bison_parser.cpp"
    break;

  case 103: /* opt_all: %empty  */
#line 784 "bison_parser.y"
                                    {
		(yyval.bval) = false;
	}
#line 3799 "bison_parser.cpp"
    break;

  case 104: /* select_clause: SELECT opt_top opt_distinct select_list opt_from_clause opt_where opt_group  */
#line 790 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 3813 "bison_parser.cpp"
    break;

  case 105: /* opt_distinct: DISTINCT  */
#line 802 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 3819 "bison_parser.cpp"
    break;

  case 106: /* opt_distinct: %empty  */
#line 803 "bison_parser.y"
                                    { (yyval.bval) = false; }
#line 3825 "bison_parser.cpp"
    break;

  case 108: /* opt_from_clause: from_clause  */
#line 811 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 3831 "bison_parser.cpp"
    break;

  case 109: /* opt_from_clause: %empty  */
#line 812 "bison_parser.y"
                             { (yyval.table) = nullptr; }
#line 3837 "bison_parser.cpp"
    break;

  case 110: /* from_clause: FROM table_ref  */
#line 816 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 3843 "bison_parser.cpp"
    break;

  case 111: /* opt_where: WHERE expr  */
#line 821 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 3849 "bison_parser.cpp"
    break;

  case 112: /* opt_where: %empty  */
#line 822 "bison_parser.y"
                                    { (yyval.expr) = nullptr; }
#line 3855 "bison_parser.cpp"
    break;

  case 113: /* opt_group: GROUP BY expr_list HAVING expr  */
#line 826 "bison_parser.y"
                                               {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-2].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3865 "bison_parser.cpp"
    break;

  case 114: /* opt_group: GROUP BY expr_list  */
#line 831 "bison_parser.y"
                                   {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[0].expr_vec);
			(yyval.group_t)->having = nullptr;
		}
#line 3875 "bison_parser.cpp"
    break;

  case 115: /* opt_group: HAVING expr  */
#line 836 "bison_parser.y"
                            {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = nullptr;
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 3885 "bison_parser.cpp"
    break;

  case 116: /* opt_group: %empty  */
#line 841 "bison_parser.y"
                                    { (yyval.group_t) = nullptr; }
#line 3891 "bison_parser.cpp"
    break;

  case 117: /* opt_order: ORDER BY order_list  */
#line 845 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 3897 "bison_parser.cpp"
    break;

  case 118: /* opt_order: %empty  */
#line 846 "bison_parser.y"
                                    { (yyval.order_vec) = nullptr; }
#line 3903 "bison_parser.cpp"
    break;

  case 119: /* order_list: order_desc  */
#line 850 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 3909 "bison_parser.cpp"
    break;

  case 120: /* order_list: order_list ',' order_desc  */
#line 851 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 3915 "bison_parser.cpp"
    break;

  case 121: /* order_desc: expr opt_order_type  */
#line 855 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 3921 "bison_parser.cpp"
    break;

  case 122: /* opt_order_type: ASC  */
#line 859 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 3927 "bison_parser.cpp"
    break;

  case 123: /* opt_order_type: DESC  */
#line 860 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 3933 "bison_parser.cpp"
    break;

  case 124: /* opt_order_type: %empty  */
#line 861 "bison_parser.y"
                                    { (yyval.order_type) = kOrderAsc; }
#line 3939 "bison_parser.cpp"
    break;

  case 125: /* opt_top: TOP int_literal  */
#line 867 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3945 "bison_parser.cpp"
    break;

  case 126: /* opt_top: %empty  */
#line 868 "bison_parser.y"
                                    { (yyval.limit) = nullptr; }
#line 3951 "bison_parser.cpp"
    break;

  case 127: /* opt_limit: LIMIT expr  */
#line 872 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 3957 "bison_parser.cpp"
    break;

  case 128: /* opt_limit: OFFSET expr  */
#line 873 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3963 "bison_parser.cpp"
    break;

  case 129: /* opt_limit: LIMIT expr OFFSET expr  */
#line 874 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 3969 "bison_parser.cpp"
    break;

  case 130: /* opt_limit: LIMIT ALL  */
#line 875 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 3975 "bison_parser.cpp"
    break;

  case 131: /* opt_limit: LIMIT ALL OFFSET expr  */
#line 876 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 3981 "bison_parser.cpp"
    break;

  case 132: /* opt_limit: %empty  */
#line 877 "bison_parser.y"
                                    { (yyval.limit) = nullptr; }
#line 3987 "bison_parser.cpp"
    break;

  case 133: /* expr_list: expr_alias  */
#line 884 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3993 "bison_parser.cpp"
    break;

  case 134: /* expr_list: expr_list ',' expr_alias  */
#line 885 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3999 "bison_parser.cpp"
    break;

  case 135: /* opt_literal_list: literal_list  */
#line 889 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4005 "bison_parser.cpp"
    break;

  case 136: /* opt_literal_list: %empty  */
#line 890 "bison_parser.y"
                                    { (yyval.expr_vec) = nullptr; }
#line 4011 "bison_parser.cpp"
    break;

  case 137: /* literal_list: literal  */
#line 894 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4017 "bison_parser.cpp"
    break;

  case 138: /* literal_list: literal_list ',' literal  */
#line 895 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4023 "bison_parser.cpp"
    break;

  case 139: /* expr_alias: expr opt_alias  */
#line 899 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4035 "bison_parser.cpp"
    break;

  case 145: /* operand: '(' expr ')'  */
#line 917 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4041 "bison_parser.cpp"
    break;

  case 155: /* operand: '(' select_no_paren ')'  */
#line 927 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4047 "bison_parser.cpp"
    break;

  case 158: /* unary_expr: '-' operand  */
#line 936 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4053 "bison_parser.cpp"
    break;

  case 159: /* unary_expr: NOT operand  */
#line 937 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4059 "bison_parser.cpp"
    break;

  case 160: /* unary_expr: operand ISNULL  */
#line 938 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4065 "bison_parser.cpp"
    break;

  case 161: /* unary_expr: operand IS NULL  */
#line 939 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4071 "bison_parser.cpp"
    break;

  case 162: /* unary_expr: operand IS NOT NULL  */
#line 940 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4077 "bison_parser.cpp"
    break;

  case 164: /* binary_expr: operand '-' operand  */
#line 945 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4083 "bison_parser.cpp"
    break;

  case 165: /* binary_expr: operand '+' operand  */
#line 946 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4089 "bison_parser.cpp"
    break;

  case 166: /* binary_expr: operand '/' operand  */
#line 947 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4095 "bison_parser.cpp"
    break;

  case 167: /* binary_expr: operand '*' operand  */
#line 948 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4101 "bison_parser.cpp"
    break;

  case 168: /* binary_expr: operand '%' operand  */
#line 949 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4107 "bison_parser.cpp"
    break;

  case 169: /* binary_expr: operand '^' operand  */
#line 950 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4113 "bison_parser.cpp"
    break;

  case 170: /* binary_expr: operand LIKE operand  */
#line 951 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4119 "bison_parser.cpp"
    break;

  case 171: /* binary_expr: operand NOT LIKE operand  */
#line 952 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4125 "bison_parser.cpp"
    break;

  case 172: /* binary_expr: operand ILIKE operand  */
#line 953 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4131 "bison_parser.cpp"
    break;

  case 173: /* binary_expr: operand CONCAT operand  */
#line 954 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4137 "bison_parser.cpp"
    break;

  case 174: /* logic_expr: expr AND expr  */
#line 958 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4143 "bison_parser.cpp"
    break;

  case 175: /* logic_expr: expr OR expr  */
#line 959 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4149 "bison_parser.cpp"
    break;

  case 176: /* in_expr: operand IN '(' expr_list ')'  */
#line 963 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4155 "bison_parser.cpp"
    break;

  case 177: /* in_expr: operand NOT IN '(' expr_list ')'  */
#line 964 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4161 "bison_parser.cpp"
    break;

  case 178: /* in_expr: operand IN '(' select_no_paren ')'  */
#line 965 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4167 "bison_parser.cpp"
    break;

  case 179: /* in_expr: operand NOT IN '(' select_no_paren ')'  */
#line 966 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4173 "bison_parser.cpp"
    break;

  case 180: /* case_expr: CASE expr case_list END  */
#line 972 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4179 "bison_parser.cpp"
    break;

  case 181: /* case_expr: CASE expr case_list ELSE expr END  */
#line 973 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4185 "bison_parser.cpp"
    break;

  case 182: /* case_expr: CASE case_list END  */
#line 974 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4191 "bison_parser.cpp"
    break;

  case 183: /* case_expr: CASE case_list ELSE expr END  */
#line 975 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4197 "bison_parser.cpp"
    break;

  case 184: /* case_list: WHEN expr THEN expr  */
#line 979 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4203 "bison_parser.cpp"
    break;

  case 185: /* case_list: case_list WHEN expr THEN expr  */
#line 980 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4209 "bison_parser.cpp"
    break;

  case 186: /* exists_expr: EXISTS '(' select_no_paren ')'  */
#line 984 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4215 "bison_parser.cpp"
    break;

  case 187: /* exists_expr: NOT EXISTS '(' select_no_paren ')'  */
#line 985 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4221 "bison_parser.cpp"
    break;

  case 188: /* comp_expr: operand '=' operand  */
#line 989 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4227 "bison_parser.cpp"
    break;

  case 189: /* comp_expr: operand EQUALS operand  */
#line 990 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4233 "bison_parser.cpp"
    break;

  case 190: /* comp_expr: operand NOTEQUALS operand  */
#line 991 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4239 "bison_parser.cpp"
    break;

  case 191: /* comp_expr: operand '<' operand  */
#line 992 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4245 "bison_parser.cpp"
    break;

  case 192: /* comp_expr: operand '>' operand  */
#line 993 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4251 "bison_parser.cpp"
    break;

  case 193: /* comp_expr: operand LESSEQ operand  */
#line 994 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4257 "bison_parser.cpp"
    break;

  case 194: /* comp_expr: operand GREATEREQ operand  */
#line 995 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4263 "bison_parser.cpp"
    break;

  case 195: /* function_expr: IDENTIFIER '(' ')'  */
#line 999 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4269 "bison_parser.cpp"
    break;

  case 196: /* function_expr: IDENTIFIER '(' opt_distinct expr_list ')'  */
#line 1000 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4275 "bison_parser.cpp"
    break;

  case 197: /* extract_expr: EXTRACT '(' datetime_field FROM expr ')'  */
#line 1004 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4281 "bison_parser.cpp"
    break;

  case 198: /* cast_expr: CAST '(' expr AS column_type ')'  */
#line 1008 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4287 "bison_parser.cpp"
    break;

  case 199: /* datetime_field: SECOND  */
#line 1012 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4293 "bison_parser.cpp"
    break;

  case 200: /* datetime_field: MINUTE  */
#line 1013 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4299 "bison_parser.cpp"
    break;

  case 201: /* datetime_field: HOUR  */
#line 1014 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4305 "bison_parser.cpp"
    break;

  case 202: /* datetime_field: DAY  */
#line 1015 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4311 "bison_parser.cpp"
    break;

  case 203: /* datetime_field: MONTH  */
#line 1016 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4317 "bison_parser.cpp"
    break;

  case 204: /* datetime_field: YEAR  */
#line 1017 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4323 "bison_parser.cpp"
    break;

  case 205: /* datetime_field: QUARTER  */
#line 1018 "bison_parser.y"
                        { (yyval.datetime_field) = kDatetimeQuarter; }
#line 4329 "bison_parser.cpp"
    break;

  case 206: /* date_literal: DATE string_literal  */
#line 1022 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeDate((yyvsp[0].expr)->name); }
#line 4335 "bison_parser.cpp"
    break;

  case 207: /* interval_literal: INTERVAL string_literal datetime_field  */
#line 1026 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeInterval((yyvsp[-1].expr)->name, (yyvsp[0].datetime_field)); }
#line 4341 "bison_parser.cpp"
    break;

  case 208: /* array_expr: ARRAY '[' expr_list ']'  */
#line 1030 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4347 "bison_parser.cpp"
    break;

  case 209: /* array_index: operand '[' int_literal ']'  */
#line 1034 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4353 "bison_parser.cpp"
    break;

  case 210: /* between_expr: operand BETWEEN operand AND operand  */
#line 1038 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4359 "bison_parser.cpp"
    break;

  case 211: /* column_name: IDENTIFIER  */
#line 1042 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4365 "bison_parser.cpp"
    break;

  case 212: /* column_name: IDENTIFIER '.' IDENTIFIER  */
#line 1043 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4371 "bison_parser.cpp"
    break;

  case 213: /* column_name: '*'  */
#line 1044 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4377 "bison_parser.cpp"
    break;

  case 214: /* column_name: IDENTIFIER '.' '*'  */
#line 1045 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4383 "bison_parser.cpp"
    break;

  case 222: /* string_literal: STRING  */
#line 1059 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4389 "bison_parser.cpp"
    break;

  case 223: /* bool_literal: TRUE  */
#line 1063 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4395 "bison_parser.cpp"
    break;

  case 224: /* bool_literal: FALSE  */
#line 1064 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4401 "bison_parser.cpp"
    break;

  case 225: /* num_literal: FLOATVAL  */
#line 1068 "bison_parser.y"
                         { (yyval.expr) = Expr::makeFloatLiteral((yyvsp[0].sval)); }
#line 4407 "bison_parser.cpp"
    break;

  case 227: /* int_literal: INTVAL  */
#line 1073 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4413 "bison_parser.cpp"
    break;

  case 228: /* null_literal: NULL  */
#line 1077 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4419 "bison_parser.cpp"
    break;

  case 229: /* param_expr: '?'  */
#line 1081 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4429 "bison_parser.cpp"
    break;

  case 231: /* table_ref: table_ref_commalist ',' table_ref_atomic  */
#line 1094 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4440 "bison_parser.cpp"
    break;

  case 235: /* nonjoin_table_ref_atomic: '(' select_statement ')' opt_table_alias  */
#line 1110 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4451 "bison_parser.cpp"
    break;

  case 236: /* table_ref_commalist: table_ref_atomic  */
#line 1119 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4457 "bison_parser.cpp"
    break;

  case 237: /* table_ref_commalist: table_ref_commalist ',' table_ref_atomic  */
#line 1120 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4463 "bison_parser.cpp"
    break;

  case 238: /* table_ref_name: table_name opt_table_alias  */
#line 1125 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4475 "bison_parser.cpp"
    break;

  case 239: /* table_ref_name_no_alias: table_name  */
#line 1136 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4485 "bison_parser.cpp"
    break;

  case 240: /* table_name: IDENTIFIER  */
#line 1145 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4491 "bison_parser.cpp"
    break;

  case 241: /* table_name: IDENTIFIER '.' IDENTIFIER  */
#line 1146 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4497 "bison_parser.cpp"
    break;

  case 243: /* table_alias: AS IDENTIFIER '(' ident_commalist ')'  */
#line 1152 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4503 "bison_parser.cpp"
    break;

  case 245: /* opt_table_alias: %empty  */
#line 1158 "bison_parser.y"
                                    { (yyval.alias_t) = nullptr; }
#line 4509 "bison_parser.cpp"
    break;

  case 246: /* alias: AS IDENTIFIER  */
#line 1163 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4515 "bison_parser.cpp"
    break;

  case 247: /* alias: IDENTIFIER  */
#line 1164 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4521 "bison_parser.cpp"
    break;

  case 249: /* opt_alias: %empty  */
#line 1170 "bison_parser.y"
                                    { (yyval.alias_t) = nullptr; }
#line 4527 "bison_parser.cpp"
    break;

  case 251: /* opt_with_clause: %empty  */
#line 1180 "bison_parser.y"
                                    { (yyval.with_description_vec) = nullptr; }
#line 4533 "bison_parser.cpp"
    break;

  case 252: /* with_clause: WITH with_description_list  */
#line 1184 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4539 "bison_parser.cpp"
    break;

  case 253: /* with_description_list: with_description  */
#line 1188 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4548 "bison_parser.cpp"
    break;

  case 254: /* with_description_list: with_description_list ',' with_description  */
#line 1192 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4557 "bison_parser.cpp"
    break;

  case 255: /* with_description: IDENTIFIER AS select_with_paren  */
#line 1199 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4567 "bison_parser.cpp"
    break;

  case 256: /* join_clause: table_ref_atomic NATURAL JOIN nonjoin_table_ref_atomic  */
#line 1213 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4579 "bison_parser.cpp"
    break;

  case 257: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic ON join_condition  */
#line 1221 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4592 "bison_parser.cpp"
    break;

  case 258: /* join_clause: table_ref_atomic opt_join_type JOIN table_ref_atomic USING '(' column_name ')'  */
#line 1231 "bison_parser.y"
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
#line 4612 "bison_parser.cpp"
    break;

  case 259: /* opt_join_type: INNER  */
#line 1249 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4618 "bison_parser.cpp"
    break;

  case 260: /* opt_join_type: LEFT OUTER  */
#line 1250 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4624 "bison_parser.cpp"
    break;

  case 261: /* opt_join_type: LEFT  */
#line 1251 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4630 "bison_parser.cpp"
    break;

  case 262: /* opt_join_type: RIGHT OUTER  */
#line 1252 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4636 "bison_parser.cpp"
    break;

  case 263: /* opt_join_type: RIGHT  */
#line 1253 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4642 "bison_parser.cpp"
    break;

  case 264: /* opt_join_type: FULL OUTER  */
#line 1254 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4648 "bison_parser.cpp"
    break;

  case 265: /* opt_join_type: OUTER  */
#line 1255 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4654 "bison_parser.cpp"
    break;

  case 266: /* opt_join_type: FULL  */
#line 1256 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4660 "bison_parser.cpp"
    break;

  case 267: /* opt_join_type: CROSS  */
#line 1257 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4666 "bison_parser.cpp"
    break;

  case 268: /* opt_join_type: %empty  */
#line 1258 "bison_parser.y"
                                                { (yyval.uval) = kJoinInner; }
#line 4672 "bison_parser.cpp"
    break;

  case 272: /* ident_commalist: IDENTIFIER  */
#line 1278 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4678 "bison_parser.cpp"
    break;

  case 273: /* ident_commalist: ident_commalist ',' IDENTIFIER  */
#line 1279 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4684 "bison_parser.cpp"
    break;


#line 4688 "bison_parser.cpp"

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

#line 1282 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
