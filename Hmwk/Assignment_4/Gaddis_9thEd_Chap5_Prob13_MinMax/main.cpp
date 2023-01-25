/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 12, 2023, 1:50 PM
 * Purpose: Display the Largest and Smallest
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cmath>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int ENDPRGM = -99;            //Value that will terminate the iteration

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int number,
            minimum,
            maximum;
    
    //Initialize Variables
    cin>>number;
    minimum = maximum = number;
    
    //Map/Process the inputs -> Outputs
    // int number = 0;
    while (number != ENDPRGM){
        
        if (number < minimum){
            minimum = number;
        }
        
        if (number > maximum){
            maximum = number;
        }
        
        cin>>number;
    }
    
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<minimum<<endl;
    cout<<"Largest  number in the series is "<<maximum;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}