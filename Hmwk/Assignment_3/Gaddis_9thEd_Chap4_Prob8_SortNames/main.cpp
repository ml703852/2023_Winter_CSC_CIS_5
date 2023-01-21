/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 8:20 AM
 * Purpose: Sort Names using string compare
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <string>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    string name1, 
            name2,
            name3;
    
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
     if(name1 < name2 && name2 < name3){
        cout<<name1<<endl<<name2<<endl<<name3;
     }
    
    if(name2 < name1 && name1 < name3){
        cout<<name2<<endl<<name1<<endl<<name3;
    }
    
    if(name3 < name1 && name1 < name2){
        cout<<name3<<endl<<name1<<endl<<name2;
    }
    
    if(name2 < name3 && name3 < name1){
        cout<<name2<<endl<<name3<<endl<<name1;
    }
    
    if(name3 < name2 && name2 < name1){
        cout<<name3<<endl<<name2<<endl<<name1;
    }
        
    //Clean up memory and files
    
    //Exit Program
    return 0;
}