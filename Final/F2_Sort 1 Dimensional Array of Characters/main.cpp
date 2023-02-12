/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 9th, 2023 3:25 PM
 * Purpose:  Sorting an array of characters if specified correctly
 */

//System Libraries Here
#include <iostream>//cout,cin
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int  read(char []);
void sort(char [],int);
void print(const char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;//Larger than needed
    char array[SIZE]; //Character array larger than needed
    int sizeIn,sizeDet;//Number of characters to be read, check against length
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of characters and sort"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of characters and determine it's size
    cout<<"Now read the Array"<<endl;
    sizeDet=read(array);//Determine it's size
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size to sort
    if(sizeDet==sizeIn){
        sort(array,sizeIn);     //Sort the array
        print(array,sizeIn);    //Print the array
    }else{
        cout<<(sizeDet<sizeIn?"Input size less than specified.":
            "Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}

//Function Calls

//Function reads in array of characters
int read(char a[])
{
    cin>>a;
    
    //Return the length of the input
    return strlen(a);
}

//Function sorts arrays in order
void sort(char a[],int n)
{
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

//Function prints the arrays of characters
void print(const char a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}
