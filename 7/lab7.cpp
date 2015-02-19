#include "IOFormat.h"
#include <iostream>
int main(){
    IOFormat f;
    f.input();
    f.print();
    f.toFile("test.txt");
}
