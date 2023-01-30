/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 27, 3:49 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv){    
 
    //Declare all Variables Here
    int i, j;
    char histgrm[5];           

    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;

    //Histogram Here
    
    //check to see if user inputs a valid number
    for(i = 0; i < 4; i++){  
        cin>>histgrm[i]; 
    }

    if((histgrm[4] - '0') % 2){
        
        for(i = 3; i >= 0; i--){
            cout<<histgrm[i]<<" ";                         
        
        if ((histgrm[i] >= '0') && (histgrm[i] <= '9'))
        {
            for(j = 0; j < (histgrm[i] - '0'); j++){
                cout << "*";                           
            }
        }
        cout<<endl;
    }
}

    
    else {
        
        for(i = 3; i >= 0; i--){
            cout<<histgrm[i]<<" ";     
            if ((histgrm[i] >= '0') && (histgrm[i] <= '9')){
                
        for(j = 0; j < (histgrm[i] - '0'); j++){
            cout<<"*";    
            }
        }
            else{
                cout << "?";     //Program displays '?' when user enters letter
            }
        cout<<endl;
    }
}

return 0;
}