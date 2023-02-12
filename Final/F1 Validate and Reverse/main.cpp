/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 7th, 2023, 2:38 PM
 * Purpose: Validate and Reverse 
 */

//System Libraries
#include <iostream>
#include <ctype.h>
#include <math.h>
#include <string.h>
using namespace std;

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, conversions, or the columns for 2-D arrays

//Function Prototypes Here
bool inRange(const char [],unsigned short &);//Output true,unsigned or false
bool reverse(unsigned short,signed short &);//Output true,short or false
short subtrct(signed short,int);


//Program Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    const int SIZE=80; //More than enough
    char digits[SIZE]; //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort; //Signed short

    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;

    //Test if it is in the Range of an unsigned short
    if(!inRange(digits,unShort)){
    cout<<"No Conversion Possible"<<endl;
    return 0;
    }

    //Reverse and see if it falls in the range of an signed short
    if(!reverse(unShort,snShort)){
    cout<<"No Conversion Possible"<<endl;
    return 0;
    }

    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);

    //Output the result
    cout<<snShort<<endl;

    //Exit
    return 0;
}

//Function Calls
bool inRange(const char digits[], unsigned short & unShort)
{
    //Check to see if digits is > 5
    if (strlen(digits) > 5)
    {
        //If digit > 5, return false
        return false;
    }

    for (int i = 0; i < strlen(digits); i++)
    {
        //If the char digits is not a digit
        if (isdigit(digits[i]) == false )
        {
            //Then return false
            return false;
        }
    }

    //Check to see if digits is equal to 5
    if (strlen(digits) == 5)                                                       
    {
        //Convert the string into an integer, and compare to SIZE_MAX
        if (atoi(digits) > SIZE_MAX)
        {
            //If it the digits are greater then the SIZE_MAX, return false
            return false;
        }
    }
    
    //Assign digits to unsigned short int variable and return true
    unShort = atoi(digits);
    return true;
}

bool reverse(unsigned short unShort , signed short &snShort)
{
    //Initialize short int to 0
    snShort = 0;

    for (int i = 0; i < 5; i++ )
    {
        //Perform Calculations
        snShort = snShort * 10;
        snShort = snShort + unShort % 10;
        unShort = unShort / 10;
    }
    
    //Check to see if snShort within a certain range
    if ((snShort < 99999) && (snShort > 0))
    {
        return true;
    }

    return false;
}

short subtrct(signed short snShort, int number)
{
    //Subtract number from the short int, and check if total is < 0
    if ((snShort - number) < 0)
    {
    
        return snShort;
    }
    
    return (snShort - number);
}