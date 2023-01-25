/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 16, 2023, 6:41 PM
 * Purpose: Calculate room occupancy and limits
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
    int NumPpl,             //Number of people attending the meeting
            RmCpcty,        //Maximum Room Capacity
            MCBH,           //Meeting can be held
            MCNBH;          //Meeting can not be held
            
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>NumPpl; cin>>RmCpcty;
    
    //Initialize Variables
    MCBH = NumPpl - RmCpcty;          
    MCNBH = RmCpcty - NumPpl;
    
    
    //Map/Process the inputs -> Outputs
    
        //Test Case 1 - Meeting can be held
        if (NumPpl >= RmCpcty) {        
            cout<<"Meeting can be held."<<endl;
            cout<<"Increase number of people by "<<MCBH<<" will be allowed ";
            cout<<"without violation.";
    }
    
        //Test Case 0 - Meeting cannot be held
        else if (NumPpl <= RmCpcty) {
            cout<<"Meeting cannot be held."<<endl;
            cout<<"Reduce number of people by "<<MCNBH<<" to avoid ";
            cout<<"fire violation.";
        }

    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}