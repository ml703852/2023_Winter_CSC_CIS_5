 /* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 17, 2023, 12:05 PM
 * Purpose: Place each runner and their Run Time, and
  *         Display if they came in 1st, 2nd, or 3rd
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    string Runner1, Runner2, Runner3;   
    
    int R1Time, R2Time, R3Time;     //Time of each runner
    
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    cin>>Runner1>>R1Time>>Runner2>>R2Time>>Runner3>>R3Time;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if Run Times are less than 0
    //If so, return 0
    if ((R1Time < 0 || R2Time < 0 || R3Time < 0)) {
        return 0;
    }
    
        //Test every different possibility for each Run Time
    
            if (R1Time < R2Time && R1Time < R3Time) {
        
                if (R2Time < R3Time){
                    cout<<Runner1<<"\t"<<setw(3)<<R1Time<<endl;
                    cout<<Runner2<<"\t"<<setw(3)<<R2Time<<endl;
                    cout<<Runner3<<"\t"<<setw(3)<<R3Time;
                }

                else {
                    cout<<Runner1<<"\t"<<setw(3)<<R1Time<<endl;
                    cout<<Runner3<<"\t"<<setw(3)<<R3Time<<endl;
                    cout<<Runner2<<"\t"<<setw(3)<<R2Time;
                }
            }   

            else if (R2Time < R1Time && R2Time < R3Time) {
        
                if (R1Time < R3Time){
                    cout<<Runner2<<"\t"<<setw(3)<<R2Time<<endl;
                    cout<<Runner1<<"\t"<<setw(3)<<R1Time<<endl;
                    cout<<Runner3<<"\t"<<setw(3)<<R3Time;
                }

                else{
                    cout<<Runner2<<"\t"<<setw(3)<<R2Time<<endl;
                    cout<<Runner3<<"\t"<<setw(3)<<R3Time<<endl;
                    cout<<Runner1<<"\t"<<setw(3)<<R1Time;
                }
            }

            else {
        
                if (R1Time < R2Time) {
                    cout<<Runner3<<"\t"<<setw(3)<<R3Time<<endl;
                    cout<<Runner1<<"\t"<<setw(3)<<R1Time<<endl;
                    cout<<Runner2<<"\t"<<setw(3)<<R2Time;
                }

                else {
                    cout<<Runner3<<"\t"<<setw(3)<<R3Time<<endl;
                    cout<<Runner2<<"\t"<<setw(3)<<R2Time<<endl;
                    cout<<Runner1<<"\t"<<setw(3)<<R1Time;
                    
                    
                }
            }
    
    //Display Inputs/Outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}
    
