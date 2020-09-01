/* A Bison parser, made by GNU Bison 3.6.4.  */

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
#define YYBISON_VERSION "3.6.4"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 35 "bison_parser.y"

// %code requires block

#include "../sql/statements.h"
#include "../SQLParserResult.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
			yylloc->total_column++; \
			yylloc->string_length++; \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#line 174 "bison_parser.cpp"

/* Token kinds.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_HSQL_EMPTY = -2,
    SQL_YYEOF = 0,                 /* "end of file"  */
    SQL_HSQL_error = 256,          /* error  */
    SQL_HSQL_UNDEF = 257,          /* "invalid token"  */
    SQL_IDENTIFIER = 258,          /* IDENTIFIER  */
    SQL_STRING = 259,              /* STRING  */
    SQL_FLOATVAL = 260,            /* FLOATVAL  */
    SQL_INTVAL = 261,              /* INTVAL  */
    SQL_DEALLOCATE = 262,          /* DEALLOCATE  */
    SQL_PARAMETERS = 263,          /* PARAMETERS  */
    SQL_INTERSECT = 264,           /* INTERSECT  */
    SQL_TEMPORARY = 265,           /* TEMPORARY  */
    SQL_TIMESTAMP = 266,           /* TIMESTAMP  */
    SQL_INTERVAL = 267,            /* INTERVAL  */
    SQL_DISTINCT = 268,            /* DISTINCT  */
    SQL_NVARCHAR = 269,            /* NVARCHAR  */
    SQL_RESTRICT = 270,            /* RESTRICT  */
    SQL_TRUNCATE = 271,            /* TRUNCATE  */
    SQL_ANALYZE = 272,             /* ANALYZE  */
    SQL_BETWEEN = 273,             /* BETWEEN  */
    SQL_CASCADE = 274,             /* CASCADE  */
    SQL_COLUMNS = 275,             /* COLUMNS  */
    SQL_CONTROL = 276,             /* CONTROL  */
    SQL_DEFAULT = 277,             /* DEFAULT  */
    SQL_EXECUTE = 278,             /* EXECUTE  */
    SQL_EXPLAIN = 279,             /* EXPLAIN  */
    SQL_NATURAL = 280,             /* NATURAL  */
    SQL_PREPARE = 281,             /* PREPARE  */
    SQL_PRIMARY = 282,             /* PRIMARY  */
    SQL_SCHEMAS = 283,             /* SCHEMAS  */
    SQL_SPATIAL = 284,             /* SPATIAL  */
    SQL_VARCHAR = 285,             /* VARCHAR  */
    SQL_VIRTUAL = 286,             /* VIRTUAL  */
    SQL_DESCRIBE = 287,            /* DESCRIBE  */
    SQL_BEFORE = 288,              /* BEFORE  */
    SQL_COLUMN = 289,              /* COLUMN  */
    SQL_CREATE = 290,              /* CREATE  */
    SQL_DELETE = 291,              /* DELETE  */
    SQL_DIRECT = 292,              /* DIRECT  */
    SQL_DOUBLE = 293,              /* DOUBLE  */
    SQL_ESCAPE = 294,              /* ESCAPE  */
    SQL_EXCEPT = 295,              /* EXCEPT  */
    SQL_EXISTS = 296,              /* EXISTS  */
    SQL_EXTRACT = 297,             /* EXTRACT  */
    SQL_CAST = 298,                /* CAST  */
    SQL_FORMAT = 299,              /* FORMAT  */
    SQL_GLOBAL = 300,              /* GLOBAL  */
    SQL_HAVING = 301,              /* HAVING  */
    SQL_IMPORT = 302,              /* IMPORT  */
    SQL_INSERT = 303,              /* INSERT  */
    SQL_ISNULL = 304,              /* ISNULL  */
    SQL_OFFSET = 305,              /* OFFSET  */
    SQL_RENAME = 306,              /* RENAME  */
    SQL_SCHEMA = 307,              /* SCHEMA  */
    SQL_SELECT = 308,              /* SELECT  */
    SQL_SORTED = 309,              /* SORTED  */
    SQL_TABLES = 310,              /* TABLES  */
    SQL_UNIQUE = 311,              /* UNIQUE  */
    SQL_UNLOAD = 312,              /* UNLOAD  */
    SQL_UPDATE = 313,              /* UPDATE  */
    SQL_VALUES = 314,              /* VALUES  */
    SQL_AFTER = 315,               /* AFTER  */
    SQL_ALTER = 316,               /* ALTER  */
    SQL_CROSS = 317,               /* CROSS  */
    SQL_DELTA = 318,               /* DELTA  */
    SQL_FLOAT = 319,               /* FLOAT  */
    SQL_GROUP = 320,               /* GROUP  */
    SQL_INDEX = 321,               /* INDEX  */
    SQL_INNER = 322,               /* INNER  */
    SQL_LIMIT = 323,               /* LIMIT  */
    SQL_LOCAL = 324,               /* LOCAL  */
    SQL_MERGE = 325,               /* MERGE  */
    SQL_MINUS = 326,               /* MINUS  */
    SQL_ORDER = 327,               /* ORDER  */
    SQL_OUTER = 328,               /* OUTER  */
    SQL_RIGHT = 329,               /* RIGHT  */
    SQL_TABLE = 330,               /* TABLE  */
    SQL_UNION = 331,               /* UNION  */
    SQL_USING = 332,               /* USING  */
    SQL_WHERE = 333,               /* WHERE  */
    SQL_CALL = 334,                /* CALL  */
    SQL_CASE = 335,                /* CASE  */
    SQL_CHAR = 336,                /* CHAR  */
    SQL_COPY = 337,                /* COPY  */
    SQL_DATE = 338,                /* DATE  */
    SQL_DATETIME = 339,            /* DATETIME  */
    SQL_DESC = 340,                /* DESC  */
    SQL_DROP = 341,                /* DROP  */
    SQL_ELSE = 342,                /* ELSE  */
    SQL_FILE = 343,                /* FILE  */
    SQL_FROM = 344,                /* FROM  */
    SQL_FULL = 345,                /* FULL  */
    SQL_HASH = 346,                /* HASH  */
    SQL_HINT = 347,                /* HINT  */
    SQL_INTO = 348,                /* INTO  */
    SQL_JOIN = 349,                /* JOIN  */
    SQL_LEFT = 350,                /* LEFT  */
    SQL_LIKE = 351,                /* LIKE  */
    SQL_LOAD = 352,                /* LOAD  */
    SQL_LONG = 353,                /* LONG  */
    SQL_NULL = 354,                /* NULL  */
    SQL_PLAN = 355,                /* PLAN  */
    SQL_SHOW = 356,                /* SHOW  */
    SQL_TEXT = 357,                /* TEXT  */
    SQL_THEN = 358,                /* THEN  */
    SQL_TIME = 359,                /* TIME  */
    SQL_VIEW = 360,                /* VIEW  */
    SQL_WHEN = 361,                /* WHEN  */
    SQL_WITH = 362,                /* WITH  */
    SQL_ADD = 363,                 /* ADD  */
    SQL_ALL = 364,                 /* ALL  */
    SQL_AND = 365,                 /* AND  */
    SQL_ASC = 366,                 /* ASC  */
    SQL_END = 367,                 /* END  */
    SQL_FOR = 368,                 /* FOR  */
    SQL_INT = 369,                 /* INT  */
    SQL_KEY = 370,                 /* KEY  */
    SQL_TINYINT = 371,             /* TINYINT  */
    SQL_SMALLINT = 372,            /* SMALLINT  */
    SQL_BIGINT = 373,              /* BIGINT  */
    SQL_NOT = 374,                 /* NOT  */
    SQL_OFF = 375,                 /* OFF  */
    SQL_SET = 376,                 /* SET  */
    SQL_TOP = 377,                 /* TOP  */
    SQL_AS = 378,                  /* AS  */
    SQL_BY = 379,                  /* BY  */
    SQL_IF = 380,                  /* IF  */
    SQL_IN = 381,                  /* IN  */
    SQL_IS = 382,                  /* IS  */
    SQL_OF = 383,                  /* OF  */
    SQL_ON = 384,                  /* ON  */
    SQL_OR = 385,                  /* OR  */
    SQL_TO = 386,                  /* TO  */
    SQL_ARRAY = 387,               /* ARRAY  */
    SQL_CONCAT = 388,              /* CONCAT  */
    SQL_ILIKE = 389,               /* ILIKE  */
    SQL_SECOND = 390,              /* SECOND  */
    SQL_MINUTE = 391,              /* MINUTE  */
    SQL_HOUR = 392,                /* HOUR  */
    SQL_DAY = 393,                 /* DAY  */
    SQL_MONTH = 394,               /* MONTH  */
    SQL_YEAR = 395,                /* YEAR  */
    SQL_TRUE = 396,                /* TRUE  */
    SQL_FALSE = 397,               /* FALSE  */
    SQL_TRANSACTION = 398,         /* TRANSACTION  */
    SQL_BEGIN = 399,               /* BEGIN  */
    SQL_COMMIT = 400,              /* COMMIT  */
    SQL_ROLLBACK = 401,            /* ROLLBACK  */
    SQL_EQUALS = 402,              /* EQUALS  */
    SQL_NOTEQUALS = 403,           /* NOTEQUALS  */
    SQL_LESS = 404,                /* LESS  */
    SQL_GREATER = 405,             /* GREATER  */
    SQL_LESSEQ = 406,              /* LESSEQ  */
    SQL_GREATEREQ = 407,           /* GREATEREQ  */
    SQL_NOTNULL = 408,             /* NOTNULL  */
    SQL_UMINUS = 409               /* UMINUS  */
  };
  typedef enum hsql_tokentype hsql_token_kind_t;
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
union HSQL_STYPE
{
#line 95 "bison_parser.y"

