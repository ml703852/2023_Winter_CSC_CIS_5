/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 1, 2023, 5:25 PM
 * Purpose: Time Clock Problem
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    int hours, 
        minutes, 
        waitHr,     //Wait time
        lasthr;     //Last Hour
        
    string AmPm;    //AM or PM
    
    char YorN;      //User decides to continue 'Y' or not 'N'
    
    
    //Map/Process the inputs -> Outputs
    do{
        //Initialize cout/cin statements
        cout<<"Enter hour:"<<endl<<endl;
        cin>>hours;
        
        cin>>minutes;
        cout<<"Enter minutes:"<<endl<<endl;
        
        cin>>AmPm;
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;
        
        cin>>waitHr;
        
        cout<<"Enter waiting time:"<<endl<<endl;
        
        //Check for AM or PM 
        if (AmPm=="A" || AmPm=="a"){
            AmPm="AM";
        }
        
        else{
            AmPm="PM";
        }
        
        cout<<"Current time = "<<setw(2)<<setfill('0')<<hours<<":"<<setw(2)
                <<setfill('0')<<minutes<<" "<<AmPm<<endl;
                
                
        //Calculations
        minutes+=waitHr;
        hours+=minutes/60;
        minutes%=60;
        
        if (hours>12 && AmPm=="PM"){
            AmPm="AM";
        }
        
        else if (hours>12 && AmPm=="AM"){
                AmPm="PM";
                hours%=12;
        }
        
        if (hours>12){
            hours-=12;
        }
        
        cout<<"Time after waiting period = "<<setw(2)<<setfill('0')<<
                hours<<":"<<setw(2)<<setfill('0')<<minutes<<" "<<AmPm<<endl;
        
        cout<<endl;
        
        cout<<"Again:"<<endl;
        cin>>YorN;
        
        if (YorN=='y' || YorN=='Y'){
            cout<<endl;
        }
    }
    
    //Check User input
    while (YorN=='y' || YorN =='Y');
    
    return 0;
}