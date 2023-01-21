/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 9, 2023, 11:07 AM
 * Purpose: How many Candy bars can I consume/day?
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    unsigned short height, age, weight;
    char sex;
    const unsigned char CNDBAR=230;  //Calories/candy bars
    float BMR, nmCdBrs; //Number of candy bars
    
    //Initialize Variables
    cout<<"This program calculates the number"<<endl;
    cout<<"of candy bars you may consume"<<endl;
    cout<<"per day to maintain your weight."<<endl;
    cout<<"Input your sex M/F, height in inches,"<<endl;
    cout<<"weight in lbs, and age in years"<<endl;
    cin>>sex>>height>>weight>>age;
    
    //Map/Process the inputs -> Outputs
    if(sex=='M'){
        BMR = 66 + (6.3 * weight) + (12.9 * height) + (6.8 * age);
    }
    
    if (sex=='F'){
        BMR = 665 + (4.3 * weight) + (4.7 * height) + (4.7 * age);
    }
    nmCdBrs = BMR/CNDBAR;
      
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The number of candy bars I may consume "<<endl;
    cout<<"="<<setw(6)<<nmCdBrs<<endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}