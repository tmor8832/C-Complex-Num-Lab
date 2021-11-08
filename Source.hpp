//
//  Source.hpp
//  Advanced Classes

#ifndef Source_hpp
#define Source_hpp
#include <iostream>
#include "ComplexNum.hpp" 
using namespace std;

class Source : public ComplexNum{
    
public:
    Source(float, float);
    void DisplaySource();
    float CalcSS(float, float);
    
};

#endif /* Source_hpp */
