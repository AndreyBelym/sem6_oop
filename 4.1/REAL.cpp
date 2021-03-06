#include "REAL.h"
#include <typeinfo>
#include <iostream>
using namespace std;
REAL::REAL(){val=0;}
REAL::REAL(double value):val(value){};
double REAL::value(){return val;};
NUMBER* REAL::Convert(NUMBER& src){
    REAL *r=new REAL;
    if(typeid(src)==typeid(REAL)){
        *r=dynamic_cast<REAL&> (src);
        return r;
    };
    delete r;
    return NULL;
}

void REAL::Inc(){++val;};
void REAL::Print(){
    std::cout<<val<<std::endl;
}
REAL REAL::Sub(REAL what){
    return val-what.val;
}

NUMBER* REAL::Sub(NUMBER& what){
    return OperationHelper<REAL>(what,this,&REAL::Sub);
}
