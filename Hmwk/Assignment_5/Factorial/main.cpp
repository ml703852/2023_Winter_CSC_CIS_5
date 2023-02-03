/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 31, 2023, 3:17 PM
 * Purpose: Calculate the factorial using a function
 */

// System Libraries
#include <iostream> // Input Output Library 
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int fctrl(int n);  //Function to write for this problem

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    unsigned int n;
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype"
            " found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>n; 
    
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<n<<"! = "<<fctrl(n);

    return 0;
}

int fctrl(int n){
    //Base condition
    if (n <= 1)return 1;
    
    //Recursive  
        //n! = 1 * 2 * 3 * ... (n-1) * (n)
        return fctrl(n-1)*n;
}
    