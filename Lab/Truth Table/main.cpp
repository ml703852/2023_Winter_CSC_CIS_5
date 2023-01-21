/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 10, 2023, 4:21 PM
 * Purpose: Truth Table
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
    bool x, y;
    
    //Heading
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^X  ETC..... 13 COLUMNS"<<endl<<endl;
    
    //Row 1
    x = true;
    y = true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<endl;
    
    //Row 2
    y = false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    
    //Row 3
    
    //Row 4
    
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}