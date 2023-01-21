/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 16, 2023, 6:05 PM
 * Purpose: Calculate how much insurance property owners need
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
    float InsureP = .80,        //% experts advise owners to insure their homes
            RplcmtC,            //Replacement cost 
            Min_Insr;           //Minimum amount of insurance owner should buy
    
    //Initialize Variables
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    cin>>RplcmtC;               //User enters Replacement Cost
    
    //Map/Process the inputs -> Outputs
    Min_Insr = InsureP * RplcmtC;
    
    //Display Inputs/Outputs
    cout<<"You need $"<<Min_Insr<<" of insurance.";
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}