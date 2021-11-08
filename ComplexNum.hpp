
//  ComplexNum.hpp
//  Advanced Classes

#ifndef ComplexNum_hpp
#define ComplexNum_hpp
#include <iostream>

class ComplexNum {
private: float real, imag;

protected: float  Real, Imaginary;
    
public:
    ComplexNum();
    ComplexNum(float, float);
    float magnitude(float,float);
    float argument(float,float);
    
    
};

#endif /* OOPComplex_hpp */
