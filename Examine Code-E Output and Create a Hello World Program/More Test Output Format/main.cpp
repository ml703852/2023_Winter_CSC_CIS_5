/* 
 * File:
 * Author: Mehak Lohchan
 * Date: January 13, 2023
 * Purpose:
 * Version:
 */

//System Libraries - Post Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries - Post Here

//Global Constants - Post Here
//Only Universal Physics/Math/Conversions found here
//No Global Variables
//Higher Dimension arrays requiring definition prior to prototype only.

//Function Prototypes - Post Here

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed here when needed
    
    //Declare variables or constants here
    //7 characters or less
    unsigned short z;
    float a, b, c, d;
    
    //Initialize or input data here
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    //Display initial conditions, headings here
    
    //Process inputs  - map to outputs here
    
    //Format and display outputs here
    cout<<setw(9)<<a<<fixed<<setprecision(1)<<setw(10)<<a<<setprecision(2)<<setw(10)<<a<<endl;
    cout<<setw(9)<<static_cast<int>(b)<<fixed<<setprecision(1)<<setw(10)<<b<<setprecision(2)<<setw(10)<<b<<endl;
    cout<<setw(9)<<static_cast<int>(c)<<fixed<<setprecision(1)<<setw(10)<<c<<setprecision(2)<<setw(10)<<c<<endl;
    cout<<setw(9)<<static_cast<int>(d)<<fixed<<setprecision(1)<<setw(10)<<d<<setprecision(2)<<setw(10)<<d;
    
    //Clean up allocated memory here
    
    //Exit stage left
    return 0;
}