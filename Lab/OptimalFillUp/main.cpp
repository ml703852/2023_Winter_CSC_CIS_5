/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 13, 2023, 5:21 PM
 * Purpose:  Which Station is best to fill gas at? 
 */

// System Libraries
#include <iostream> // Input Output Library 
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
    
            //Variables with given input
    float mpg = 16,             //Miles per gallon
            so_tank = 22,       //Size of Gas Take in Gallons
            FgRdg = 0.25,       //Fuel Gage Reading
            st1Dis = 10,        //Distance from station 1 - miles
            st2Dis = 0.5,       //Distance from station 2 - miles
            PpG_1 = 3.85,       //Price per gallon Station 1 
            PpG_2 = 3.95,       //Price per gallon Station 2
            
            //Variables needed to calculate
            GasUsd1, GasUsd2,   //Gas used to get to Station 1, 2
            CstF1, CstF2,     //Cost to fill tank in Gallons
            GTnkFil;            //Gallons to Fill Tank
 
    char UsrStat,              //Takes User Input -> provides information for given Station
            Choice1,Choice2;
    
    
    //Initialize Variables
    
    //Calculate Costs
    GTnkFil = so_tank * (1-FgRdg);     //How much it costs to fill Gas Tank (16.5)
    GasUsd1 = st1Dis/mpg;              //How much gas used at Stat. 1 (0.625)
    GasUsd2 = st2Dis/mpg;              //How much gas used at Stat. 2 (0.03125)
    CstF1 = GTnkFil * PpG_1;           //Cost to fill at Stat. 1 ($65.93)
    CstF2 = GTnkFil * PpG_2;           //Cost to fill at Stat. 2 ($65.30)
    
 
    //Map/Process the inputs -> Outputs
    
    //Display Inputs/Outputs
    
    //Giving User General Information
    cout<<"Which Station should you purchase gas at?\n"<<endl;
    cout<<"GENERAL INFORMATION:\n"<<"MPG(miles per gallon) = 16\n";
    cout<<"Size of Gas Intake: 22 Gallons\n"<<"Fuel Gage Reading: 0.25\n";
    
    //Where User Inputs 1/2 to receive information about Station
    cout<<"\nPlease enter 1 or 2 to receive information about each Station."<<endl;
    cin>>UsrStat;
    
    if (UsrStat == '1'){
        cout<<"\nStation 1: FUEL COST INFORMATION\n";
        cout<<"Distance from Station: 10 miles\nGas used to get";
        cout<<" to Station: 0.625 gallons\nPrice Per Gallon: $3.85\n";
        cout<<"Total Cost to Fill: $65.93"<<endl;
    }
    
    if (UsrStat == '2'){
        cout<<"\nStation 2: FUEL COST INFORMATION\n";
        cout<<"Distance from Station: 0.5 miles\nGas used to get";
        cout<<" to Station: 0.03125 gallons\nPrice Per Gallon: $3.95\n";
        cout<<"Total Cost to Fill: $65.30\n";
        cout<<"\nTherefore, the best Station for Fuel Optimization is Station 2."<<endl;
    }
    
    else if (UsrStat != '1' && UsrStat != '2') {
        cout<<"I'm sorry, I don't understand. Please try again."<<endl;
    }
   
            
    //Clean up memory and files
    
    //Exit Program
    return 0;
}