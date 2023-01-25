/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 1:21 PM
 * Purpose: Compute and display a bank's service fees for the month
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
    float Month_C = 10,     //Monthly charge
            ChkFees,        //Check fees
            CBalance,       //Customer's Account Balance 
            Low_AcF = 0,        //Bank charges user if Account is low
            TFees;          //Total fees for the month
            
    int NumChks;             //Number of checks written
    
    //Initialize Variables
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>CBalance>>NumChks;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if Customers Account Balance is overdrawn, if so
    //Display an Urgent message
    if (NumChks < 0){
    return 0;
    }
    
    if (CBalance <= 0){
        cout<<"Sorry, your bank account is overdrawn.\n";
    }
    else{
        cout<<"Balance"<<setw(6)<<"$"<<setw(9)<<fixed<<setprecision(2)<<CBalance<<endl;
    }


    //Display Inputs/Outputs
    if (NumChks > 0 && NumChks <= 19){
        
        ChkFees = (NumChks * .10);
    }

    else if (NumChks >= 20 && NumChks <= 39){
        ChkFees = (NumChks * .08);
    }
    
    else if (NumChks >= 40 && NumChks <= 59){
        ChkFees = (NumChks * .06);
    }
    
    else {
        ChkFees = (NumChks * .04);
    }
    //Display fees
    cout<<"Check Fee   $"<<setw(9)<<fixed<<setprecision(2)<<ChkFees<<endl;
    cout<<"Monthly Fee $"<<setw(9)<<fixed<<setprecision(2)<<Month_C<<endl;
    
    //Calculate and display low fee
    
    if (CBalance < 400){
        Low_AcF = 15.00;
        cout<<"Low Balance $"<<setw(9)<<fixed<<setprecision(2)<<Low_AcF<<endl;
    }
    else {
        Low_AcF = 0;
        cout<<"Low Balance $"<<setw(9)<<fixed<<setprecision(2)<<Low_AcF<<endl;
    }
    
    //Calculate Total Fees for the Month
    TFees = CBalance - (Month_C + Low_AcF + ChkFees);
    cout<<"New Balance $"<<setw(9)<<fixed<<setprecision(2)<<TFees;

    //Clean up memory and files
    
    //Exit Program
    return 0;
}