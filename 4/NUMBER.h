#ifndef NUMBER_H
#define NUMBER_H
class CMPLX;
//!Абстрактный класс "число".
class NUMBER{
  public:
    /*!Инкремент - увеличение числа на единицу.*/      
    virtual void Inc()=0;
    /*!Декремент - уменьшение числа на единицу.*/    
    virtual void Dec()=0;    
    /*!Операция сложения с комплексным числом.
     * \param what слагаемое
     * \return сумму комплексных чисел
     */
    virtual CMPLX Add(CMPLX what) const=0;
    /*!Операция вычитания комплексного числа.
     * \param what вычитаемое
     * \return разность комплексных чисел
     */
    virtual CMPLX Mul(CMPLX what) const=0;
    /*!Операция умножения на комплексное число.
     * \param what множитель
     * \return результат умножения
     */
    virtual CMPLX Div(CMPLX what) const=0;    
    /*!Операция деления на комплексное число.
     * \param what делитель
     * \return результат деления
     */
    virtual CMPLX Sub(CMPLX what) const=0;
    /*!Вывод числа на экран.*/    
    virtual void Print() const=0;
    /*!Оператор приведения к комплексному числу.*/
    virtual operator CMPLX() const=0;
    /*!Виртуальный деструктор.*/
    virtual ~NUMBER(){};
};
#include "CMPLX.h"
#endif //NUMBER_H
