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
    SQL_DISTINCT = 267,            /* DISTINCT  */
    SQL_NVARCHAR = 268,            /* NVARCHAR  */
    SQL_RESTRICT = 269,            /* RESTRICT  */
    SQL_TRUNCATE = 270,            /* TRUNCATE  */
    SQL_ANALYZE = 271,             /* ANALYZE  */
    SQL_BETWEEN = 272,             /* BETWEEN  */
    SQL_CASCADE = 273,             /* CASCADE  */
    SQL_COLUMNS = 274,             /* COLUMNS  */
    SQL_CONTROL = 275,             /* CONTROL  */
    SQL_DEFAULT = 276,             /* DEFAULT  */
    SQL_EXECUTE = 277,             /* EXECUTE  */
    SQL_EXPLAIN = 278,             /* EXPLAIN  */
    SQL_NATURAL = 279,             /* NATURAL  */
    SQL_PREPARE = 280,             /* PREPARE  */
    SQL_PRIMARY = 281,             /* PRIMARY  */
    SQL_SCHEMAS = 282,             /* SCHEMAS  */
    SQL_SPATIAL = 283,             /* SPATIAL  */
    SQL_VARCHAR = 284,             /* VARCHAR  */
    SQL_VIRTUAL = 285,             /* VIRTUAL  */
    SQL_DESCRIBE = 286,            /* DESCRIBE  */
    SQL_BEFORE = 287,              /* BEFORE  */
    SQL_COLUMN = 288,              /* COLUMN  */
    SQL_CREATE = 289,              /* CREATE  */
    SQL_DELETE = 290,              /* DELETE  */
    SQL_DIRECT = 291,              /* DIRECT  */
    SQL_DOUBLE = 292,              /* DOUBLE  */
    SQL_ESCAPE = 293,              /* ESCAPE  */
    SQL_EXCEPT = 294,              /* EXCEPT  */
    SQL_EXISTS = 295,              /* EXISTS  */
    SQL_EXTRACT = 296,             /* EXTRACT  */
    SQL_CAST = 297,                /* CAST  */
    SQL_FORMAT = 298,              /* FORMAT  */
    SQL_GLOBAL = 299,              /* GLOBAL  */
    SQL_HAVING = 300,              /* HAVING  */
    SQL_IMPORT = 301,              /* IMPORT  */
    SQL_INSERT = 302,              /* INSERT  */
    SQL_ISNULL = 303,              /* ISNULL  */
    SQL_OFFSET = 304,              /* OFFSET  */
    SQL_RENAME = 305,              /* RENAME  */
    SQL_SCHEMA = 306,              /* SCHEMA  */
    SQL_SELECT = 307,              /* SELECT  */
    SQL_SORTED = 308,              /* SORTED  */
    SQL_TABLES = 309,              /* TABLES  */
    SQL_UNIQUE = 310,              /* UNIQUE  */
    SQL_UNLOAD = 311,              /* UNLOAD  */
    SQL_UPDATE = 312,              /* UPDATE  */
    SQL_VALUES = 313,              /* VALUES  */
    SQL_AFTER = 314,               /* AFTER  */
    SQL_ALTER = 315,               /* ALTER  */
    SQL_CROSS = 316,               /* CROSS  */
    SQL_DELTA = 317,               /* DELTA  */
    SQL_FLOAT = 318,               /* FLOAT  */
    SQL_GROUP = 319,               /* GROUP  */
    SQL_INDEX = 320,               /* INDEX  */
    SQL_INNER = 321,               /* INNER  */
    SQL_LIMIT = 322,               /* LIMIT  */
    SQL_LOCAL = 323,               /* LOCAL  */
    SQL_MERGE = 324,               /* MERGE  */
    SQL_MINUS = 325,               /* MINUS  */
    SQL_ORDER = 326,               /* ORDER  */
    SQL_OUTER = 327,               /* OUTER  */
    SQL_RIGHT = 328,               /* RIGHT  */
    SQL_TABLE = 329,               /* TABLE  */
    SQL_UNION = 330,               /* UNION  */
    SQL_USING = 331,               /* USING  */
    SQL_WHERE = 332,               /* WHERE  */
    SQL_CALL = 333,                /* CALL  */
    SQL_CASE = 334,                /* CASE  */
    SQL_CHAR = 335,                /* CHAR  */
    SQL_COPY = 336,                /* COPY  */
    SQL_DATE = 337,                /* DATE  */
    SQL_DATETIME = 338,            /* DATETIME  */
    SQL_DESC = 339,                /* DESC  */
    SQL_DROP = 340,                /* DROP  */
    SQL_ELSE = 341,                /* ELSE  */
    SQL_FILE = 342,                /* FILE  */
    SQL_FROM = 343,                /* FROM  */
    SQL_FULL = 344,                /* FULL  */
    SQL_HASH = 345,                /* HASH  */
    SQL_HINT = 346,                /* HINT  */
    SQL_INTO = 347,                /* INTO  */
    SQL_JOIN = 348,                /* JOIN  */
    SQL_LEFT = 349,                /* LEFT  */
    SQL_LIKE = 350,                /* LIKE  */
    SQL_LOAD = 351,                /* LOAD  */
    SQL_LONG = 352,                /* LONG  */
    SQL_NULL = 353,                /* NULL  */
    SQL_PLAN = 354,                /* PLAN  */
    SQL_SHOW = 355,                /* SHOW  */
    SQL_TEXT = 356,                /* TEXT  */
    SQL_THEN = 357,                /* THEN  */
    SQL_TIME = 358,                /* TIME  */
    SQL_VIEW = 359,                /* VIEW  */
    SQL_WHEN = 360,                /* WHEN  */
    SQL_WITH = 361,                /* WITH  */
    SQL_ADD = 362,                 /* ADD  */
    SQL_ALL = 363,                 /* ALL  */
    SQL_AND = 364,                 /* AND  */
    SQL_ASC = 365,                 /* ASC  */
    SQL_END = 366,                 /* END  */
    SQL_FOR = 367,                 /* FOR  */
    SQL_INT = 368,                 /* INT  */
    SQL_KEY = 369,                 /* KEY  */
    SQL_TINYINT = 370,             /* TINYINT  */
    SQL_SMALLINT = 371,            /* SMALLINT  */
    SQL_BIGINT = 372,              /* BIGINT  */
    SQL_NOT = 373,                 /* NOT  */
    SQL_OFF = 374,                 /* OFF  */
    SQL_SET = 375,                 /* SET  */
    SQL_TOP = 376,                 /* TOP  */
    SQL_AS = 377,                  /* AS  */
    SQL_BY = 378,                  /* BY  */
    SQL_IF = 379,                  /* IF  */
    SQL_IN = 380,                  /* IN  */
    SQL_IS = 381,                  /* IS  */
    SQL_OF = 382,                  /* OF  */
    SQL_ON = 383,                  /* ON  */
    SQL_OR = 384,                  /* OR  */
    SQL_TO = 385,                  /* TO  */
    SQL_ARRAY = 386,               /* ARRAY  */
    SQL_CONCAT = 387,              /* CONCAT  */
    SQL_ILIKE = 388,               /* ILIKE  */
    SQL_SECOND = 389,              /* SECOND  */
    SQL_MINUTE = 390,              /* MINUTE  */
    SQL_HOUR = 391,                /* HOUR  */
    SQL_DAY = 392,                 /* DAY  */
    SQL_MONTH = 393,               /* MONTH  */
    SQL_YEAR = 394,                /* YEAR  */
    SQL_TRUE = 395,                /* TRUE  */
    SQL_FALSE = 396,               /* FALSE  */
    SQL_TRANSACTION = 397,         /* TRANSACTION  */
    SQL_BEGIN = 398,               /* BEGIN  */
    SQL_COMMIT = 399,              /* COMMIT  */
    SQL_ROLLBACK = 400,            /* ROLLBACK  */
    SQL_EQUALS = 401,              /* EQUALS  */
    SQL_NOTEQUALS = 402,           /* NOTEQUALS  */
    SQL_LESS = 403,                /* LESS  */
    SQL_GREATER = 404,             /* GREATER  */
    SQL_LESSEQ = 405,              /* LESSEQ  */
    SQL_GREATEREQ = 406,           /* GREATEREQ  */
    SQL_NOTNULL = 407,             /* NOTNULL  */
    SQL_UMINUS = 408               /* UMINUS  */
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

