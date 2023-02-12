/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created: February 7th, 2023 2:10 PM
 * Purpose: Create a Dice Table
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;
const int ROWS=6;

//Function Prototypes
void fillTbl(int array[ROWS][COLS], int);
void prntTbl(int array[ROWS][COLS], int);

//Execution Begins Here!
int main(int argc, char **argv){
    
    //Declare Variables
    int tablSum[ROWS][COLS];
    prntTbl(tablSum, ROWS);

    return 0;
}

//Function Calls
void fillTbl(int array[ROWS][COLS], int numRows){
    
    //Display the number of rows
    for (int row = 1; row <= numRows; row++){
        cout<<setw(4) << row;

    }
}

void prntTbl(int array[ROWS][COLS], int print){

    //Display Title
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<"           C o l u m n s"<<endl;
    cout<<"     |";
    
    //Display 1, 2, 3 .. 6 of rows
    for (int row = 1; row <= ROWS; row++){
        cout<<setw(4)<<row;
    }
    
    //Include empty string
    cout<<""<<endl;
    cout<<"----------------------------------"<<endl;

    //Include "ROWS" in each col, independent if
    for (int row = 1; row <= 6; row++){
        if (row == 1)
            cout<<"   ";
        if (row == 2)
            cout<<"R  ";
        if (row == 3)
            cout<<"O  ";
        if (row == 4)
            cout<<"W  ";
        if (row == 5)
            cout<<"S  ";
        if (row == 6)
            cout<<"   ";
            cout<<row<<" |";
            
    
    for (int col = 1; col <= 6; col++){
        
        //Multiply the row by column
        cout<<setw(4)<<row*col;
    }
        cout<<endl;
    }
}