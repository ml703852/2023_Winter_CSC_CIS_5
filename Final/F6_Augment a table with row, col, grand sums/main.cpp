/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 10, 2023 11:27 AM
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}

//Function Calls

//Function reads in the array
void read(int array[][COLMAX], int &row, int &col)
{
    //Display message
    cout<<"Input a table and output the Augment row,col and total sums." << endl;
    cout<<"First input the number of rows and cols. <20 for each" << endl;
    
    //User enters row and column
    cin>>row>>col;
    
    cout<<"Now input the table."<<endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            cin >> array[i][k];
        }
    }
}


//Function that calculates the total sum of or rows, col, grand
void sum(const int array[][COLMAX], int row, int col, int augAry[][COLMAX])
{
    //Declare Variables
    int RowSum, ColSum; 
    
    //Initialize total to 0
    int total = 0; 
    
    //Row
    for (int i = 0; i < row; i++)
    {
        RowSum = 0; 
    
    
        for (int k = 0; k < col; k++)
        {
            RowSum += array[i][k];
            augAry[i][k] = array[i][k];
        }
       
        augAry[i][col] = RowSum;
       
        total += RowSum;
    }
    
    //Column
    for (int i = 0; i < col; i++)
    {
        //Initialize cSum to 0
        ColSum = 0; 
        
        for (int k = 0; k < row; k++)
        {
            ColSum += array[k][i];
        }
        
        augAry[row][i] = ColSum;
    }
    
    //Total
    augAry[row][col] = total;
}

//Function prints the total array, row, col 
void print(const int array[][COLMAX], int row, int col, int width)
{
    //For loop for row
    for (int i = 0; i < row; i++)
    {
        //For loop for column
        for (int k = 0; k < col; k++)
        {
            //Set the width to 10 and display the array including both row and column
            cout<<setw(10)<<array[i][k];
        }
        cout<<endl;
    }
}