/* 
 * File:   main.cpp
 * Author: Mehak Lohchan        
 * Created on January 16, 2023, 10:57 AM
 * Purpose: How many calories/cookie?
 */

// System Libraries
#include <iostream> // Input Output Library 
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int Ckiebag = 40,   //40 Cookies in one bag
          CALORbg = 300,     //300 Calories per bag
          srvngs = 10;      //10 Servings per bag

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float amCkies,      //Amount of Cookies consumed by User
          clries,
          totlCal;      //Total Calories consumed by User

    
    //Initialize Variables
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl; 
    cin>>amCkies;           //User enters amount of cookies they ate
    clries = 75;
    
    
    //Map/Process the inputs -> Outputs
    totlCal = clries * amCkies;    //Total Calories consumed
    
    //Display Inputs/Outputs
    cout<<"You consumed "<<totlCal<<" calories.";
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}