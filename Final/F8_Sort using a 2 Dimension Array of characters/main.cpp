/* 
 * Note:  This time you create the strcmp() function that takes into
 * account the new sort order.
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int,const char[],const char[]);//Sort by row using strcmp();
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array
//int strcmp(char a[],char b[],char replace[],char with[]){
int strcmp(char [],char [],const char [],const char []);//Replace sort order

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    char replace[COLMAX],with[COLMAX];//New sort order
    
    //Input the new sort order then sort
    cout<<"Modify the sort order by swapping these characters."<<endl;
    cin>>replace;
    cout<<"With the following characters"<<endl;
    cin>>with;
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    //Else output different size
    //if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn,replace,with);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    
    //Exit
    return 0;
}

//Function Calls

//Function to read the array
int read(char array[][COLMAX], int &rows)
{
    //Declare Variables
    int columns = 0;
    
    for (int i = 0; i < rows; i++){
        cin>>array[i];
        
        if (strlen(array[i]) > columns){
            columns = strlen(array[i]);
        }
    }
    return columns;
}

//Function to sort array
void sort(char array_to_sort[][COLMAX],int rows, int columns, const char replace[], const char with[])
{

    char * temp = new char[columns];
        for (int i = 0; i < rows - 1; i++){
            for (int j = i + 1; j < rows; j++){
                if (strcmp(array_to_sort[i], array_to_sort[j], replace, with) > 0)
                {
                    strcpy(temp, array_to_sort[i]);
                    strcpy(array_to_sort[i], array_to_sort[j]);
                    strcpy(array_to_sort[j], temp);
            }
        }
    }
}

//Function to print array
void print(const char array_to_print[][COLMAX], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        cout<<array_to_print[i]<<endl;
    }
}

//Function to compare strings
int strcmp(char str1[],char str2[], const char replace[],const char with[])
{
    //Declare Variables
    char * cpystr1;
    char * cpystr2;
    
    //Copy both strings to compare
    cpystr1 = new char[strlen(str1) + 1];
    cpystr2 = new char[strlen(str2) + 1];
    
    for (int i = 0; i < strlen(str1); i++)
    {
        cpystr1[i] = str1[i];
    }
    
    cpystr1[strlen(str1)] = '\0';
    
    for (int i = 0; i < strlen(str2); i++)
    {
        cpystr2[i] = str2[i];
    }
    
    cpystr2[strlen(str2)] = '\0';
    
    for (int j = 0; j < strlen(replace); j++)
    {
        for (int i = 0; i<strlen(str1); i++)
        {
            
            if (str1[i] == replace[j])
            {
                cpystr1[i] = with[j];
            }
        }
        for (int i = 0; i < strlen(str2); i++)
        {
            if(str2[i] == replace[j])
            {
                cpystr2[i] = with[j];
            }
        }
    }
    return strcmp(cpystr1, cpystr2);
}