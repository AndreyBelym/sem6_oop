#include "List.h"
#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string str;
    std::cout<<"Введите любую строку\n";
    std::cin>>str;

    List *a=new List(str.c_str());

    if(isdigit(a->Value())){
        a->Prepend('[');
        a->Append(']');
    };
    a->Print();
    delete a;
    return 0;
}
