#ifndef SRC_TRANSFER_FUNCTION_PARSER_H_

#define SRC_TRANSFER_FUNCTION_PARSER_H_

#include <QGradient>
#include <QString>

/**
 * \brief 
 *
 * 
 */
class TransferFunctionParser
{
public:
  TransferFunctionParser() = default;

  static QGradient parse(QString path);

private:
  /* data */
};

#endif  // SRC_TRANSFER_FUNCTION_PARSER_H_
