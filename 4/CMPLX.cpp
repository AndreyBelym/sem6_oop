#include <iostream>
#include <cmath>
#include "CMPLX.h"
#include "REAL.h"
using namespace std;
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

CMPLX CMPLX::Add(CMPLX what) const {
    CMPLX temp;
    temp.re=re+what.re;
    temp.im=im+what.im;
    return temp;
}

CMPLX CMPLX::Sub(CMPLX what) const {
    CMPLX temp;
    temp.re=re-what.re;
    temp.im=im-what.im;
    return temp;
}

CMPLX CMPLX::Mul(CMPLX what) const {
    CMPLX temp;
    temp.re=re*what.re-im*what.im;
    temp.im=im*what.re+re*what.im;
    return temp;
}

CMPLX CMPLX::Cmul(float what) const {
    CMPLX temp;
    temp.re=re*what;
    temp.im=im*what;
    return temp;
}

CMPLX CMPLX::Div(CMPLX what) const {
    CMPLX temp;
    float denom=what.re*what.re+what.im*what.im;
    temp.re=(re*what.re+im*what.im)/denom;
    temp.im=(im*what.re-re*what.im)/denom;
    return temp;
}

void CMPLX::Print() const {
    std::cout<<"("<<re<<","<<im<<")"<<std::endl;
}

CMPLX::operator CMPLX() const {
    return *this;
}
