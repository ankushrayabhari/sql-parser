#ifndef SQLPARSER_COLUMN_TYPE_H
#define SQLPARSER_COLUMN_TYPE_H

#include <ostream>
#include <string>

namespace hsql {
  enum class DataType {
    UNKNOWN,
    INT,
    FLOAT,
    DOUBLE,
    CHAR,
    VARCHAR,
    TEXT,
    DATETIME,
    DATE,
    TIMESTAMP,
    TIME,
    DECIMAL,
    BOOLEAN
  };

  // Represents the type of a column, e.g., FLOAT or VARCHAR(10)
  struct ColumnType {
    ColumnType(DataType data_type = DataType::UNKNOWN, std::string length = "", std::string scale = "");
    DataType data_type;
    std::string length;  // Used for, e.g., VARCHAR(10)
    std::string scale; // Used for DECIMAL(length, scale)
  };

  bool operator==(const ColumnType& lhs, const ColumnType& rhs);
  bool operator!=(const ColumnType& lhs, const ColumnType& rhs);
  std::ostream& operator<<(std::ostream&, const ColumnType&);

} // namespace hsql

#endif
