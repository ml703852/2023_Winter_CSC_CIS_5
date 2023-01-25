/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 23, 2023, 11:20 AM
 * Purpose: MPG conversion Problem
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float galLit = 0.264172f;      //Gallons per liter

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float gallons,
            mpg;        //Miles per gallon
    int liter,
        miles;
    
    char YN;            //Asks user if they want to 

    //Initialize Variables
    
    //Map/Process the inputs -> Outputs 
    do{
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter;
        cout<<endl;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<endl;
        
        cout<<"miles per gallon:"<<endl;
        mpg = miles /(liter * galLit);
        
        cout<<fixed<<showpoint<<setprecision(2)<<mpg<<endl;
        mpg = mpg = miles /(liter * galLit);
        
        
        cout<<"Again:"<<endl;
        cin>>YN;
        
        if (YN == 'y' || YN == 'Y'){
            cout<<endl;
        }
    }
        while ((YN == 'y' || YN == 'Y'));
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}