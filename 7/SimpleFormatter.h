#ifndef SIMPLEFORMATTER_H
#define SIMPLEFORMATTER_H
#include "BaseFormatter.h"
//!Шаблон класса форматирования ввода-вывода с учетом ширины поля.
template <typename T>
class SimpleFormatter:public BaseFormatter{
  protected:  
    T val_;//!<значение для форматирования
    IOParams *params_;//!<параметры форматирования
  public:
    /*!Конструктор по умолчанию.
     */
    SimpleFormatter();
    /*!Конструктор, устанавливающий параметры форматирования.
     * \param params указатель на параметры форматирования
     */
    SimpleFormatter(IOParams* params);
    /*!Конструктор, устанавливающий форматируемое значение.
     * \param val форматируемое значение
     */
    SimpleFormatter(T val);
    /*!Получение параметров форматирования.
     * \return указатель на параметры форматирования
     */
    IOParams* params() const ;
    /*!Установка параметров форматирования.
     * \param params указатель на новые параметры форматирования
     */
    void setParams(IOParams* params) ;
    /*!Получение форматируемого значения.
     * \return форматируемое значение
     */
    T value()const ;
    /*!Установка форматируемого значения.
     * \param val новое форматируемое значение
     */
    void setValue(T val);
    /*!Оператор приведения к типу форматируемого значения.
     */
    operator T();
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
#include "SimpleFormatter.cpp"
#endif //SIMPLEFORMATTER_H
