/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 30, 2023, 7:28 PM
 * Purpose: Count the Collatz Sequence and output the Sequence
 */

// System Libraries
#include <iostream> // Input Output Library 
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
int collatz(int);     //3n+1 sequence

//Execution begins here at main
int main(int argc, char** argv) {    
    //Declare Variables
    int n, ns;
   
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

int collatz(int n){
    int i=1;
    while (n!=1){
        cout<<n<<", ";
        
        if (n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        i++;
    }
    
    cout<<"1"<<endl;;
    
    return i;
}
