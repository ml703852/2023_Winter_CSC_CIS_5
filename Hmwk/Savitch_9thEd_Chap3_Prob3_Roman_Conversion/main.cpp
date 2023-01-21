/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 3:00 PM
 * Purpose:Convert Arabic to Roman Numeral  
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
    int arabic, n1000s, n100s, n10s, n1s, Year;
    string romnNm = "" ;  //Roman Number
    
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
    
    if (arabic < 1000 || arabic > 3000){
        cout<<arabic<<" is Out of Range!";
        return 0;
    }
    
    //Map/Process the inputs -> Outputs
    
    //Calculate the digits
    n1000s = arabic/1000;
    n100s = (arabic - (n1000s * 1000));
    // n100s = (arabic - n1000s * 1000)/100;
    n10s = (arabic % 100)/10;
    n1s = arabic % 10;
    cout<<n1000s<<n100s<<n10s<<n1s<<"=";
    
    
    
    //Calculate n1000s
    switch (n1000s){
        case 3: romnNm += "M";
        case 2: romnNm += "M";
        case 1: romnNm += "M";
    }
    
    //Calculate n100s
    switch (n100s){
        case 9: romnNm += "CM";
        break;
        case 8: romnNm += "DCCC";
        break;
        case 7: romnNm += "DCC";
        break;
        case 6: romnNm += "DC";
        break;
        case 5: romnNm += "D";
        break;
        case 4: romnNm += "CD";
        break;
        case 3: romnNm += "C";
        case 2: romnNm += "C";
        case 1: romnNm += "C";
     
    }
    
    //Calculate n10s
        switch (n10s){
        case 9: romnNm += "XC";
        break;
        case 8: romnNm += "LXXX";
        break;
        case 7: romnNm += "LXX";
        break;
        case 6: romnNm += "LX";
        break;
        case 5: romnNm += "L";
        break;
        case 4: romnNm += "XL";
        break;
        case 3: romnNm += "X";
        case 2: romnNm += "X";
        case 1: romnNm += "X";
    }
    
    //Calculate n1s
        switch (n1s){
        case 9: romnNm += "IV";
        break;
        case 8: romnNm += "VIII";
        break;
        case 7: romnNm += "VII";
        break;
        case 6: romnNm += "VI";
        break;
        case 5: romnNm += "V";
        break;
        case 4: romnNm += "IV";
        break;
        case 3: romnNm += "I";
        case 2: romnNm += "I";
        case 1: romnNm += "I";
    }
    
    //Display Inputs/Outputs
    cout<<romnNm<<endl;
            
    //Clean up memory and files
    
    //Exit Program
    return 0;
}