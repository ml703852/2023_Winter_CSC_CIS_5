/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 26,2023 9:07 AM
 * Purpose:  Cross one-side or the other
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short x;   //User enters number [1,50]
    char shape;         //f-> forward b->backward x->cross

    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    
    //Draw the shape

    // 'x' -> cross
                                        //    i = row
                                        //    j = column
    //even numbers - 'x'
    if (shape == 'x' && x%2 == 0){
        for (int i = 1; i <= x; i++){
            for (int j = 1; j <= x; j++){
                if ((i == j) || (i + j) == x+1){
                    cout<<j;
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    //odd numbers - 'x'
    if (shape == 'x' && x%2 == 1){
        for (int i = x; i >= 1; i--){
            for (int j = x; j >= 1; j--){
                if ((i == j) || ((i + j) == x+1)){
                    cout<<j;
                } 
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    
    // 'b' -> backslash
    //even numbers - 'b'
    if (shape == 'b' && x%2 == 0){
        for (int i = 1; i <= x; i++){
            for (int j = 1; j <= x; j++){
                if(i == j){
                    cout<<j;
                }   
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    //odd numbers - 'b'
    if (shape == 'b' && x%2 == 1){
        for (int i = x; i >= 1; i--){
            for (int j = x; j >= 1; j--){
                if(i == j){
                    cout<<j;
                }   
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
        
        
    //'f' -> front slash
    //even numbers - 'f'
    if (shape == 'f' && x%2==0){
        for (int i = x; i >= 1; i--){
            for (int j = 1; j <= x; j++){
                if (i == j){
                    cout<<j;
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    //odd numbers - 'f'
    if (shape == 'f' && x%2==1){
        for (int i = 1; i <= x; i++){
            for (int j = x; j >= 1; j--){
                if (i == j){
                    cout<<j;
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    
    
    //Exit
    return 0;
}