/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 13, 2023, 7:50 PM
 * Purpose: Compute total sales tax on a $95 purchase,
        where state sales tax = .04, county sales tax = .02
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>  // Manipulate Ouput of program
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int prchse = 95;
    float sstax = .04, cstax = .02;
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<setprecision(2)<<fixed<<endl;    //Adds two decimal places to output
    cout<<"The total state sales tax on a $95 purchase = $"<<(prchse * sstax)<<endl;
    cout<<"The total county sales tax on a $95 purchase = $"<<(prchse * cstax)<<endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}