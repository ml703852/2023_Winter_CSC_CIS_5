/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 23, 2023, 6:34 PM
 * Purpose: Rate of Inflation
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
    float itmPrce,        //Price of a Item
          YrAPrce,        //The price a year ago
          InfltnR,        //Inflation Rate
          percent,
          Year1, Year2;
    
    char YN;              //User inputs 'Y' to continue, or 'N' to exit
            
            
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    
    do{
        cout<<"Enter current price:"<<endl;
        cin>>itmPrce;
        cout<<"Enter year-ago price:"<<endl;
        cin>>YrAPrce;
        
        InfltnR = (itmPrce/YrAPrce) - 1;
        percent = InfltnR * 100;
        
        cout<<"Inflation rate: "<<setprecision(2)<<fixed<<percent
                <<"%"<<endl;
        cout<<endl;
        
        cout<<"Again:";
        cout<<endl;
        cin>>YN; 
        
        
        if (YN == 'y' || YN == 'Y'){
            cout<<endl;
        }
        
    }
    while (YN == 'y' || YN == 'Y');
        
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}