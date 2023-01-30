/* 
 * File:   main.cpp
 * Author: Mehak
 * Created on January 10, 2023, 4:21 PM
 * Purpose: Template to be used for all future 
            Hmwk, Labs, Exams, Projects
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes Here
float scalc(float x, int nterms);       //Func: "Series Calculation" //Includes float and int arguments

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all Variables Here
    int nterms; 
    float x; 

    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;

    cout<<fixed<<setprecision(6)<<scalc(x, nterms)<<endl;

    return 0;
}


float scalc(float x, int nterms){

    //Declare all Variables Here
    float power, 
            expont = 0.0f;
    int count = 0, 
            factrl;

    power = x;         //Assign power with x

    //For loop to find f(x)
    for (int i = 1; count < nterms; i += 2){
        factrl = 1;     //Initialize factorial to value of 1
        count++;        //Increment var count

        for(int j = 1; j <= i; j++)
            factrl = j;        //Calculate the factorial by j

            if(count%2 == 1)
                //Calculate the exponent value
                expont = expont + (power/factrl);
            else
                expont = expont - (power/factrl);
                //Calculate value of power
                power = power * x * x; 
        }
    
    //Return the exponent from function
    return expont; 

}
