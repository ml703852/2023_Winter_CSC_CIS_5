/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 23, 2023, 7:32 PM
 * Purpose: Menu for Homework Assignment 4
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>  //Format Library
#include <cmath>    //Math Library
#include <cstdlib>  //Random number functions
#include <cstring>  //String Object
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Problem Gaddis: Sum"<<endl;
    cout<<"1 To run Problem Gaddis: PayInPennies"<<endl;
    cout<<"2 To run Problem Gaddis: MinMax"<<endl;
    cout<<"3 To run Problem Gaddis: Rectangle"<<endl;
    cout<<"4 To run Problem Gaddis: Pattern"<<endl;
    cout<<"5 To run Problem Savtich: MPG"<<endl;
    cout<<"6 To run Problem Savtich: FuelEff"<<endl;
    cout<<"7 To run Problem Savtich: Inflation"<<endl;
    cout<<"8 To run Problem Savtich: EstCost"<<endl;
    cout<<"9 To run Problem Savtich: 2or3Max"<<endl;
    cin>>chose;
    
    
    //Map/Process the inputs -> Outputs
    switch (chose){
        case '0':{
                
            //Declare Variables
            int posInt = 0,     //Positive integer
            sum;

            //Initialize Variables
            cin>>posInt; 
            //Map/Process the inputs -> Outputs
            while (posInt<0){
                cout<<"Please enter an integer greater than 0.";
                cin>>posInt;
        }

            sum = 0; 
            for (int i=1; i <= posInt; i++){
                sum += i;
            }
    
            //Display Inputs/Outputs
            cout<<"Sum = "<<sum;
            
            break;
    }
       
        case '1':{
            //Declare Variables
            int penny = 1, 
            salary = 0,
            days; 
    
            //Initialize Variables
            cin>>days;
    
            //Map/Process the inputs -> Outputs
            if (days < 1){
                cout<<"Invalid input. Input an integer greater than 1.";
            }
            else {
                for (int i=0; i<days; i++){
                    salary += penny;
                    penny *= 2;
                }
                cout<<"Pay = $"<<fixed<<setprecision(2)<<setw(4)<<salary * 0.01;
                }
            
            break; 
        }
        
        case '2':{
            //Science, Math, Conversions, Dimensions
            const int ENDPRGM = -99;        //Value that will terminate the iteration

            //Declare Variables
            int number,
                    minimum,
                    maximum;

            //Initialize Variables
            cin>>number;
            minimum = maximum = number;

            //Map/Process the inputs -> Outputs
            while (number != ENDPRGM){

                if (number < minimum){
                    minimum = number;
                }

                if (number > maximum){
                    maximum = number;
                }

                cin>>number;
            }

            //Display Inputs/Outputs
            cout<<"Smallest number in the series is "<<minimum<<endl;
            cout<<"Largest  number in the series is "<<maximum;
            
            break;
        }
        
        case '3':{
            //Declare Variables
            int size;       //Size of the pattern
            char lt;        //Character the pattern will use

            //Initialize Variables
            cin>>size>>lt;
            cin>>lt;

            //Map/Process the inputs -> Outputs

            //WHILE LOOP to make sure size is within a certain range
            while(size > 15 || size <= 0){
                cout<<"Insert a number less than 15, or greater than 0."<<endl;
                cin>>size>>lt;
            }

            //FOR LOOP to iterate through each row and column
            for (int i=0; i < size; i++){            //row
                for (int j = 1; j <= size; j++){     //column
                    cout<<lt;
                }
                if (i < size - 1){
                cout<<endl;
            }
            }
            
            break;
        }
        
        case '4':{
            //Declare Variables
            int number;
            char symbol;    //Call the symbol here

            //Initialize Variables
            cin>>number;

            //Map/Process the inputs -> Outputs
            symbol = '+';       //Initialize symbol '+' here
            for (int i = 0; i < number; i++){
                for(int j = 0; j <= i; j++){
                    cout<<symbol;
                }
                    cout<<endl;

                if(i != number){
                    cout<<endl;
                }
            }

            for(int i = 0; i < number; i++){
                for(int j = number; j > i; j--){
                    cout<<symbol;
                }
                if(i != number - 1){
                    cout<<endl;
            cout<<endl;
        }
    }
        break;
        }
        
        case '5':{
            //Science, Math, Conversions, Dimensions
            const float galLit = 0.264172f;      //Gallons per liter
            
                        //Declare Variables
            float gallons,
                    mpg;        //Miles per gallon
            int liter,
                miles;

            char YN;            //Asks user if they want to continue, 'Y', or not 'N'

            //Initialize Variables

            //Map/Process the inputs -> Outputs 
            do{
                cout<<"Enter number of liters of gasoline:"<<endl;
                cin>>liter;
                cout<<endl;
                cout<<"Enter number of miles traveled:"<<endl;
                cin>>miles;
                cout<<endl;

                cout<<"miles per gallon:"<<endl;
                mpg = miles /(liter * galLit);

                cout<<fixed<<showpoint<<setprecision(2)<<mpg<<endl;
                mpg = mpg = miles /(liter * galLit);


                cout<<"Again:"<<endl;
                cin>>YN;

                if (YN == 'y' || YN == 'Y'){
                    cout<<endl;
                }
            }
                while ((YN == 'y' || YN == 'Y'));
                
                break;
        }
        
        case '6':{
            //Science, Math, Conversions, Dimensions
            const float liter = 0.264179f; // 1 Liter

            //Declare Variables
            int litrGas;            //Liters of gasoline
            float miTrvl,             //Miles traveled
                  miPerG1, miPerG2,   //Miles per Gallon for Car 1 and Car 2
                  Gallon;             //Var to compute number of miles per gallon
            char YN;                //Asks user if they want to continue (Y), or not (N)

            //Map/Process the inputs -> Outputs
            do {
                cout<<"Car 1\n"<<"Enter number of liters of gasoline:"<<endl;
                cin>>litrGas;
                cout<<"Enter number of miles traveled:"<<endl;
                cin>>miTrvl;
                Gallon = 0.264179f * litrGas;
                miPerG1 = miTrvl / Gallon;
                cout<<"miles per gallon: "<<fixed<<setprecision(2)<<miPerG1<<"\n"<<endl;

                cout<<"Car 2\n"<<"Enter number of liters of gasoline:"<<endl;
                cin>>litrGas;
                cout<<"Enter number of miles traveled:"<<endl;
                cin>>miTrvl;
                Gallon = 0.264179f * litrGas;
                miPerG2 = miTrvl / Gallon;
                cout<<"miles per gallon: "<<fixed<<setprecision(2)<<miPerG2<<"\n"<<endl;

                if (miPerG1 > miPerG2)
                    cout<<"Car 1 is more fuel efficient\n"<<endl;
                else
                    cout<<"Car 2 is more fuel efficient\n"<<endl;

                cout<<"Again:\n";
                cin>>YN;

                if (YN == 'y' || YN == 'Y'){
                    cout<<endl;
                }
            }
            while ((YN == 'y') || (YN == 'Y'));  
            
            break;  
        }
        
        case '7':{
            //Declare Variables
            float itmPrce,        //Price of a Item
                  YrAPrce,        //The price a year ago
                  InfltnR,        //Inflation Rate
                  percent,
                  Year1, Year2;

            char YN;              //User inputs 'Y' to continue, or 'N' to exit

            //Map/Process the inputs -> Outputs

            do{
                cout<<"Enter current price:"<<endl;
                cin>>itmPrce;
                cout<<"Enter year-ago price:"<<endl;
                cin>>YrAPrce;

                InfltnR = (itmPrce/YrAPrce) - 1;
                percent = InfltnR * 100;

                cout<<"Inflation rate: "<<setprecision(2)<<fixed<<percent
                        <<"%"<<endl;
                cout<<endl;

                cout<<"Again:";
                cout<<endl;
                cin>>YN; 


                if (YN == 'y' || YN == 'Y'){
                    cout<<endl;
                }

            }
            while (YN == 'y' || YN == 'Y');
            
            break;
        }
            
        case '8':{
            //Science, Math, Conversions, Dimensions
             const float oneyr = 1;

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

            break;
        }
        
        
        case '9':{   
            //Declare Variables
            float number1, 
                  number2, 
                  number3,
                  minimum,
                  maximum;

            //User inputs number1, number2, number3
            cout<<"Enter first number:"<<endl;
            cin>>number1;
            cout<<endl;

            cout<<"Enter Second number:"<<endl;
            cin>>number2;
            cout<<endl;

            cout<<"Enter third number:"<<endl;
            cin>>number3;
            cout<<endl;

            //Map/Process the inputs -> Outputs 

            //Test all possible cases
            if (number1 > number2 && number2 > number3){
                maximum = number1;
            }

            if (number1 > number3 && number3 > number2){
                maximum = number1;
            }

            if (number2 > number1 && number1 > number3){
                maximum = number2;
            }

            if (number2 > number3 && number3 > number1){
                maximum = number2;
            }

            if (number3 > number1 && number1 > number2){
                maximum = number3;
            }

            if (number3 > number2 && number2 > number1){
               maximum = number3;
            }


            //Display Inputs/Outputs
            cout<<"Largest number from two parameter function:"<<endl<<fixed<<setprecision(1)
                    <<setw(2)<<max(number1, number2)<<endl<<endl;

            cout<<"Largest number from three parameter function:"<<endl<<fixed<<setprecision(1)
                    <<setw(2)<<maximum<<endl;
                break; 
        }
            
        }
            
    //Exit Program
    return 0;
}