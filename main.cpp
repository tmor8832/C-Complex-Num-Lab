//
//  main.cpp
//  Advanced Classes
//
//  Created by Mac on 13/12/2016.
//  Copyright © 2016 Mac. All rights reserved.
//

#include <iostream>         //Include all header files and relevant classes
#include "Source.hpp"
#include "ComplexNum.hpp"
#include "Line.hpp"
#include "Load.hpp"
using namespace std;

float VoltageReal,VoltageImag, PowerReal, PowerImag, ZReal, ZImag; //Define Input Variables

int main()
{ //Get User Variables
    
    cout<<"Enter the real value of the Source Voltage in KV " << endl;
    cin>> VoltageReal;
    cout<<"Enter the imaginary value of the Source Voltage in KVA " << endl;
    cin>>VoltageImag;
    cout<<"Enter the real value of the apparent power " << endl;
    cin>>PowerReal;
    cout<<"Enter the imaginary value of the apparent power " << endl;
    cin>>PowerImag;
    cout<<"Enter the real value of the line " << endl;
    cin>>ZReal;
    cout<<"Enter the imaginary value of the line " << endl;
    cin>>ZImag;

    Source source(VoltageReal, VoltageImag);
    source.magnitude(VoltageReal, VoltageImag);
    source.argument(VoltageReal, VoltageImag);
    source.DisplaySource();
    
    Load load(PowerReal, PowerImag);
    load.magnitude(PowerReal, PowerImag);
    load.argument(PowerReal, PowerImag);
    load.DisplayLoadPower();
    
    
    Line line(ZReal, ZImag);
    line.magnitude(ZReal, ZImag);
    line.argument(ZReal, ZImag);
    line.DisplayLine();
    
    
    float VL = load.CalcVL(VoltageReal, PowerReal, ZReal);
    
    float IL = load.CalcIL(PowerReal, VL);
    
    float SS = source.CalcSS(VoltageReal, IL);
    
    return 0;
}
