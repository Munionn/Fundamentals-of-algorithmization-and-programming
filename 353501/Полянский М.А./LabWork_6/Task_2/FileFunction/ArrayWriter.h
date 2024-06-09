#ifndef C7BC9EB8_046C_4089_9071_0EC3B33B9AD8
#define C7BC9EB8_046C_4089_9071_0EC3B33B9AD8

#include "Service.h"
#include <qtmetamacros.h>
class ArrayWrite : public Service {
  Q_OBJECT
public:
  using Service::Service;
  ~ArrayWrite() override;

  static const char DELIM = '/';
  const QString FNAME = FILENAME + "_0.txt";

  int size = 0;
  double *array = nullptr;

protected:
  void initInput() override;
  void initOutput() override;
  QString getInstructions() override;


protected:
  void onEnterInput();

protected slots:
  void processOutput() override;
};

#endif /* C7BC9EB8_046C_4089_9071_0EC3B33B9AD8 */
