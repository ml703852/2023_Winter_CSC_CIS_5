/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 16, 2023, 5:30 PM
 * Purpose: Calculate the gross pay
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float PayRate, 
            WorkHrs,
            GrossPy;
    
    //Initialize Variables
    cin>>PayRate; cin>>WorkHrs;          //Input Pay Rate and Work Hours
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    
    
    //Map/Process the inputs -> Outputs
    GrossPy = PayRate * WorkHrs;         //Calculate Gross Pay
    
    //Calculate for the first 40 hours 
    //User is paid double time if WorkHrs > 40
    if (WorkHrs > 40){
        GrossPy = GrossPy + PayRate * (WorkHrs - 40);
    }
    
    //Display Inputs/Outputs
    cout<<"Paycheck = $"<<fixed<<setprecision(2)<<showpoint<<setw(7)<<GrossPy;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}