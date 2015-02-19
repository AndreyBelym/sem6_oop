#include <iostream>
#include <cmath>
#include <limits>
#include "CMPLX.h"

CMPLX::CMPLX():re(0),im(0){
}

CMPLX::CMPLX(float real,float imag):re(real),im(imag){
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
    CMPLX temp;
    temp.re=re-what.re;
    temp.im=im-what.im;
    return temp;
}

CMPLX CMPLX::Sub(double what){
    CMPLX temp;
    temp.re=re-what;
    temp.im=im;
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
CMPLX& CMPLX::operator++(){
    Inc();
    return *this;
}

CMPLX CMPLX::operator++(int){
    CMPLX c=*this;
    Inc();
    return c;
}

CMPLX CMPLX::operator-(CMPLX what){
    return Sub(what);
}

CMPLX CMPLX::operator-(double what){
    return Sub(what);
}
CMPLX operator-(double a,CMPLX b){
    return CMPLX(a,0)-b;
}
std::ostream& operator<<(std::ostream& os,
                         const CMPLX& what){
    return os<<"("<<what.re<<","<<what.im<<")";
}
std::istream& operator>>(std::istream& is,
                         CMPLX& what){
   is>>what.re;
   if(!is.good()){
        std::cerr<<"Ошибка ввода вещественной части!"<<std::endl;
        is.clear();
        is.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );
   }
   is>>what.im;
   if(!is.good()){
        std::cerr<<"Ошибка ввода мнимой части!"<<std::endl;
        is.clear();
        is.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );
   }
   return is;
} 
