#include <iomanip>
using namespace std;
template <typename T>
SimpleFormatter<T>::SimpleFormatter():val_(0),params_(0)
{
};

template <typename T>
SimpleFormatter<T>::SimpleFormatter(IOParams* params):val_(0),params_(params)
{
};

template <typename T>
SimpleFormatter<T>::SimpleFormatter(T val):val_(val),params_(0)
{
};

template <typename T>
IOParams*  SimpleFormatter<T>::params() const {return params_;}

template <typename T>
void  SimpleFormatter<T>::setParams(IOParams* params) {params_=params;};

template <typename T>
T  SimpleFormatter<T>::value()const{return val_;} ;

template <typename T>
void  SimpleFormatter<T>::setValue(T val){val_=val;};

template <typename T>
SimpleFormatter<T>::operator T(){return val_;};

template <typename T>
std::istream& SimpleFormatter<T>::inputFrom(std::istream& is){
    return is>>val_;
}

template <typename T>
std::ostream& SimpleFormatter<T>::printTo(std::ostream& os) const {
    if(params_){
        os.flags(params_->flags());
        os<<setw(params_->width());
        os<<setfill('*');
    }
    return os<<val_<<endl;
}
