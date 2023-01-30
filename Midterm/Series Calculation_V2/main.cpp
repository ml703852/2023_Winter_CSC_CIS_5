/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 26, 2023 7:45 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float scalc(float x, int nterms);       //Func: "Series Calculation" //Includes float and int argumente

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    unsigned int nterms; 
    float x; 

    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    cout<<fixed<<setprecision(6)<<scalc(x, nterms)<<endl;

    return 0;
}

//call the function
float scalc(float x, int nterms){

    //Declare all Variables Here
    float power, 
          expont = 0.0f;
    
    power = 1;         //Assign power with x
    int cPower = 1;

    //For loop to find f(x)
    for (int i = 0; i < nterms; i++){
        unsigned int factrl;
        factrl = 1;     //Initialize factorial to value of 1
        power = 1;

        //for loop to compute the power
        for (int j = 1; j <= cPower; j++){
            power *= x;
        }

        //for loop to compute the factorial
        for (int k = 1; k <= cPower; k++){
            factrl *= k;
        }

        //for the current iteration, decide if we need to subtract or add the power
        if (i % 2 == 1){
            expont -= power / factrl;
        }
        
        else{
            expont += power / factrl;
        }
        //at end of each loop increment, the current power by 2 - 1, 3, 5, 7, 9 ..
        cPower += 2;
    }

    //Return the exponent from function
    return expont; 
}