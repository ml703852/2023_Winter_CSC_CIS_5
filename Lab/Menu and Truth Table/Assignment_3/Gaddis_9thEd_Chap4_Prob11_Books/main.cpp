/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 6:39 PM
 * Purpose:  Calculate number of books purchased in a month
             and display points awarded for each purchase
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
    int Books,              //Number of Books User inserts
            AwrdPts;        //Points Awarded for each purchase
    
    //Initialize Variables
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>Books;
    cout<<"Books purchased ="<<setw(3)<<Books<<endl;
    
    //Map/Process the inputs -> Outputs
    if (Books == 0){
        AwrdPts = 0;
        cout<<"Points earned   ="<<setw(3)<<AwrdPts;
    }
    else if (Books == 1){
        AwrdPts = 5;
        cout<<"Points earned   ="<<setw(3)<<AwrdPts;
    }
    else if (Books == 2){
        AwrdPts = 15;
        cout<<"Points earned   ="<<setw(3)<<AwrdPts;
    }
    else if (Books == 3){
        AwrdPts = 30;
        cout<<"Points earned   ="<<setw(3)<<AwrdPts;
    }
    else if (Books >= 4){
        AwrdPts = 60;
        cout<<"Points earned   ="<<setw(3)<<AwrdPts;
    }
    
    //Display Inputs/Outputs


    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}