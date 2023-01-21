/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 10, 2023, 4:51 PM
 * Purpose: Which Haircut
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
    bool male, supHero, anime, steak;
    string hairCut;
    
    //Initialize Variables
    male = rand()%2; //Male or Female
    supHero = rand()%2; //Hero or Villain
    anime = rand()%2; //Anime or Sitcome
    steak = rand()%2; //Steak or Sushi
    
    
    male = 0; //Male or Female
    supHero = true; //Hero or Villain
    anime = true; //Anime or Sitcome
    steak = rand()%2; //Steak or Sushi
    
    //Map/Process the inputs -> Outputs
    //x = (bool expression)?(true statement):(false statement);
    //grade = (1==1)?(true):(false);
    hairCut = (male)?
                (supHero)?
                    (steak)?
                        ("Male, Hero, Steak -> You should get a flat top"):
                        ("Male, Hero, Sushi -> You should get a pompadour"):
                    ("Male, Villain -> You should get a mohawk"):
                (supHero)?
                    (anime)?
                        ("Female, Hero, Anime -> You should go with bangs"):
                        ("Female, Hero, Sitcom -> You should get a bob"):                   
                    ("Female, Villain -> You should get a mohawk");
        
    //Display Inputs/Outputs
    cout << "What type of haircut based on " <<
            " Sex, Hero Status, Food, or Program Type\n";
    cout << hairCut << endl;
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}