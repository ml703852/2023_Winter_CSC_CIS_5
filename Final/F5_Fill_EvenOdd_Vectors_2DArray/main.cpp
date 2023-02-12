/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 7th, 2023 6:29 PM
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}

//Function Calls

//Read the function 
void read(vector<int> &even, vector<int> &odd){
    
    //Variables to read size of the input
    int n, temp;
    
    //Initialize
    cout<<"Input the number of integers to input."<<endl;
    cin>>n;
    cout<<"Input each number."<<endl; // asking the inputs
    
    //For loop to make sure the input size reaches all of the user input
    for(int i=0;i<n;i++){
        cin>>temp;
    
        //Check to see if the user input is even
        if(temp%2==0){
            //If even, then push back into even vector
            even.push_back(temp);
    }
        
        //Check to see if the user input is even
        if(temp%2==1){
            //If odd, then push back into odd vector
                odd.push_back(temp);
        }
    }
}

void copy(vector<int> even, vector<int> odd,int arr[][COLMAX])
{
    //Declare Variables
    int SizeEvn = even.size();
    int SizeOdd = odd.size();
    // int i = 0;
    // int j = 0;
    
    //For loop for Even Values
    for (int i=0; i < SizeEvn; i++)
    {
        arr[i][0] = even.at(i);
    }
    
    //For loop for Even Values
    for (int j=0; j < SizeOdd; j++)
    {
        arr[j][1] = odd.at(j);
    }
}
    
void prntVec(vector<int> even, vector<int> odd,int width)
{
    //Declare Variables
    int SizeEvn = even.size();
    int SizeOdd = odd.size();
    
    int size, dfrnce;
    
    //Find the greatest length and vector, Ternary Operator
    (SizeEvn > SizeOdd)?(dfrnce = SizeEvn - SizeOdd), (size = SizeEvn):(dfrnce = SizeOdd - SizeEvn), (size = SizeOdd);
   
    //Display the table header
    cout<<setw(width)<<"Vector"<<setw(width)<<"Even"<<setw(width)<<"Odd"<<endl<<setw(width * 2);
    
    //Display the table
    /*If both sizes are equal to one another
        Test 1*/
    if (SizeEvn == SizeOdd)
        for (int i = 0; i < size; i++)
            cout<<even.at(i)<<setw(width)<<odd.at(i)<<'\n'<<setw(width * 2);
    
    /*If even is greater than odd
        Test 2 */
    else if (SizeEvn > SizeOdd){ 
        for (int i = 0; i < SizeOdd; i++)
            cout<<even.at(i)<<setw(width)<<odd.at(i)<<'\n'<<setw(width * 2);
            
        for (int i = 0; i < dfrnce; i++)
            cout<<setw(width * 2)<<even.at(SizeOdd + i)<<setw(width+1)<<'\n';
    }
    
    /*If odd is greater than even
        Test 3 */
    else if (SizeOdd > SizeEvn)
    {
        for (int i = 0; i < SizeEvn; i++)
            cout<<even.at(i)<<setw(width)<<odd.at(i)<<'\n'<<setw(width * 2);
            
        for (int i = 0; i < dfrnce; i++)
            cout<<setw(width * 3)<<odd.at(SizeEvn + i)<<'\n';
    }
        
}

void prntAry(const int arr[][COLMAX],int SizeEvn,int SizeOdd, int width)
{
    //Similar function algorithm compared to prntVec, except w/ Arrays
    //Declare Variables
    
    //Use sizeof function to get the size of each array
    int sz = sizeof(arr) / sizeof(arr[0]);
    int size, dfrnce;
    
    //Find the greatest length and vector, Ternary Operator
    (SizeEvn > SizeOdd)?(dfrnce = SizeEvn - SizeOdd), (size = SizeEvn):(dfrnce = SizeOdd - SizeEvn), (size = SizeOdd);
    
    //Display the table
    cout<<setw(width)<<"Array"<<setw(width)<<"Even"<<setw(width)<<"Odd"<<endl<<setw(width * 2); 
    
    //Display the table
    /*If both sizes are equal to one another
    Test 1*/
    if (SizeEvn == SizeOdd)
        for (int i = 0;i < size; i++)
            cout<<arr[i][0]<<setw(width)<<arr[i][1]<<'\n'<<setw(width * 2);
        
        
    /*If even is greater than odd
    Test 2 */
    else if (SizeEvn > SizeOdd)
    {
        for (int i = 0; i < SizeOdd; i++)
            cout<<arr[i][0]<<setw(width)<<arr[i][1]<<'\n'<<setw(width* 2);
            
        for (int i = 0; i < dfrnce; i++)
            cout<<setw(width * 2)<<arr[SizeOdd + i][0]<<setw(width + 1)<<'\n';
    }
        
    /*If odd is greater than even
    Test 3 */
    else if (SizeOdd > SizeEvn)
    {
        for (int i = 0; i < SizeEvn; i++)
            cout<<arr[i][0]<<setw(width)<<arr[i][1]<<'\n'<<setw(width * 2);
        
        for (int i = 0; i < dfrnce; i++)
            cout<<setw(width * 3)<<arr[SizeEvn + i][1]<<'\n';
    }
}