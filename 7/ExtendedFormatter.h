#ifndef EXTENDEDFORMATTER_H
#define EXTENDEDFORMATTER_H
#include "SimpleFormatter.h"
//!Шаблон класса форматирования с учетом различных значений точности вывода.
template <typename T>
class ExtendedFormatter:public SimpleFormatter<T>{
    using SimpleFormatter<T>::val_;//!<значение для форматирования;
    using SimpleFormatter<T>::params_;//!<параметры форматирования;
  public:
    /*!Функция вывода в поток.
     * \param os поток вывода
     * \return обработанный поток вывода
	 */
    virtual std::ostream& printTo(std::ostream& os) const;
};
#include "ExtendedFormatter.cpp"
#endif //EXTENDEDFORMATTER_H