	double fval;
	int64_t ival;
	char* sval;
	uintmax_t uval;
	bool bval;

	hsql::SQLStatement* statement;
	hsql::SelectStatement* 	select_stmt;
	hsql::ImportStatement* 	import_stmt;
	hsql::ExportStatement* 	export_stmt;
	hsql::CreateStatement* 	create_stmt;
	hsql::InsertStatement* 	insert_stmt;
	hsql::DeleteStatement* 	delete_stmt;
	hsql::UpdateStatement* 	update_stmt;
	hsql::DropStatement*   	drop_stmt;
	hsql::PrepareStatement* prep_stmt;
	hsql::ExecuteStatement* exec_stmt;
	hsql::ShowStatement*    show_stmt;
	hsql::TransactionStatement* transaction_stmt;

	hsql::TableName table_name;
	hsql::TableRef* table;
	hsql::Expr* expr;
	hsql::OrderDescription* order;
	hsql::OrderType order_type;
	hsql::WithDescription* with_description_t;
	hsql::DatetimeField datetime_field;
	hsql::LimitDescription* limit;
	hsql::ColumnDefinition* column_t;
	hsql::ColumnType column_type_t;
	hsql::ImportType import_type_t;
	hsql::GroupByDescription* group_t;
	hsql::UpdateClause* update_t;
	hsql::Alias* alias_t;
	hsql::SetOperation* set_operator_t;

	std::vector<hsql::SQLStatement*>* stmt_vec;

	std::vector<char*>* str_vec;
	std::vector<hsql::TableRef*>* table_vec;
	std::vector<hsql::ColumnDefinition*>* column_vec;
	std::vector<hsql::UpdateClause*>* update_vec;
	std::vector<hsql::Expr*>* expr_vec;
	std::vector<hsql::OrderDescription*>* order_vec;
	std::vector<hsql::WithDescription*>* with_description_vec;

#line 393 "bison_parser.cpp"

};
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */
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
  YYSYMBOL_TRUE = 141,                     /* TRUE  */
  YYSYMBOL_FALSE = 142,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 143,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 144,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 145,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 146,                 /* ROLLBACK  */
  YYSYMBOL_147_ = 147,                     /* '='  */
  YYSYMBOL_EQUALS = 148,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 149,                /* NOTEQUALS  */
  YYSYMBOL_150_ = 150,                     /* '<'  */
  YYSYMBOL_151_ = 151,                     /* '>'  */
  YYSYMBOL_LESS = 152,                     /* LESS  */
  YYSYMBOL_GREATER = 153,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 154,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 155,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 156,                  /* NOTNULL  */
  YYSYMBOL_157_ = 157,                     /* '+'  */
  YYSYMBOL_158_ = 158,                     /* '-'  */
  YYSYMBOL_159_ = 159,                     /* '*'  */
  YYSYMBOL_160_ = 160,                     /* '/'  */
  YYSYMBOL_161_ = 161,                     /* '%'  */
  YYSYMBOL_162_ = 162,                     /* '^'  */
  YYSYMBOL_UMINUS = 163,                   /* UMINUS  */
  YYSYMBOL_164_ = 164,                     /* '['  */
  YYSYMBOL_165_ = 165,                     /* ']'  */
  YYSYMBOL_166_ = 166,                     /* '('  */
  YYSYMBOL_167_ = 167,                     /* ')'  */
  YYSYMBOL_168_ = 168,                     /* '.'  */
  YYSYMBOL_169_ = 169,                     /* ';'  */
  YYSYMBOL_170_ = 170,                     /* ','  */
  YYSYMBOL_171_ = 171,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 172,                 /* $accept  */
  YYSYMBOL_input = 173,                    /* input  */
  YYSYMBOL_statement_list = 174,           /* statement_list  */
  YYSYMBOL_statement = 175,                /* statement  */
  YYSYMBOL_preparable_statement = 176,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 177,                /* opt_hints  */
  YYSYMBOL_hint_list = 178,                /* hint_list  */
  YYSYMBOL_hint = 179,                     /* hint  */
  YYSYMBOL_transaction_statement = 180,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 181,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 182,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 183,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 184,        /* execute_statement  */
  YYSYMBOL_import_statement = 185,         /* import_statement  */
  YYSYMBOL_file_type = 186,                /* file_type  */
  YYSYMBOL_file_path = 187,                /* file_path  */
  YYSYMBOL_opt_file_type = 188,            /* opt_file_type  */
  YYSYMBOL_export_statement = 189,         /* export_statement  */
  YYSYMBOL_show_statement = 190,           /* show_statement  */
  YYSYMBOL_create_statement = 191,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 192,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 193,     /* column_def_commalist  */
  YYSYMBOL_column_def = 194,               /* column_def  */
  YYSYMBOL_column_type = 195,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 196,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 197,           /* drop_statement  */
  YYSYMBOL_opt_exists = 198,               /* opt_exists  */
  YYSYMBOL_delete_statement = 199,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 200,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 201,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 202,          /* opt_column_list  */
  YYSYMBOL_update_statement = 203,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 204,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 205,            /* update_clause  */
  YYSYMBOL_select_statement = 206,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 207, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 208, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 209,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 210,          /* select_no_paren  */
  YYSYMBOL_set_operator = 211,             /* set_operator  */
  YYSYMBOL_set_type = 212,                 /* set_type  */
  YYSYMBOL_opt_all = 213,                  /* opt_all  */
  YYSYMBOL_select_clause = 214,            /* select_clause  */
  YYSYMBOL_opt_distinct = 215,             /* opt_distinct  */
  YYSYMBOL_select_list = 216,              /* select_list  */
  YYSYMBOL_opt_from_clause = 217,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 218,              /* from_clause  */
  YYSYMBOL_opt_where = 219,                /* opt_where  */
  YYSYMBOL_opt_group = 220,                /* opt_group  */
  YYSYMBOL_opt_having = 221,               /* opt_having  */
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
  YYSYMBOL_array_expr = 249,               /* array_expr  */
  YYSYMBOL_array_index = 250,              /* array_index  */
  YYSYMBOL_between_expr = 251,             /* between_expr  */
  YYSYMBOL_column_name = 252,              /* column_name  */
  YYSYMBOL_literal = 253,                  /* literal  */
  YYSYMBOL_string_literal = 254,           /* string_literal  */
  YYSYMBOL_bool_literal = 255,             /* bool_literal  */
  YYSYMBOL_num_literal = 256,              /* num_literal  */
  YYSYMBOL_int_literal = 257,              /* int_literal  */
  YYSYMBOL_null_literal = 258,             /* null_literal  */
  YYSYMBOL_param_expr = 259,               /* param_expr  */
  YYSYMBOL_table_ref = 260,                /* table_ref  */
  YYSYMBOL_table_ref_atomic = 261,         /* table_ref_atomic  */
  YYSYMBOL_nonjoin_table_ref_atomic = 262, /* nonjoin_table_ref_atomic  */
  YYSYMBOL_table_ref_commalist = 263,      /* table_ref_commalist  */
  YYSYMBOL_table_ref_name = 264,           /* table_ref_name  */
  YYSYMBOL_table_ref_name_no_alias = 265,  /* table_ref_name_no_alias  */
  YYSYMBOL_table_name = 266,               /* table_name  */
  YYSYMBOL_table_alias = 267,              /* table_alias  */
  YYSYMBOL_opt_table_alias = 268,          /* opt_table_alias  */
  YYSYMBOL_alias = 269,                    /* alias  */
  YYSYMBOL_opt_alias = 270,                /* opt_alias  */
  YYSYMBOL_opt_with_clause = 271,          /* opt_with_clause  */
  YYSYMBOL_with_clause = 272,              /* with_clause  */
  YYSYMBOL_with_description_list = 273,    /* with_description_list  */
  YYSYMBOL_with_description = 274,         /* with_description  */
  YYSYMBOL_join_clause = 275,              /* join_clause  */
  YYSYMBOL_opt_join_type = 276,            /* opt_join_type  */
  YYSYMBOL_join_condition = 277,           /* join_condition  */
  YYSYMBOL_opt_semicolon = 278,            /* opt_semicolon  */
  YYSYMBOL_ident_commalist = 279           /* ident_commalist  */
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
#define YYLAST   820

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  172
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  108
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  485

