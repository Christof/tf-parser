#ifndef SRC_TRANSFER_FUNCTION_PARSER_H_

#define SRC_TRANSFER_FUNCTION_PARSER_H_

#include <QGradient>
#include <QString>
#include <QXmlDefaultHandler>

/**
 * \brief 
 *
 * 
 */
class QGradientContentHandler;

class TransferFunctionParser
{
 public:
  TransferFunctionParser(QString path);

  QGradient *parse();

 private:
  QXmlSimpleReader *xmlReader;
  QXmlInputSource *source;
  QGradientContentHandler *handler;
};

#endif  // SRC_TRANSFER_FUNCTION_PARSER_H_
