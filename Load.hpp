//
//  Load.hpp
//  Advanced Classes

#ifndef Load_hpp
#define Load_hpp
#include <iostream>
#include "ComplexNum.hpp"

class Load : public ComplexNum{
    
public:
    Load(float, float);
    void DisplayLoadPower();
    float CalcVL(float, float, float);
    float CalcIL(float, float);
    
};


#endif /* Load_hpp */
