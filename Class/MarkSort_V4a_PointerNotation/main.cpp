/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on Feb 1st, 2023, 10:10 AM
 * Purpose:  Custom Sort
 *           Pointer Notation
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random Function
#include <ctime>     //Seed the Random number function
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void filAray(int *,int);  //Fill an array with 2digit numbers
void prntAry(int *,int,int);//Print an array with #cols
void mrkSrt(int *,int);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int array[SIZE];
    
    //Initialize Variables
    filAray(array,SIZE);
    
    //Display Inputs/Outputs
    cout<<"The original unsorted array"<<endl;
    prntAry(array,SIZE,10);
    
    //Map/Process the Inputs -> Outputs
    mrkSrt(array,SIZE);
    
    //Display Inputs/Outputs
    cout<<endl<<endl<<"The sorted array"<<endl;
    prntAry(array,SIZE,10);
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}

void mrkSrt(int *a,int n){
    for(int j=0;j<n-1;j++){
        for(int i=j+1;i<n;i++){
            if(a[j]>a[i]){
                int temp=*(a+j);
                *(a+j)=a[i];
                a[i]=temp;
            }
        }
    }
}

void prntAry(int *a,int n,int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }   
}

void filAray(int *a,int n){
    for(int i=0;i<n;i++){
        //a[i]=rand()%90+10;//[10,99]
        *(a+i)=rand()%90+10;//[10,99]
    }
}