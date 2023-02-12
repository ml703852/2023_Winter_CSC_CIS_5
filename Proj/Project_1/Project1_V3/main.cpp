/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 2nd, 2023, 3:36 PM
 * Purpose: Project 1: Casino Game
            VERSION 3 
 */

// System Libraries
#include <iostream>  // Input Output Library 
#include <iomanip>   //Format Library
#include <cstring>   //String Object
#include <cstdlib>   //Random number generator

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    
    //Declare Variables
    string UsrName;            //Allow User to enter their name
    float UsrDpst;             //The min deposit User has to make to enter Casino
    char VorL, YorN;           //Visit or Leave   /   Yes or No
    unsigned int UsrBlnce;     //User Balance Through Each Game


    //Initialize Variables

    //Ask User to input their Player (first) Name
    cout<<"Welcome! Please enter your first name to begin.\n";
    cin>>UsrName;

    //Introduce Player to Casino and Rules
    cout<<"\n                           Hi, "<<UsrName<<
            "! \n                         Welcome to the\n";

    cout<<"\n    CCCCC      A        SSSSSSSS    IIIIIIII   N     N     OOOOOO   ";
    cout<<"\n  CC          A  A      SS             II      N N   N    O      O  ";
    cout<<"\n CC          A    A     SSSSSSSS       II      N  N  N    O      O  ";
    cout<<"\n  CC        AAAAAAAA           S       II      N   N N    O      O  ";
    cout<<"\n    CCCCC  A        A   SSSSSSSS    IIIIIIII   N     N     OOOOOO   \n";

    cout<<"\n\nWe have many games here that you can participate in.";

    //Allow User to make a deposit 
    cout<<"\nTo enter, you must visit the Cashier's Cage to receive your chips.\n"<<
            "\nEnter 'V' to visit the Cashier or 'L' to leave.\n";
    cin>>VorL;
    
    //If User wants to leave the Casino, Display goodbye message and exit
    if (VorL == 'l' || VorL == 'L'){
        cout<<"Thank you for visiting the Casino. We hope to see you soon!";
        exit(0);
    }

    //Allow User to Pick which Game they want to play
    
    char chose;
    
    cout<<"\nTo play a game in the Casino, you must enter the Game's Number."<<endl;
    cout<<"Please choose from the following."<<endl;
    cout<<"\nEnter '1': Number Guessing Game -- Cost $5 -- \n"<<endl;
    cin>>chose;
    
    switch (chose){
        case '1':{

            //Map/Process the inputs -> Outputs
            
            unsigned int UsrBlnce;     //User Balance Through Each Game

            if (UsrBlnce > 0){
                //Checks to see if the User wants to Visit the Casino
                if (VorL == 'v' || VorL == 'V' || UsrDpst >= 15){
                    cout<<"\nHi, "<<UsrName<<"! Welcome to the Number Guessing Game!";
                    cout<<"\nMy name is John. \nTo play this game, "
                            "you must enter a bidding amount.\n\n";
                    cout<<"\nHow much money would you like to cash in?\n";
                    cin>>UsrDpst;

                    if (UsrDpst < 15){

                    //If the User Deposit is > 15, allow User to enter amount >= 15  
                    do {
                        cout<<"\nYou must enter a minimum amount of $15."<<endl;
                        cout<<"\nPlease enter a new amount.\n";
                        cin>>UsrDpst;
                        }
                    while (UsrDpst < 15);
                    }

                    //If the User's Deposit is >= $15, they may enter the Casino
                    if (UsrDpst >= 15){
                        cout<<"\nGreat! You may now enter the Casino.\n";
                    }
                }

                //Checks to see if the User wants to leave the Casino
                    else if (VorL == 'l' || VorL == 'L'){
                        cout<<"\nWe're sorry to see you go.\n"
                              "Please come again!\n";
                }
            }
            

            /* GAME 1: Number Guessing Game - Cost $5

             Allow User to guess a random number and if this random number matches the
             winning number, then User wins x money. 

             */

            //Set random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables
            unsigned int amount, bidamnt,    //Amount, Bid Amount
                         rguess,             //Random Guess (Utilizing random num seed)
                         dice,
                         newBal,
                           x;               //Var used to calculate equations

            char uexit,                      //User Exits
                 enter;                      //Allow user to Enter to Continue Game


            //Initialize Variables
            cout<<"\nWelcome to The Number Guessing Game "<<UsrName<<"!\n";

            //User must have $5 or more in their Balance to play this game 
            if (UsrDpst > 5){
                //Display rules of Game 1
                cout<<"\n -----------------------------------------------------------------------------\n";
                cout<<"  The rules of this game are as follows:\n"
                        "\n   1. The player must deposit an initial amount to start playing the game.\n"
                        "\n   2. The player is allowed to guess a number between [1,10].\n"
                        "\n   3. From there, the player must enter a betting amount on the number chosen.\n"
                        "\n   4. If the player's bid on the chosen number is correct,\n"
                             "      the player wins 10 times of money that they bet.\n"
                        "\n   5. If the player's bid on the chosen number is incorrect,\n"
                             "      the player will lose all of their betting amount.\n";
                cout<<"\n -----------------------------------------------------------------------------\n";

                cout<<"\nTo play this game, you will be charged $5.\n";
                cout<<"\nWould you like to continue?";
                cout<<"\nEnter 'Y' for Yes, 'N' for No.\n";
                cin>>YorN;


                //If User wants to Leave, they must input n, or N -> Game will exit
                if (YorN == 'n' || YorN == 'N'){
                    exit(0);
                }

                //If User enters N, provide an option to exit
                if (YorN == 'n' || YorN == 'N' ){
                    cout<<"Would you like to exit?";
                    cout<<"\nEnter 'Y' for Yes, 'N' for No.\n";
                    cin>>YorN;
                }
                    if (uexit == 'y' || uexit == 'Y'){
                            exit(0);
                    }


                /* If User enters amount >= 5, they may play the game
                  Minimum Game Entry Fee is $5 */

                if (UsrBlnce >= 5){
                    cout<<"\nThank you! You may now play the game!";
                }

                //Note: User must have a Casino Balance of at least $1 
                if (UsrDpst >= 0){

                    //In this case, get the User Deposit 
                    cout<<"\nYour Casino Balance is: $"<<UsrDpst;
                    cout<<"\nIf this is correct, enter 'Y'\n";
                    cin>>YorN;

                    //Subtract cost of game from User's Casino Balance, then output
                    x = UsrDpst - 5;
                    cout<<"Your new Casino Balance is $ "<<x;

                }
                    //Allow User to enter an Initial and Bid Amount
                    do {

                        //If User Balance is < 5, display message of minimum entry fee
                        if (UsrDpst < 5){
                            cout<<"\nSorry, you must enter a minimum of $5 to be "
                                    "eligible to play this game \n"
                                    "or have an Account Balance of $5.\n";

                            //Allow User to try again
                            cout<<"\nPlease enter the minimum entry fee.\n";
                            cin>>UsrDpst;

                        if (UsrDpst == 0 || UsrDpst < 5){
                            cout<<"\nSorry, you are not eligible to play this game.\n";
                        }
                    }
                    
                    }
                    while (UsrDpst < 5);


                    //If User Balance is >= $5, allow User to play game
                    if (UsrDpst >= 5 && (YorN == 'y' || YorN == 'Y')){
                        cout<<"\nThank you. You may now play the game!\n";
                        }
                    }

                //Map/Process the inputs -> Outputs

                    /* If User enters a bid amount > than amount deposited
                       Have them re-enter amount until valid*/
                    do {
                        cout<<"\nPlease enter the Bid Amount.\n";
                        cin>>bidamnt;
                        cout<<"\n";

                        /* If User's bidding amount is greater than what they deposit
                         Display error message*/

                        if (bidamnt > UsrDpst){
                            cout<<"\nSorry, you are not allowed to bid more than "
                                    "the Initial Amount.\n"
                                    "\nPlease re-enter amount.\n";
                        }
                    }
                    while (bidamnt > UsrDpst);

                   //Allow the User to Pick a number [1, 10]
                    do {
                        cout<<"Guess a Number Between 1 to 10\n";
                        cin>>rguess;

                        /* If the User's Random Guess if <= 0 or > 10, 
                           then display an error message*/
                        if (rguess <= 0 || rguess > 10){
                            cout<<"Oops! The Number should be Between 1, 10\n"
                                    "Please Try Again.\n";
                        }
                    }
                    //User's Guess has to be <= 0 but less than 10 for it to be valid
                    while (rguess <= 0 || rguess > 10);


                    //If the dice number IS equal to the User's random guess..
                    if (dice == rguess){
                        amount = bidamnt * 10;
                        UsrBlnce = x + amount;
                        cout<<"Congratulations! You Won "<<"$ "<<amount;
                    }

                    //If the dice number IS NOT equal to User's random guess..
                    else if (dice != rguess) {
                        UsrBlnce = x - bidamnt;
                        cout<<"\nSorry, You Lost "<<"$ "<<bidamnt<<
                                "\nBetter Luck Next Time!\n";
                    }

                    //Display the winning number from dice
                    cout<<"\nThe Winning Number Was: "<<dice<<"\n";

                    //Calculate new User Balance by adding the newBal + UserBlnce

                    //Output User's New Casino Balance
                    cout<<"\n"<<UsrName<<", Your New Casino Balance is now $"
                            <<UsrBlnce;

            }   

        }

     /* GAME 2: BlackJack - Cost $5
     
     Allow User to guess a random number and if this random number matches the
     winning number, then User wins x money. 
     
     */

    return 0;

}