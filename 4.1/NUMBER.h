#ifndef NUMBER_H
#define NUMBER_H
#include <typeinfo>
#include <iostream>
class NUMBER{
  public:
    virtual ~NUMBER(){};
    virtual NUMBER * Convert(NUMBER& src)=0;
    virtual void Inc()=0;
    virtual NUMBER* Sub(NUMBER& what)=0;
    virtual void Print()=0;
  protected:
    template <typename T>
    NUMBER* OperationHelper(NUMBER& what,T* thisT,
                            T (T::*op)(T what)){
        using namespace std;
        NUMBER *temp;
        if(temp=Convert(what)){
            T *c=dynamic_cast<T*>(temp),*res=new T;
            *res=(thisT->*op)(*c);
            delete temp;
            return res;
        } else if (temp=what.Convert(*this)) {
            NUMBER* res=temp->Sub(what);
            delete temp;
            return res;
        } else {
            cerr<<"Cann't do conversion between "
                <<typeid(this).name()<<" and "
                <<typeid(what).name()<<"!"<<endl;
        }
        return NULL;
    }
};
#endif //NUMBER_H