#define YYMAXUTOK   409


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
       2,     2,     2,     2,     2,     2,     2,   161,     2,     2,
     166,   167,   159,   157,   170,   158,   168,   160,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   169,
     150,   147,   151,   171,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   164,     2,   165,   162,     2,     2,     2,     2,     2,
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
     145,   146,   148,   149,   152,   153,   154,   155,   156,   163
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   270,   270,   291,   297,   306,   310,   314,   317,   320,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   344,
     345,   350,   351,   355,   359,   371,   374,   377,   383,   384,
     391,   398,   401,   405,   419,   425,   434,   451,   455,   458,
     467,   481,   484,   489,   503,   516,   523,   530,   541,   542,
     546,   547,   551,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   573,   574,   575,   585,
     591,   597,   605,   606,   615,   624,   637,   644,   655,   656,
     666,   675,   676,   680,   692,   696,   700,   714,   715,   718,
     719,   730,   731,   735,   745,   758,   765,   769,   773,   780,
     783,   789,   801,   802,   806,   810,   811,   815,   820,   821,
     825,   830,   835,   839,   840,   844,   845,   849,   850,   854,
     858,   859,   860,   866,   867,   871,   872,   873,   874,   875,
     876,   883,   884,   888,   889,   893,   894,   898,   908,   909,
     910,   911,   912,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   930,   931,   935,   936,   937,   938,
     939,   943,   944,   945,   946,   947,   948,   949,   950,   951,
     952,   953,   957,   958,   962,   963,   964,   965,   971,   972,
     973,   974,   978,   979,   983,   984,   988,   989,   990,   991,
     992,   993,   994,   998,   999,  1003,  1007,  1011,  1012,  1013,
    1014,  1015,  1016,  1020,  1024,  1028,  1032,  1036,  1040,  1041,
    1042,  1043,  1047,  1048,  1049,  1050,  1051,  1052,  1053,  1057,
    1061,  1062,  1066,  1067,  1071,  1075,  1079,  1091,  1092,  1102,
    1103,  1107,  1108,  1117,  1118,  1123,  1134,  1143,  1144,  1149,
    1150,  1155,  1156,  1161,  1162,  1167,  1168,  1177,  1178,  1182,
    1186,  1190,  1197,  1210,  1218,  1228,  1247,  1248,  1249,  1250,
    1251,  1252,  1253,  1254,  1255,  1256,  1261,  1270,  1271,  1276,
    1277
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
  "TRUE", "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "'='",
  "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
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
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "date_literal", "interval_literal", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "string_literal",
  "bool_literal", "num_literal", "int_literal", "null_literal",
  "param_expr", "table_ref", "table_ref_atomic",
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
     395,   396,   397,   398,   399,   400,   401,    61,   402,   403,
      60,    62,   404,   405,   406,   407,   408,    43,    45,    42,
      47,    37,    94,   409,    91,    93,    40,    41,    46,    59,
      44,    63
};
#endif

