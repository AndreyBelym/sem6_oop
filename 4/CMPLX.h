#ifndef CMPLX_HPP
#define CMPLX_HPP
#include <iostream>
#include "NUMBER.h"
/*!Класс комплексных чисел.*/
class CMPLX:public NUMBER {
    public:
        /*!Конструктор по умолчанию.*/
        CMPLX();
        /*!Конструктор, задающий вещественную и мнимую части.
         * \param real вещественная часть
         * \param imag мнимая часть
         */
        CMPLX(float real,float imag);
        /*!Установка значения.
         * \param real вещественная часть
         * \param imag мнимая часть
         */
        void Setcompl(float real,float imag);
        /*!Инкремент - увеличение модуля на единицу.*/
        void Inc();
        /*!Декремент - уменьшение модуля на единицу.*/
        void Dec();
        /*!Операция сложения комплексных чисел.
         * \param what второе слагаемое
         * \return сумму комплексных чисел
         */
        CMPLX Add(CMPLX what) const;
        /*!Операция вычитания комплексных чисел.
         * \param what вычитаемое
         * \return разность комплексных чисел
         */
        CMPLX Sub(CMPLX what) const;
        /*!Операция умножения комплексных чисел.
         * \param what множитель
         * \return результат умножения
         */
        CMPLX Mul(CMPLX what) const;
        /*!Операция умножения на вещественное число.
         * \param what множитель
         * \return результат умножения
         */
        CMPLX Cmul(float what) const;
        /*!Операция деления комплексных чисел.
         * \param what делитель
         * \return результат деления
         */
        CMPLX Div(CMPLX what) const;
        /*!Вывод числа на экран в формате (real,imag).*/
        void Print() const;
        /*!Оператор приведения к комплексному числу.*/        
        operator CMPLX() const;
    private:
        //!Вещественная часть
        float re;
        //!Мнимая часть
        float im;
};
#endif //CMPLX_HPP
