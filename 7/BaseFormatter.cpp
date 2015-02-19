#include "BaseFormatter.h"
#include <fstream>
#include <limits>
using namespace std;
std::istream& operator>>(std::istream& is,BaseFormatter& what){
   return what.inputFrom(is); 
}

std::ostream& operator<<(std::ostream& os, const BaseFormatter& what){
    return what.printTo(os);    
}
void BaseFormatter::toFile(const char* fname) const{
    ofstream ofs;
    ofs.open(fname);
    printTo(ofs);
    ofs.close();
};


void BaseFormatter::input(){
    inputFrom(cin);
}

void BaseFormatter::print() const{
    printTo(cout);
}
void BaseFormatter::clear(istream &is){
    is.clear();
    is.ignore ( std::numeric_limits<std::streamsize>::max(), '\n' );
}
