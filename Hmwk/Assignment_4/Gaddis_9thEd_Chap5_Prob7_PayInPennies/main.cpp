/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 7:29 PM
 * Purpose: Payment in Pennies
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
// const int penny = 1,
//           salary = 0; 


//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int penny = 1, 
        salary = 0,
        days; 
    
    //Initialize Variables
    cin>>days;
    
    //Map/Process the inputs -> Outputs
    if (days < 1){
        cout<<"Invalid input. Input an integer greater than 1.";
    }
    else {
        for (int i=0; i<days; i++){
            salary += penny;
            penny *= 2;
        }
        cout<<"Pay = $"<<fixed<<setprecision(2)<<setw(4)<<salary * 0.01;
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}