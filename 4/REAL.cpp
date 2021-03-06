#include "REAL.h"
#include <iostream>
using namespace std;
REAL::REAL():val(0){}

REAL::REAL(double value):val(value){};

double REAL::value() const{
    return val;
};

void REAL::setValue(const double value){
    val=value;
}
void REAL::Inc(){
    ++val;
}
void REAL::Dec(){
    --val;
}
void REAL::Print() const {
    std::cout<<val<<std::endl;
}
CMPLX REAL::Sub(CMPLX what) const {
    CMPLX c=CMPLX(val,0);
    return c.Sub(what);
}
CMPLX REAL::Add(CMPLX what) const {
    CMPLX c=CMPLX(val,0);
    return c.Add(what);
}
CMPLX REAL::Mul(CMPLX what) const {
    CMPLX c=CMPLX(val,0);
    return c.Mul(what);
}
CMPLX REAL::Div(CMPLX what) const {
    CMPLX c=CMPLX(val,0);
    return c.Div(what);
}
REAL::operator CMPLX() const {
    return CMPLX(this->val,0);
}
