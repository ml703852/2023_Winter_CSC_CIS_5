/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 9:01 PM
 * Purpose: Score a Rock, Paper, Scissors Game
 */

// System Libraries
#include <iostream> // Input Output Library 
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    
    //User Input
    char PLAYER1, 
            PLAYER2;
    
    
    //Initialize Variables
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>PLAYER1>>PLAYER2;

    
    //Map/Process the inputs -> Outputs
  
    //If/Else If statements
   
    
        //Paper Covers Rock
        if ((PLAYER1 == 'p'||PLAYER1 == 'P') && (PLAYER2 == 'r'||PLAYER2 =='R')){
            cout<<"Paper covers rock.";
        }
        else if ((PLAYER1 == 'r'||PLAYER1 == 'R') && (PLAYER2 == 'p'||PLAYER2 =='P')){
            cout<<"Paper covers rock.";
        }
    
        //Rock Breaks Scissors
        else if ((PLAYER1 == 'r'||PLAYER1 == 'R') && (PLAYER2 == 's'||PLAYER2 =='S')){
            cout<<"Rock breaks scissors.";
        }
        else if ((PLAYER1 == 's'||PLAYER1 == 'S') && (PLAYER2 == 'r'||PLAYER2 =='R')){
            cout<<"Rock breaks scissors.";
        }
    
        //Scissor Cuts Paper
        else if ((PLAYER1 == 's'||PLAYER1 == 'S') && (PLAYER2 == 'p'||PLAYER2 =='P')){
            cout<<"Scissors cuts paper.";
        }
        else if ((PLAYER1 == 'p'||PLAYER1 == 'P') && (PLAYER2 == 's'||PLAYER2 =='S')){
            cout<<"Scissors cuts paper.";
        }
    
    
       //Nobody wins if input is the same
        else if ((PLAYER1 == 'p' || 'P' && PLAYER2 == 'p' || 'P') || 
                  (PLAYER1 == 'r' || 'R' && PLAYER2 == 'r' || 'R') ||
                (PLAYER1 == 's' || 'S' && PLAYER2 == 's' || 'S')){
            
            cout<<"Nobody wins."<<endl;
        }

    //Display Inputs/Outputs
    
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}