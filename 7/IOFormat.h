#ifndef IOFORMAT_H
#define IOFORMAT_H
#include <iostream>
#include "IOParams.h"
#include "BaseFormatter.h"
#include "SimpleFormatter.h"
#include "ExtendedFormatter.h"
//!Класс форматированного вывода различных чисел и символов.
class IOFormat:public IOParams,public BaseFormatter{
    ExtendedFormatter<double> f1,f2;//!<вещественные числа для форматирования
    SimpleFormatter<char> c1,c2;//!<символы для форматирования
    SimpleFormatter<int> i;//!<целое число для форматирования
  public: 
    /*!Конструктор, задающий параметры форматирования.
     * \param width ширина поля
     * \param precision1 точность №1 для вывода вещественного числа
     * \param precision2 точность №2 для вывода вещественного числа
     * \param precision3 точность №3 для вывода вещественного числа
     * \param flags флаги форматирования
     */
    IOFormat(int width=DEFAULT_WIDTH,
             int precision1=DEFAULT_PRECISION1,
             int precision2=DEFAULT_PRECISION2,
             int precision3=DEFAULT_PRECISION3,
             std::ios::fmtflags flags=DEFAULT_FLAGS);
    /*!Функция установки параметров форматирования для включенных классов форматирования.
     */
    void Init();
    /*!Функция вывода в поток.
     * \param os поток вывода
     * \return обработанный поток вывода
     */
    std::ostream& printTo(std::ostream& os) const;
    /*!Функция ввода из потока.
     * \param is поток ввода
     * \return обработанный поток ввода
     */
    std::istream& inputFrom(std::istream& is);
};
#endif //IOFORMAT_H
