/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 8th, 2023 10:16 PM
 * Purpose:  Menu for Homework Assignment 6
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!
const int COLS=6;
const int ROWS=6;

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void fillTbl(int array[ROWS][COLS], int);
void prntTbl(int array[ROWS][COLS], int);

void fillTbl2(int array[ROWS][COLS], int);
void prntTbl2(int array[ROWS][COLS], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            default:   def(inN);
	}
    }while(inN<9);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1: Dice Table Sum"<<endl;
    cout<<"Type 2 to execute Problem 2: Product"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}


void problem1(){
    
    //Declare Variables
    int tablSum[ROWS][COLS];
    prntTbl(tablSum, ROWS);
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
        //Set the width between the numbers in the columns
        cout<<setw(4)<<row+col;
    }
        cout<<endl;
    }
}



void problem2(){
    //Declare Variables
    int tablSum[ROWS][COLS];
    prntTbl(tablSum, ROWS);

}

void fillTbl2(int array[ROWS][COLS], int numRows){
    
    //Display the number of rows
    for (int row = 1; row <= numRows; row++){
        cout<<setw(4) << row;

    }
}

void prntTbl2(int array[ROWS][COLS], int print){

    //Display Title
    cout<<"Think of this as a Product/Muliplication Table"<<endl;
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
        
        cout<<setw(4)<<row*col;
    }
        cout<<endl;
    }
}