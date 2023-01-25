/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVLBSG=45359.2/100;   //Conversion lbs to grams CNVLBSG


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float dsrdWt,   //Desired Weight lbs
          msMass,   //Mass of Mouse grams
          msKill,   //Mass of sweetener with kills the mouse grams 
          msCokcn,  //Mass of can diet coke grams
          cncntBn,  //Concentration of sweetener in Coke can Decimal
          wtKill,   //Calculate Wt Kill a Person -> msKill/msMass*dsrdWt in lbs
          dsKill,   //Same calculate converted to grams
          ms1Can;   //Amount of sweetener in 1 Can of coke grams
    int nCans;      //How many cans of coke are required to kill the dieter 
    
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    cin>>dsrdWt;
    msMass = 35;
    msKill = 5;
    msCokcn = 350,
    cncntBn = 0.001f;
    
    //Map inputs -> outputs
    wtKill = msKill/msMass*dsrdWt;  //Simple ratio, proportionality
    dsKill = wtKill*CNVLBSG;        //Conversion to Mass
    ms1Can = msCokcn * cncntBn;     //Calculating the mass of sweetener in a Can
    nCans = dsKill/ms1Can;          //How many cans of coke 
    
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans"<<endl;
    cout<<"which can be consumed is "<<nCans<<" cans";

    //Exit stage right or left!
    return 0;
}