#line 392 "bison_parser.cpp"

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
  YYSYMBOL_DISTINCT = 12,                  /* DISTINCT  */
  YYSYMBOL_NVARCHAR = 13,                  /* NVARCHAR  */
  YYSYMBOL_RESTRICT = 14,                  /* RESTRICT  */
  YYSYMBOL_TRUNCATE = 15,                  /* TRUNCATE  */
  YYSYMBOL_ANALYZE = 16,                   /* ANALYZE  */
  YYSYMBOL_BETWEEN = 17,                   /* BETWEEN  */
  YYSYMBOL_CASCADE = 18,                   /* CASCADE  */
  YYSYMBOL_COLUMNS = 19,                   /* COLUMNS  */
  YYSYMBOL_CONTROL = 20,                   /* CONTROL  */
  YYSYMBOL_DEFAULT = 21,                   /* DEFAULT  */
  YYSYMBOL_EXECUTE = 22,                   /* EXECUTE  */
  YYSYMBOL_EXPLAIN = 23,                   /* EXPLAIN  */
  YYSYMBOL_NATURAL = 24,                   /* NATURAL  */
  YYSYMBOL_PREPARE = 25,                   /* PREPARE  */
  YYSYMBOL_PRIMARY = 26,                   /* PRIMARY  */
  YYSYMBOL_SCHEMAS = 27,                   /* SCHEMAS  */
  YYSYMBOL_SPATIAL = 28,                   /* SPATIAL  */
  YYSYMBOL_VARCHAR = 29,                   /* VARCHAR  */
  YYSYMBOL_VIRTUAL = 30,                   /* VIRTUAL  */
  YYSYMBOL_DESCRIBE = 31,                  /* DESCRIBE  */
  YYSYMBOL_BEFORE = 32,                    /* BEFORE  */
  YYSYMBOL_COLUMN = 33,                    /* COLUMN  */
  YYSYMBOL_CREATE = 34,                    /* CREATE  */
  YYSYMBOL_DELETE = 35,                    /* DELETE  */
  YYSYMBOL_DIRECT = 36,                    /* DIRECT  */
  YYSYMBOL_DOUBLE = 37,                    /* DOUBLE  */
  YYSYMBOL_ESCAPE = 38,                    /* ESCAPE  */
  YYSYMBOL_EXCEPT = 39,                    /* EXCEPT  */
  YYSYMBOL_EXISTS = 40,                    /* EXISTS  */
  YYSYMBOL_EXTRACT = 41,                   /* EXTRACT  */
  YYSYMBOL_CAST = 42,                      /* CAST  */
  YYSYMBOL_FORMAT = 43,                    /* FORMAT  */
  YYSYMBOL_GLOBAL = 44,                    /* GLOBAL  */
  YYSYMBOL_HAVING = 45,                    /* HAVING  */
  YYSYMBOL_IMPORT = 46,                    /* IMPORT  */
  YYSYMBOL_INSERT = 47,                    /* INSERT  */
  YYSYMBOL_ISNULL = 48,                    /* ISNULL  */
  YYSYMBOL_OFFSET = 49,                    /* OFFSET  */
  YYSYMBOL_RENAME = 50,                    /* RENAME  */
  YYSYMBOL_SCHEMA = 51,                    /* SCHEMA  */
  YYSYMBOL_SELECT = 52,                    /* SELECT  */
  YYSYMBOL_SORTED = 53,                    /* SORTED  */
  YYSYMBOL_TABLES = 54,                    /* TABLES  */
  YYSYMBOL_UNIQUE = 55,                    /* UNIQUE  */
  YYSYMBOL_UNLOAD = 56,                    /* UNLOAD  */
  YYSYMBOL_UPDATE = 57,                    /* UPDATE  */
  YYSYMBOL_VALUES = 58,                    /* VALUES  */
  YYSYMBOL_AFTER = 59,                     /* AFTER  */
  YYSYMBOL_ALTER = 60,                     /* ALTER  */
  YYSYMBOL_CROSS = 61,                     /* CROSS  */
  YYSYMBOL_DELTA = 62,                     /* DELTA  */
  YYSYMBOL_FLOAT = 63,                     /* FLOAT  */
  YYSYMBOL_GROUP = 64,                     /* GROUP  */
  YYSYMBOL_INDEX = 65,                     /* INDEX  */
  YYSYMBOL_INNER = 66,                     /* INNER  */
  YYSYMBOL_LIMIT = 67,                     /* LIMIT  */
  YYSYMBOL_LOCAL = 68,                     /* LOCAL  */
  YYSYMBOL_MERGE = 69,                     /* MERGE  */
  YYSYMBOL_MINUS = 70,                     /* MINUS  */
  YYSYMBOL_ORDER = 71,                     /* ORDER  */
  YYSYMBOL_OUTER = 72,                     /* OUTER  */
  YYSYMBOL_RIGHT = 73,                     /* RIGHT  */
  YYSYMBOL_TABLE = 74,                     /* TABLE  */
  YYSYMBOL_UNION = 75,                     /* UNION  */
  YYSYMBOL_USING = 76,                     /* USING  */
  YYSYMBOL_WHERE = 77,                     /* WHERE  */
  YYSYMBOL_CALL = 78,                      /* CALL  */
  YYSYMBOL_CASE = 79,                      /* CASE  */
  YYSYMBOL_CHAR = 80,                      /* CHAR  */
  YYSYMBOL_COPY = 81,                      /* COPY  */
  YYSYMBOL_DATE = 82,                      /* DATE  */
  YYSYMBOL_DATETIME = 83,                  /* DATETIME  */
  YYSYMBOL_DESC = 84,                      /* DESC  */
  YYSYMBOL_DROP = 85,                      /* DROP  */
  YYSYMBOL_ELSE = 86,                      /* ELSE  */
  YYSYMBOL_FILE = 87,                      /* FILE  */
  YYSYMBOL_FROM = 88,                      /* FROM  */
  YYSYMBOL_FULL = 89,                      /* FULL  */
  YYSYMBOL_HASH = 90,                      /* HASH  */
  YYSYMBOL_HINT = 91,                      /* HINT  */
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
  YYSYMBOL_ARRAY = 131,                    /* ARRAY  */
  YYSYMBOL_CONCAT = 132,                   /* CONCAT  */
  YYSYMBOL_ILIKE = 133,                    /* ILIKE  */
  YYSYMBOL_SECOND = 134,                   /* SECOND  */
  YYSYMBOL_MINUTE = 135,                   /* MINUTE  */
  YYSYMBOL_HOUR = 136,                     /* HOUR  */
  YYSYMBOL_DAY = 137,                      /* DAY  */
  YYSYMBOL_MONTH = 138,                    /* MONTH  */
  YYSYMBOL_YEAR = 139,                     /* YEAR  */
  YYSYMBOL_TRUE = 140,                     /* TRUE  */
  YYSYMBOL_FALSE = 141,                    /* FALSE  */
  YYSYMBOL_TRANSACTION = 142,              /* TRANSACTION  */
  YYSYMBOL_BEGIN = 143,                    /* BEGIN  */
  YYSYMBOL_COMMIT = 144,                   /* COMMIT  */
  YYSYMBOL_ROLLBACK = 145,                 /* ROLLBACK  */
  YYSYMBOL_146_ = 146,                     /* '='  */
  YYSYMBOL_EQUALS = 147,                   /* EQUALS  */
  YYSYMBOL_NOTEQUALS = 148,                /* NOTEQUALS  */
  YYSYMBOL_149_ = 149,                     /* '<'  */
  YYSYMBOL_150_ = 150,                     /* '>'  */
  YYSYMBOL_LESS = 151,                     /* LESS  */
  YYSYMBOL_GREATER = 152,                  /* GREATER  */
  YYSYMBOL_LESSEQ = 153,                   /* LESSEQ  */
  YYSYMBOL_GREATEREQ = 154,                /* GREATEREQ  */
  YYSYMBOL_NOTNULL = 155,                  /* NOTNULL  */
  YYSYMBOL_156_ = 156,                     /* '+'  */
  YYSYMBOL_157_ = 157,                     /* '-'  */
  YYSYMBOL_158_ = 158,                     /* '*'  */
  YYSYMBOL_159_ = 159,                     /* '/'  */
  YYSYMBOL_160_ = 160,                     /* '%'  */
  YYSYMBOL_161_ = 161,                     /* '^'  */
  YYSYMBOL_UMINUS = 162,                   /* UMINUS  */
  YYSYMBOL_163_ = 163,                     /* '['  */
  YYSYMBOL_164_ = 164,                     /* ']'  */
  YYSYMBOL_165_ = 165,                     /* '('  */
  YYSYMBOL_166_ = 166,                     /* ')'  */
  YYSYMBOL_167_ = 167,                     /* '.'  */
  YYSYMBOL_168_ = 168,                     /* ';'  */
  YYSYMBOL_169_ = 169,                     /* ','  */
  YYSYMBOL_170_ = 170,                     /* '?'  */
  YYSYMBOL_YYACCEPT = 171,                 /* $accept  */
  YYSYMBOL_input = 172,                    /* input  */
  YYSYMBOL_statement_list = 173,           /* statement_list  */
  YYSYMBOL_statement = 174,                /* statement  */
  YYSYMBOL_preparable_statement = 175,     /* preparable_statement  */
  YYSYMBOL_opt_hints = 176,                /* opt_hints  */
  YYSYMBOL_hint_list = 177,                /* hint_list  */
  YYSYMBOL_hint = 178,                     /* hint  */
  YYSYMBOL_transaction_statement = 179,    /* transaction_statement  */
  YYSYMBOL_opt_transaction_keyword = 180,  /* opt_transaction_keyword  */
  YYSYMBOL_prepare_statement = 181,        /* prepare_statement  */
  YYSYMBOL_prepare_target_query = 182,     /* prepare_target_query  */
  YYSYMBOL_execute_statement = 183,        /* execute_statement  */
  YYSYMBOL_import_statement = 184,         /* import_statement  */
  YYSYMBOL_file_type = 185,                /* file_type  */
  YYSYMBOL_file_path = 186,                /* file_path  */
  YYSYMBOL_opt_file_type = 187,            /* opt_file_type  */
  YYSYMBOL_export_statement = 188,         /* export_statement  */
  YYSYMBOL_show_statement = 189,           /* show_statement  */
  YYSYMBOL_create_statement = 190,         /* create_statement  */
  YYSYMBOL_opt_not_exists = 191,           /* opt_not_exists  */
  YYSYMBOL_column_def_commalist = 192,     /* column_def_commalist  */
  YYSYMBOL_column_def = 193,               /* column_def  */
  YYSYMBOL_column_type = 194,              /* column_type  */
  YYSYMBOL_opt_column_nullable = 195,      /* opt_column_nullable  */
  YYSYMBOL_drop_statement = 196,           /* drop_statement  */
  YYSYMBOL_opt_exists = 197,               /* opt_exists  */
  YYSYMBOL_delete_statement = 198,         /* delete_statement  */
  YYSYMBOL_truncate_statement = 199,       /* truncate_statement  */
  YYSYMBOL_insert_statement = 200,         /* insert_statement  */
  YYSYMBOL_opt_column_list = 201,          /* opt_column_list  */
  YYSYMBOL_update_statement = 202,         /* update_statement  */
  YYSYMBOL_update_clause_commalist = 203,  /* update_clause_commalist  */
  YYSYMBOL_update_clause = 204,            /* update_clause  */
  YYSYMBOL_select_statement = 205,         /* select_statement  */
  YYSYMBOL_select_within_set_operation = 206, /* select_within_set_operation  */
  YYSYMBOL_select_within_set_operation_no_parentheses = 207, /* select_within_set_operation_no_parentheses  */
  YYSYMBOL_select_with_paren = 208,        /* select_with_paren  */
  YYSYMBOL_select_no_paren = 209,          /* select_no_paren  */
  YYSYMBOL_set_operator = 210,             /* set_operator  */
  YYSYMBOL_set_type = 211,                 /* set_type  */
  YYSYMBOL_opt_all = 212,                  /* opt_all  */
  YYSYMBOL_select_clause = 213,            /* select_clause  */
  YYSYMBOL_opt_distinct = 214,             /* opt_distinct  */
  YYSYMBOL_select_list = 215,              /* select_list  */
  YYSYMBOL_opt_from_clause = 216,          /* opt_from_clause  */
  YYSYMBOL_from_clause = 217,              /* from_clause  */
  YYSYMBOL_opt_where = 218,                /* opt_where  */
  YYSYMBOL_opt_group = 219,                /* opt_group  */
  YYSYMBOL_opt_having = 220,               /* opt_having  */
  YYSYMBOL_opt_order = 221,                /* opt_order  */
  YYSYMBOL_order_list = 222,               /* order_list  */
  YYSYMBOL_order_desc = 223,               /* order_desc  */
  YYSYMBOL_opt_order_type = 224,           /* opt_order_type  */
  YYSYMBOL_opt_top = 225,                  /* opt_top  */
  YYSYMBOL_opt_limit = 226,                /* opt_limit  */
  YYSYMBOL_expr_list = 227,                /* expr_list  */
  YYSYMBOL_opt_literal_list = 228,         /* opt_literal_list  */
  YYSYMBOL_literal_list = 229,             /* literal_list  */
  YYSYMBOL_expr_alias = 230,               /* expr_alias  */
  YYSYMBOL_expr = 231,                     /* expr  */
  YYSYMBOL_operand = 232,                  /* operand  */
  YYSYMBOL_scalar_expr = 233,              /* scalar_expr  */
  YYSYMBOL_unary_expr = 234,               /* unary_expr  */
  YYSYMBOL_binary_expr = 235,              /* binary_expr  */
  YYSYMBOL_logic_expr = 236,               /* logic_expr  */
  YYSYMBOL_in_expr = 237,                  /* in_expr  */
  YYSYMBOL_case_expr = 238,                /* case_expr  */
  YYSYMBOL_case_list = 239,                /* case_list  */
  YYSYMBOL_exists_expr = 240,              /* exists_expr  */
  YYSYMBOL_comp_expr = 241,                /* comp_expr  */
  YYSYMBOL_function_expr = 242,            /* function_expr  */
  YYSYMBOL_extract_expr = 243,             /* extract_expr  */
  YYSYMBOL_cast_expr = 244,                /* cast_expr  */
  YYSYMBOL_datetime_field = 245,           /* datetime_field  */
  YYSYMBOL_array_expr = 246,               /* array_expr  */
  YYSYMBOL_array_index = 247,              /* array_index  */
  YYSYMBOL_between_expr = 248,             /* between_expr  */
  YYSYMBOL_column_name = 249,              /* column_name  */
  YYSYMBOL_literal = 250,                  /* literal  */
  YYSYMBOL_string_literal = 251,           /* string_literal  */
  YYSYMBOL_bool_literal = 252,             /* bool_literal  */
  YYSYMBOL_num_literal = 253,              /* num_literal  */
  YYSYMBOL_int_literal = 254,              /* int_literal  */
  YYSYMBOL_null_literal = 255,             /* null_literal  */
  YYSYMBOL_param_expr = 256,               /* param_expr  */
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
#define YYLAST   853

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  171
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  264
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  476

