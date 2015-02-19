#include "Array.h"
#include <iostream>
using namespace std;
int main(){
    int len;
    cout<<"Введите размер массива."<<endl;
    cin>>len;
    Array a(len);
    if(len<0)
        return 1;

    for(int i=0;i<len;++i){
        cout<<"Введите число номер "<<i<<"."<<endl;
        cin>>a[i];
    }

    a.strangeSort();
    a.Print();
    return 0;
}
