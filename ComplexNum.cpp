//
//  ComplexNum.cpp
//  Advanced Classes

//.cpp

#include "ComplexNum.hpp"
#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265

ComplexNum :: ComplexNum()      //Default Constructor
{
    
    
}

ComplexNum::ComplexNum(float real, float imag)
{
    cout<<"Overload Constructor used" << endl;
}

float ComplexNum :: magnitude(float real,float imag)
{   Real = real;
    Imaginary = imag;
    imag = imag*imag;
    real = real*real;
    float total = imag + real ; // add squared results
    return sqrtf(total);
}

float ComplexNum :: argument(float real,float imag)
{
    float t = atan((real/imag))* 180/PI; //atan is inverse tan
    return t;
}


