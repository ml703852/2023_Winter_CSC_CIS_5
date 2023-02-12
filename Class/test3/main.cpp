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
const int ROWS=6;
const int COLS=6;

//Function Prototypes
void fillTbl(int array[ROWS][COLS], int);
void prntTbl(int array[ROWS][COLS], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int tablSum[ROWS][COLS];
    fillTbl(tablSum, ROWS);
    prntTbl(tablSum, ROWS);
    //Exit stage right or left!
    return 0;
}
//Function Calls
    void fillTbl(int array[ROWS][COLS], int nrows){  //nrows=number of rows
    for (int row=0; row<nrows; row++){
        for (int col=0; col<nrows; col++){
            array[row][col]=(row+1)*(col+1);
        }
    }
}
    void prntTbl(int array[ROWS][COLS], int print){
    //Intro
    cout<<"Think of this as a Product/Multiplication Table"<<endl;
    cout<<"           C o l u m n s"<<endl;
    cout<<"     |";
    //display
    for (int row=1; row<=ROWS; row++){
        cout<<setw(4)<<row;
    }
    cout<<""<<endl;
    cout<<"----------------------------------"<<endl;
    for (int row=1; row<=6; row++){     //row for columns
        if (row==1)
            cout<<"   ";
        if (row==2)
            cout<<"R  ";
        if (row==3)
            cout<<"O  ";
        if (row==4)
            cout<<"W  ";
        if (row==5)
            cout<<"S  ";
        if (row==6)
            cout<<"   ";
            cout<<row<<" |";
    for (int col=1; col<=6; col++){
        cout<<setw(4)<<row+col;
        }
        cout<<endl;
        }
}