#include <iomanip>
using namespace std;
template <typename T>
std::ostream& ExtendedFormatter<T>::printTo(std::ostream& os) const {
    if(params_)
        os<<setprecision(params_->precision1());
    SimpleFormatter<T>::printTo(os);
    if(params_)
        os<<setprecision(params_->precision2());
    SimpleFormatter<T>::printTo(os);
    if(params_)
        os<<setprecision(params_->precision3());
    SimpleFormatter<T>::printTo(os);
    return os;
}
