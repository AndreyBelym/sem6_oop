#include "NUMBER.h"
#include "CMPLX.h"
#include "REAL.h"
#include <iostream>
void doFunWithNumbers(NUMBER &a,NUMBER &b){
	a.Inc();
	a.Print();
	b.Inc();
	b.Print();
	NUMBER *c=a.Sub(b);
    if(c)c->Print();
    delete c;
}

int main(){
    CMPLX a(1,2);
    REAL b(3),c(5);
    doFunWithNumbers(a,b);
    doFunWithNumbers(b,a);
    doFunWithNumbers(b,c);
    return 0;
}
