#ifndef __IMPORT_STATEMENT_H__
#define __IMPORT_STATEMENT_H__

#include "Statement.h"

namespace hsql {


typedef enum {
	kImportCSV,
	kImportTbl, // Hyrise file format
	// HANA supports a second file type CONTROL FILE
	// we don't need that so far, but we leave the option
	// to expand it here
} ImportFileType;


/**
 * @struct ImportStatement
 */
struct ImportStatement : Statement {
	ImportStatement() : Statement(kStmtSelect) {};

	ImportFileType file_type;
	const char* file_path;
	const char* table_name;


};



} // namespace hsql


#endif