#define YYPACT_NINF (-302)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-268)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     539,     6,    30,    51,   151,    30,    -8,    78,   100,    26,
      30,    30,    -7,     4,   208,    92,    92,    92,   221,    68,
    -302,   146,  -302,   146,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,   -15,  -302,   243,    91,  -302,
      95,   176,  -302,   153,   153,    30,   267,    30,   170,  -302,
     -28,   157,   157,    30,  -302,   169,   127,  -302,  -302,  -302,
    -302,  -302,  -302,   509,  -302,   224,  -302,  -302,   200,   -15,
      31,  -302,    16,  -302,   321,    11,   325,   211,    30,    30,
     255,  -302,   250,   168,   336,   341,   341,   299,    30,    30,
    -302,   180,   208,  -302,   181,   342,   337,   182,   191,  -302,
    -302,  -302,   -15,   251,   235,   -15,    10,  -302,  -302,  -302,
    -302,   341,   341,  -302,  -302,  -302,  -302,   195,   193,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
     324,   -70,   168,   284,  -302,   341,   363,    13,   222,   -56,
    -302,   261,  -302,   261,  -302,  -302,  -302,  -302,  -302,   369,
    -302,  -302,   284,  -302,  -302,   301,  -302,  -302,    31,  -302,
    -302,   284,   301,   284,    81,  -302,   164,  -302,  -302,    11,
    -302,   371,   269,   374,   258,   -48,   212,   216,   219,   238,
     349,   225,   395,  -302,   252,   -53,   338,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,   293,  -302,    93,   229,  -302,   284,   336,
    -302,   344,  -302,  -302,   236,   105,  -302,   316,   242,  -302,
      61,    10,   -15,   245,  -302,    77,    10,   -53,   356,   -21,
    -302,  -302,  -302,  -302,  -302,  -302,  -302,  -302,   320,  -302,
     547,   107,  -302,   269,    14,    15,   360,   164,   284,   284,
     108,   114,   253,   395,   584,   284,    35,   254,   -68,   284,
     284,   395,  -302,   395,   -13,   256,    79,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   342,    30,  -302,   414,    11,   -53,  -302,   267,
      11,  -302,   369,     7,   255,  -302,   284,  -302,   417,  -302,
    -302,  -302,  -302,   284,  -302,  -302,  -302,  -302,   284,   284,
     341,  -302,   262,  -302,  -302,   264,  -302,  -302,  -302,  -302,
    -302,  -302,  -302,  -302,    84,  -302,   374,  -302,  -302,   284,
    -302,  -302,   257,   346,    62,    56,   119,   284,   284,  -302,
     360,   331,    54,  -302,  -302,  -302,   323,   540,   620,   395,
     265,   252,  -302,   340,   272,   620,   620,   620,   620,   656,
     656,   656,   656,    35,    35,     1,     1,     1,   -60,   275,
    -302,  -302,   116,  -302,   139,  -302,   269,  -302,    38,  -302,
     271,  -302,    34,  -302,   186,  -302,  -302,  -302,   -53,   -53,
    -302,   438,   439,  -302,   347,  -302,  -302,   140,  -302,   284,
     547,   284,   284,  -302,   118,    99,   280,  -302,   395,   620,
     252,   282,   145,  -302,  -302,  -302,  -302,   285,   359,  -302,
    -302,  -302,   381,   385,   386,   366,     7,   458,  -302,  -302,
    -302,   284,   343,  -302,  -302,   302,   303,  -302,  -302,   -65,
     306,   -53,   124,  -302,   284,  -302,   584,   307,   147,  -302,
    -302,    34,     7,  -302,  -302,  -302,     7,   389,   300,   -53,
     284,  -302,  -302,  -302,  -302,  -302,   -53,  -302,  -302,  -302,
    -302,   246,   363,   -20,   310,   284,   161,  -302,    18,   -53,
    -302,  -302,   309,   313,  -302
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   268,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   247,     0,   237,    75,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   236,
       0,    73,    73,     0,    41,     0,   249,   250,    28,    25,
      27,    26,     1,   248,     2,     0,     6,     5,   124,     0,
      84,    85,   116,    71,     0,   134,     0,     0,     0,     0,
     109,    36,     0,    79,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   103,     0,     0,    97,
      98,    96,     0,   100,     0,     0,   130,   238,   219,   222,
     224,     0,     0,   225,   220,   221,   226,     0,   133,   217,
     218,   135,   212,   213,   214,   223,   215,   216,    31,    30,
       0,     0,    79,     0,    74,     0,     0,     0,     0,   109,
      81,    39,    37,    39,    72,    69,    70,   252,   251,     0,
     123,   102,     0,    92,    91,   116,    88,    87,    89,    99,
      95,     0,   116,     0,     0,    93,     0,   203,    33,     0,
      48,     0,   248,     0,     0,   208,     0,     0,     0,     0,
       0,     0,     0,   210,     0,   108,   138,   145,   146,   147,
     140,   142,   148,   141,   161,   149,   150,   151,   152,   144,
     139,   154,   155,     0,   269,     0,     0,    77,     0,     0,
      80,     0,    35,    40,    23,     0,    21,   106,   104,   131,
     246,   130,     0,   115,   117,   122,   130,   126,   128,   125,
     197,   198,   199,   200,   201,   202,   204,   136,     0,    46,
       0,     0,    50,   248,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,     0,   156,     0,     0,     0,
       0,     0,   158,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    83,    82,     0,
       0,    19,     0,     0,   109,   105,     0,   244,     0,   245,
     137,    86,    90,     0,   121,   120,   119,    94,     0,     0,
       0,    65,     0,    59,    58,     0,    64,    63,    57,    62,
      55,    53,    54,    56,    68,    45,     0,    47,   193,     0,
     209,   211,     0,     0,     0,     0,     0,     0,     0,   180,
       0,     0,     0,   153,   143,   172,   173,     0,   168,     0,
       0,     0,   159,     0,   171,   170,   186,   187,   188,   189,
     190,   191,   192,   163,   162,   165,   164,   166,   167,     0,
      34,   270,     0,    38,     0,    22,   248,   107,   227,   229,
       0,   231,   242,   230,   112,   132,   243,   118,   129,   127,
      44,     0,     0,    66,     0,    52,    51,     0,   184,     0,
       0,     0,     0,   178,     0,     0,     0,   205,     0,   169,
       0,     0,     0,   160,   206,    76,    24,     0,     0,   264,
     256,   262,   260,   263,   258,     0,     0,     0,   241,   235,
     239,     0,     0,   101,   111,     0,     0,    67,   194,     0,
       0,   182,     0,   181,     0,   185,   207,     0,     0,   176,
     174,   242,     0,   259,   261,   257,     0,   228,   243,   113,
       0,    60,    61,   195,   196,   179,   183,   177,   175,   232,
     253,   265,     0,   114,     0,     0,     0,   110,     0,   266,
     254,   240,   208,     0,   255
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -302,  -302,  -302,   419,  -302,   478,  -302,   213,  -302,    27,
    -302,  -302,  -302,  -302,   214,   -83,   361,  -302,  -302,  -302,
     462,  -302,   184,   111,  -302,  -302,   460,  -302,  -302,  -302,
     387,  -302,  -302,   304,  -161,   -64,  -302,    39,   -67,   -52,
    -302,  -302,   -66,   273,  -302,  -302,  -302,  -125,  -302,    45,
     -86,  -302,   218,  -302,  -302,    41,  -250,  -302,   -41,   226,
    -133,  -132,  -302,  -302,  -302,  -302,  -302,  -302,   274,  -302,
    -302,  -302,  -302,  -302,   276,  -302,  -302,  -302,  -302,  -302,
      48,   -74,   -77,  -302,  -302,   -89,  -302,  -302,  -302,  -301,
      76,  -302,  -302,  -302,     2,  -302,    80,   314,  -302,  -302,
    -302,  -302,   437,  -302,  -302,  -302,  -302,    58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   215,   216,    22,    59,
      23,   129,    24,    25,    82,   141,   212,    26,    27,    28,
      78,   241,   242,   324,   395,    29,    88,    30,    31,    32,
     137,    33,   139,   140,    34,   155,   156,   157,    71,   102,
     103,   160,    72,   152,   217,   294,   295,   134,   433,   434,
     106,   223,   224,   306,    96,   165,   218,   117,   118,   219,
     220,   186,   187,   188,   189,   190,   191,   192,   251,   193,
     194,   195,   196,   197,   236,   119,   120,   198,   199,   200,
     201,   202,   122,   123,   124,   125,   126,   127,   377,   378,
     379,   380,   381,    48,   382,   428,   429,   430,   300,    35,
      36,    56,    57,   383,   425,   480,    64,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     185,   121,    98,   143,    39,   342,   150,    42,   142,   142,
      38,   239,    49,    50,   210,   108,   109,   110,   330,   171,
     105,   482,   133,   111,    53,    99,   431,   151,   225,   309,
     227,   229,    37,    38,   166,   167,   158,   297,    68,   158,
      99,   162,   259,    60,    61,   259,   250,    80,   254,    83,
     256,   258,   203,   172,    40,    90,   100,   259,   142,    54,
     163,    85,   260,   418,   297,   260,    68,    43,    51,   221,
     207,   100,   206,   267,    70,   287,   226,   260,   164,   397,
     131,   132,   327,   349,   175,   108,   109,   110,   104,   259,
     145,   146,   101,   111,   112,   237,   173,    44,    52,   344,
     419,   412,   463,    86,   282,   420,   222,   101,    97,   260,
     113,   421,   422,   350,   209,   334,   335,   257,   244,    47,
     245,   254,   176,   177,   178,   457,   345,   346,   423,   347,
     147,   348,  -265,   424,   267,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     296,    69,   114,   115,    41,   471,   158,   427,   302,   401,
     448,   179,   304,   281,   112,   282,   259,    45,   267,   384,
     225,   259,   259,   376,   331,   388,   389,   183,   352,   332,
     113,   328,   116,   393,   298,   400,   260,   259,   305,    46,
     228,   260,   260,   369,   278,   279,   280,   281,   353,   282,
     180,   337,   444,   394,   404,   405,   402,   260,  -233,   259,
     473,    55,   121,   181,   249,   417,   121,   409,   259,   407,
     338,    62,   114,   115,   296,   338,   339,   390,   259,   260,
     443,   403,   431,   142,   259,    58,   465,    63,   260,   182,
     183,   175,   108,   109,   110,   372,    73,   184,   260,   374,
     111,   432,   116,    65,   260,   175,   108,   109,   110,    74,
     284,    75,   301,   285,   111,    76,   439,   307,   441,   442,
      81,   418,   291,   406,   325,   292,   446,   326,    77,   176,
     177,   178,    87,   415,   411,   370,   169,   175,   108,   109,
     110,    84,    91,   176,   177,   178,   111,    92,   459,   230,
     231,   232,   233,   234,   235,    68,   416,   438,   419,   169,
     296,   466,   450,   420,   468,   296,    94,   296,   179,   421,
     422,   112,    95,   474,   107,   176,   177,   178,   481,   128,
     130,   285,   179,   133,   136,   112,   423,   113,   135,   138,
     144,   424,   479,   447,   249,   108,    69,   149,   110,   153,
     151,   113,   175,   108,   109,   110,   261,   180,   154,   161,
     159,   111,   168,   169,   179,   170,   204,   112,   211,   208,
     181,   180,   214,   104,   238,   475,    14,   240,   246,   114,
     115,   243,   247,   113,   181,   248,   283,   262,   289,   255,
     252,   177,   178,   114,   115,   286,   182,   183,   175,   108,
     109,   110,   290,   180,   184,   293,   308,   111,   310,   116,
     182,   183,   296,    68,   418,   303,   181,   371,   184,   340,
     386,   343,   351,   116,   398,   114,   115,   349,   391,   179,
     392,   410,   112,   259,   263,   399,   282,   177,   178,   413,
     414,   426,   182,   183,   435,   436,   437,   445,   113,   449,
     184,   419,   451,   452,   453,   116,   420,   264,   454,   455,
     456,   458,   421,   422,   265,   266,   472,   460,   253,   461,
     462,   267,   268,   464,   467,   179,   478,   245,   112,   423,
     484,   181,    93,  -265,   424,   269,   270,   271,   272,   273,
     114,   115,   274,   275,   113,   276,   277,   278,   279,   280,
     281,    67,   282,   373,   213,   375,    79,   182,   183,  -267,
     396,   440,    89,   288,   253,   184,     1,   329,   477,   174,
     116,   387,   385,   333,   336,     2,   483,   181,   470,   148,
     476,   469,     3,     0,   299,     4,   114,   115,     0,     0,
       0,     5,     0,     0,     6,     7,     1,     0,     0,     0,
       0,     0,     0,   182,   183,     2,     8,     9,   311,  -234,
       0,   184,     3,     0,     0,     4,   116,    10,     0,     0,
       0,     5,     0,     0,     6,     7,     0,   312,     0,     0,
       0,     0,     0,     0,     0,   313,     8,     9,     0,   262,
       0,    11,     0,     0,     0,    12,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,   314,     0,     0,     0,     0,    14,     0,     0,     0,
       0,    11,     0,     0,     0,    12,     0,     0,   315,     0,
     316,   317,     0,   262,     0,     0,   263,     0,     0,     0,
      13,     0,     0,     0,     0,   318,    14,     0,     0,   319,
     408,     0,     0,    15,    16,    17,     0,     0,     0,   341,
       0,   320,     0,   321,   322,   323,     0,   266,     0,   262,
       0,     0,     0,   267,   268,     0,     0,     0,     0,     0,
     263,     0,     0,    15,    16,    17,     0,   269,   270,   271,
     272,   273,     0,     0,   274,   275,     0,   276,   277,   278,
     279,   280,   281,   341,   282,   262,     0,     0,     0,     0,
       0,   266,     0,     0,     0,     0,  -268,   267,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   269,   270,   271,   272,   273,     0,     0,   274,   275,
       0,   276,   277,   278,   279,   280,   281,   266,   282,     0,
       0,     0,     0,   267,  -268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -268,  -268,  -268,
     272,   273,     0,     0,   274,   275,     0,   276,   277,   278,
     279,   280,   281,   266,   282,     0,     0,     0,     0,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -268,  -268,     0,     0,
    -268,  -268,     0,   276,   277,   278,   279,   280,   281,     0,
     282
};

