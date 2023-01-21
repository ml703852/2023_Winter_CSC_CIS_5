/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 10, 2023, 4:29 PM
 * Purpose: Switch Case
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cstdlib>  //Random number functions
#include <ctime>    //Time to set Random number seed
#include <string>   //String Object
#include <iomanip>  //Format Library

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char score;
    char grade;
    const short PERFECT=10, ASCR=9, BSCR=8, CSCR=7, DSCR=6;
    
    //Initialize Variables
    score = rand()%51+50;//[50-100]
    
    //Map/Process the inputs -> Outputs
    switch(score/10){
        case PERFECT:
        case ASCR: grade = 'A';break;
        case BSCR: grade = 'B';break;
        case CSCR: grade = 'C';break;
        case DSCR: grade = 'D';break;
        default: grade= 'F';
        
    }

    
    //Display Inputs/Outputs
    cout << "The score of " << static_cast<int>(score) 
            << " gives a grade = " << grade << endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}