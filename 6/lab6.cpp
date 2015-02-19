#include "Array.h"
#include <iostream>
template <typename T>
void testTemplate(const char *name,const char* type){
    int len;
    cout<<"Введите размер массива "<<name<<"."<<endl;
    cout<<"(Тип элемента - "<<type<<" число)"<<endl;
    cin>>len;
    Array<T> a(len);
    if(len<0)
        return;

    for(int i=0;i<len;++i){
        cout<<"Введите "
            <<type
            <<" число номер "
            <<i
            <<" в массиве "
            <<name<<"."<<endl;
        cin>>a[i];
    }
    std::cout<<name<<".findMin()=";
    std::cout<<a.findMin()<<endl;
}

int main(){
    testTemplate<int>("a","целое");
    testTemplate<double>("b","вещественное");
    return 0;
}
