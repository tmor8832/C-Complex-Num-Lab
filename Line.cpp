//
//  Line.cpp
//  Advanced Classes

#include "Line.hpp"
using namespace std;
#include <math.h>


Line :: Line (float real, float imaginary)
{
    
}

void Line :: DisplayLine()
{
    char x = '+'; // initialise x
    if (Imaginary >= 0) x = '+'; //determine sign
    if (Imaginary < 0) x = '-';
    
    //use of fabs to get float absolute value
    cout << "Line value is " << Real << x << "j" << fabs(Imaginary) << endl;
}
