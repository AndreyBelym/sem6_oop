#include "CMPLX.h"
#include <iostream>
using namespace std;
int main()
{
    CMPLX a(3,4),b(3.6,4.8);
    CMPLX c(3,4),d(3.6,4.8);
    cout<<((++c)-(d++))<<(++a)<<(a-b)<<endl;
    return 0;
}
