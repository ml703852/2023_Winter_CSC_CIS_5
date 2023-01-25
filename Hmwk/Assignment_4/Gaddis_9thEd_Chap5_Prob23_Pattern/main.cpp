/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 3:20 PM
 * Purpose: Display a pattern
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
    int number;
    char symbol;    //Call the symbol here
    
    //Initialize Variables
    cin>>number;
    
    //Map/Process the inputs -> Outputs
    symbol = '+';       //Initialize symbol '+' here
    for (int i = 0; i < number; i++){
        for(int j = 0; j <= i; j++){
            cout<<symbol;
        }
            cout<<endl;
            
        if(i != number){
            cout<<endl;
        }
    }
    
    for(int i = 0; i < number; i++){
        for(int j = number; j > i; j--){
            cout<<symbol;
        }
        if(i != number - 1){
            cout<<endl;
            cout<<endl;
        }
    }
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}