static const yytype_int16 yycheck[] =
{
     133,    75,    69,    86,     2,   255,    95,     5,    85,    86,
       3,   172,    10,    11,   139,     4,     5,     6,     3,    89,
      72,     3,    78,    12,    20,     9,    46,    13,   161,    50,
     163,   164,    26,     3,   111,   112,   102,     3,    53,   105,
       9,   105,   110,    16,    17,   110,   179,    45,   180,    47,
     182,   184,   135,   123,     3,    53,    40,   110,   135,    55,
      50,    89,   130,    25,     3,   130,    53,    75,    75,   155,
     137,    40,    59,   133,    35,   208,   162,   130,    68,   329,
      78,    79,   243,    96,     3,     4,     5,     6,    72,   110,
      88,    89,    76,    12,    83,   169,   166,   105,   105,   167,
      62,   351,   167,   131,   164,    67,   158,    76,    69,   130,
      99,    73,    74,   126,   170,   248,   249,   184,   166,    93,
     168,   253,    41,    42,    43,   426,   259,   260,    90,   261,
      91,   263,    94,    95,   133,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     170,   166,   141,   142,     3,   456,   222,   123,   222,   103,
     410,    80,    85,   162,    83,   164,   110,    89,   133,   294,
     303,   110,   110,   166,   159,   308,   309,   159,    99,   246,
      99,   167,   171,    99,   123,   123,   130,   110,   111,    89,
     109,   130,   130,   282,   159,   160,   161,   162,   119,   164,
     119,    87,   103,   119,   337,   338,    87,   130,   170,   110,
     460,     3,   286,   132,   106,   376,   290,   349,   110,   165,
     106,     0,   141,   142,   170,   106,   112,   310,   110,   130,
     112,   112,    46,   310,   110,   143,   112,   169,   130,   158,
     159,     3,     4,     5,     6,   286,     3,   166,   130,   290,
      12,    65,   171,   107,   130,     3,     4,     5,     6,   168,
     167,   166,   221,   170,    12,    89,   399,   226,   401,   402,
       3,    25,   167,   340,   167,   170,   408,   170,   125,    41,
      42,    43,   125,   167,   351,   283,   170,     3,     4,     5,
       6,   121,   123,    41,    42,    43,    12,   170,   431,   135,
     136,   137,   138,   139,   140,    53,   167,   167,    62,   170,
     170,   444,   167,    67,   167,   170,    92,   170,    80,    73,
      74,    83,   122,    77,     3,    41,    42,    43,   167,     4,
     119,   170,    80,    78,   166,    83,    90,    99,    88,     3,
      41,    95,   475,   410,   106,     4,   166,   166,     6,   167,
      13,    99,     3,     4,     5,     6,    18,   119,   167,   124,
     109,    12,   167,   170,    80,    41,     3,    83,   107,   147,
     132,   119,     3,    72,     3,   129,   107,     3,   166,   141,
     142,   123,   166,    99,   132,   166,    93,    49,    44,   164,
      41,    42,    43,   141,   142,   166,   158,   159,     3,     4,
       5,     6,   166,   119,   166,    89,    50,    12,    88,   171,
     158,   159,   170,    53,    25,   170,   132,     3,   166,   166,
       3,   167,   166,   171,   167,   141,   142,    96,   166,    80,
     166,   166,    83,   110,    96,    89,   164,    42,    43,    99,
     165,   170,   158,   159,     6,     6,    99,   167,    99,   167,
     166,    62,   167,    94,    73,   171,    67,   119,    73,    73,
      94,     3,    73,    74,   126,   127,   166,   124,   119,   167,
     167,   133,   134,   167,   167,    80,   166,   168,    83,    90,
     167,   132,    63,    94,    95,   147,   148,   149,   150,   151,
     141,   142,   154,   155,    99,   157,   158,   159,   160,   161,
     162,    23,   164,   289,   143,   292,    44,   158,   159,     0,
     326,   400,    52,   209,   119,   166,     7,   244,   473,   132,
     171,   303,   296,   247,   250,    16,   478,   132,   452,    92,
     472,   451,    23,    -1,   220,    26,   141,   142,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,     7,    -1,    -1,    -1,
      -1,    -1,    -1,   158,   159,    16,    47,    48,    11,   170,
      -1,   166,    23,    -1,    -1,    26,   171,    58,    -1,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    47,    48,    -1,    49,
      -1,    82,    -1,    -1,    -1,    86,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    64,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    81,    -1,
      83,    84,    -1,    49,    -1,    -1,    96,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    98,   107,    -1,    -1,   102,
     110,    -1,    -1,   144,   145,   146,    -1,    -1,    -1,   119,
      -1,   114,    -1,   116,   117,   118,    -1,   127,    -1,    49,
      -1,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,
      96,    -1,    -1,   144,   145,   146,    -1,   147,   148,   149,
     150,   151,    -1,    -1,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   119,   164,    49,    -1,    -1,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,    96,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,   148,   149,   150,   151,    -1,    -1,   154,   155,
      -1,   157,   158,   159,   160,   161,   162,   127,   164,    -1,
      -1,    -1,    -1,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,   149,
     150,   151,    -1,    -1,   154,   155,    -1,   157,   158,   159,
     160,   161,   162,   127,   164,    -1,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,   151,    -1,    -1,
     154,   155,    -1,   157,   158,   159,   160,   161,   162,    -1,
     164
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    16,    23,    26,    32,    35,    36,    47,    48,
      58,    82,    86,   101,   107,   144,   145,   146,   173,   174,
     175,   176,   180,   182,   184,   185,   189,   190,   191,   197,
     199,   200,   201,   203,   206,   271,   272,    26,     3,   266,
       3,     3,   266,    75,   105,    89,    89,    93,   265,   266,
     266,    75,   105,    20,    55,     3,   273,   274,   143,   181,
     181,   181,     0,   169,   278,   107,   177,   177,    53,   166,
     209,   210,   214,     3,   168,   166,    89,   125,   192,   192,
     266,     3,   186,   266,   121,    89,   131,   125,   198,   198,
     266,   123,   170,   175,    92,   122,   226,   209,   210,     9,
      40,    76,   211,   212,    72,   211,   222,     3,     4,     5,
       6,    12,    83,    99,   141,   142,   171,   229,   230,   247,
     248,   253,   254,   255,   256,   257,   258,   259,     4,   183,
     119,   266,   266,    78,   219,    88,   166,   202,     3,   204,
     205,   187,   254,   187,    41,   266,   266,   209,   274,   166,
     257,    13,   215,   167,   167,   207,   208,   209,   214,   109,
     213,   124,   207,    50,    68,   227,   254,   254,   167,   170,
      41,    89,   123,   166,   202,     3,    41,    42,    43,    80,
     119,   132,   158,   159,   166,   232,   233,   234,   235,   236,
     237,   238,   239,   241,   242,   243,   244,   245,   249,   250,
     251,   252,   253,   187,     3,   279,    59,   210,   147,   170,
     219,   107,   188,   188,     3,   178,   179,   216,   228,   231,
     232,   222,   211,   223,   224,   232,   222,   232,   109,   232,
     135,   136,   137,   138,   139,   140,   246,   253,     3,   206,
       3,   193,   194,   123,   166,   168,   166,   166,   166,   106,
     232,   240,    41,   119,   233,   164,   233,   210,   232,   110,
     130,    18,    49,    96,   119,   126,   127,   133,   134,   147,
     148,   149,   150,   151,   154,   155,   157,   158,   159,   160,
     161,   162,   164,    93,   167,   170,   166,   232,   205,    44,
     166,   167,   170,    89,   217,   218,   170,     3,   123,   269,
     270,   227,   207,   170,    85,   111,   225,   227,    50,    50,
      88,    11,    30,    38,    64,    81,    83,    84,    98,   102,
     114,   116,   117,   118,   195,   167,   170,   206,   167,   215,
       3,   159,   210,   246,   232,   232,   240,    87,   106,   112,
     166,   119,   228,   167,   167,   232,   232,   233,   233,    96,
     126,   166,    99,   119,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   257,
     266,     3,   230,   186,   230,   179,   166,   260,   261,   262,
     263,   264,   266,   275,   219,   231,     3,   224,   232,   232,
     187,   166,   166,    99,   119,   196,   194,   228,   167,    89,
     123,   103,    87,   112,   232,   232,   210,   165,   110,   233,
     166,   210,   228,    99,   165,   167,   167,   206,    25,    62,
      67,    73,    74,    90,    95,   276,   170,   123,   267,   268,
     269,    46,    65,   220,   221,     6,     6,    99,   167,   232,
     195,   232,   232,   112,   103,   167,   233,   210,   228,   167,
     167,   167,    94,    73,    73,    73,    94,   261,     3,   232,
     124,   167,   167,   167,   167,   112,   232,   167,   167,   268,
     262,   261,   166,   228,    77,   129,   279,   221,   166,   232,
     277,   167,     3,   252,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   172,   173,   174,   174,   175,   175,   175,   175,   175,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   180,   181,   181,
     182,   183,   184,   184,   185,   185,   186,   187,   188,   188,
     189,   190,   190,   190,   191,   191,   191,   191,   192,   192,
     193,   193,   194,   195,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   196,   196,   196,   197,
     197,   197,   198,   198,   199,   200,   201,   201,   202,   202,
     203,   204,   204,   205,   206,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   212,   212,   212,   213,
     213,   214,   215,   215,   216,   217,   217,   218,   219,   219,
     220,   220,   220,   221,   221,   222,   222,   223,   223,   224,
     225,   225,   225,   226,   226,   227,   227,   227,   227,   227,
     227,   228,   228,   229,   229,   230,   230,   231,   232,   232,
     232,   232,   232,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   234,   235,   235,   235,   235,
     235,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   237,   237,   238,   238,   238,   238,   239,   239,
     239,   239,   240,   240,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   243,   243,   244,   245,   246,   246,   246,
     246,   246,   246,   247,   248,   249,   250,   251,   252,   252,
     252,   252,   253,   253,   253,   253,   253,   253,   253,   254,
     255,   255,   256,   256,   257,   258,   259,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   265,   266,   266,   267,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   272,
     273,   273,   274,   275,   275,   275,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   277,   278,   278,   279,
     279
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
       4,     4,     1,     1,     1,     1,     1,     2,     0,     4,
       4,     3,     2,     0,     4,     2,     8,     5,     3,     0,
       5,     1,     3,     3,     2,     2,     6,     1,     1,     1,
       3,     3,     3,     3,     5,     2,     1,     1,     1,     1,
       0,     7,     1,     0,     1,     1,     0,     2,     2,     0,
       4,     1,     0,     2,     0,     3,     0,     1,     3,     2,
       1,     1,     0,     2,     0,     2,     2,     4,     2,     4,
       0,     1,     3,     1,     0,     1,     3,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     3,     3,     3,     5,     6,     5,     6,     4,     6,
       3,     5,     4,     5,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     6,     6,     1,     1,     1,
       1,     1,     1,     2,     3,     4,     4,     5,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       5,     1,     0,     2,     1,     1,     0,     1,     0,     2,
       1,     3,     3,     4,     6,     8,     1,     2,     1,     2,
       1,     2,     1,     1,     1,     0,     1,     1,     0,     1,
       3
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
    case 3: /* IDENTIFIER  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2221 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2227 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 147 "bison_parser.y"
            { }
#line 2233 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 147 "bison_parser.y"
            { }
#line 2239 "bison_parser.cpp"
        break;

    case 174: /* statement_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2252 "bison_parser.cpp"
        break;

    case 175: /* statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2258 "bison_parser.cpp"
        break;

    case 176: /* preparable_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2264 "bison_parser.cpp"
        break;

    case 177: /* opt_hints  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2277 "bison_parser.cpp"
        break;

    case 178: /* hint_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2290 "bison_parser.cpp"
        break;

    case 179: /* hint  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2296 "bison_parser.cpp"
        break;

    case 180: /* transaction_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2302 "bison_parser.cpp"
        break;

    case 182: /* prepare_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2308 "bison_parser.cpp"
        break;

    case 183: /* prepare_target_query  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2314 "bison_parser.cpp"
        break;

    case 184: /* execute_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2320 "bison_parser.cpp"
        break;

    case 185: /* import_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2326 "bison_parser.cpp"
        break;

    case 186: /* file_type  */
#line 147 "bison_parser.y"
            { }
#line 2332 "bison_parser.cpp"
        break;

    case 187: /* file_path  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2338 "bison_parser.cpp"
        break;

    case 188: /* opt_file_type  */
#line 147 "bison_parser.y"
            { }
#line 2344 "bison_parser.cpp"
        break;

    case 189: /* export_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2350 "bison_parser.cpp"
        break;

    case 190: /* show_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2356 "bison_parser.cpp"
        break;

    case 191: /* create_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2362 "bison_parser.cpp"
        break;

    case 192: /* opt_not_exists  */
#line 147 "bison_parser.y"
            { }
#line 2368 "bison_parser.cpp"
        break;

    case 193: /* column_def_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2381 "bison_parser.cpp"
        break;

    case 194: /* column_def  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2387 "bison_parser.cpp"
        break;

    case 195: /* column_type  */
#line 147 "bison_parser.y"
            { }
#line 2393 "bison_parser.cpp"
        break;

    case 196: /* opt_column_nullable  */
#line 147 "bison_parser.y"
            { }
#line 2399 "bison_parser.cpp"
        break;

    case 197: /* drop_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2405 "bison_parser.cpp"
        break;

    case 198: /* opt_exists  */
#line 147 "bison_parser.y"
            { }
#line 2411 "bison_parser.cpp"
        break;

    case 199: /* delete_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2417 "bison_parser.cpp"
        break;

    case 200: /* truncate_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2423 "bison_parser.cpp"
        break;

    case 201: /* insert_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2429 "bison_parser.cpp"
        break;

    case 202: /* opt_column_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2442 "bison_parser.cpp"
        break;

    case 203: /* update_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2448 "bison_parser.cpp"
        break;

    case 204: /* update_clause_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2461 "bison_parser.cpp"
        break;

    case 205: /* update_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2467 "bison_parser.cpp"
        break;

    case 206: /* select_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2473 "bison_parser.cpp"
        break;

    case 207: /* select_within_set_operation  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2479 "bison_parser.cpp"
        break;

    case 208: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2485 "bison_parser.cpp"
        break;

    case 209: /* select_with_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2491 "bison_parser.cpp"
        break;

    case 210: /* select_no_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2497 "bison_parser.cpp"
        break;

    case 211: /* set_operator  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2503 "bison_parser.cpp"
        break;

    case 212: /* set_type  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2509 "bison_parser.cpp"
        break;

    case 213: /* opt_all  */
#line 147 "bison_parser.y"
            { }
#line 2515 "bison_parser.cpp"
        break;

    case 214: /* select_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2521 "bison_parser.cpp"
        break;

    case 215: /* opt_distinct  */
#line 147 "bison_parser.y"
            { }
#line 2527 "bison_parser.cpp"
        break;

    case 216: /* select_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2540 "bison_parser.cpp"
        break;

    case 217: /* opt_from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2546 "bison_parser.cpp"
        break;

    case 218: /* from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2552 "bison_parser.cpp"
        break;

    case 219: /* opt_where  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2558 "bison_parser.cpp"
        break;

    case 220: /* opt_group  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2564 "bison_parser.cpp"
        break;

    case 221: /* opt_having  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2570 "bison_parser.cpp"
        break;

    case 222: /* opt_order  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2583 "bison_parser.cpp"
        break;

    case 223: /* order_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2596 "bison_parser.cpp"
        break;

    case 224: /* order_desc  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2602 "bison_parser.cpp"
        break;

    case 225: /* opt_order_type  */
#line 147 "bison_parser.y"
            { }
#line 2608 "bison_parser.cpp"
        break;

    case 226: /* opt_top  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2614 "bison_parser.cpp"
        break;

    case 227: /* opt_limit  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2620 "bison_parser.cpp"
        break;

    case 228: /* expr_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2633 "bison_parser.cpp"
        break;

    case 229: /* opt_literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2646 "bison_parser.cpp"
        break;

    case 230: /* literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2659 "bison_parser.cpp"
        break;

    case 231: /* expr_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2665 "bison_parser.cpp"
        break;

    case 232: /* expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2671 "bison_parser.cpp"
        break;

    case 233: /* operand  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp"
        break;

    case 234: /* scalar_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2683 "bison_parser.cpp"
        break;

    case 235: /* unary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2689 "bison_parser.cpp"
        break;

    case 236: /* binary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2695 "bison_parser.cpp"
        break;

    case 237: /* logic_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2701 "bison_parser.cpp"
        break;

    case 238: /* in_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2707 "bison_parser.cpp"
        break;

    case 239: /* case_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2713 "bison_parser.cpp"
        break;

    case 240: /* case_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2719 "bison_parser.cpp"
        break;

    case 241: /* exists_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2725 "bison_parser.cpp"
        break;

    case 242: /* comp_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2731 "bison_parser.cpp"
        break;

    case 243: /* function_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2737 "bison_parser.cpp"
        break;

    case 244: /* extract_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2743 "bison_parser.cpp"
        break;

    case 245: /* cast_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2749 "bison_parser.cpp"
        break;

    case 246: /* datetime_field  */
#line 147 "bison_parser.y"
            { }
#line 2755 "bison_parser.cpp"
        break;

    case 247: /* date_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2761 "bison_parser.cpp"
        break;

    case 248: /* interval_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp"
        break;

    case 249: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2773 "bison_parser.cpp"
        break;

    case 250: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2779 "bison_parser.cpp"
        break;

    case 251: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2785 "bison_parser.cpp"
        break;

    case 252: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2791 "bison_parser.cpp"
        break;

    case 253: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2797 "bison_parser.cpp"
        break;

    case 254: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2803 "bison_parser.cpp"
        break;

    case 255: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2809 "bison_parser.cpp"
        break;

    case 256: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2815 "bison_parser.cpp"
        break;

    case 257: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2821 "bison_parser.cpp"
        break;

    case 258: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2827 "bison_parser.cpp"
        break;

    case 259: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2833 "bison_parser.cpp"
        break;

    case 260: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2839 "bison_parser.cpp"
        break;

    case 261: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2845 "bison_parser.cpp"
        break;

    case 262: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2851 "bison_parser.cpp"
        break;

    case 263: /* table_ref_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2864 "bison_parser.cpp"
        break;

    case 264: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2870 "bison_parser.cpp"
        break;

    case 265: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2876 "bison_parser.cpp"
        break;

    case 266: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2882 "bison_parser.cpp"
        break;

    case 267: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2888 "bison_parser.cpp"
        break;

    case 268: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2894 "bison_parser.cpp"
        break;

    case 269: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2900 "bison_parser.cpp"
        break;

    case 270: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2906 "bison_parser.cpp"
        break;

    case 271: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2912 "bison_parser.cpp"
        break;

    case 272: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2918 "bison_parser.cpp"
        break;

    case 273: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2924 "bison_parser.cpp"
        break;

    case 274: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2930 "bison_parser.cpp"
        break;

    case 275: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2936 "bison_parser.cpp"
        break;

    case 276: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2942 "bison_parser.cpp"
        break;

    case 277: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2948 "bison_parser.cpp"
        break;

    case 279: /* ident_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2961 "bison_parser.cpp"
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
/* The lookahead symbol.  */
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
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
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

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;


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

#line 3083 "bison_parser.cpp"

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
  case 2:
#line 270 "bison_parser.y"
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
#line 3311 "bison_parser.cpp"
    break;

  case 3:
#line 291 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3322 "bison_parser.cpp"
    break;

  case 4:
#line 297 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3333 "bison_parser.cpp"
    break;

  case 5:
#line 306 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3342 "bison_parser.cpp"
    break;

  case 6:
#line 310 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3351 "bison_parser.cpp"
    break;

  case 7:
#line 314 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3359 "bison_parser.cpp"
    break;

  case 8:
#line 317 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3367 "bison_parser.cpp"
    break;

  case 9:
#line 320 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3375 "bison_parser.cpp"
    break;

  case 10:
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3381 "bison_parser.cpp"
    break;

  case 11:
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3387 "bison_parser.cpp"
    break;

  case 12:
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3393 "bison_parser.cpp"
    break;

  case 13:
#line 330 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3399 "bison_parser.cpp"
    break;

  case 14:
#line 331 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3405 "bison_parser.cpp"
    break;

  case 15:
#line 332 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3411 "bison_parser.cpp"
    break;

  case 16:
#line 333 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3417 "bison_parser.cpp"
    break;

  case 17:
#line 334 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3423 "bison_parser.cpp"
    break;

  case 18:
#line 335 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3429 "bison_parser.cpp"
    break;

  case 19:
#line 344 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3435 "bison_parser.cpp"
    break;

  case 20:
#line 345 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3441 "bison_parser.cpp"
    break;

  case 21:
#line 350 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3447 "bison_parser.cpp"
    break;

  case 22:
#line 351 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3453 "bison_parser.cpp"
    break;

  case 23:
#line 355 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3462 "bison_parser.cpp"
    break;

  case 24:
#line 359 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3472 "bison_parser.cpp"
    break;

  case 25:
#line 371 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3480 "bison_parser.cpp"
    break;

  case 26:
#line 374 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3488 "bison_parser.cpp"
    break;

  case 27:
#line 377 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3496 "bison_parser.cpp"
    break;

  case 30:
#line 391 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3506 "bison_parser.cpp"
    break;

  case 32:
#line 401 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3515 "bison_parser.cpp"
    break;

  case 33:
#line 405 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3525 "bison_parser.cpp"
    break;

  case 34:
#line 419 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3536 "bison_parser.cpp"
    break;

  case 35:
#line 425 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3547 "bison_parser.cpp"
    break;

  case 36:
#line 434 "bison_parser.y"
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
#line 3566 "bison_parser.cpp"
    break;

  case 37:
#line 451 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3572 "bison_parser.cpp"
    break;

  case 38:
#line 455 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3580 "bison_parser.cpp"
    break;

  case 39:
#line 458 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3586 "bison_parser.cpp"
    break;

  case 40:
#line 467 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3597 "bison_parser.cpp"
    break;

  case 41:
#line 481 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3605 "bison_parser.cpp"
    break;

  case 42:
#line 484 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3615 "bison_parser.cpp"
    break;

  case 43:
#line 489 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3625 "bison_parser.cpp"
    break;

  case 44:
#line 503 "bison_parser.y"
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
#line 3643 "bison_parser.cpp"
    break;

  case 45:
#line 516 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3655 "bison_parser.cpp"
    break;

  case 46:
#line 523 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3667 "bison_parser.cpp"
    break;

  case 47:
#line 530 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3680 "bison_parser.cpp"
    break;

  case 48:
#line 541 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3686 "bison_parser.cpp"
    break;

  case 49:
#line 542 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3692 "bison_parser.cpp"
    break;

  case 50:
#line 546 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3698 "bison_parser.cpp"
    break;

  case 51:
#line 547 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3704 "bison_parser.cpp"
    break;

  case 52:
#line 551 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3712 "bison_parser.cpp"
    break;

  case 53:
#line 557 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT, 8}; }
#line 3718 "bison_parser.cpp"
    break;

  case 54:
#line 558 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::INT, 16}; }
#line 3724 "bison_parser.cpp"
    break;

  case 55:
#line 559 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT, 32}; }
#line 3730 "bison_parser.cpp"
    break;

  case 56:
#line 560 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::INT, 64}; }
#line 3736 "bison_parser.cpp"
    break;

  case 57:
#line 561 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::INT, 64}; }
#line 3742 "bison_parser.cpp"
    break;

  case 58:
#line 562 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3748 "bison_parser.cpp"
    break;

  case 59:
#line 563 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3754 "bison_parser.cpp"
    break;

  case 60:
#line 564 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3760 "bison_parser.cpp"
    break;

  case 61:
#line 565 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3766 "bison_parser.cpp"
    break;

  case 62:
#line 566 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3772 "bison_parser.cpp"
    break;

  case 63:
#line 567 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3778 "bison_parser.cpp"
    break;

  case 64:
#line 568 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3784 "bison_parser.cpp"
    break;

  case 65:
#line 569 "bison_parser.y"
                          { (yyval.column_type_t) = ColumnType{DataType::TIMESTAMP}; }
#line 3790 "bison_parser.cpp"
    break;

  case 66:
#line 573 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3796 "bison_parser.cpp"
    break;

  case 67:
#line 574 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3802 "bison_parser.cpp"
    break;

  case 68:
#line 575 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3808 "bison_parser.cpp"
    break;

  case 69:
#line 585 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3819 "bison_parser.cpp"
    break;

  case 70:
#line 591 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3830 "bison_parser.cpp"
    break;

  case 71:
#line 597 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3840 "bison_parser.cpp"
    break;

  case 72:
#line 605 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3846 "bison_parser.cpp"
    break;

  case 73:
#line 606 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3852 "bison_parser.cpp"
    break;

  case 74:
#line 615 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3863 "bison_parser.cpp"
    break;

  case 75:
#line 624 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3873 "bison_parser.cpp"
    break;

  case 76:
#line 637 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3885 "bison_parser.cpp"
    break;

  case 77:
#line 644 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3897 "bison_parser.cpp"
    break;

  case 78:
#line 655 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3903 "bison_parser.cpp"
    break;

  case 79:
#line 656 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3909 "bison_parser.cpp"
    break;

  case 80:
#line 666 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3920 "bison_parser.cpp"
    break;

  case 81:
#line 675 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3926 "bison_parser.cpp"
    break;

  case 82:
#line 676 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3932 "bison_parser.cpp"
    break;

  case 83:
#line 680 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3942 "bison_parser.cpp"
    break;

  case 84:
#line 692 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3951 "bison_parser.cpp"
    break;

  case 85:
#line 696 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3960 "bison_parser.cpp"
    break;

  case 86:
#line 700 "bison_parser.y"
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
#line 3976 "bison_parser.cpp"
    break;

  case 89:
#line 718 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3982 "bison_parser.cpp"
    break;

  case 90:
#line 719 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3995 "bison_parser.cpp"
    break;

  case 91:
#line 730 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4001 "bison_parser.cpp"
    break;

  case 92:
#line 731 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4007 "bison_parser.cpp"
    break;

  case 93:
#line 735 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 4022 "bison_parser.cpp"
    break;

  case 94:
#line 745 "bison_parser.y"
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
#line 4037 "bison_parser.cpp"
    break;

  case 95:
#line 758 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 4046 "bison_parser.cpp"
    break;

  case 96:
#line 765 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 4055 "bison_parser.cpp"
    break;

  case 97:
#line 769 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 4064 "bison_parser.cpp"
    break;

  case 98:
#line 773 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 4073 "bison_parser.cpp"
    break;

  case 99:
#line 780 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 4081 "bison_parser.cpp"
    break;

  case 100:
#line 783 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 4089 "bison_parser.cpp"
    break;

  case 101:
#line 789 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4103 "bison_parser.cpp"
    break;

  case 102:
#line 801 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4109 "bison_parser.cpp"
    break;

  case 103:
#line 802 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4115 "bison_parser.cpp"
    break;

  case 105:
#line 810 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4121 "bison_parser.cpp"
    break;

  case 106:
#line 811 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4127 "bison_parser.cpp"
    break;

  case 107:
#line 815 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4133 "bison_parser.cpp"
    break;

  case 108:
#line 820 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4139 "bison_parser.cpp"
    break;

  case 109:
#line 821 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4145 "bison_parser.cpp"
    break;

  case 110:
#line 825 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4155 "bison_parser.cpp"
    break;

  case 111:
#line 830 "bison_parser.y"
                           {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = nullptr;
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4165 "bison_parser.cpp"
    break;

  case 112:
#line 835 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4171 "bison_parser.cpp"
    break;

  case 113:
#line 839 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4177 "bison_parser.cpp"
    break;

  case 114:
#line 840 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4183 "bison_parser.cpp"
    break;

  case 115:
#line 844 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4189 "bison_parser.cpp"
    break;

  case 116:
#line 845 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4195 "bison_parser.cpp"
    break;

  case 117:
#line 849 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4201 "bison_parser.cpp"
    break;

  case 118:
#line 850 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4207 "bison_parser.cpp"
    break;

  case 119:
#line 854 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4213 "bison_parser.cpp"
    break;

  case 120:
#line 858 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4219 "bison_parser.cpp"
    break;

  case 121:
#line 859 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4225 "bison_parser.cpp"
    break;

  case 122:
#line 860 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4231 "bison_parser.cpp"
    break;

  case 123:
#line 866 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4237 "bison_parser.cpp"
    break;

  case 124:
#line 867 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4243 "bison_parser.cpp"
    break;

  case 125:
#line 871 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4249 "bison_parser.cpp"
    break;

  case 126:
#line 872 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4255 "bison_parser.cpp"
    break;

  case 127:
#line 873 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4261 "bison_parser.cpp"
    break;

  case 128:
#line 874 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4267 "bison_parser.cpp"
    break;

  case 129:
#line 875 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4273 "bison_parser.cpp"
    break;

  case 130:
#line 876 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4279 "bison_parser.cpp"
    break;

  case 131:
#line 883 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4285 "bison_parser.cpp"
    break;

  case 132:
#line 884 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4291 "bison_parser.cpp"
    break;

  case 133:
#line 888 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4297 "bison_parser.cpp"
    break;

  case 134:
#line 889 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4303 "bison_parser.cpp"
    break;

  case 135:
#line 893 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4309 "bison_parser.cpp"
    break;

  case 136:
#line 894 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4315 "bison_parser.cpp"
    break;

  case 137:
#line 898 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4327 "bison_parser.cpp"
    break;

  case 143:
#line 916 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4333 "bison_parser.cpp"
    break;

  case 153:
#line 926 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4339 "bison_parser.cpp"
    break;

  case 156:
#line 935 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4345 "bison_parser.cpp"
    break;

  case 157:
#line 936 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4351 "bison_parser.cpp"
    break;

  case 158:
#line 937 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4357 "bison_parser.cpp"
    break;

  case 159:
#line 938 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4363 "bison_parser.cpp"
    break;

  case 160:
#line 939 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4369 "bison_parser.cpp"
    break;

  case 162:
#line 944 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4375 "bison_parser.cpp"
    break;

  case 163:
#line 945 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4381 "bison_parser.cpp"
    break;

  case 164:
#line 946 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4387 "bison_parser.cpp"
    break;

  case 165:
#line 947 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4393 "bison_parser.cpp"
    break;

  case 166:
#line 948 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4399 "bison_parser.cpp"
    break;

  case 167:
#line 949 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4405 "bison_parser.cpp"
    break;

  case 168:
#line 950 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4411 "bison_parser.cpp"
    break;

  case 169:
#line 951 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4417 "bison_parser.cpp"
    break;

  case 170:
#line 952 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4423 "bison_parser.cpp"
    break;

  case 171:
#line 953 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4429 "bison_parser.cpp"
    break;

  case 172:
#line 957 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4435 "bison_parser.cpp"
    break;

  case 173:
#line 958 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4441 "bison_parser.cpp"
    break;

  case 174:
#line 962 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4447 "bison_parser.cpp"
    break;

  case 175:
#line 963 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4453 "bison_parser.cpp"
    break;

  case 176:
#line 964 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4459 "bison_parser.cpp"
    break;

  case 177:
#line 965 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4465 "bison_parser.cpp"
    break;

  case 178:
#line 971 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4471 "bison_parser.cpp"
    break;

  case 179:
#line 972 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4477 "bison_parser.cpp"
    break;

  case 180:
#line 973 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4483 "bison_parser.cpp"
    break;

  case 181:
#line 974 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4489 "bison_parser.cpp"
    break;

  case 182:
#line 978 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4495 "bison_parser.cpp"
    break;

  case 183:
#line 979 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4501 "bison_parser.cpp"
    break;

  case 184:
#line 983 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4507 "bison_parser.cpp"
    break;

  case 185:
#line 984 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4513 "bison_parser.cpp"
    break;

  case 186:
#line 988 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4519 "bison_parser.cpp"
    break;

  case 187:
#line 989 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4525 "bison_parser.cpp"
    break;

  case 188:
#line 990 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4531 "bison_parser.cpp"
    break;

  case 189:
#line 991 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4537 "bison_parser.cpp"
    break;

  case 190:
#line 992 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4543 "bison_parser.cpp"
    break;

  case 191:
#line 993 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4549 "bison_parser.cpp"
    break;

  case 192:
#line 994 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4555 "bison_parser.cpp"
    break;

  case 193:
#line 998 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4561 "bison_parser.cpp"
    break;

  case 194:
#line 999 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4567 "bison_parser.cpp"
    break;

  case 195:
#line 1003 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4573 "bison_parser.cpp"
    break;

  case 196:
#line 1007 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4579 "bison_parser.cpp"
    break;

  case 197:
#line 1011 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4585 "bison_parser.cpp"
    break;

  case 198:
#line 1012 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4591 "bison_parser.cpp"
    break;

  case 199:
#line 1013 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4597 "bison_parser.cpp"
    break;

  case 200:
#line 1014 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4603 "bison_parser.cpp"
    break;

  case 201:
#line 1015 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4609 "bison_parser.cpp"
    break;

  case 202:
#line 1016 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4615 "bison_parser.cpp"
    break;

  case 203:
#line 1020 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeDate((yyvsp[0].expr)->name); }
#line 4621 "bison_parser.cpp"
    break;

  case 204:
#line 1024 "bison_parser.y"
                                                       { (yyval.expr) = Expr::makeInterval((yyvsp[-1].expr)->name, (yyvsp[0].datetime_field)); }
#line 4627 "bison_parser.cpp"
    break;

  case 205:
#line 1028 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4633 "bison_parser.cpp"
    break;

  case 206:
#line 1032 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4639 "bison_parser.cpp"
    break;

  case 207:
#line 1036 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4645 "bison_parser.cpp"
    break;

  case 208:
#line 1040 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4651 "bison_parser.cpp"
    break;

  case 209:
#line 1041 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4657 "bison_parser.cpp"
    break;

  case 210:
#line 1042 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4663 "bison_parser.cpp"
    break;

  case 211:
#line 1043 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4669 "bison_parser.cpp"
    break;

  case 219:
#line 1057 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4675 "bison_parser.cpp"
    break;

  case 220:
#line 1061 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4681 "bison_parser.cpp"
    break;

  case 221:
#line 1062 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4687 "bison_parser.cpp"
    break;

  case 222:
#line 1066 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4693 "bison_parser.cpp"
    break;

  case 224:
#line 1071 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4699 "bison_parser.cpp"
    break;

  case 225:
#line 1075 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4705 "bison_parser.cpp"
    break;

  case 226:
#line 1079 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4715 "bison_parser.cpp"
    break;

  case 228:
#line 1092 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4726 "bison_parser.cpp"
    break;

  case 232:
#line 1108 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4737 "bison_parser.cpp"
    break;

  case 233:
#line 1117 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4743 "bison_parser.cpp"
    break;

  case 234:
#line 1118 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4749 "bison_parser.cpp"
    break;

  case 235:
#line 1123 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4761 "bison_parser.cpp"
    break;

  case 236:
#line 1134 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4771 "bison_parser.cpp"
    break;

  case 237:
#line 1143 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4777 "bison_parser.cpp"
    break;

  case 238:
#line 1144 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4783 "bison_parser.cpp"
    break;

  case 240:
#line 1150 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4789 "bison_parser.cpp"
    break;

  case 242:
#line 1156 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4795 "bison_parser.cpp"
    break;

  case 243:
#line 1161 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4801 "bison_parser.cpp"
    break;

  case 244:
#line 1162 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4807 "bison_parser.cpp"
    break;

  case 246:
#line 1168 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4813 "bison_parser.cpp"
    break;

  case 248:
#line 1178 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4819 "bison_parser.cpp"
    break;

  case 249:
#line 1182 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4825 "bison_parser.cpp"
    break;

  case 250:
#line 1186 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4834 "bison_parser.cpp"
    break;

  case 251:
#line 1190 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4843 "bison_parser.cpp"
    break;

  case 252:
#line 1197 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4853 "bison_parser.cpp"
    break;

  case 253:
#line 1211 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4865 "bison_parser.cpp"
    break;

  case 254:
#line 1219 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4878 "bison_parser.cpp"
    break;

  case 255:
#line 1229 "bison_parser.y"
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
#line 4898 "bison_parser.cpp"
    break;

  case 256:
#line 1247 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4904 "bison_parser.cpp"
    break;

  case 257:
#line 1248 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4910 "bison_parser.cpp"
    break;

  case 258:
#line 1249 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4916 "bison_parser.cpp"
    break;

  case 259:
#line 1250 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4922 "bison_parser.cpp"
    break;

  case 260:
#line 1251 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4928 "bison_parser.cpp"
    break;

  case 261:
#line 1252 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4934 "bison_parser.cpp"
    break;

  case 262:
#line 1253 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4940 "bison_parser.cpp"
    break;

  case 263:
#line 1254 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4946 "bison_parser.cpp"
    break;

  case 264:
#line 1255 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4952 "bison_parser.cpp"
    break;

  case 265:
#line 1256 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4958 "bison_parser.cpp"
    break;

  case 269:
#line 1276 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4964 "bison_parser.cpp"
    break;

  case 270:
#line 1277 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4970 "bison_parser.cpp"
    break;


#line 4974 "bison_parser.cpp"

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
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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

#line 1280 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
