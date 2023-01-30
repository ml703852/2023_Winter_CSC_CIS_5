/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 26, 2023 4:27 PM
 * Purpose:  ISP charges
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
    char package;               //package A, B, or C
    unsigned short hours;
    float chargeA = 16.99f,
          chargeB = 26.99f,
          chargeC = 36.99f;
            
            
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    
    //Basic Charges

    //Package A
    if (hours <= 10){ 
        chargeA = 16.99;
    }
        if (hours > 10 && hours <= 20){
        chargeA = 16.99 + ((hours - 10) * 0.95);
        }
        if (hours>20){ 
        chargeA = 16.99 + ((hours - 20) * 0.85) + 9.5;
        }
    
    //Package B
    if (hours<=20){
        chargeB = 26.99;
    }
        if (hours > 20 && hours <= 30){
        chargeB = 26.99 + ((hours-20) * 0.74);
        }
        if (hours > 30){ 
        chargeB = 26.99 + ((hours-30) * 0.64) + 7.4;
        }
    
    //Package C 
    chargeC = 36.99;


    if (package=='a' || package=='A'){
       cout<<"$"<<fixed<<setprecision(2)<<showpoint<<chargeA;
    
        if (chargeA <chargeB &&chargeA < chargeC){
            cout<<" A $0.00"<<endl;
        }
        if (chargeB < chargeA && chargeB < chargeC){
           cout<<" B $"<<fixed<<setprecision(2)<<showpoint<<chargeA-chargeB<<endl;
        }
        if (chargeC < chargeA && chargeC < chargeB){
             cout<<" C $"<<fixed<<setprecision(2)<<showpoint<<chargeA-chargeC<<endl;
        }
    }
     
   if (package == 'b' || package =='B'){
       cout<<"$"<<fixed<<setprecision(2)<<showpoint<<chargeB;
       
        if (chargeB < chargeA && chargeB < chargeC){
            cout<<" B $0.00"<<endl;
        }
        if (chargeA < chargeB && chargeA < chargeC){
           cout<<" A $"<<fixed<<setprecision(2)<<showpoint<<chargeB-chargeA<<endl;
        }
        if (chargeC < chargeA && chargeC < chargeB){
             cout<<" C $"<<fixed<<setprecision(2)<<showpoint<<chargeB-chargeC<<endl;
        }
   }
    
    
   if (package == 'c' || package == 'C'){
       cout<<"$"<<fixed<<setprecision(2)<<showpoint<<chargeC;
       
        if (chargeC < chargeA && chargeC < chargeB){
            cout<<" C $0.00"<<endl;
        }
        if (chargeA < chargeB && chargeA < chargeC){
           cout<<" A $"<<fixed<<setprecision(2)<<showpoint<<chargeB-chargeA<<endl;
        }
        if (chargeB < chargeA && chargeB < chargeC){
             cout<<" B $"<<fixed<<setprecision(2)<<showpoint<<chargeC-chargeB<<endl;
        }
   }
   

    //Output the cheapest package and the savings    
        
    //Exit
    return 0;
} 