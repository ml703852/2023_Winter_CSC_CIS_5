/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 16, 2023, 4:21 PM
 * Purpose: Convert Fahrenheit temperature to Celsius
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Formula = (5/9) * (F-32)
        
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float Celsius,
            Farenht,
            deg_inp,    //User input
            F_toC;
    
    //Initialize Variables
    cin>>deg_inp;   //User Inputs Degrees
    
    //Map/Process the inputs -> Outputs
    
        //Use Given Formula
    F_toC = (5.0/9.0)*(deg_inp - 32);
    
    //Display Inputs/Outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    cout<<fixed<<setprecision(1)<<deg_inp<<" Degrees Fahrenheit = ";
    cout<<fixed<<setprecision(1)<<F_toC<<" Degrees Centigrade";

    //Clean up memory and files
    
    //Exit Program
    return 0;
}