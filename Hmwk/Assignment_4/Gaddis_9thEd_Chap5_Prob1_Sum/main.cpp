/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 11:20 AM
 * Purpose: Sum the Sequence using a loop
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
    int posInt = 0,     //Positive integer
        sum;
        
    
    //Initialize Variables
    cin>>posInt; 
    //Map/Process the inputs -> Outputs
    while (posInt<0){
        cout<<"Please enter an integer greater than 0.";
        cin>>posInt;
    }
        
    sum = 0; 
    for (int i=1; i <= posInt; i++){
        sum += i;
    }
    
    //Display Inputs/Outputs
    cout<<"Sum = "<<sum;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}