 /* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 18th, 2023, 10:15 AM
 * Purpose:  Savings and Inflation Calculator
             Utilizing Arrays!
 */
//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const unsigned char PERCENT=100;//Percent Conversion

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    const int SIZE=100;       //Max array size = 100 for 100 years
    float bp,                 //Initial balance or price $'s
          sc[SIZE],           //Savings or cost over time $'s - Allocated Array
           i;                 //Interest, Investment Rate or Inflation Rate %
    unsigned char n;          //Number of compounding periods years     
    
    //Initialize Variables
    n=2.4e1f;                  //24 years
    n=n<SIZE?n:SIZE-1;         //Safety so n < SIZE
    bp=1.0e2f;                 //$100.00
    sc[0]=bp;                  //Initialize our savings/cost  -- Initialized array
    i=6;                       //Inv/Inf rate in Percent
    
    //Display Header
    cout<<"Savings or Cost Calculator"<<endl<<endl;
    cout<<"$"<<bp<<" = Balance or Price"<<endl;
    cout<<i<<"% = Interest/Investment or Information Rate"
            <<endl<<endl;
    cout<<"Year   Amount    Rate"<<endl;
    cout<<setw(3)<<0<<setw(4)<<"$"<<
            fixed<<setprecision(2)<<showpoint<<setw(6)<<bp;
    
    //Map/Process the Inputs -> Outputs
    i/=PERCENT;
    for(int year=1;year<=n;year++){
        float interest=sc[year-1]*i;
        cout<<"  $"<<setw(5)<<interest<<endl;
        
        //Take what's in savings in previous year (-1) and add interest
        sc[year]=sc[year-1]+interest;       
        cout<<setw(3)<<year<<setw(4)<<"$"<<     
            fixed<<setprecision(2)<<showpoint
            <<setw(6)<<sc[year];        //print out the present year
    }
    cout<<"  $"<<setw(5)<<sc[n]*i<<endl;    //need to calculate last element of last column (interest)

    return 0;
}