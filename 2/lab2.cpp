#include "List.h"
#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string str;
    std::cout<<"Введите любую строку\n";
    std::cin>>str;

    List a(str.c_str());

    if(isdigit(a.Value())){
        a.Prepend('[');
        a.Append(']');
    };
    int i=0;
    do{
        i++;
        std::cout<<i%4<<std::endl;
        if(!(i%4))
            a.Delete();
        else
            a.Next();
    }while(!a.isEnd());
    
    a.Print();
    return 0;
}
