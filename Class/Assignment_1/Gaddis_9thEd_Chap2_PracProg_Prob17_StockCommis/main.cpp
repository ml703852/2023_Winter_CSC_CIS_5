/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 13, 2023, 7:42 PM
 * Purpose: Calculate stock without commission, commission, 
 *          and total amount paid for stock + commission
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
    int share = 750, price = 35;
    float commis = .02, a_woc, a_wc, total_a;   
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    a_woc = price * share;   //Amount paid without commission = price * share
    a_wc = (price * commis) * share;    //Amount with commission * price, then * share
    total_a = price + commis;        //Total amount = price + commission
    
    //Display Inputs/Outputs
    cout<<"The amount paid for the stock alone, without commision, is: $"<<a_woc<<endl;
    cout<<"The amount of the commission is: $"<<a_wc<<endl;
    cout<<"The total amount paid is: $"<<total_a<<endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}