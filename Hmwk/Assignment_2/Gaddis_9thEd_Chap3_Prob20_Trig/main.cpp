/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4* atan(1);
const float CNVDEGRD = PI/180;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angleDeg,angleRad;
    
    //Initialize or input i.e. set variable values
    cin>>angleDeg;
    
    //Map inputs -> outputs
    angleRad = angleDeg * CNVDEGRD;
    
    //Display the outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cout<<"sin("<<static_cast<int>(angleDeg)<<") = "<<sin(angleRad)<<endl;
    cout<<"cos("<<static_cast<int>(angleDeg)<<") = "<<cos(angleRad)<<endl;
    cout<<"tan("<<static_cast<int>(angleDeg)<<") = "<<tan(angleRad);

    //Exit stage right or left!
    return 0;
}