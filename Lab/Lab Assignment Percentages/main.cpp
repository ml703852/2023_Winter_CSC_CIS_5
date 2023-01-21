/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 13, 2023, 8:41 PM
 * Purpose: Calculate the military budget as a percentage of the federal budget 
 */

// System Libraries
#include <iostream> // Input Output Library 
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float milBdgt = 7.77e11f,      //Military Budget = 777 Billion   
            fedBdgt = 6.272e12f,  //Federal Budget  = 6.272 Trillion
            mlPrcnt;
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    mlPrcnt = (milBdgt / fedBdgt) * 100;
    cout<<"The military budget as a percentage of the federal budget is: "<<mlPrcnt<<endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}