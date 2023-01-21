/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 10:35 PM
 * Purpose: Template to be used for all future 
            Hmwk, Labs, Exams, Projects
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
    if ((Sign1 == "Aries" || "Leo" || "Sagittarius") && (Sign2 == "Aries" || "Leo" || "Sagittarius")) {
        cout<<Sign1<<" and "<<Sign2<<" are compatible Fire signs.";
        }
            else if ((Sign1 != "Aries" || "Leo" || "Sagittarius") && (Sign2 != "Aries" || "Leo" || "Sagittarius")) {
                cout<<Sign1<<" and "<<Sign2<<" are not compatible signs.";
            }
                
        //EARTH SIGNS        
            else if ((Sign1 == "Taurus" || "Virgo" || "Capricorn") && (Sign2 == "Taurus" || "Virgo" || "Capricorn")) {
                cout<<Sign1<<" and "<<Sign2<<" are compatible Earth signs.";
                }
                    
                else if ((Sign1 != "Taurus" || "Virgo" || "Capricorn") && (Sign2 != "Taurus" || "Virgo" || "Capricorn")) {
                    cout<<Sign1<<" and "<<Sign2<<" are not compatible signs."; 
                }
            
        //AIR SIGNS
            else if ((Sign1 == "Gemini" || "Libra" || "Aquarius") && (Sign2 == "Gemini" || "Libra" || "Aquarius")){
                cout<<Sign1<<" and "<<Sign2<<" are compatible Air Signs."; 
            }
                else if ((Sign1 != "Gemini" || "Libra" || "Aquarius") && (Sign2 != "Gemini" || "Libra" || "Aquarius")){
                    cout<<Sign1<<" and "<<Sign2<<" are not compatible Signs."; 
                }
        
            //WATER SIGNS
            else if ((Sign1 == "Cancer" || "Scorpio" || "Pisces") && (Sign2 == "Cancer" || "Scorpio" || "Pisces")){
                cout<<Sign1<<" and "<<Sign2<<" are compatible Water Signs."; 
            }
                    else if ((Sign1 != "Cancer" || "Scorpio" || "Pisces") && (Sign2 != "Cancer" || "Scorpio" || "Pisces")){
                        cout<<Sign1<<" and "<<Sign2<<" are not compatible Signs."; 
                    }
        
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}