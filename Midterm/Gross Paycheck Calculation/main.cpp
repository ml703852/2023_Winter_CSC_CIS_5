/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 26, 2023 7:38 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate,
            GrssPay,           //Gross pay (output)
            amnt1, amnt2;       //Amount1 and Amount2 to calculate rate of pay
          
    unsigned short hrsWrkd,     //Hours worked 
                   workH,       //Work time and a half for all hours worked
                   workDT;      //Double time for working over 40 hours
                   
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    
    //Calculate Paycheck
    if (hrsWrkd <= 20){
        GrssPay = payRate * hrsWrkd;
    }

    
    else if (hrsWrkd <= 40){
        workH = hrsWrkd - 20;
        amnt1 = workH * 1.5;
        GrssPay = payRate * (amnt1 + 20);
    }

    else if (hrsWrkd > 40){
        workH = 20;
        amnt1 = workH * 1.5;
        workDT = hrsWrkd - 40;
        amnt2 = workDT * 2;
        GrssPay = (amnt1 + amnt2 + 20) * payRate;
    }
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<GrssPay<<endl;
    
    
    //Exit
    return 0;
}