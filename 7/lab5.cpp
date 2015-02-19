#include "CMPLX.h"
#include <iostream>
using namespace std;
int main()
{
    CMPLX a,b;
    double r;
    cout<<"Введите комплексное число a."<<endl;
    cin>>a;
    cout<<"Введите комплексное число b."<<endl;
    cin>>b;
    cout<<"Введите вещественное число r."<<endl;
    cin>>r;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"r="<<r<<endl;
    
    cout<<"a.Sub(b)="<<a.Sub(b)<<endl;
    cout<<"a-b="<<a-b<<endl;

    cout<<"a.Sub(r)="<<a.Sub(r)<<endl;
    cout<<"a-r="<<a-r<<endl;

    cout<<"r-a="<<r-a<<endl;

    cout<<"b++="<<b++<<endl;
    cout<<"b="<<b<<endl;
    cout<<"++b="<<++b<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}
