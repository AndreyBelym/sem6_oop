#include <iostream>
#include <cmath>
#include "CMPLX.h"
/*
CMPLX::CMPLX(){
    std::cout<<"Конструтор по умолчанию\n";
    re=0;im=0;
}
*/

/*
CMPLX::CMPLX(float real,float imag){
    re=real;im=imag;
    std::cout<<re<<im<<"Конструктор по значению\n";
}
*/
CMPLX::CMPLX(float real,float imag):re(real),im(imag){
    std::cout<<re<<" "<<im<<" Конструктор CMPLX(float,float)\n";
}

CMPLX::CMPLX(const CMPLX &other){
    re=other.re;
    im=other.im;
    std::cout<<re<<" "<<im<<"Конструктор CMPLX(CMPLX&)\n";
}

CMPLX::~CMPLX(){
    std::cout<<"Деструктор\n";
}

void CMPLX::Setcompl(float r,float i){
    re=r; im=i;
}

void CMPLX::Inc(){
    float r=sqrt(re*re+im*im)+1,phi=atan2(im,re);
    re=r*cos(phi); im=r*sin(phi);
}

void CMPLX::Dec(){
    float r=sqrt(re*re+im*im)-1,phi=atan2(im,re);
    re=r*cos(phi); im=r*sin(phi);
}

CMPLX CMPLX::Add(CMPLX what){
    CMPLX temp;
    temp.re=re+what.re;
    temp.im=im+what.im;
    return temp;
}

CMPLX CMPLX::Sub(CMPLX what){
    std::cout<<"2\n";
    CMPLX temp;
    std::cout<<"3\n";
    temp.re=re-what.re;
    temp.im=im-what.im;
    return temp;
}

CMPLX CMPLX::Mul(CMPLX what){
    CMPLX temp;
    temp.re=re*what.re-im*what.im;
    temp.im=im*what.re+re*what.im;
    return temp;
}

CMPLX CMPLX::Cmul(float what){
    CMPLX temp;
    temp.re=re*what;
    temp.im=im*what;
    return temp;
}

CMPLX CMPLX::Div(CMPLX what){
    CMPLX temp;
    float denom=what.re*what.re+what.im*what.im;
    temp.re=(re*what.re+im*what.im)/denom;
    temp.im=(im*what.re-re*what.im)/denom;
    return temp;
}

void CMPLX::Print(){
    std::cout<<"("<<re<<","<<im<<")"<<std::endl;
}
