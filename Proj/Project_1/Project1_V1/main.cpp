/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 2nd, 2023, 11:30 AM
 * Purpose: Project 1: Casino Game
            VERSION 1  
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>
#include <cstring>

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    
    //Declare Variables
    string UsrName;     //Allow User to enter their name
    float UsrDpst;      //The min deposit User has to make to enter Casino
    char VorL, YorN;    //Visit or Leave   /   Yes or No
    
    
    //Initialize Variables
    
    //Ask User to input their name
    cout<<"Welcome! Please enter your name to begin.\n";
    cin>>UsrName;
    
    //Introduce Player to Casino and Rules
    cout<<"\n                           Hi, "<<UsrName<<
            "! \n                         Welcome to the\n";
    
    cout<<"\n    CCCCC      A        SSSSSSSS    IIIIIIII   N     N     OOOOOO   ";
    cout<<"\n  CC          A  A      SS             II      N N   N    O      O  ";
    cout<<"\n CC          A    A     SSSSSSSS       II      N  N  N    O      O  ";
    cout<<"\n  CC        AAAAAAAA           S       II      N   N N    O      O  ";
    cout<<"\n    CCCCC  A        A   SSSSSSSS    IIIIIIII   N     N     OOOOOO   \n";
    
    cout<<"\n\nWe have many games here that you can participate in.";
    
    //Allow User to make a deposit 
    cout<<"\nTo enter, you must visit the Cashier's Cage to receive your chips.\n"<<
            "\nEnter 'V' to visit the Cashier or 'L' to leave.\n";
    cin>>VorL;
    
    
    //Map/Process the inputs -> Outputs
    
    //Checks to see if the User wants to Visit the Casino
    if (VorL == 'v' || VorL == 'V' && UsrDpst >= 15){
        cout<<"\nHi! My name is John. \nHow much money would you like to cash in?\n";
        cin>>UsrDpst;
  
        if (UsrDpst < 15){
            
        //If the User Deposit is > 15, allow User to enter amount >= 15  
        do {
            cout<<"\nYou must enter a minimum amount of $15."<<endl;
            cout<<"\nPlease enter a new amount.\n";
            cin>>UsrDpst;
            }
        while (UsrDpst < 15);
        }
            
        //If the User's Deposit is >= $15, they may enter the Casino
        if (UsrDpst >= 15){
            cout<<"\nGreat! You may now enter the Casino.";
        }
    }
    
    //Checks to see if the User wants to leave the Casino
    else if (VorL == 'l' || VorL == 'L'){
        cout<<"\nWe're sorry to see you go.\n"
              "Please come again!";
    }
    
    return 0;
}