#include "IOParams.h"
IOParams::IOParams(int width,int precision1,int precision2,int precision3,std::ios::fmtflags flags):
    width_(width),
    precision1_(precision1),
    precision2_(precision2),
    precision3_(precision3),
    flags_(flags)
{
}

int IOParams::width(){return width_;};
void IOParams::setWidth(int width){width_=width;};
int IOParams::precision1(){return precision1_;};
void IOParams::setPrecision1(int precision){precision1_=precision;};
int IOParams::precision2(){return precision2_;};
void IOParams::setPrecision2(int precision){precision2_=precision;};
int IOParams::precision3(){return precision3_;};
void IOParams::setPrecision3(int precision){precision3_=precision;};
std::ios::fmtflags IOParams::flags(){return flags_;};
void IOParams::setFlags(std::ios::fmtflags flags){flags_=flags;};

