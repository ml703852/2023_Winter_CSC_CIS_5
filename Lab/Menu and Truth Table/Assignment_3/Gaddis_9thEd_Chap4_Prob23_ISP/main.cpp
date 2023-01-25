/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 4:21 PM
 * Purpose: Calculate a customer's monthly internet bill
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
    char Packge;           //Which package is in use
    float BillCst;         //Cost of internet bill
    int Hours, NewHrs;      //How many hrs used

    
    //Initialize Variables
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>Packge>>Hours;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if Packge is not A,a,B,b,C,c, OR Hours is > 744
    //If so, return 0 
    NewHrs = 0;
    if ((Packge != 'A' && Packge != 'a' && Packge != 'B' && Packge != 'b' && Packge != 'C' && Packge != 'c') || (Hours > 744)){
        BillCst = 0;
        return 0;
    }
        
        //Calculate Packge A
        else if (Packge == 'A' || Packge == 'a'){
            if(Hours > 10){
                NewHrs = (Hours - 10);
            }
            BillCst = 9.95 + NewHrs * 2;
        }
        
        //Calculate Packge B
        else if (Packge == 'B' || Packge == 'b'){
            if(Hours > 20){
                NewHrs = (Hours - 20);
            }
            BillCst = (14.95 + NewHrs);
        }
        
        //Calculate Packge C
        else if (Packge == 'C' || Packge == 'c'){
            BillCst = 19.95;
        }
       
    
    //Display Inputs/Outputs
    cout<<"Bill = $ "<<fixed<<setprecision(2)<<BillCst;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}