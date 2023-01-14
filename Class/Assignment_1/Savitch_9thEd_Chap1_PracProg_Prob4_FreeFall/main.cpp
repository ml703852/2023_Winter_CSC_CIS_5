/* 
00000000001111111111222222222233333333334444444444555555555566666666667777777777
12345678901234567890123456789012345678901234567890123456789012345678901234567890
 * File:   main.cpp
 * Author: Mehak
 * Created on January 13, 2023, 4:21 PM
 * Purpose: Free Fall Calculation
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cstdlib>  //Utilizes random numbers
#include <cmath>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
float GRAVITY = 3.2174e1f;  //Gravity 32.174 ft/sec^2

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float drop, //Distance the object falls
            tim;  //Time in seconds
    
    //Initialize Variables
    tim = rand()%10+1;   //Time from 1 to 10 seconds
    
    //Map/Process the inputs -> Outputs
    //drop = 1/2 * GRAVITY * tim*tim;   //Incorrect integer division
    //drop = 1.0f/2 * GRAVITY * tim*tim;
    //drop = 1/2.0f * GRAVITY * tim*tim;
    //drop = GRAVITY * tim*tim/2;
    //drop = GRAVITY * pow(tim,2)/2;    //Very expensive function for simple square 
    //drop = GRAVITY*exp(2*log(tim))/2;
    drop = GRAVITY * tim*tim/2;
            
    //Display Inputs/Outputs
    cout<<"This program calculates distance in free fall"<<endl;
    cout<<"The time of drop = "<< tim << " seconds"<<endl;
    cout<<"The distance dropped = "<< drop << " feet"<< endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}