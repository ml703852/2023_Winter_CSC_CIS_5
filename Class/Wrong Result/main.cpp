/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 10, 2023, 4:21 PM
 * Purpose: Template to be used for all future 
            Hmwk, Labs, Exams, Projects
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
    short x,y,z;
    
    //Initialize Variables
    x = 25000;
    y = 10000;
    
    //Map/Process the inputs -> Outputs
    z=x+y;
    
    //Display Inputs/Outputs
    cout<<z<<" = "<<x<<" + "<<y<<endl;  //Gives negative num because *short*
            
    //Clean up memory and files
    
    //Exit Program
    return 0;
}