#define YYMAXUTOK   408


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
       2,     2,     2,     2,     2,     2,     2,   160,     2,     2,
     165,   166,   158,   156,   169,   157,   167,   159,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   168,
     149,   146,   150,   170,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   163,     2,   164,   161,     2,     2,     2,     2,     2,
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
     145,   147,   148,   151,   152,   153,   154,   155,   162
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   269,   269,   290,   296,   305,   309,   313,   316,   319,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   343,
     344,   349,   350,   354,   358,   370,   373,   376,   382,   383,
     390,   397,   400,   404,   418,   424,   433,   450,   454,   457,
     466,   480,   483,   488,   502,   515,   522,   529,   540,   541,
     545,   546,   550,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   571,   572,   573,   583,   589,
     595,   603,   604,   613,   622,   635,   642,   653,   654,   664,
     673,   674,   678,   690,   694,   698,   712,   713,   716,   717,
     728,   729,   733,   743,   756,   763,   767,   771,   778,   781,
     787,   799,   800,   804,   808,   809,   813,   818,   819,   823,
     828,   832,   833,   837,   838,   842,   843,   847,   851,   852,
     853,   859,   860,   864,   865,   866,   867,   868,   869,   876,
     877,   881,   882,   886,   887,   891,   901,   902,   903,   904,
     905,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   923,   924,   928,   929,   930,   931,   932,   936,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     950,   951,   955,   956,   957,   958,   964,   965,   966,   967,
     971,   972,   976,   977,   981,   982,   983,   984,   985,   986,
     987,   991,   992,   996,  1000,  1004,  1005,  1006,  1007,  1008,
    1009,  1013,  1017,  1021,  1025,  1026,  1027,  1028,  1032,  1033,
    1034,  1035,  1036,  1040,  1044,  1045,  1049,  1050,  1054,  1058,
    1062,  1074,  1075,  1085,  1086,  1090,  1091,  1100,  1101,  1106,
    1117,  1126,  1127,  1132,  1133,  1138,  1139,  1144,  1145,  1150,
    1151,  1160,  1161,  1165,  1169,  1173,  1180,  1193,  1201,  1211,
    1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,  1239,
    1244,  1253,  1254,  1259,  1260
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
  "TEMPORARY", "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE",
  "ANALYZE", "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "SPATIAL", "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS",
  "EXTRACT", "CAST", "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT",
  "ISNULL", "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES",
  "UNIQUE", "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "TINYINT", "SMALLINT", "BIGINT", "NOT", "OFF", "SET", "TOP", "AS",
  "BY", "IF", "IN", "IS", "OF", "ON", "OR", "TO", "ARRAY", "CONCAT",
  "ILIKE", "SECOND", "MINUTE", "HOUR", "DAY", "MONTH", "YEAR", "TRUE",
  "FALSE", "TRANSACTION", "BEGIN", "COMMIT", "ROLLBACK", "'='", "EQUALS",
  "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ", "GREATEREQ",
  "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "UMINUS", "'['",
  "']'", "'('", "')'", "'.'", "';'", "','", "'?'", "$accept", "input",
  "statement_list", "statement", "preparable_statement", "opt_hints",
  "hint_list", "hint", "transaction_statement", "opt_transaction_keyword",
  "prepare_statement", "prepare_target_query", "execute_statement",
  "import_statement", "file_type", "file_path", "opt_file_type",
  "export_statement", "show_statement", "create_statement",
  "opt_not_exists", "column_def_commalist", "column_def", "column_type",
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
  "array_expr", "array_index", "between_expr", "column_name", "literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "param_expr", "table_ref", "table_ref_atomic",
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
     395,   396,   397,   398,   399,   400,    61,   401,   402,    60,
      62,   403,   404,   405,   406,   407,    43,    45,    42,    47,
      37,    94,   408,    91,    93,    40,    41,    46,    59,    44,
      63
};
#endif

#define YYPACT_NINF (-353)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-262)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     615,     4,    39,    80,    93,    39,   -42,   -24,    40,    94,
      39,    39,   -19,    32,    95,    85,    85,    85,   203,    64,
    -353,   138,  -353,   138,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,   -17,  -353,   242,   105,  -353,
      96,   190,  -353,   166,   166,    39,   291,    39,   194,  -353,
     -49,   191,   191,    39,  -353,   195,   149,  -353,  -353,  -353,
    -353,  -353,  -353,   610,  -353,   231,  -353,  -353,   202,   -17,
      48,  -353,    28,  -353,   321,    10,   323,   207,    39,    39,
     252,  -353,   243,   167,   333,   337,   337,   302,    39,    39,
    -353,   179,    95,  -353,   185,   345,   341,   188,   189,  -353,
    -353,  -353,   -17,   249,   236,   -17,    -9,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,   196,   197,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,   320,   -54,   167,   343,
    -353,   337,   360,   102,   218,   -57,  -353,   261,  -353,   261,
    -353,  -353,  -353,  -353,  -353,   365,  -353,  -353,   343,  -353,
    -353,   298,  -353,  -353,    48,  -353,  -353,   343,   298,   343,
     116,  -353,  -353,    10,  -353,   367,   265,   369,   251,    74,
     209,   210,   211,   247,   387,   216,   428,  -353,   279,    78,
     455,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,   288,  -353,    33,
     217,  -353,   343,   333,  -353,   338,  -353,  -353,   221,    49,
    -353,   301,   225,  -353,    56,    -9,   -17,   227,  -353,    43,
      -9,    78,   349,   -25,  -353,   312,  -353,   459,    67,  -353,
     265,     9,    15,   348,   173,   343,   343,   -27,   124,   237,
     428,   645,   343,    62,   235,   -66,   343,   343,   428,  -353,
     428,   -34,   238,   -73,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   345,
      39,  -353,   403,    10,    78,  -353,   291,    10,  -353,   365,
      14,   252,  -353,   343,  -353,   404,  -353,  -353,  -353,  -353,
     343,  -353,  -353,  -353,  -353,   343,   343,   337,   244,  -353,
    -353,   246,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
     130,  -353,   369,  -353,  -353,   343,  -353,  -353,   248,  -353,
    -353,  -353,  -353,  -353,  -353,   325,    75,    53,   144,   343,
     343,  -353,   348,   313,     7,  -353,  -353,  -353,   306,   576,
     690,   428,   253,   279,  -353,   318,   258,   690,   690,   690,
     690,   143,   143,   143,   143,    62,    62,    45,    45,    45,
     -62,   259,  -353,  -353,    77,  -353,    97,  -353,   265,  -353,
      -1,  -353,   255,  -353,    23,  -353,   361,  -353,  -353,  -353,
      78,    78,  -353,   420,   424,  -353,   340,  -353,  -353,   101,
    -353,   343,   459,   343,   343,  -353,    87,    61,   269,  -353,
     428,   690,   279,   273,   111,  -353,  -353,  -353,  -353,   274,
     350,  -353,  -353,  -353,   370,   373,   374,   354,    14,   445,
    -353,  -353,  -353,   327,  -353,   285,   286,  -353,  -353,   -53,
     287,    78,   131,  -353,   343,  -353,   645,   289,   129,  -353,
    -353,    23,    14,  -353,  -353,  -353,    14,   165,   292,   343,
    -353,  -353,  -353,  -353,  -353,    78,  -353,  -353,  -353,  -353,
     267,   360,   -23,   293,   343,   147,   343,  -353,    16,    78,
    -353,  -353,    78,   295,   290,  -353
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    29,    29,     0,   262,
       3,    20,    18,    20,    17,     8,     9,     7,    11,    16,
      13,    14,    12,    15,    10,     0,   241,     0,   231,    74,
      32,     0,    43,    49,    49,     0,     0,     0,     0,   230,
       0,    72,    72,     0,    41,     0,   243,   244,    28,    25,
      27,    26,     1,   242,     2,     0,     6,     5,   122,     0,
      83,    84,   114,    70,     0,   132,     0,     0,     0,     0,
     108,    36,     0,    78,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     4,     0,     0,   102,     0,     0,    96,
      97,    95,     0,    99,     0,     0,   128,   232,   213,   216,
     218,   219,   214,   215,   220,     0,   131,   133,   208,   209,
     210,   217,   211,   212,    31,    30,     0,     0,    78,     0,
      73,     0,     0,     0,     0,   108,    80,    39,    37,    39,
      71,    68,    69,   246,   245,     0,   121,   101,     0,    91,
      90,   114,    87,    86,    88,    98,    94,     0,   114,     0,
       0,    92,    33,     0,    48,     0,   242,     0,     0,   204,
       0,     0,     0,     0,     0,     0,     0,   206,     0,   107,
     136,   143,   144,   145,   138,   140,   146,   139,   159,   147,
     148,   149,   150,   142,   137,   152,   153,     0,   263,     0,
       0,    76,     0,     0,    79,     0,    35,    40,    23,     0,
      21,   105,   103,   129,   240,   128,     0,   113,   115,   120,
     128,   124,   126,   123,   134,     0,    46,     0,     0,    50,
     242,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   155,     0,   154,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,    82,    81,     0,     0,    19,     0,
       0,   108,   104,     0,   238,     0,   239,   135,    85,    89,
       0,   119,   118,   117,    93,     0,     0,     0,     0,    59,
      58,     0,    64,    63,    57,    62,    55,    53,    54,    56,
      67,    45,     0,    47,   191,     0,   205,   207,     0,   195,
     196,   197,   198,   199,   200,     0,     0,     0,     0,     0,
       0,   178,     0,     0,     0,   151,   141,   170,   171,     0,
     166,     0,     0,     0,   157,     0,   169,   168,   184,   185,
     186,   187,   188,   189,   190,   161,   160,   163,   162,   164,
     165,     0,    34,   264,     0,    38,     0,    22,   242,   106,
     221,   223,     0,   225,   236,   224,   110,   130,   237,   116,
     127,   125,    44,     0,     0,    65,     0,    52,    51,     0,
     182,     0,     0,     0,     0,   176,     0,     0,     0,   201,
       0,   167,     0,     0,     0,   158,   202,    75,    24,     0,
       0,   258,   250,   256,   254,   257,   252,     0,     0,     0,
     235,   229,   233,     0,   100,     0,     0,    66,   192,     0,
       0,   180,     0,   179,     0,   183,   203,     0,     0,   174,
     172,   236,     0,   253,   255,   251,     0,   222,   237,     0,
      60,    61,   193,   194,   177,   181,   175,   173,   226,   247,
     259,     0,   112,     0,     0,     0,     0,   109,     0,   260,
     248,   234,   111,   204,     0,   249
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -353,  -353,  -353,   391,  -353,   436,  -353,   181,  -353,   176,
    -353,  -353,  -353,  -353,   187,   -78,   326,  -353,  -353,  -353,
     423,  -353,   152,    76,  -353,  -353,   419,  -353,  -353,  -353,
     347,  -353,  -353,   270,  -156,   -67,  -353,     6,   -64,   -45,
    -353,  -353,   -69,   245,  -353,  -353,  -353,  -122,  -353,  -353,
      30,  -353,   192,  -353,  -353,  -105,  -238,  -353,  -148,   198,
    -129,  -124,  -353,  -353,  -353,  -353,  -353,  -353,   240,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,    11,   -68,
     -84,  -353,  -353,   -86,  -353,  -353,  -353,  -352,    36,  -353,
    -353,  -353,     1,  -353,    46,   266,  -353,  -353,  -353,  -353,
     394,  -353,  -353,  -353,  -353,    29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    66,   209,   210,    22,    59,
      23,   125,    24,    25,    82,   137,   206,    26,    27,    28,
      78,   228,   229,   310,   387,    29,    88,    30,    31,    32,
     133,    33,   135,   136,    34,   151,   152,   153,    71,   102,
     103,   156,    72,   148,   211,   281,   282,   130,   424,   467,
     106,   217,   218,   293,    96,   161,   212,   115,   116,   213,
     214,   180,   181,   182,   183,   184,   185,   186,   238,   187,
     188,   189,   190,   191,   325,   192,   193,   194,   195,   196,
     118,   119,   120,   121,   122,   123,   369,   370,   371,   372,
     373,    48,   374,   420,   421,   422,   287,    35,    36,    56,
      57,   375,   417,   470,    64,   199
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     179,   138,   138,    39,   334,    98,    42,   117,   139,   146,
     226,    49,    50,   204,   108,   109,   110,    38,   316,   473,
     129,   147,   466,   410,   296,   344,   284,   105,   219,    37,
     221,   223,    43,   154,   165,    68,   154,    99,   158,    85,
     159,    70,    38,   246,   237,   345,    80,   138,    83,   245,
     241,    53,   243,   197,    90,    51,   246,    99,   160,   284,
     411,   341,    44,   247,    45,   412,   447,   100,   166,   201,
     254,   413,   414,   274,   313,    97,   247,   389,   236,   127,
     128,    86,   246,    40,   246,    52,    54,   100,   415,   141,
     142,   342,  -259,   416,   460,   224,    41,   143,    55,   104,
     336,   269,   247,   101,   247,   404,   326,   327,   111,   216,
     288,   167,   203,   452,   244,   294,   241,   337,   338,   169,
     108,   109,   110,   101,   339,   364,   340,   291,    46,   366,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   419,   283,   154,    69,   289,
     112,   113,   246,   292,    68,   393,   170,   171,   172,   376,
     200,   219,   246,   434,   438,   246,   380,   381,  -227,   318,
     246,   399,   247,   317,   177,   314,   283,   254,   285,   368,
     114,   215,   247,   361,   246,   247,    47,   246,   220,   410,
     247,   249,    60,    61,   254,   173,   246,   392,   433,   271,
     396,   397,   272,    62,   247,   117,   268,   247,   269,   117,
     329,   462,   409,   138,   111,   278,   247,   401,   279,   382,
     265,   266,   267,   268,   222,   269,   411,    58,   385,   330,
     394,   412,    63,   311,   174,   331,   312,   413,   414,   231,
     246,   232,   454,   407,    65,    73,   163,   175,   386,   330,
     169,   108,   109,   110,   415,   395,   112,   113,  -259,   416,
     247,    75,   429,   408,   431,   432,   163,   428,   398,   253,
     283,   362,    74,   176,   177,   254,   436,   440,    76,   403,
     283,   178,   169,   108,   109,   110,   114,   170,   171,   172,
      77,   410,  -262,  -262,    81,   457,  -262,  -262,   283,   263,
     264,   265,   266,   267,   268,   455,   269,   319,   320,   321,
     322,   323,   324,   471,    84,    87,   272,    91,    92,   170,
     171,   172,    94,    95,   107,   126,   173,   124,   411,   129,
     131,    68,   132,   412,  -228,   469,   134,   472,   437,   413,
     414,   108,   140,   463,    69,   111,   169,   108,   109,   110,
     145,   110,   236,   147,   149,   150,   415,   155,   173,   157,
     164,   416,   162,   198,   202,   174,   163,   205,   208,   104,
     225,    14,   227,   230,   233,   234,   235,   111,   175,   242,
     270,   276,   273,   170,   171,   172,   277,   112,   113,   280,
     169,   108,   109,   110,   283,   464,   290,   174,   295,   297,
      68,   335,   332,   343,   176,   177,   363,   378,   341,   383,
     175,   384,   178,   391,   390,   246,   405,   114,   402,   112,
     113,   269,   173,   406,   418,   423,   425,   239,   171,   172,
     426,   169,   108,   109,   110,   435,   176,   177,   427,   439,
     441,   111,   443,   442,   178,   444,   445,   446,   448,   114,
     449,   450,   451,   453,    93,   456,   475,   461,   468,    67,
     367,   174,   232,   365,   388,   207,   173,    79,   430,   171,
     172,    89,   248,   275,   175,   168,   315,   328,   459,   474,
     286,   377,   379,   112,   113,   111,   144,   458,   298,     0,
     465,     0,     0,     0,     0,     0,   299,     0,     0,     0,
     176,   177,     0,   249,     0,   240,     0,   173,   178,     0,
       0,     0,     0,   114,     0,     0,     0,     0,   175,     0,
       0,     0,   300,     0,     0,     0,   111,   112,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   301,
       0,   302,   303,     0,   176,   177,   240,     0,     0,     0,
     250,     0,   178,     0,     0,     0,   304,   114,     0,   175,
     305,     0,     0,     0,     0,     0,     0,     0,   112,   113,
       0,     0,   306,   251,   307,   308,   309,     0,     0,     0,
     252,   253,     0,     0,     0,   176,   177,   254,   255,     0,
       0,     0,     0,   178,     0,     0,     0,     0,   114,     0,
       0,   256,   257,   258,   259,   260,     0,     0,   261,   262,
    -261,   263,   264,   265,   266,   267,   268,     1,   269,     0,
       0,     0,     1,     0,   249,     2,     0,     0,     0,     0,
       2,     0,     3,     0,     0,     4,     0,     3,     0,     0,
       4,     5,     0,     0,     6,     7,     5,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     8,     9,     0,     0,
       0,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,   250,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   400,     0,     0,     0,     0,
       0,    11,     0,   249,   333,    12,    11,     0,     0,     0,
      12,     0,   253,     0,     0,     0,     0,     0,   254,   255,
      13,     0,     0,     0,     0,    13,    14,     0,     0,     0,
       0,    14,   256,   257,   258,   259,   260,     0,     0,   261,
     262,     0,   263,   264,   265,   266,   267,   268,   249,   269,
     250,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    16,    17,     0,     0,    15,    16,
      17,     0,     0,   333,     0,     0,     0,     0,     0,     0,
       0,   253,     0,     0,     0,     0,     0,   254,   255,     0,
       0,     0,     0,     0,     0,  -262,     0,     0,     0,     0,
       0,   256,   257,   258,   259,   260,     0,     0,   261,   262,
       0,   263,   264,   265,   266,   267,   268,     0,   269,     0,
       0,     0,     0,     0,     0,     0,   253,     0,     0,     0,
       0,     0,   254,  -262,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -262,  -262,  -262,   259,
     260,     0,     0,   261,   262,     0,   263,   264,   265,   266,
     267,   268,     0,   269
};

