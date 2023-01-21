/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 12, 2023, 11:00 AM
 * Purpose:  Positive and Negative Sum
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int value;
    int posSum, negSum, total;
    
    //Initialize or input i.e. set variable values
    // cout<<"This program sums 10 +- Integers"<<endl;
    // cout<<"Input 10 +- Integers"<<endl;
    posSum = negSum = 0;
    
    //Map/Process the inputs -> Outputs
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    cin>>value;
    posSum += value>0?value:0;
    negSum += value<0?value:0;
    
    //Display Inputs/Outputs
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;;
    cout<<"Total sum    ="<<setw(4)<<posSum + negSum;

    //Exit stage right or left!
    return 0;
}