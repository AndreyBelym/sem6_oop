#include "NUMBER.h"
#include "CMPLX.h"
#include "REAL.h"
#include <iostream>
using namespace std;
void doFunWithNumbers(NUMBER &a,NUMBER &b){
    cout<<"a=";
    a.Print();
    cout<<"b=";
    b.Print();
    cout<<"a.Sub(b)=";
    const NUMBER& c=a.Sub(b);
    c.Print();
    cout<<"a.Inc()=";
    a.Inc();
    a.Print();
    cout<<"b.Inc()=";
    b.Inc();
    b.Print();
}

int main(){
    double r,i;
    cout<<"Введите вещественную и мнимую части комплексного числа."<<endl;
    cin>>r>>i;
    CMPLX a(r,i);
    cout<<"Введите вещественное число."<<endl;
    cin>>r;
    REAL b(r);
    doFunWithNumbers(a,b);
    doFunWithNumbers(b,a);
    return 0;
}
