/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 30, 2023, 5:34 PM
 * Purpose: Determine if integer is prime or not
 */

// System Libraries
#include <iostream>  //Input Output Library 
#include <cmath>     
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
bool isPrime(int);     //Determine if the input number is prime

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    unsigned int n; 
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>n;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if n is less than/equal to 0, if Y, then n != prime #
    if (n <=0){
        cout<<n<<" is not prime.";
        exit(0);
    }
    
    //Check to see if n is equal to 2, if Y, then n is a prime #
    if (n == 2){
        cout<<n<<" is prime.";
        exit (0);
    }
    
    //Set nsqrt = to sqrt fun of n + 1
    int nsqrt=sqrt(n)+1;
    
    //Set boolean value to false and check for nprime
    bool nprime=false;
    for (int i=2; i<=nsqrt && !nprime; i++){
        if (n%i==0){
            nprime=true;
            cout<<n<<" is not prime.";
        }
    }
    
    //If !nprime is prime 
    if (!nprime){
        cout<<n<<" is prime.";
    }
    
    //Exit Program
    return 0;
}