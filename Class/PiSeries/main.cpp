/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 19th, 2023, 11:03 AM
 * Purpose: Pi Series
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cmath>    //Arctan
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float PI=4*atan(1);

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float apprxPI,
            diff,
            tol;
    
    //Initialize Variables
    apprxPI=1;
    diff=1;
    tol=1e-6f;
    
    //Map/Process the inputs -> Outputs
    for (int i=5; diff>tol; i+=4){
        diff=(1.0f/i-1.0f/(i/2));   // 2 terms at a time
        apprxPI+=diff;
        
    }
    apprxPI*=4;
    
    //Display Inputs/Outputs
    cout<<"Approximate PI = "<<apprxPI<<endl;
    cout<<"Exact       PI = "<<PI<<endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}