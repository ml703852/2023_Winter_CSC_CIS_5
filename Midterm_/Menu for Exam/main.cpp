/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 28, 2023 7:47 PM
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

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
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
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
}

void problem2(){
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
}

void problem3(){
    //Function Prototypes Here
    string numtoeng(int);       //Numeric dollars to English function
    
    //Declare all Variables Here
    unsigned short number;
    int e1000s, e100s, e10s, e1s;
    string nD = "";                //Num $ -> English

    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    cout<<numtoeng(number)<<"and no/100's Dollars"<<endl;

}
    //Call function inside of main
    string numtoeng(int number){
    int e1000s, e100s, e10s, e1s;
    string nD;
    
    //Input or initialize values Here
    nD = "";

    
    //Calculate the 1000's, 100's, 10's and 1's
    e1000s=number/1000;
    number-=e1000s*1000;
    e100s=number/100;
    number-=e100s*100;
    e10s=number/10;
    number-=e10s*10;
    e1s=number;
    
    
    //Convert e1000s
    if(e1000s==9)nD+="Nine Thousand ";
    if(e1000s==8)nD+="Eight Thousand ";
    if(e1000s==7)nD+="Seven Thousand ";
    if(e1000s==6)nD+="Six Thousand ";
    if(e1000s==5)nD+="Five Thousand ";
    if(e1000s==4)nD+="Four Thousand ";
    if(e1000s==3)nD+="Three Thousand ";
    if(e1000s==2)nD+="Two Thousand ";
    if(e1000s==1)nD+="One Thousand ";
    
    
    //Convert e100s
    if(e100s==9)nD+="Nine Hundred ";
    if(e100s==8)nD+="Eight Hundred ";
    if(e100s==7)nD+="Seven Hundred ";
    if(e100s==6)nD+="Six Hundred ";
    if(e100s==5)nD+="Five Hundred ";
    if(e100s==4)nD+="Four Hundred ";
    if(e100s==3)nD+="Three Hundred ";
    if(e100s==2)nD+="Two Hundred ";
    if(e100s==1)nD+="One Hundred ";
    
    //Calculate e10s
    if(e10s==9)nD+="Ninety ";
    if(e10s==8)nD+="Eighty ";
    if(e10s==7)nD+="Seventy ";
    if(e10s==6)nD+="Sixty ";
    if(e10s==5)nD+="Fifty ";
    if(e10s==4)nD+="Forty ";
    if(e10s==3)nD+="Thirty ";
    if(e10s==2)nD+="Twenty ";
    if(e10s==1){

    //Calculate e1s
    if(e1s==9)nD+="Nineteen ";
    if(e1s==8)nD+="Eighteen ";
    if(e1s==7)nD+="Seventeen ";
    if(e1s==6)nD+="Sixteen ";
    if(e1s==5)nD+="Fifteen ";
    if(e1s==4)nD+="Fourteen ";
    if(e1s==3)nD+="Thirteen ";
    if(e1s==2)nD+="Twelve ";
    if(e1s==1)nD+="Eleven ";
    }

    //Calculate e1s if less than 10
    else{
        if(e1s==9)nD+="Nine ";
        if(e1s==8)nD+="Eight ";
        if(e1s==7)nD+="Seven ";
        if(e1s==6)nD+="Six ";
        if(e1s==5)nD+="Five ";
        if(e1s==4)nD+="Four ";
        if(e1s==3)nD+="Three ";
        if(e1s==2)nD+="Two ";
        if(e1s==1)nD+="One ";
    
    }
    //Exit
    return nD;
}

