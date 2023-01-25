/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 12, 2023, 1:50 PM
 * Purpose: Display the Largest and Smallest
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//const int SentVal = -99;

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float number1, 
          number2, 
          number3,
          minimum,
          maximum;
    
    //Initialize Variables
    
    //User inputs number1, number2, number3
    cout<<"Enter first number:"<<endl;
    cin>>number1;
    cout<<endl;
    
    cout<<"Enter Second number:"<<endl;
    cin>>number2;
    cout<<endl;
    
    cout<<"Enter third number:"<<endl;
    cin>>number3;
    cout<<endl;
    
    //Map/Process the inputs -> Outputs 
    
    //Test all possible cases
    if (number1 > number2 && number2 > number3){
        maximum = number1;
    }
    
    if (number1 > number3 && number3 > number2){
        maximum = number1;
    }
            
    if (number2 > number1 && number1 > number3){
        maximum = number2;
    }
    
    if (number2 > number3 && number3 > number1){
        maximum = number2;
    }
    
    if (number3 > number1 && number1 > number2){
        maximum = number3;
    }
            
    if (number3 > number2 && number2 > number1){
       maximum = number3;
    }
            

    //Display Inputs/Outputs
    cout<<"Largest number from two parameter function:"<<endl<<fixed<<setprecision(1)
            <<setw(2)<<max(number1, number2)<<endl<<endl;
    
    cout<<"Largest number from three parameter function:"<<endl<<fixed<<setprecision(1)
            <<setw(2)<<maximum<<endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}