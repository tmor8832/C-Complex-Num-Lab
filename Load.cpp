//
//  Load.cpp
//  Advanced Classes
//
//  Created by Mac on 13/12/2016.
//  Copyright © 2016 Mac. All rights reserved.
//

#include "Load.hpp"
#include <math.h>

using namespace std;


Load :: Load (float real, float imaginary)
{
    
}

void Load :: DisplayLoadPower()
{
    char x = '+'; // initialise x
    if (Imaginary >= 0) x = '+'; //determine sign
    if (Imaginary < 0) x = '-';
    
    //use of fabs to get float absolute value
    cout << "Load power is " << Real << x << "j" << fabs(Imaginary) << endl;
}

float Load :: CalcVL(float VS, float SL , float Z)
{
    float VL = (SL + sqrtf((SL*SL) - 4*(SL*Z)))/2;
    cout <<"The value of the load voltage is " << VL << endl;
    return VL;
    
}

float Load :: CalcIL(float SL, float VL)
{
    float IL = (SL/VL);
    cout<<"The current in the load is " << IL << endl;
    return IL;
}
