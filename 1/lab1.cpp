#include "CMPLX.h"
#include <iostream>
int main(){
    float r=0,i=0;
    std::cin>>r>>i;
    CMPLX a;
    
    a.Setcompl(r,i);

    std::cin>>r>>i;

    CMPLX b(r,i);
    
    a.Inc();b.Inc();
    CMPLX c=a.Sub(b);
    
    return 0;
}
