/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 27, 2023 9:18 PM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
string numtoeng(int);       //Numeric dollars to English function

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    unsigned short number;
    int e1000s, e100s, e10s, e1s;
    string nD = "";                //Num $ -> English

    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    cout<<numtoeng(number)<<"and no/100's Dollars"<<endl;
    return 0;

}
    //Call function inside of main
string numtoeng(int number){
    int e1000s, e100s, e10s, e1s;
    string nD;
    
    //Input or initialize values Here
    nD = "";

    
    //Calculate the 1000's, 100's, 10's and 1's
    e1000s=number/1000;
    number-=e1000s*1000;
    e100s=number/100;
    number-=e100s*100;
    e10s=number/10;
    number-=e10s*10;
    e1s=number;
    
    
    //Convert e1000s
    if(e1000s==9)nD+="Nine Thousand ";
    if(e1000s==8)nD+="Eight Thousand ";
    if(e1000s==7)nD+="Seven Thousand ";
    if(e1000s==6)nD+="Six Thousand ";
    if(e1000s==5)nD+="Five Thousand ";
    if(e1000s==4)nD+="Four Thousand ";
    if(e1000s==3)nD+="Three Thousand ";
    if(e1000s==2)nD+="Two Thousand ";
    if(e1000s==1)nD+="One Thousand ";
    
    
    //Convert e100s
    if(e100s==9)nD+="Nine Hundred ";
    if(e100s==8)nD+="Eight Hundred ";
    if(e100s==7)nD+="Seven Hundred ";
    if(e100s==6)nD+="Six Hundred ";
    if(e100s==5)nD+="Five Hundred ";
    if(e100s==4)nD+="Four Hundred ";
    if(e100s==3)nD+="Three Hundred ";
    if(e100s==2)nD+="Two Hundred ";
    if(e100s==1)nD+="One Hundred ";
    
    //Calculate e10s
    if(e10s==9)nD+="Ninety ";
    if(e10s==8)nD+="Eighty ";
    if(e10s==7)nD+="Seventy ";
    if(e10s==6)nD+="Sixty ";
    if(e10s==5)nD+="Fifty ";
    if(e10s==4)nD+="Forty ";
    if(e10s==3)nD+="Thirty ";
    if(e10s==2)nD+="Twenty ";
    if(e10s==1){

    //Calculate e1s
    if(e1s==9)nD+="Nineteen ";
    if(e1s==8)nD+="Eighteen ";
    if(e1s==7)nD+="Seventeen ";
    if(e1s==6)nD+="Sixteen ";
    if(e1s==5)nD+="Fifteen ";
    if(e1s==4)nD+="Fourteen ";
    if(e1s==3)nD+="Thirteen ";
    if(e1s==2)nD+="Twelve ";
    if(e1s==1)nD+="Eleven ";
    }

    //Calculate e1s if less than 10
    else{
        if(e1s==9)nD+="Nine ";
        if(e1s==8)nD+="Eight ";
        if(e1s==7)nD+="Seven ";
        if(e1s==6)nD+="Six ";
        if(e1s==5)nD+="Five ";
        if(e1s==4)nD+="Four ";
        if(e1s==3)nD+="Three ";
        if(e1s==2)nD+="Two ";
        if(e1s==1)nD+="One ";
    
    }
    
    //Exit
    return nD;
}