void problem4(){
    //Declare all Variables Here
    char package;               //package A, B, or C
    unsigned short hours;
    float chargeA = 16.99f,
          chargeB = 26.99f,
          chargeC = 36.99f;
            
            
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges

    //Package A
    if (hours <= 10){ 
        chargeA = 16.99;
    }
        if (hours > 10 && hours <= 20){
        chargeA = 16.99 + ((hours - 10) * 0.95);
        }
        if (hours>20){ 
        chargeA = 16.99 + ((hours - 20) * 0.85) + 9.5;
        }
    
    //Package B
    if (hours<=20){
        chargeB = 26.99;
    }
        if (hours > 20 && hours <= 30){
        chargeB = 26.99 + ((hours-20) * 0.74);
        }
        if (hours > 30){ 
        chargeB = 26.99 + ((hours-30) * 0.64) + 7.4;
        }
    
    //Package C 
    chargeC = 36.99;

    if (package=='a' || package=='A'){
       cout<<"$"<<fixed<<setprecision(2)<<showpoint<<chargeA;
    
        if (chargeA <chargeB &&chargeA < chargeC){
            cout<<" A $0.00"<<endl;
        }
        if (chargeB < chargeA && chargeB < chargeC){
           cout<<" B $"<<fixed<<setprecision(2)<<showpoint<<chargeA-chargeB<<endl;
        }
        if (chargeC < chargeA && chargeC < chargeB){
             cout<<" C $"<<fixed<<setprecision(2)<<showpoint<<chargeA-chargeC<<endl;
        }
    }
     
   if (package == 'b' || package =='B'){
       cout<<"$"<<fixed<<setprecision(2)<<showpoint<<chargeB;
       
        if (chargeB < chargeA && chargeB < chargeC){
            cout<<" B $0.00"<<endl;
        }
        if (chargeA < chargeB && chargeA < chargeC){
           cout<<" A $"<<fixed<<setprecision(2)<<showpoint<<chargeB-chargeA<<endl;
        }
        if (chargeC < chargeA && chargeC < chargeB){
             cout<<" C $"<<fixed<<setprecision(2)<<showpoint<<chargeB-chargeC<<endl;
        }
   }
    
   if (package == 'c' || package == 'C'){
       cout<<"$"<<fixed<<setprecision(2)<<showpoint<<chargeC;
       
        if (chargeC < chargeA && chargeC < chargeB){
            cout<<" C $0.00"<<endl;
        }
        if (chargeA < chargeB && chargeA < chargeC){
           cout<<" A $"<<fixed<<setprecision(2)<<showpoint<<chargeB-chargeA<<endl;
        }
        if (chargeB < chargeA && chargeB < chargeC){
             cout<<" B $"<<fixed<<setprecision(2)<<showpoint<<chargeC-chargeB<<endl;
        }
   }
}

void problem5(){
    //Declare all Variables Here
    float payRate,
            GrssPay,           //Gross pay (output)
            amnt1, amnt2;       //Amount1 and Amount2 to calculate rate of pay
          
    unsigned short hrsWrkd,     //Hours worked 
                   workH,       //Work time and a half for all hours worked
                   workDT;      //Double time for working over 40 hours
                   
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if (hrsWrkd <= 20){
        GrssPay = payRate * hrsWrkd;
    }

    else if (hrsWrkd <= 40){
        workH = hrsWrkd - 20;
        amnt1 = workH * 1.5;
        GrssPay = payRate * (amnt1 + 20);
    }

    else if (hrsWrkd > 40){
        workH = 20;
        amnt1 = workH * 1.5;
        workDT = hrsWrkd - 40;
        amnt2 = workDT * 2;
        GrssPay = (amnt1 + amnt2 + 20) * payRate;
    }
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<GrssPay<<endl;
}

void problem6(){
    
float scalc(float x, int nterms);       //Func: "Series Calculation" //Includes float and int argumente

    //Declare all Variables Here
    unsigned int nterms; 
    float x; 

    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    cout<<fixed<<setprecision(6)<<scalc(x, nterms)<<endl;
}

//call the function
float scalc(float x, int nterms){

    //Declare all Variables Here
    float power, 
          expont = 0.0f;
    
    power = 1;         //Assign power with x
    int cPower = 1;

    //For loop to find f(x)
    for (int i = 0; i < nterms; i++){
        unsigned int factrl;
        factrl = 1;     //Initialize factorial to value of 1
        power = 1;

        //for loop to compute the power
        for (int j = 1; j <= cPower; j++){
            power *= x;
        }

        //for loop to compute the factorial
        for (int k = 1; k <= cPower; k++){
            factrl *= k;
        }

        //for the current iteration, decide if we need to subtract or add the power
        if (i % 2 == 1){
            expont -= power / factrl;
        }
        
        else{
            expont += power / factrl;
        }
        //at end of each loop increment, the current power by 2 - 1, 3, 5, 7, 9 ..
        cPower += 2;
    }

    //Return the exponent from function
    return expont; 
}