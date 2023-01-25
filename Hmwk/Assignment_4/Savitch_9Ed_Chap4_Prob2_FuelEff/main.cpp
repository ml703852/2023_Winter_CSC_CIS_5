/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 4:07 PM
 * Purpose: MPG Conversion Problem
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float liter = 0.264179f; // 1 Liter

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int litrGas;            //Liters of gasoline
    float miTrvl,             //Miles traveled
          miPerG1, miPerG2,   //Miles per Gallon for Car 1 and Car 2
          Gallon;             //Var to compute number of miles per gallon
    char YN;                //Asks user if they want to continue (Y), or not (N)
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    do {
        cout<<"Car 1\n"<<"Enter number of liters of gasoline:"<<endl;
        cin>>litrGas;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miTrvl;
        Gallon = 0.264179f * litrGas;
        miPerG1 = miTrvl / Gallon;
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<miPerG1<<"\n"<<endl;
    
        cout<<"Car 2\n"<<"Enter number of liters of gasoline:"<<endl;
        cin>>litrGas;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miTrvl;
        Gallon = 0.264179f * litrGas;
        miPerG2 = miTrvl / Gallon;
        cout<<"miles per gallon: "<<fixed<<setprecision(2)<<miPerG2<<"\n"<<endl;
    
        if (miPerG1 > miPerG2)
            cout<<"Car 1 is more fuel efficient\n"<<endl;
        else
            cout<<"Car 2 is more fuel efficient\n"<<endl;
        
        cout<<"Again:\n";
        cin>>YN;
        
        if (YN == 'y' || YN == 'Y'){
            cout<<endl;
        }
    }
    while ((YN == 'y') || (YN == 'Y'));

    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}