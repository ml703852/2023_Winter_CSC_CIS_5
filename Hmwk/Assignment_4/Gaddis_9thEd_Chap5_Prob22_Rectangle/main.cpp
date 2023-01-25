/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 8:09 PM
 * Purpose: Rectangle with same number of rows as columns
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
    int size;       //Size of the pattern
    char lt;        //Character the pattern will use
    
    //Initialize Variables
    cin>>size>>lt;
    cin>>lt;
    
    //Map/Process the inputs -> Outputs
    
    //WHILE LOOP to make sure size is within a certain range
    while(size > 15 || size <= 0){
        cout<<"Insert a number less than 15, or greater than 0."<<endl;
        cin>>size>>lt;
    }
    
    //FOR LOOP to iterate through each row and column
    for (int i=0; i < size; i++){            //row
        for (int j = 1; j <= size; j++){     //column
            cout<<lt;
        }
        if (i < size - 1){
        cout<<endl;
    }
    }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}