static const yytype_int16 yycheck[] =
{
     129,    85,    86,     2,   242,    69,     5,    75,    86,    95,
     166,    10,    11,   135,     4,     5,     6,     3,     3,     3,
      77,    12,    45,    24,    49,    98,     3,    72,   157,    25,
     159,   160,    74,   102,    88,    52,   105,     9,   105,    88,
      49,    35,     3,   109,   173,   118,    45,   131,    47,   178,
     174,    19,   176,   131,    53,    74,   109,     9,    67,     3,
      61,    95,   104,   129,    88,    66,   418,    39,   122,   133,
     132,    72,    73,   202,   230,    69,   129,   315,   105,    78,
      79,   130,   109,     3,   109,   104,    54,    39,    89,    88,
      89,   125,    93,    94,   446,   163,     3,    91,     3,    71,
     166,   163,   129,    75,   129,   343,   235,   236,    98,   154,
     215,   165,   169,   166,   178,   220,   240,   246,   247,     3,
       4,     5,     6,    75,   248,   273,   250,    84,    88,   277,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   122,   169,   216,   165,   216,
     140,   141,   109,   110,    52,   102,    40,    41,    42,   281,
      58,   290,   109,   102,   402,   109,   295,   296,   169,   233,
     109,   164,   129,   158,   158,   166,   169,   132,   122,   165,
     170,   151,   129,   269,   109,   129,    92,   109,   158,    24,
     129,    48,    16,    17,   132,    79,   109,   122,   111,   166,
     329,   330,   169,     0,   129,   273,   161,   129,   163,   277,
      86,   449,   368,   297,    98,   166,   129,   341,   169,   297,
     158,   159,   160,   161,   108,   163,    61,   142,    98,   105,
      86,    66,   168,   166,   118,   111,   169,    72,    73,   165,
     109,   167,   111,   166,   106,     3,   169,   131,   118,   105,
       3,     4,     5,     6,    89,   111,   140,   141,    93,    94,
     129,   165,   391,   166,   393,   394,   169,   166,   332,   126,
     169,   270,   167,   157,   158,   132,   400,   166,    88,   343,
     169,   165,     3,     4,     5,     6,   170,    40,    41,    42,
     124,    24,   149,   150,     3,   166,   153,   154,   169,   156,
     157,   158,   159,   160,   161,   434,   163,   134,   135,   136,
     137,   138,   139,   166,   120,   124,   169,   122,   169,    40,
      41,    42,    91,   121,     3,   118,    79,     4,    61,    77,
      87,    52,   165,    66,   169,   464,     3,   466,   402,    72,
      73,     4,    40,    76,   165,    98,     3,     4,     5,     6,
     165,     6,   105,    12,   166,   166,    89,   108,    79,   123,
      40,    94,   166,     3,   146,   118,   169,   106,     3,    71,
       3,   106,     3,   122,   165,   165,   165,    98,   131,   163,
      92,    43,   165,    40,    41,    42,   165,   140,   141,    88,
       3,     4,     5,     6,   169,   128,   169,   118,    49,    87,
      52,   166,   165,   165,   157,   158,     3,     3,    95,   165,
     131,   165,   165,    88,   166,   109,    98,   170,   165,   140,
     141,   163,    79,   164,   169,    64,     6,    40,    41,    42,
       6,     3,     4,     5,     6,   166,   157,   158,    98,   166,
     166,    98,    72,    93,   165,    72,    72,    93,     3,   170,
     123,   166,   166,   166,    63,   166,   166,   165,   165,    23,
     279,   118,   167,   276,   312,   139,    79,    44,   392,    41,
      42,    52,    17,   203,   131,   128,   231,   237,   442,   468,
     214,   283,   290,   140,   141,    98,    92,   441,    29,    -1,
     461,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
     157,   158,    -1,    48,    -1,   118,    -1,    79,   165,    -1,
      -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    98,   140,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    82,    83,    -1,   157,   158,   118,    -1,    -1,    -1,
      95,    -1,   165,    -1,    -1,    -1,    97,   170,    -1,   131,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,   141,
      -1,    -1,   113,   118,   115,   116,   117,    -1,    -1,    -1,
     125,   126,    -1,    -1,    -1,   157,   158,   132,   133,    -1,
      -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,   170,    -1,
      -1,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
       0,   156,   157,   158,   159,   160,   161,     7,   163,    -1,
      -1,    -1,     7,    -1,    48,    15,    -1,    -1,    -1,    -1,
      15,    -1,    22,    -1,    -1,    25,    -1,    22,    -1,    -1,
      25,    31,    -1,    -1,    34,    35,    31,    -1,    -1,    34,
      35,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    95,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    48,   118,    85,    81,    -1,    -1,    -1,
      85,    -1,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,
     100,    -1,    -1,    -1,    -1,   100,   106,    -1,    -1,    -1,
      -1,   106,   146,   147,   148,   149,   150,    -1,    -1,   153,
     154,    -1,   156,   157,   158,   159,   160,   161,    48,   163,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,    -1,    -1,   143,   144,
     145,    -1,    -1,   118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,   146,   147,   148,   149,   150,    -1,    -1,   153,   154,
      -1,   156,   157,   158,   159,   160,   161,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,    -1,   132,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,   147,   148,   149,
     150,    -1,    -1,   153,   154,    -1,   156,   157,   158,   159,
     160,   161,    -1,   163
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,     7,    15,    22,    25,    31,    34,    35,    46,    47,
      57,    81,    85,   100,   106,   143,   144,   145,   172,   173,
     174,   175,   179,   181,   183,   184,   188,   189,   190,   196,
     198,   199,   200,   202,   205,   268,   269,    25,     3,   263,
       3,     3,   263,    74,   104,    88,    88,    92,   262,   263,
     263,    74,   104,    19,    54,     3,   270,   271,   142,   180,
     180,   180,     0,   168,   275,   106,   176,   176,    52,   165,
     208,   209,   213,     3,   167,   165,    88,   124,   191,   191,
     263,     3,   185,   263,   120,    88,   130,   124,   197,   197,
     263,   122,   169,   174,    91,   121,   225,   208,   209,     9,
      39,    75,   210,   211,    71,   210,   221,     3,     4,     5,
       6,    98,   140,   141,   170,   228,   229,   250,   251,   252,
     253,   254,   255,   256,     4,   182,   118,   263,   263,    77,
     218,    87,   165,   201,     3,   203,   204,   186,   251,   186,
      40,   263,   263,   208,   271,   165,   254,    12,   214,   166,
     166,   206,   207,   208,   213,   108,   212,   123,   206,    49,
      67,   226,   166,   169,    40,    88,   122,   165,   201,     3,
      40,    41,    42,    79,   118,   131,   157,   158,   165,   231,
     232,   233,   234,   235,   236,   237,   238,   240,   241,   242,
     243,   244,   246,   247,   248,   249,   250,   186,     3,   276,
      58,   209,   146,   169,   218,   106,   187,   187,     3,   177,
     178,   215,   227,   230,   231,   221,   210,   222,   223,   231,
     221,   231,   108,   231,   250,     3,   205,     3,   192,   193,
     122,   165,   167,   165,   165,   165,   105,   231,   239,    40,
     118,   232,   163,   232,   209,   231,   109,   129,    17,    48,
      95,   118,   125,   126,   132,   133,   146,   147,   148,   149,
     150,   153,   154,   156,   157,   158,   159,   160,   161,   163,
      92,   166,   169,   165,   231,   204,    43,   165,   166,   169,
      88,   216,   217,   169,     3,   122,   266,   267,   226,   206,
     169,    84,   110,   224,   226,    49,    49,    87,    29,    37,
      63,    80,    82,    83,    97,   101,   113,   115,   116,   117,
     194,   166,   169,   205,   166,   214,     3,   158,   209,   134,
     135,   136,   137,   138,   139,   245,   231,   231,   239,    86,
     105,   111,   165,   118,   227,   166,   166,   231,   231,   232,
     232,    95,   125,   165,    98,   118,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   254,   263,     3,   229,   185,   229,   178,   165,   257,
     258,   259,   260,   261,   263,   272,   218,   230,     3,   223,
     231,   231,   186,   165,   165,    98,   118,   195,   193,   227,
     166,    88,   122,   102,    86,   111,   231,   231,   209,   164,
     109,   232,   165,   209,   227,    98,   164,   166,   166,   205,
      24,    61,    66,    72,    73,    89,    94,   273,   169,   122,
     264,   265,   266,    64,   219,     6,     6,    98,   166,   231,
     194,   231,   231,   111,   102,   166,   232,   209,   227,   166,
     166,   166,    93,    72,    72,    72,    93,   258,     3,   123,
     166,   166,   166,   166,   111,   231,   166,   166,   265,   259,
     258,   165,   227,    76,   128,   276,    45,   220,   165,   231,
     274,   166,   231,     3,   249,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   171,   172,   173,   173,   174,   174,   174,   174,   174,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   179,   180,   180,
     181,   182,   183,   183,   184,   184,   185,   186,   187,   187,
     188,   189,   189,   189,   190,   190,   190,   190,   191,   191,
     192,   192,   193,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   195,   196,   196,
     196,   197,   197,   198,   199,   200,   200,   201,   201,   202,
     203,   203,   204,   205,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   209,   210,   211,   211,   211,   212,   212,
     213,   214,   214,   215,   216,   216,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   224,   224,
     224,   225,   225,   226,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   231,   231,   231,   231,
     231,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   233,   233,   234,   234,   234,   234,   234,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     236,   236,   237,   237,   237,   237,   238,   238,   238,   238,
     239,   239,   240,   240,   241,   241,   241,   241,   241,   241,
     241,   242,   242,   243,   244,   245,   245,   245,   245,   245,
     245,   246,   247,   248,   249,   249,   249,   249,   250,   250,
     250,   250,   250,   251,   252,   252,   253,   253,   254,   255,
     256,   257,   257,   258,   258,   259,   259,   260,   260,   261,
     262,   263,   263,   264,   264,   265,   265,   266,   266,   267,
     267,   268,   268,   269,   270,   270,   271,   272,   272,   272,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     274,   275,   275,   276,   276
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
       4,     4,     1,     1,     1,     1,     2,     0,     4,     4,
       3,     2,     0,     4,     2,     8,     5,     3,     0,     5,
       1,     3,     3,     2,     2,     6,     1,     1,     1,     3,
       3,     3,     3,     5,     2,     1,     1,     1,     1,     0,
       7,     1,     0,     1,     1,     0,     2,     2,     0,     4,
       0,     2,     0,     3,     0,     1,     3,     2,     1,     1,
       0,     2,     0,     2,     2,     4,     2,     4,     0,     1,
       3,     1,     0,     1,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     2,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     5,     6,     5,     6,     4,     6,     3,     5,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     6,     6,     1,     1,     1,     1,     1,
       1,     4,     4,     5,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     4,     1,     3,     2,
       1,     1,     3,     1,     5,     1,     0,     2,     1,     1,
       0,     1,     0,     2,     1,     3,     3,     4,     6,     8,
       1,     2,     1,     2,     1,     2,     1,     1,     1,     0,
       1,     1,     0,     1,     3
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
#line 2215 "bison_parser.cpp"
        break;

    case 4: /* STRING  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2221 "bison_parser.cpp"
        break;

    case 5: /* FLOATVAL  */
#line 147 "bison_parser.y"
            { }
#line 2227 "bison_parser.cpp"
        break;

    case 6: /* INTVAL  */
#line 147 "bison_parser.y"
            { }
#line 2233 "bison_parser.cpp"
        break;

    case 173: /* statement_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).stmt_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).stmt_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).stmt_vec));
}
#line 2246 "bison_parser.cpp"
        break;

    case 174: /* statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2252 "bison_parser.cpp"
        break;

    case 175: /* preparable_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).statement)); }
#line 2258 "bison_parser.cpp"
        break;

    case 176: /* opt_hints  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2271 "bison_parser.cpp"
        break;

    case 177: /* hint_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2284 "bison_parser.cpp"
        break;

    case 178: /* hint  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2290 "bison_parser.cpp"
        break;

    case 179: /* transaction_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).transaction_stmt)); }
#line 2296 "bison_parser.cpp"
        break;

    case 181: /* prepare_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).prep_stmt)); }
#line 2302 "bison_parser.cpp"
        break;

    case 182: /* prepare_target_query  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2308 "bison_parser.cpp"
        break;

    case 183: /* execute_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).exec_stmt)); }
#line 2314 "bison_parser.cpp"
        break;

    case 184: /* import_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).import_stmt)); }
#line 2320 "bison_parser.cpp"
        break;

    case 185: /* file_type  */
#line 147 "bison_parser.y"
            { }
#line 2326 "bison_parser.cpp"
        break;

    case 186: /* file_path  */
#line 149 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2332 "bison_parser.cpp"
        break;

    case 187: /* opt_file_type  */
#line 147 "bison_parser.y"
            { }
#line 2338 "bison_parser.cpp"
        break;

    case 188: /* export_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).export_stmt)); }
#line 2344 "bison_parser.cpp"
        break;

    case 189: /* show_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).show_stmt)); }
#line 2350 "bison_parser.cpp"
        break;

    case 190: /* create_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).create_stmt)); }
#line 2356 "bison_parser.cpp"
        break;

    case 191: /* opt_not_exists  */
#line 147 "bison_parser.y"
            { }
#line 2362 "bison_parser.cpp"
        break;

    case 192: /* column_def_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).column_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).column_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).column_vec));
}
#line 2375 "bison_parser.cpp"
        break;

    case 193: /* column_def  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).column_t)); }
#line 2381 "bison_parser.cpp"
        break;

    case 194: /* column_type  */
#line 147 "bison_parser.y"
            { }
#line 2387 "bison_parser.cpp"
        break;

    case 195: /* opt_column_nullable  */
#line 147 "bison_parser.y"
            { }
#line 2393 "bison_parser.cpp"
        break;

    case 196: /* drop_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).drop_stmt)); }
#line 2399 "bison_parser.cpp"
        break;

    case 197: /* opt_exists  */
#line 147 "bison_parser.y"
            { }
#line 2405 "bison_parser.cpp"
        break;

    case 198: /* delete_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2411 "bison_parser.cpp"
        break;

    case 199: /* truncate_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).delete_stmt)); }
#line 2417 "bison_parser.cpp"
        break;

    case 200: /* insert_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).insert_stmt)); }
#line 2423 "bison_parser.cpp"
        break;

    case 201: /* opt_column_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2436 "bison_parser.cpp"
        break;

    case 202: /* update_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_stmt)); }
#line 2442 "bison_parser.cpp"
        break;

    case 203: /* update_clause_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).update_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).update_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).update_vec));
}
#line 2455 "bison_parser.cpp"
        break;

    case 204: /* update_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).update_t)); }
#line 2461 "bison_parser.cpp"
        break;

    case 205: /* select_statement  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2467 "bison_parser.cpp"
        break;

    case 206: /* select_within_set_operation  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2473 "bison_parser.cpp"
        break;

    case 207: /* select_within_set_operation_no_parentheses  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2479 "bison_parser.cpp"
        break;

    case 208: /* select_with_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2485 "bison_parser.cpp"
        break;

    case 209: /* select_no_paren  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2491 "bison_parser.cpp"
        break;

    case 210: /* set_operator  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2497 "bison_parser.cpp"
        break;

    case 211: /* set_type  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).set_operator_t)); }
#line 2503 "bison_parser.cpp"
        break;

    case 212: /* opt_all  */
#line 147 "bison_parser.y"
            { }
#line 2509 "bison_parser.cpp"
        break;

    case 213: /* select_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).select_stmt)); }
#line 2515 "bison_parser.cpp"
        break;

    case 214: /* opt_distinct  */
#line 147 "bison_parser.y"
            { }
#line 2521 "bison_parser.cpp"
        break;

    case 215: /* select_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2534 "bison_parser.cpp"
        break;

    case 216: /* opt_from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2540 "bison_parser.cpp"
        break;

    case 217: /* from_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2546 "bison_parser.cpp"
        break;

    case 218: /* opt_where  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2552 "bison_parser.cpp"
        break;

    case 219: /* opt_group  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).group_t)); }
#line 2558 "bison_parser.cpp"
        break;

    case 220: /* opt_having  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2564 "bison_parser.cpp"
        break;

    case 221: /* opt_order  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2577 "bison_parser.cpp"
        break;

    case 222: /* order_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).order_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).order_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).order_vec));
}
#line 2590 "bison_parser.cpp"
        break;

    case 223: /* order_desc  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).order)); }
#line 2596 "bison_parser.cpp"
        break;

    case 224: /* opt_order_type  */
#line 147 "bison_parser.y"
            { }
#line 2602 "bison_parser.cpp"
        break;

    case 225: /* opt_top  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2608 "bison_parser.cpp"
        break;

    case 226: /* opt_limit  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).limit)); }
#line 2614 "bison_parser.cpp"
        break;

    case 227: /* expr_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2627 "bison_parser.cpp"
        break;

    case 228: /* opt_literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2640 "bison_parser.cpp"
        break;

    case 229: /* literal_list  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).expr_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).expr_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).expr_vec));
}
#line 2653 "bison_parser.cpp"
        break;

    case 230: /* expr_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2659 "bison_parser.cpp"
        break;

    case 231: /* expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2665 "bison_parser.cpp"
        break;

    case 232: /* operand  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2671 "bison_parser.cpp"
        break;

    case 233: /* scalar_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2677 "bison_parser.cpp"
        break;

    case 234: /* unary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2683 "bison_parser.cpp"
        break;

    case 235: /* binary_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2689 "bison_parser.cpp"
        break;

    case 236: /* logic_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2695 "bison_parser.cpp"
        break;

    case 237: /* in_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2701 "bison_parser.cpp"
        break;

    case 238: /* case_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2707 "bison_parser.cpp"
        break;

    case 239: /* case_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2713 "bison_parser.cpp"
        break;

    case 240: /* exists_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2719 "bison_parser.cpp"
        break;

    case 241: /* comp_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2725 "bison_parser.cpp"
        break;

    case 242: /* function_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2731 "bison_parser.cpp"
        break;

    case 243: /* extract_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2737 "bison_parser.cpp"
        break;

    case 244: /* cast_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2743 "bison_parser.cpp"
        break;

    case 245: /* datetime_field  */
#line 147 "bison_parser.y"
            { }
#line 2749 "bison_parser.cpp"
        break;

    case 246: /* array_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2755 "bison_parser.cpp"
        break;

    case 247: /* array_index  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2761 "bison_parser.cpp"
        break;

    case 248: /* between_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2767 "bison_parser.cpp"
        break;

    case 249: /* column_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2773 "bison_parser.cpp"
        break;

    case 250: /* literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2779 "bison_parser.cpp"
        break;

    case 251: /* string_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2785 "bison_parser.cpp"
        break;

    case 252: /* bool_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2791 "bison_parser.cpp"
        break;

    case 253: /* num_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2797 "bison_parser.cpp"
        break;

    case 254: /* int_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2803 "bison_parser.cpp"
        break;

    case 255: /* null_literal  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2809 "bison_parser.cpp"
        break;

    case 256: /* param_expr  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2815 "bison_parser.cpp"
        break;

    case 257: /* table_ref  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2821 "bison_parser.cpp"
        break;

    case 258: /* table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2827 "bison_parser.cpp"
        break;

    case 259: /* nonjoin_table_ref_atomic  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2833 "bison_parser.cpp"
        break;

    case 260: /* table_ref_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).table_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).table_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).table_vec));
}
#line 2846 "bison_parser.cpp"
        break;

    case 261: /* table_ref_name  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2852 "bison_parser.cpp"
        break;

    case 262: /* table_ref_name_no_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2858 "bison_parser.cpp"
        break;

    case 263: /* table_name  */
#line 148 "bison_parser.y"
            { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2864 "bison_parser.cpp"
        break;

    case 264: /* table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2870 "bison_parser.cpp"
        break;

    case 265: /* opt_table_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2876 "bison_parser.cpp"
        break;

    case 266: /* alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2882 "bison_parser.cpp"
        break;

    case 267: /* opt_alias  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).alias_t)); }
#line 2888 "bison_parser.cpp"
        break;

    case 268: /* opt_with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2894 "bison_parser.cpp"
        break;

    case 269: /* with_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2900 "bison_parser.cpp"
        break;

    case 270: /* with_description_list  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_vec)); }
#line 2906 "bison_parser.cpp"
        break;

    case 271: /* with_description  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).with_description_t)); }
#line 2912 "bison_parser.cpp"
        break;

    case 272: /* join_clause  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).table)); }
#line 2918 "bison_parser.cpp"
        break;

    case 273: /* opt_join_type  */
#line 147 "bison_parser.y"
            { }
#line 2924 "bison_parser.cpp"
        break;

    case 274: /* join_condition  */
#line 158 "bison_parser.y"
            { delete (((*yyvaluep).expr)); }
#line 2930 "bison_parser.cpp"
        break;

    case 276: /* ident_commalist  */
#line 150 "bison_parser.y"
            {
	if ((((*yyvaluep).str_vec)) != nullptr) {
		for (auto ptr : *(((*yyvaluep).str_vec))) {
			delete ptr;
		}
	}
	delete (((*yyvaluep).str_vec));
}
#line 2943 "bison_parser.cpp"
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

#line 3065 "bison_parser.cpp"

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
#line 269 "bison_parser.y"
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
#line 3293 "bison_parser.cpp"
    break;

  case 3:
#line 290 "bison_parser.y"
                          {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyval.stmt_vec) = new std::vector<SQLStatement*>();
			(yyval.stmt_vec)->push_back((yyvsp[0].statement));
		}
#line 3304 "bison_parser.cpp"
    break;

  case 4:
#line 296 "bison_parser.y"
                                             {
			(yyvsp[0].statement)->stringLength = yylloc.string_length;
			yylloc.string_length = 0;
			(yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
			(yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
		}
#line 3315 "bison_parser.cpp"
    break;

  case 5:
#line 305 "bison_parser.y"
                                            {
			(yyval.statement) = (yyvsp[-1].prep_stmt);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3324 "bison_parser.cpp"
    break;

  case 6:
#line 309 "bison_parser.y"
                                               {
			(yyval.statement) = (yyvsp[-1].statement);
			(yyval.statement)->hints = (yyvsp[0].expr_vec);
		}
#line 3333 "bison_parser.cpp"
    break;

  case 7:
#line 313 "bison_parser.y"
                               {
			(yyval.statement) = (yyvsp[0].show_stmt);
		}
#line 3341 "bison_parser.cpp"
    break;

  case 8:
#line 316 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].import_stmt);
		 }
#line 3349 "bison_parser.cpp"
    break;

  case 9:
#line 319 "bison_parser.y"
                                 {
			(yyval.statement) = (yyvsp[0].export_stmt);
		 }
#line 3357 "bison_parser.cpp"
    break;

  case 10:
#line 326 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3363 "bison_parser.cpp"
    break;

  case 11:
#line 327 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3369 "bison_parser.cpp"
    break;

  case 12:
#line 328 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3375 "bison_parser.cpp"
    break;

  case 13:
#line 329 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3381 "bison_parser.cpp"
    break;

  case 14:
#line 330 "bison_parser.y"
                                   { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3387 "bison_parser.cpp"
    break;

  case 15:
#line 331 "bison_parser.y"
                                 { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3393 "bison_parser.cpp"
    break;

  case 16:
#line 332 "bison_parser.y"
                               { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3399 "bison_parser.cpp"
    break;

  case 17:
#line 333 "bison_parser.y"
                                  { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3405 "bison_parser.cpp"
    break;

  case 18:
#line 334 "bison_parser.y"
                                      { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3411 "bison_parser.cpp"
    break;

  case 19:
#line 343 "bison_parser.y"
                                { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3417 "bison_parser.cpp"
    break;

  case 20:
#line 344 "bison_parser.y"
                { (yyval.expr_vec) = nullptr; }
#line 3423 "bison_parser.cpp"
    break;

  case 21:
#line 349 "bison_parser.y"
               { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 3429 "bison_parser.cpp"
    break;

  case 22:
#line 350 "bison_parser.y"
                             { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 3435 "bison_parser.cpp"
    break;

  case 23:
#line 354 "bison_parser.y"
                           {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[0].sval);
		}
#line 3444 "bison_parser.cpp"
    break;

  case 24:
#line 358 "bison_parser.y"
                                          {
			(yyval.expr) = Expr::make(kExprHint);
			(yyval.expr)->name = (yyvsp[-3].sval);
			(yyval.expr)->exprList = (yyvsp[-1].expr_vec);
		}
#line 3454 "bison_parser.cpp"
    break;

  case 25:
#line 370 "bison_parser.y"
                                  {
            (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction);
        }
#line 3462 "bison_parser.cpp"
    break;

  case 26:
#line 373 "bison_parser.y"
                                       {
            (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction);
        }
#line 3470 "bison_parser.cpp"
    break;

  case 27:
#line 376 "bison_parser.y"
                                     {
            (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction);
        }
#line 3478 "bison_parser.cpp"
    break;

  case 30:
#line 390 "bison_parser.y"
                                                             {
			(yyval.prep_stmt) = new PrepareStatement();
			(yyval.prep_stmt)->name = (yyvsp[-2].sval);
			(yyval.prep_stmt)->query = (yyvsp[0].sval);
		}
#line 3488 "bison_parser.cpp"
    break;

  case 32:
#line 400 "bison_parser.y"
                                   {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[0].sval);
		}
#line 3497 "bison_parser.cpp"
    break;

  case 33:
#line 404 "bison_parser.y"
                                                            {
			(yyval.exec_stmt) = new ExecuteStatement();
			(yyval.exec_stmt)->name = (yyvsp[-3].sval);
			(yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
		}
#line 3507 "bison_parser.cpp"
    break;

  case 34:
#line 418 "bison_parser.y"
                                                                     {
			(yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-2].sval);
			(yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3518 "bison_parser.cpp"
    break;

  case 35:
#line 424 "bison_parser.y"
                                                             {
			(yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
			(yyval.import_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3529 "bison_parser.cpp"
    break;

  case 36:
#line 433 "bison_parser.y"
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
#line 3548 "bison_parser.cpp"
    break;

  case 37:
#line 450 "bison_parser.y"
                               { (yyval.sval) = strdup((yyvsp[0].expr)->name); delete (yyvsp[0].expr); }
#line 3554 "bison_parser.cpp"
    break;

  case 38:
#line 454 "bison_parser.y"
                                      {
			(yyval.import_type_t) = (yyvsp[0].import_type_t);
		}
#line 3562 "bison_parser.cpp"
    break;

  case 39:
#line 457 "bison_parser.y"
                             { (yyval.import_type_t) = kImportAuto; }
#line 3568 "bison_parser.cpp"
    break;

  case 40:
#line 466 "bison_parser.y"
                                                           {
			(yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
			(yyval.export_stmt)->filePath = (yyvsp[-1].sval);
			(yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
		}
#line 3579 "bison_parser.cpp"
    break;

  case 41:
#line 480 "bison_parser.y"
                            {
			(yyval.show_stmt) = new ShowStatement(kShowTables);
		}
#line 3587 "bison_parser.cpp"
    break;

  case 42:
#line 483 "bison_parser.y"
                                        {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3597 "bison_parser.cpp"
    break;

  case 43:
#line 488 "bison_parser.y"
                                    {
			(yyval.show_stmt) = new ShowStatement(kShowColumns);
			(yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.show_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3607 "bison_parser.cpp"
    break;

  case 44:
#line 502 "bison_parser.y"
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
#line 3625 "bison_parser.cpp"
    break;

  case 45:
#line 515 "bison_parser.y"
                                                                                    {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->columns = (yyvsp[-1].column_vec);
		}
#line 3637 "bison_parser.cpp"
    break;

  case 46:
#line 522 "bison_parser.y"
                                                                           {
			(yyval.create_stmt) = new CreateStatement(kCreateTable);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
			(yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3649 "bison_parser.cpp"
    break;

  case 47:
#line 529 "bison_parser.y"
                                                                                          {
			(yyval.create_stmt) = new CreateStatement(kCreateView);
			(yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
			(yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
			(yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
			(yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
			(yyval.create_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3662 "bison_parser.cpp"
    break;

  case 48:
#line 540 "bison_parser.y"
                              { (yyval.bval) = true; }
#line 3668 "bison_parser.cpp"
    break;

  case 49:
#line 541 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3674 "bison_parser.cpp"
    break;

  case 50:
#line 545 "bison_parser.y"
                           { (yyval.column_vec) = new std::vector<ColumnDefinition*>(); (yyval.column_vec)->push_back((yyvsp[0].column_t)); }
#line 3680 "bison_parser.cpp"
    break;

  case 51:
#line 546 "bison_parser.y"
                                                    { (yyvsp[-2].column_vec)->push_back((yyvsp[0].column_t)); (yyval.column_vec) = (yyvsp[-2].column_vec); }
#line 3686 "bison_parser.cpp"
    break;

  case 52:
#line 550 "bison_parser.y"
                                                           {
			(yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].bval));
		}
#line 3694 "bison_parser.cpp"
    break;

  case 53:
#line 556 "bison_parser.y"
                        { (yyval.column_type_t) = ColumnType{DataType::INT, 8}; }
#line 3700 "bison_parser.cpp"
    break;

  case 54:
#line 557 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::INT, 16}; }
#line 3706 "bison_parser.cpp"
    break;

  case 55:
#line 558 "bison_parser.y"
                    { (yyval.column_type_t) = ColumnType{DataType::INT, 32}; }
#line 3712 "bison_parser.cpp"
    break;

  case 56:
#line 559 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::INT, 64}; }
#line 3718 "bison_parser.cpp"
    break;

  case 57:
#line 560 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3724 "bison_parser.cpp"
    break;

  case 58:
#line 561 "bison_parser.y"
                      { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3730 "bison_parser.cpp"
    break;

  case 59:
#line 562 "bison_parser.y"
                       { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3736 "bison_parser.cpp"
    break;

  case 60:
#line 563 "bison_parser.y"
                                       { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3742 "bison_parser.cpp"
    break;

  case 61:
#line 564 "bison_parser.y"
                                    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3748 "bison_parser.cpp"
    break;

  case 62:
#line 565 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3754 "bison_parser.cpp"
    break;

  case 63:
#line 566 "bison_parser.y"
                         { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3760 "bison_parser.cpp"
    break;

  case 64:
#line 567 "bison_parser.y"
                     { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3766 "bison_parser.cpp"
    break;

  case 65:
#line 571 "bison_parser.y"
                     { (yyval.bval) = true; }
#line 3772 "bison_parser.cpp"
    break;

  case 66:
#line 572 "bison_parser.y"
                         { (yyval.bval) = false; }
#line 3778 "bison_parser.cpp"
    break;

  case 67:
#line 573 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3784 "bison_parser.cpp"
    break;

  case 68:
#line 583 "bison_parser.y"
                                                 {
			(yyval.drop_stmt) = new DropStatement(kDropTable);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3795 "bison_parser.cpp"
    break;

  case 69:
#line 589 "bison_parser.y"
                                                {
			(yyval.drop_stmt) = new DropStatement(kDropView);
			(yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
			(yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
		}
#line 3806 "bison_parser.cpp"
    break;

  case 70:
#line 595 "bison_parser.y"
                                              {
			(yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
			(yyval.drop_stmt)->ifExists = false;
			(yyval.drop_stmt)->name = (yyvsp[0].sval);
		}
#line 3816 "bison_parser.cpp"
    break;

  case 71:
#line 603 "bison_parser.y"
                            { (yyval.bval) = true; }
#line 3822 "bison_parser.cpp"
    break;

  case 72:
#line 604 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 3828 "bison_parser.cpp"
    break;

  case 73:
#line 613 "bison_parser.y"
                                                 {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
			(yyval.delete_stmt)->expr = (yyvsp[0].expr);
		}
#line 3839 "bison_parser.cpp"
    break;

  case 74:
#line 622 "bison_parser.y"
                                    {
			(yyval.delete_stmt) = new DeleteStatement();
			(yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
			(yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
		}
#line 3849 "bison_parser.cpp"
    break;

  case 75:
#line 635 "bison_parser.y"
                                                                                   {
			(yyval.insert_stmt) = new InsertStatement(kInsertValues);
			(yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
			(yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
		}
#line 3861 "bison_parser.cpp"
    break;

  case 76:
#line 642 "bison_parser.y"
                                                                       {
			(yyval.insert_stmt) = new InsertStatement(kInsertSelect);
			(yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
			(yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
			(yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
			(yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
		}
#line 3873 "bison_parser.cpp"
    break;

  case 77:
#line 653 "bison_parser.y"
                                        { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 3879 "bison_parser.cpp"
    break;

  case 78:
#line 654 "bison_parser.y"
                            { (yyval.str_vec) = nullptr; }
#line 3885 "bison_parser.cpp"
    break;

  case 79:
#line 664 "bison_parser.y"
                                                                             {
		(yyval.update_stmt) = new UpdateStatement();
		(yyval.update_stmt)->table = (yyvsp[-3].table);
		(yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
		(yyval.update_stmt)->where = (yyvsp[0].expr);
	}
#line 3896 "bison_parser.cpp"
    break;

  case 80:
#line 673 "bison_parser.y"
                              { (yyval.update_vec) = new std::vector<UpdateClause*>(); (yyval.update_vec)->push_back((yyvsp[0].update_t)); }
#line 3902 "bison_parser.cpp"
    break;

  case 81:
#line 674 "bison_parser.y"
                                                          { (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t)); (yyval.update_vec) = (yyvsp[-2].update_vec); }
#line 3908 "bison_parser.cpp"
    break;

  case 82:
#line 678 "bison_parser.y"
                                    {
			(yyval.update_t) = new UpdateClause();
			(yyval.update_t)->column = (yyvsp[-2].sval);
			(yyval.update_t)->value = (yyvsp[0].expr);
		}
#line 3918 "bison_parser.cpp"
    break;

  case 83:
#line 690 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3927 "bison_parser.cpp"
    break;

  case 84:
#line 694 "bison_parser.y"
                                                {
			(yyval.select_stmt) = (yyvsp[0].select_stmt);
			(yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
		}
#line 3936 "bison_parser.cpp"
    break;

  case 85:
#line 698 "bison_parser.y"
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
#line 3952 "bison_parser.cpp"
    break;

  case 88:
#line 716 "bison_parser.y"
                              { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 3958 "bison_parser.cpp"
    break;

  case 89:
#line 717 "bison_parser.y"
                                                                       {
		(yyval.select_stmt) = (yyvsp[-2].select_stmt);
		if ((yyval.select_stmt)->setOperations == nullptr) {
			(yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
		}
		(yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
		(yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
	}
#line 3971 "bison_parser.cpp"
    break;

  case 90:
#line 728 "bison_parser.y"
                                        { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3977 "bison_parser.cpp"
    break;

  case 91:
#line 729 "bison_parser.y"
                                          { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 3983 "bison_parser.cpp"
    break;

  case 92:
#line 733 "bison_parser.y"
                                                  {
			(yyval.select_stmt) = (yyvsp[-2].select_stmt);
			(yyval.select_stmt)->order = (yyvsp[-1].order_vec);

			// Limit could have been set by TOP.
			if ((yyvsp[0].limit) != nullptr) {
				delete (yyval.select_stmt)->limit;
				(yyval.select_stmt)->limit = (yyvsp[0].limit);
			}
		}
#line 3998 "bison_parser.cpp"
    break;

  case 93:
#line 743 "bison_parser.y"
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
#line 4013 "bison_parser.cpp"
    break;

  case 94:
#line 756 "bison_parser.y"
                                 {
		(yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
		(yyval.set_operator_t)->isAll = (yyvsp[0].bval);
		}
#line 4022 "bison_parser.cpp"
    break;

  case 95:
#line 763 "bison_parser.y"
                      {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetUnion;
		}
#line 4031 "bison_parser.cpp"
    break;

  case 96:
#line 767 "bison_parser.y"
                          {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetIntersect;
	}
#line 4040 "bison_parser.cpp"
    break;

  case 97:
#line 771 "bison_parser.y"
                       {
		(yyval.set_operator_t) = new SetOperation();
		(yyval.set_operator_t)->setType = SetType::kSetExcept;
	}
#line 4049 "bison_parser.cpp"
    break;

  case 98:
#line 778 "bison_parser.y"
                    {
			(yyval.bval) = true;
		}
#line 4057 "bison_parser.cpp"
    break;

  case 99:
#line 781 "bison_parser.y"
                            {
		(yyval.bval) = false;
	}
#line 4065 "bison_parser.cpp"
    break;

  case 100:
#line 787 "bison_parser.y"
                                                                                            {
			(yyval.select_stmt) = new SelectStatement();
			(yyval.select_stmt)->limit = (yyvsp[-5].limit);
			(yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
			(yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
			(yyval.select_stmt)->fromTable = (yyvsp[-2].table);
			(yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
			(yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
		}
#line 4079 "bison_parser.cpp"
    break;

  case 101:
#line 799 "bison_parser.y"
                         { (yyval.bval) = true; }
#line 4085 "bison_parser.cpp"
    break;

  case 102:
#line 800 "bison_parser.y"
                            { (yyval.bval) = false; }
#line 4091 "bison_parser.cpp"
    break;

  case 104:
#line 808 "bison_parser.y"
                     { (yyval.table) = (yyvsp[0].table); }
#line 4097 "bison_parser.cpp"
    break;

  case 105:
#line 809 "bison_parser.y"
                     { (yyval.table) = nullptr; }
#line 4103 "bison_parser.cpp"
    break;

  case 106:
#line 813 "bison_parser.y"
                               { (yyval.table) = (yyvsp[0].table); }
#line 4109 "bison_parser.cpp"
    break;

  case 107:
#line 818 "bison_parser.y"
                           { (yyval.expr) = (yyvsp[0].expr); }
#line 4115 "bison_parser.cpp"
    break;

  case 108:
#line 819 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4121 "bison_parser.cpp"
    break;

  case 109:
#line 823 "bison_parser.y"
                                              {
			(yyval.group_t) = new GroupByDescription();
			(yyval.group_t)->columns = (yyvsp[-1].expr_vec);
			(yyval.group_t)->having = (yyvsp[0].expr);
		}
#line 4131 "bison_parser.cpp"
    break;

  case 110:
#line 828 "bison_parser.y"
                            { (yyval.group_t) = nullptr; }
#line 4137 "bison_parser.cpp"
    break;

  case 111:
#line 832 "bison_parser.y"
                            { (yyval.expr) = (yyvsp[0].expr); }
#line 4143 "bison_parser.cpp"
    break;

  case 112:
#line 833 "bison_parser.y"
                            { (yyval.expr) = nullptr; }
#line 4149 "bison_parser.cpp"
    break;

  case 113:
#line 837 "bison_parser.y"
                                    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4155 "bison_parser.cpp"
    break;

  case 114:
#line 838 "bison_parser.y"
                            { (yyval.order_vec) = nullptr; }
#line 4161 "bison_parser.cpp"
    break;

  case 115:
#line 842 "bison_parser.y"
                           { (yyval.order_vec) = new std::vector<OrderDescription*>(); (yyval.order_vec)->push_back((yyvsp[0].order)); }
#line 4167 "bison_parser.cpp"
    break;

  case 116:
#line 843 "bison_parser.y"
                                          { (yyvsp[-2].order_vec)->push_back((yyvsp[0].order)); (yyval.order_vec) = (yyvsp[-2].order_vec); }
#line 4173 "bison_parser.cpp"
    break;

  case 117:
#line 847 "bison_parser.y"
                                    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4179 "bison_parser.cpp"
    break;

  case 118:
#line 851 "bison_parser.y"
                    { (yyval.order_type) = kOrderAsc; }
#line 4185 "bison_parser.cpp"
    break;

  case 119:
#line 852 "bison_parser.y"
                     { (yyval.order_type) = kOrderDesc; }
#line 4191 "bison_parser.cpp"
    break;

  case 120:
#line 853 "bison_parser.y"
                            { (yyval.order_type) = kOrderAsc; }
#line 4197 "bison_parser.cpp"
    break;

  case 121:
#line 859 "bison_parser.y"
                                { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4203 "bison_parser.cpp"
    break;

  case 122:
#line 860 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4209 "bison_parser.cpp"
    break;

  case 123:
#line 864 "bison_parser.y"
                           { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4215 "bison_parser.cpp"
    break;

  case 124:
#line 865 "bison_parser.y"
                            { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4221 "bison_parser.cpp"
    break;

  case 125:
#line 866 "bison_parser.y"
                                       { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4227 "bison_parser.cpp"
    break;

  case 126:
#line 867 "bison_parser.y"
                          { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4233 "bison_parser.cpp"
    break;

  case 127:
#line 868 "bison_parser.y"
                                      { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4239 "bison_parser.cpp"
    break;

  case 128:
#line 869 "bison_parser.y"
                            { (yyval.limit) = nullptr; }
#line 4245 "bison_parser.cpp"
    break;

  case 129:
#line 876 "bison_parser.y"
                           { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4251 "bison_parser.cpp"
    break;

  case 130:
#line 877 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4257 "bison_parser.cpp"
    break;

  case 131:
#line 881 "bison_parser.y"
                             { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4263 "bison_parser.cpp"
    break;

  case 132:
#line 882 "bison_parser.y"
                            { (yyval.expr_vec) = nullptr; }
#line 4269 "bison_parser.cpp"
    break;

  case 133:
#line 886 "bison_parser.y"
                        { (yyval.expr_vec) = new std::vector<Expr*>(); (yyval.expr_vec)->push_back((yyvsp[0].expr)); }
#line 4275 "bison_parser.cpp"
    break;

  case 134:
#line 887 "bison_parser.y"
                                         { (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr)); (yyval.expr_vec) = (yyvsp[-2].expr_vec); }
#line 4281 "bison_parser.cpp"
    break;

  case 135:
#line 891 "bison_parser.y"
                               {
			(yyval.expr) = (yyvsp[-1].expr);
			if ((yyvsp[0].alias_t)) {
				(yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
				delete (yyvsp[0].alias_t);
			}
		}
#line 4293 "bison_parser.cpp"
    break;

  case 141:
#line 909 "bison_parser.y"
                             { (yyval.expr) = (yyvsp[-1].expr); }
#line 4299 "bison_parser.cpp"
    break;

  case 151:
#line 919 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt)); }
#line 4305 "bison_parser.cpp"
    break;

  case 154:
#line 928 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4311 "bison_parser.cpp"
    break;

  case 155:
#line 929 "bison_parser.y"
                            { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4317 "bison_parser.cpp"
    break;

  case 156:
#line 930 "bison_parser.y"
                               { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4323 "bison_parser.cpp"
    break;

  case 157:
#line 931 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4329 "bison_parser.cpp"
    break;

  case 158:
#line 932 "bison_parser.y"
                                    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4335 "bison_parser.cpp"
    break;

  case 160:
#line 937 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4341 "bison_parser.cpp"
    break;

  case 161:
#line 938 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4347 "bison_parser.cpp"
    break;

  case 162:
#line 939 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4353 "bison_parser.cpp"
    break;

  case 163:
#line 940 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4359 "bison_parser.cpp"
    break;

  case 164:
#line 941 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4365 "bison_parser.cpp"
    break;

  case 165:
#line 942 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4371 "bison_parser.cpp"
    break;

  case 166:
#line 943 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4377 "bison_parser.cpp"
    break;

  case 167:
#line 944 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4383 "bison_parser.cpp"
    break;

  case 168:
#line 945 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4389 "bison_parser.cpp"
    break;

  case 169:
#line 946 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4395 "bison_parser.cpp"
    break;

  case 170:
#line 950 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4401 "bison_parser.cpp"
    break;

  case 171:
#line 951 "bison_parser.y"
                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4407 "bison_parser.cpp"
    break;

  case 172:
#line 955 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4413 "bison_parser.cpp"
    break;

  case 173:
#line 956 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4419 "bison_parser.cpp"
    break;

  case 174:
#line 957 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4425 "bison_parser.cpp"
    break;

  case 175:
#line 958 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4431 "bison_parser.cpp"
    break;

  case 176:
#line 964 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4437 "bison_parser.cpp"
    break;

  case 177:
#line 965 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4443 "bison_parser.cpp"
    break;

  case 178:
#line 966 "bison_parser.y"
                                                                { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4449 "bison_parser.cpp"
    break;

  case 179:
#line 967 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4455 "bison_parser.cpp"
    break;

  case 180:
#line 971 "bison_parser.y"
                                                 { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4461 "bison_parser.cpp"
    break;

  case 181:
#line 972 "bison_parser.y"
                                                 { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4467 "bison_parser.cpp"
    break;

  case 182:
#line 976 "bison_parser.y"
                                               { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4473 "bison_parser.cpp"
    break;

  case 183:
#line 977 "bison_parser.y"
                                                   { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4479 "bison_parser.cpp"
    break;

  case 184:
#line 981 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4485 "bison_parser.cpp"
    break;

  case 185:
#line 982 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4491 "bison_parser.cpp"
    break;

  case 186:
#line 983 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4497 "bison_parser.cpp"
    break;

  case 187:
#line 984 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4503 "bison_parser.cpp"
    break;

  case 188:
#line 985 "bison_parser.y"
                                                        { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4509 "bison_parser.cpp"
    break;

  case 189:
#line 986 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4515 "bison_parser.cpp"
    break;

  case 190:
#line 987 "bison_parser.y"
                                                { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4521 "bison_parser.cpp"
    break;

  case 191:
#line 991 "bison_parser.y"
                                  { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4527 "bison_parser.cpp"
    break;

  case 192:
#line 992 "bison_parser.y"
                                                         { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4533 "bison_parser.cpp"
    break;

  case 193:
#line 996 "bison_parser.y"
                                                     { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4539 "bison_parser.cpp"
    break;

  case 194:
#line 1000 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4545 "bison_parser.cpp"
    break;

  case 195:
#line 1004 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeSecond; }
#line 4551 "bison_parser.cpp"
    break;

  case 196:
#line 1005 "bison_parser.y"
               { (yyval.datetime_field) = kDatetimeMinute; }
#line 4557 "bison_parser.cpp"
    break;

  case 197:
#line 1006 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeHour; }
#line 4563 "bison_parser.cpp"
    break;

  case 198:
#line 1007 "bison_parser.y"
            { (yyval.datetime_field) = kDatetimeDay; }
#line 4569 "bison_parser.cpp"
    break;

  case 199:
#line 1008 "bison_parser.y"
              { (yyval.datetime_field) = kDatetimeMonth; }
#line 4575 "bison_parser.cpp"
    break;

  case 200:
#line 1009 "bison_parser.y"
             { (yyval.datetime_field) = kDatetimeYear; }
#line 4581 "bison_parser.cpp"
    break;

  case 201:
#line 1013 "bison_parser.y"
                                        { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4587 "bison_parser.cpp"
    break;

  case 202:
#line 1017 "bison_parser.y"
                                            { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4593 "bison_parser.cpp"
    break;

  case 203:
#line 1021 "bison_parser.y"
                                                    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4599 "bison_parser.cpp"
    break;

  case 204:
#line 1025 "bison_parser.y"
                           { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4605 "bison_parser.cpp"
    break;

  case 205:
#line 1026 "bison_parser.y"
                                          { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4611 "bison_parser.cpp"
    break;

  case 206:
#line 1027 "bison_parser.y"
                    { (yyval.expr) = Expr::makeStar(); }
#line 4617 "bison_parser.cpp"
    break;

  case 207:
#line 1028 "bison_parser.y"
                                   { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4623 "bison_parser.cpp"
    break;

  case 213:
#line 1040 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4629 "bison_parser.cpp"
    break;

  case 214:
#line 1044 "bison_parser.y"
                     { (yyval.expr) = Expr::makeLiteral(true); }
#line 4635 "bison_parser.cpp"
    break;

  case 215:
#line 1045 "bison_parser.y"
                      { (yyval.expr) = Expr::makeLiteral(false); }
#line 4641 "bison_parser.cpp"
    break;

  case 216:
#line 1049 "bison_parser.y"
                         { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4647 "bison_parser.cpp"
    break;

  case 218:
#line 1054 "bison_parser.y"
                       { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4653 "bison_parser.cpp"
    break;

  case 219:
#line 1058 "bison_parser.y"
                     { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4659 "bison_parser.cpp"
    break;

  case 220:
#line 1062 "bison_parser.y"
                    {
			(yyval.expr) = Expr::makeParameter(yylloc.total_column);
			(yyval.expr)->ival2 = yyloc.param_list.size();
			yyloc.param_list.push_back((yyval.expr));
		}
#line 4669 "bison_parser.cpp"
    break;

  case 222:
#line 1075 "bison_parser.y"
                                                         {
			(yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
			auto tbl = new TableRef(kTableCrossProduct);
			tbl->list = (yyvsp[-2].table_vec);
			(yyval.table) = tbl;
		}
#line 4680 "bison_parser.cpp"
    break;

  case 226:
#line 1091 "bison_parser.y"
                                                         {
			auto tbl = new TableRef(kTableSelect);
			tbl->select = (yyvsp[-2].select_stmt);
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4691 "bison_parser.cpp"
    break;

  case 227:
#line 1100 "bison_parser.y"
                                 { (yyval.table_vec) = new std::vector<TableRef*>(); (yyval.table_vec)->push_back((yyvsp[0].table)); }
#line 4697 "bison_parser.cpp"
    break;

  case 228:
#line 1101 "bison_parser.y"
                                                         { (yyvsp[-2].table_vec)->push_back((yyvsp[0].table)); (yyval.table_vec) = (yyvsp[-2].table_vec); }
#line 4703 "bison_parser.cpp"
    break;

  case 229:
#line 1106 "bison_parser.y"
                                           {
			auto tbl = new TableRef(kTableName);
			tbl->schema = (yyvsp[-1].table_name).schema;
			tbl->name = (yyvsp[-1].table_name).name;
			tbl->alias = (yyvsp[0].alias_t);
			(yyval.table) = tbl;
		}
#line 4715 "bison_parser.cpp"
    break;

  case 230:
#line 1117 "bison_parser.y"
                           {
			(yyval.table) = new TableRef(kTableName);
			(yyval.table)->schema = (yyvsp[0].table_name).schema;
			(yyval.table)->name = (yyvsp[0].table_name).name;
		}
#line 4725 "bison_parser.cpp"
    break;

  case 231:
#line 1126 "bison_parser.y"
                                          { (yyval.table_name).schema = nullptr; (yyval.table_name).name = (yyvsp[0].sval);}
#line 4731 "bison_parser.cpp"
    break;

  case 232:
#line 1127 "bison_parser.y"
                                          { (yyval.table_name).schema = (yyvsp[-2].sval); (yyval.table_name).name = (yyvsp[0].sval); }
#line 4737 "bison_parser.cpp"
    break;

  case 234:
#line 1133 "bison_parser.y"
                                                      { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 4743 "bison_parser.cpp"
    break;

  case 236:
#line 1139 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4749 "bison_parser.cpp"
    break;

  case 237:
#line 1144 "bison_parser.y"
                              { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4755 "bison_parser.cpp"
    break;

  case 238:
#line 1145 "bison_parser.y"
                           { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 4761 "bison_parser.cpp"
    break;

  case 240:
#line 1151 "bison_parser.y"
                            { (yyval.alias_t) = nullptr; }
#line 4767 "bison_parser.cpp"
    break;

  case 242:
#line 1161 "bison_parser.y"
                            { (yyval.with_description_vec) = nullptr; }
#line 4773 "bison_parser.cpp"
    break;

  case 243:
#line 1165 "bison_parser.y"
                                           { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 4779 "bison_parser.cpp"
    break;

  case 244:
#line 1169 "bison_parser.y"
                                 {
			(yyval.with_description_vec) = new std::vector<WithDescription*>();
			(yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
		}
#line 4788 "bison_parser.cpp"
    break;

  case 245:
#line 1173 "bison_parser.y"
                                                           {
			(yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
                        (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
		}
#line 4797 "bison_parser.cpp"
    break;

  case 246:
#line 1180 "bison_parser.y"
                                                {
			(yyval.with_description_t) = new WithDescription();
			(yyval.with_description_t)->alias = (yyvsp[-2].sval);
			(yyval.with_description_t)->select = (yyvsp[0].select_stmt);
		}
#line 4807 "bison_parser.cpp"
    break;

  case 247:
#line 1194 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = kJoinNatural;
			(yyval.table)->join->left = (yyvsp[-3].table);
			(yyval.table)->join->right = (yyvsp[0].table);
		}
#line 4819 "bison_parser.cpp"
    break;

  case 248:
#line 1202 "bison_parser.y"
                {
			(yyval.table) = new TableRef(kTableJoin);
			(yyval.table)->join = new JoinDefinition();
			(yyval.table)->join->type = (JoinType) (yyvsp[-4].uval);
			(yyval.table)->join->left = (yyvsp[-5].table);
			(yyval.table)->join->right = (yyvsp[-2].table);
			(yyval.table)->join->condition = (yyvsp[0].expr);
		}
#line 4832 "bison_parser.cpp"
    break;

  case 249:
#line 1212 "bison_parser.y"
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
#line 4852 "bison_parser.cpp"
    break;

  case 250:
#line 1230 "bison_parser.y"
                                { (yyval.uval) = kJoinInner; }
#line 4858 "bison_parser.cpp"
    break;

  case 251:
#line 1231 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4864 "bison_parser.cpp"
    break;

  case 252:
#line 1232 "bison_parser.y"
                                { (yyval.uval) = kJoinLeft; }
#line 4870 "bison_parser.cpp"
    break;

  case 253:
#line 1233 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4876 "bison_parser.cpp"
    break;

  case 254:
#line 1234 "bison_parser.y"
                                { (yyval.uval) = kJoinRight; }
#line 4882 "bison_parser.cpp"
    break;

  case 255:
#line 1235 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4888 "bison_parser.cpp"
    break;

  case 256:
#line 1236 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4894 "bison_parser.cpp"
    break;

  case 257:
#line 1237 "bison_parser.y"
                                { (yyval.uval) = kJoinFull; }
#line 4900 "bison_parser.cpp"
    break;

  case 258:
#line 1238 "bison_parser.y"
                                { (yyval.uval) = kJoinCross; }
#line 4906 "bison_parser.cpp"
    break;

  case 259:
#line 1239 "bison_parser.y"
                                        { (yyval.uval) = kJoinInner; }
#line 4912 "bison_parser.cpp"
    break;

  case 263:
#line 1259 "bison_parser.y"
                           { (yyval.str_vec) = new std::vector<char*>(); (yyval.str_vec)->push_back((yyvsp[0].sval)); }
#line 4918 "bison_parser.cpp"
    break;

  case 264:
#line 1260 "bison_parser.y"
                                               { (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval)); (yyval.str_vec) = (yyvsp[-2].str_vec); }
#line 4924 "bison_parser.cpp"
    break;


#line 4928 "bison_parser.cpp"

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

#line 1263 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
