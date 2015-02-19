#ifndef REAL_H
#define REAL_H
#include "NUMBER.h"
class REAL:public NUMBER{
  private:
    double val;
  public:
    virtual ~REAL(){};
    REAL();
    REAL(double value);
    double value();
    NUMBER* Convert(NUMBER& src);
	void Inc();
	NUMBER* Sub(NUMBER& what);
        REAL Sub(REAL what);
	void Print();
};
#endif //REAL_H
