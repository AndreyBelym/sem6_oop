#ifndef REAL_H
#define REAL_H
#include "NUMBER.h"
#include "CMPLX.h"
/*!Класс "вещественное число".*/
class REAL:public NUMBER{
  private:
    double val;//!<значение числа
  public:
    /*!Конструктор по умолчанию.*/    
    REAL();
    /*!Конструктор, задающий значение числа.
     * \param value значение числа
     */
    REAL(double value);
    /*!Получение значения числа.
     * \return значение числа
     */
    double value() const;
    /*!Установка значения числа.
     * \param value новое значение числа
     */
    void setValue(const double value);
    /*!Инкремент - увеличение числа на единицу.*/          
    void Inc();
    /*!Декремент - уменьшение числа на единицу.*/        
    void Dec();
    /*!Операция сложения с комплексным числом.
     * \param what слагаемое
     * \return сумму комплексных чисел
     */
    CMPLX Add(CMPLX what) const;
    /*!Операция умножения на комплексное число.
     * \param what множитель
     * \return результат умножения
     */
    CMPLX Mul(CMPLX what) const;
    /*!Операция деления на комплексное число.
     * \param what делитель
     * \return результат деления
     */
    CMPLX Div(CMPLX what) const;
    /*!Операция вычитания комплексного числа.     
     * \param what вычитаемое
     * \return разность комплексных чисел
     */    
    CMPLX Sub(CMPLX what) const;
    /*!Вывод числа на экран.*/        
    void Print() const;
    /*!Оператор приведения к комплексному числу.*/    
    operator CMPLX() const;
};
#endif //REAL_H
