#ifndef CMPLX_HPP
#define CMPLX_HPP
#include <iostream>
/*!Класс комплексных чисел.*/
class CMPLX {
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
        /*!Инкремент - увеличение модуля на единицу.
         */
        void Inc();
        /*!Декремент - уменьшение модуля на единицу.*/
        void Dec();
        /*!Операция сложения комплексных чисел.
         * \param what второе слагаемое
         * \return сумму комплексных чисел
         */
        CMPLX Add(CMPLX what);
        /*!Операция вычитания комплексных чисел.
         * \param what вычитаемое
         * \return разность комплексных чисел
         */
        CMPLX Sub(CMPLX what);
        /*!Операция вычитания вещественного числа.
         * \param what вычитаемое
         * \return разность чисел
         */
        CMPLX Sub(double what);
        /*!Операция умножения комплексных чисел.
         * \param what множитель
         * \return результат умножения
         */
        CMPLX Mul(CMPLX what);
        /*!Операция умножения на вещественное число.
         * \param what множитель
         * \return результат умножения
         */
        CMPLX Cmul(float what);
        /*!Операция деления комплексных чисел.
         * \param what делитель
         * \return результат деления
         */
        CMPLX Div(CMPLX what);
        /*!Вывод числа на экран в формате (real,imag).*/
        void Print();
        /*!Оператор преинкремента.
         * \return ссылку на данное число после выполнение инкремента
         */
        CMPLX& operator++();
        /*!Оператор постинкремента.
         * \return значение числа перед выполнением инкремента.
         */ 
        CMPLX operator++(int);
        /*!Оператор вычитания комплексного числа.
         * \param what вычитаемое
         * \return разность чисел
         */
        CMPLX operator-(CMPLX what);
        /*!Оператор вычитания вещественного числа.
         * \param what вычитаемое
         * \return разность чисел
         */
        CMPLX operator-(double what);
        /*!Оператор вычитания из вещественного числа.
         * \param a вещественное уменьшаемое
         * \param b комплексное вычитаемое
         * \return разность чисел
         */
        friend CMPLX operator-(double a,CMPLX b);
        /*!Оператор вывода в поток.
         * \param os поток вывода
         * \param what выводимое число
         * \return ссылку на поток вывода
         */
        friend std::ostream& operator<<(std::ostream& os,
                                        const CMPLX& what);
        /*!Оператор ввода из потока.
         * \param is поток ввода
         * \param what считываемое число
         * \return ссылку на поток ввода
         */
        friend std::istream& operator>>(std::istream& is,
                                        CMPLX& what);    
    private:
        //!Вещественная часть
        float re;
        //!Мнимая часть
        float im;
};
#endif //CMPLX_HPP
