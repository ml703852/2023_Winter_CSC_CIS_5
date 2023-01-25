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
    
  //Declare  Variables here
    int n1000s, n100s, n10s, n1s;
    unsigned short arabic;
    string romnNm = "";

    //Initialize Variables here
    cout<<"Arabic to Roman numeral conversion." << endl;
    cout<<"Input the integer to convert." << endl;
    cin >> arabic;
    
    //Convert the n digits
    n1000s = arabic / 1000;
    n100s = (arabic - n1000s * 1000) / 100;
    n10s = arabic % 100/ 10;
    n1s = arabic % 10;

    //Map inputs/knowns to the output
    
    
    //Conversion - n1000s
    switch(n1000s){
        case 3: romnNm += "M";
        case 2: romnNm += "M";
        case 1: romnNm += "M";
    }
    
    //Conversion - n100s
    switch(n100s){
        case 9: {
            romnNm += "C";
            romnNm += "M";
            break;
        }
        
        case 8: case 7: case 6: {
            romnNm += "D";
            for (int i = 0; i < n100s - 5; i++) 
                romnNm += "C";
            break;
        }
        
        case 5: {
            romnNm += "D";
            break;
        }
        
        case 4: {
            romnNm += "C";
            romnNm += "D";
            break;
        }
        
        case 3: case 2: case 1: {
            for (int i = 0; i < n100s; i++) 
                romnNm += "C";
            break;
        }

    }
    
    //Conversion - n10s
     switch(n10s){
        case 9: {
            romnNm += "X";
            romnNm += "C";
            break;
        }
        
        case 8: case 7: case 6: {
            romnNm += "L";
            for (int i = 0; i < n10s - 5; i++) 
                romnNm += "X";
            break;
        }
        
        case 5: {
            romnNm += "L";
            break;
        }
        
        case 4: {
            romnNm += "X";
            romnNm += "L";
            break;
        }
        
        case 3: case 2: case 1: {
            for (int i = 0; i < n10s; i++) 
                romnNm += "X";
            break;
        }
    }
    //Conversion - n1s
    switch(n1s){
        case 9: {
            romnNm += "I";
            romnNm += "X";
            break;
        }
        
        case 8: case 7: case 6: {
            romnNm += "V";
            for (int i = 0; i < n1s - 5; i++) 
                romnNm += "I";
            break;
        }
        
        case 5: {
            romnNm += "V";
            break;
        }
        
        case 4: {
            romnNm += "I";
            romnNm += "V";
            break;
        }
        
        case 3: case 2: case 1: {
            for (int i = 0; i < n1s; i++) 
                romnNm += "I";
            break;
        }
    }

    //Display Output
    (arabic < 1000 || arabic > 3000)
        ? cout<<arabic<<" is Out of Range!"
        : cout<<arabic<<" is equal to "<<romnNm;
    
    return 0;
    
}