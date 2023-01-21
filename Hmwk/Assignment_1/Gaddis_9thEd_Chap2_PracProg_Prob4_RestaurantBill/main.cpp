/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 13, 2023, 8:20 PM
 * Purpose: Compute the tax and tip for a restaurant bill with a meal
            purchase of $88.67. Tax = 6.75%, Tip = 20% of total after including
            tax. Display meal cost, tax amount, tip amount, and total bill. 
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
    float mpurch = 88.67,
            tax = .0675,
            tip = .20,
            m_w_tax = mpurch * tax,   //Calculates tax of meal
            m_w_tip = (m_w_tax + mpurch) * tip;   //Tip = take meal tax + meal purchase, then * by tip 
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Meal Cost: $"<<mpurch<<endl;
    cout<<"Tax Amount: $"<<m_w_tax<<endl;
    cout<<"Tip Amount: $"<<m_w_tip<<endl;
    cout<<"Total Bill: $"<<mpurch + m_w_tax + m_w_tip<<endl;   //Add together all created variables
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}