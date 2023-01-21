/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 16, 2019, 12:13 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float a, b, c, d, e,    //User can input using these var's
            Sum, 
            AvgVal;
    
    //Initialize Variables
    cin>>a; cin>>b; cin>>c; cin>>d; cin>>e;
    
    //Map/Process the inputs -> Outputs
    Sum = a + b + c + d + e;
    AvgVal = Sum / 5;
    
    //Display Inputs/Outputs
    cout<<"Input 5 numbers to average."<<endl;
    
    //Output the Avg to 1 decimal point
    cout<<fixed<<setprecision(1)<<"The average = "<<AvgVal;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}