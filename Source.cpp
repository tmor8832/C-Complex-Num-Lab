//
//  Source.cpp
//  Advanced Classes
//
//  Created by Mac on 13/12/2016.
//  Copyright © 2016 Mac. All rights reserved.
//

#include "Source.hpp"
#include <math.h>

Source :: Source (float real, float imaginary)
{
    
}

void Source :: DisplaySource()
{
    char x = '+'; // initialise x
    if (Imaginary >= 0) x = '+'; //determine sign
    if (Imaginary < 0) x = '-';
    
    //use of fabs to get float absolute value
    cout << "Source Voltage is " << Real << x << "j" << fabs(Imaginary) << endl;
    
}

float Source :: CalcSS(float VS, float IL)
{
    float SS = VS * IL;
    cout<<"The value of the complex power is " << SS << "+ j0 " << endl;
    return SS;
    
}
