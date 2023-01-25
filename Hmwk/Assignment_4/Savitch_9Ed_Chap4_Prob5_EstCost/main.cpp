/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 22, 2023, 5:30 PM
 * Purpose: Estimated Cost
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const float oneyr = 1;
            

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    float CPrice,                 //Current price
          PriceLY,                //Price of last year
          Price1Y, Price2Y,       //Price in one year, Price in two years
          InfltnR;                //Inflation Rate
    char YN;                      //User Input
    //Initialize Variables
    
    //Map/Process the inputs -> Outputs
    do 
        {
        cout<<"Enter current price:"<<endl;
        cin>>CPrice;
        cout<<"Enter year-ago price:"<<endl;
        cin>>PriceLY;
        InfltnR = ((CPrice-PriceLY)/PriceLY) * 100;
        cout<<"Inflation rate: "<<fixed<<showpoint<<setprecision(2)<<InfltnR<<"%"<<endl;
        cout<<endl;
        
        //Calculate Price of Year 1 
        Price1Y = (InfltnR * .01) * CPrice + CPrice;
        cout<<"Price in one year: $"<<fixed<<showpoint<<setprecision(2)<<Price1Y<<endl;
        
        //Calculate Price of year 2
        Price2Y =(InfltnR * .01) * Price1Y + Price1Y;
        cout<<"Price in two year: $"<<fixed<<showpoint<<setprecision(2)<<Price2Y<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
        cin>>YN;
        
        //IF ElSE to test user input, use of char
        
        if (YN == 'y' || YN == 'Y'){
        cout<<endl;
        }
        
        } 
    while ((YN =='y'|| YN =='Y'));
    
    //Display the outputs
    
    //Clean up memory and files
    
    //Exit Program
    return 0;
}