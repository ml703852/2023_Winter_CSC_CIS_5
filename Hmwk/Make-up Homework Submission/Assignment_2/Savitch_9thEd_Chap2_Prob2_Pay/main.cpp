/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 16, 2023, 5:00 PM
 * Purpose: Calculate the gross compensation
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
    float pay_incr = 0.076,  //Increase in Pay, Retroactive
            AnnualSl,
            
            RtroPay,        //Retroactive Pay
            NewAnnS,        //New Annual Salary
            NewMonS;        //New Monthly Salary
    
    //Initialize Variables
    cout<<"Input previous annual salary."<<endl;
    cin>>AnnualSl;      //Takes employee's previous Annual Salary
    
    //Map/Process the inputs -> Outputs
    RtroPay = ((AnnualSl + NewAnnS) / 2) * pay_incr; //Calculates Retroactive Pay
    NewAnnS = AnnualSl + (AnnualSl * pay_incr);     //Calculates New Annual Sal
    NewMonS = NewAnnS / 12;                //Calculates New Monthly Sal
    
    //Display Inputs/Outputs
    cout<<"Retroactive pay    = $"<<setw(7)<<fixed<<setprecision(2)<<RtroPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<fixed<<setprecision(2)<<NewAnnS<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<fixed<<setprecision(2)<<NewMonS;
    
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}