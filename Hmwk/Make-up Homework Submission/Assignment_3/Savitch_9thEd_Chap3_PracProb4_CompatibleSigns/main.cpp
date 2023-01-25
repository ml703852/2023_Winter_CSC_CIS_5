/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 10:35 PM
 * Purpose: Horoscope compatibility
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
    string Sign1, Sign2;
    
    //Initialize Variables
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>Sign1>>Sign2;
    
    //Map/Process the inputs -> Outputs

    
    //FIRE SIGNS
    if ((Sign1 == "Aries" || Sign1 == "Leo" || Sign1 == "Sagittarius") && (Sign2 == "Aries" || Sign2 == "Leo" || Sign2 =="Sagittarius")) {
        cout<<Sign1<<" and "<<Sign2<<" are compatible Fire signs.";
        }
                
        //EARTH SIGNS        
            else if ((Sign1 == "Taurus" || Sign1 == "Virgo" || Sign1 == "Capricorn") && (Sign2 == "Taurus" || Sign2 == "Virgo" || Sign2 == "Capricorn")) {
                cout<<Sign1<<" and "<<Sign2<<" are compatible Earth signs.";
                }
            
        //AIR SIGNS
            else if ((Sign1 == "Gemini" || Sign1 == "Libra" || Sign1 == "Aquarius") && (Sign2 == "Gemini" || Sign2 == "Libra" || Sign2 =="Aquarius")){
                cout<<Sign1<<" and "<<Sign2<<" are compatible Air signs."; 
            }
        
            //WATER SIGNS
            else if ((Sign1 == "Cancer" || Sign1 == "Scorpio" || Sign1 == "Pisces") && (Sign2 == "Cancer" || Sign2 == "Scorpio" || Sign2 == "Pisces")){
                cout<<Sign1<<" and "<<Sign2<<" are compatible Water signs."; 
            }
        
    else 
        cout<<Sign1<<" and "<<Sign2<<" are not compatible signs.";
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}