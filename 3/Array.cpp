#include "Array.h"
#include <iostream>
#include <cstdlib>
using namespace std;
Array::Array():data(NULL),
               size(0)
{
}

Array::Array(const int len){
    if(len>0){
        size=len;
        try{
            data=new double[size];
        } catch (bad_alloc) {
            cerr<<"Memory allocation error!"<<endl;
            size=0;
            data=NULL;
        }
    } else {
        size=0;
        data=NULL;
    }
}

Array::Array(const double *new_data,const int len){
    if(len>0){
        size=len;
        try{
            data=new double[size];
        } catch (bad_alloc) {
            cerr<<"Memory allocation error!"<<endl;
            size=0;
            data=NULL;
        }
        for(int i=0;i<size;i++)
            data[i]=new_data[i];
    } else {
        size=0;
        data=NULL;
    }
}
Array::~Array(){
    delete[] data;
    size=0;
}

void Array::setLen(const int len){
    if(len>0){
        delete[] data;
        try{
            data=new double[size];
        } catch (bad_alloc) {
            cerr<<"Memory allocation error!"<<endl;
            size=0;
            data=NULL;
        }
        size=len;
    }
}

int Array::len(){
    return size;
}

double& Array::valueAt(int n){
    if(data&&n>=0&&n<size)
        return data[n];
    else 
        cerr<<"Index out of range!"<<endl;
    //else 
    //    return 0;
}

const double& Array::valueAt(int n) const{
    if(data&&n>=0&&n<size)
        return data[n];
    else 
        cerr<<"Index out of range!"<<endl;
    //else 
    //    return 0;
}

void Array::setValueAt(const int n, double value){
    if(data&&n>=0&&n<size)
        data[n]=value;
    else 
        cerr<<"Index out of range!"<<endl;
}

void Array::strangeSort(){
    for(int i=size-1;i>0;--i){
        for(int j=0;j<i;++j){
            if(data[j]>=0&&data[j+1]<0){
                double temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
}

void Array::Print() const{
    for(int i=0;i<size-1;++i){
        cout<<data[i]<<",";
    };
    cout<<data[size-1]<<endl;
}

void Array::Copy(const Array& other){
    if(this==&other)
        return;
    delete[] data;
    size=other.size;
    try{
		data=new double[size];
	} catch (bad_alloc) {
		cerr<<"Memory allocation error!"<<endl;
		size=0;
		data=NULL;
		return;
	}
    for(int i=0;i<size;i++)
        data[i]=other.data[i];
}

Array& Array::operator=(const Array& other){
    Copy(other);
    return *this;
}

double& Array::operator[] (int n){
    valueAt(n);
}

const double& Array::operator[] (int n) const{
    valueAt(n);
}
