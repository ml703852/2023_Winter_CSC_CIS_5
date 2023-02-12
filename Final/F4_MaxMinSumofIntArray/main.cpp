/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 7th, 2023 5:42 PM
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */
//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}

//Function calls

//Function to read in the array
void read(int arr[],int n)
{
    for (int i = 0; i < n; ++i)
    {
    cin>>arr[i];
    }
}

int stat(const int array[],int sizeIn,int &max,int &min)
{
    //Initialize the sum to 0, as well as min, max arrays to 0
    int sum = 0;
    max = array[0];
    min = array[0];
    
    //If the counter is less than sizeIn
    for (int k = 0; k < sizeIn; k++)
    {
        //Add the array of k to sum
        sum+=array[k];
    }
    
    for (int h = 0; h < sizeIn; h++)
    {
        if (array[h]>max)
        {
            max=array[h];
        }
        
        if (array[h] < min)
        {
            min = array[h];
        }
    }
    return sum;
}

//Function prints the array
void print(const int array[],int sizeIn,int sum,int max,int min)
{
     for (int j = 0; j < sizeIn; j++)
     {
         //Display the array 
        cout<<"a["<<j<<"] = "<<array[j]<<endl;
     }
     
    //Display the output 
    cout<<"Min  = "<<min<<endl;
    cout<<"Max  = "<<max<<endl;
    cout<<"Sum  = "<<sum<<endl;
}