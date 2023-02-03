/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on January 31, 2023 10:12 PM
 * Purpose:  Menu for Homework Assignment 5
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
void problem9();
void minmax(int,int,int,int&,int&); 
int fctrl(int n);
bool isPrime(int);
int collatz(int n); 
int collatz1(int);


void testScr(int &);
void avgScr(int, int, int, int, int);
int lwstScr(int, int, int, int, int);

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
            case 7:    problem9();break;
            default:   def(inN);
	}
    }while(inN<9);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1: MinMax"<<endl;
    cout<<"Type 2 to execute Problem 2: Factorial"<<endl;
    cout<<"Type 3 to execute Problem 3: IsPrime"<<endl;
    cout<<"Type 4 to execute Problem 4: Collatz Sequence"<<endl;
    cout<<"Type 5 to execute Problem 5: Collatz Seq. w/ Output of Seq."<<endl;
    cout<<"Type 6 to execute Problem 9: Average"<<endl;
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
    int nums[3];
    int min, max;
    
    //Initialize Variables
    min = 0;
    max = 0;
    
    for (int i = 0; i < 3; i++)
        cin>>nums[i];
    
    //Process/Map inputs to outputs
    minmax(nums[0], nums[1], nums[2], min, max);
    
    cout << 
    "Input 3 numbers" << endl <<
    "Min = " << min << endl << 
    "Max = " << max;
}

void minmax(int num1,int num2,int num3,int& min,int& max){
    
    for(int i = 0; i < 3; i++){
        //FIND MAXIMUM VALUE
        if (num1 >= num2 && num1 >= num3)
            max = num1;
        else if (num2 >= num1 && num2 >= num3)
            max = num2;
        else if (num3 >= num1 && num3 >= num2)
            max = num3;
        
        //FIND MINIMUM
        if (num1 <= num2 && num1 <= num3)
            min = num1;
        else if (num2 <= num1 && num2 <= num3)
            min = num2;
        else if (num3 <= num1 && num3 <= num2)
            min = num3;
    }
}


void problem2(){
    //Declare Variables
    unsigned int n;
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function prototype"
            " found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>n;
    
    //Display Inputs/Outputs
    cout<<n<<"! = "<<fctrl(n);
}

int fctrl(int n){
    //Base condition
    if (n <= 1)return 1;
    
    //Recursive  
        //n! = 1 * 2 * 3 * ... (n-1) * (n)
        return fctrl(n-1)*n;
}
    
    
void problem3(){
    //Declare Variables
    unsigned int n; 
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>n;
    
    //Map/Process the inputs -> Outputs
    
    //Check to see if n is less than/equal to 0, if Y, then n != prime #
    if (n <=0){
        cout<<n<<" is not prime.";
        exit(0);
    }
    
    //Check to see if n is equal to 2, if Y, then n is a prime #
    if (n == 2){
        cout<<n<<" is prime.";
        exit (0);
    }
    
    //Set nsqrt = to sqrt fun of n + 1
    int nsqrt=sqrt(n)+1;
    
    //Set boolean value to false and check for nprime
    bool nprime=false;
    for (int i=2; i<=nsqrt && !nprime; i++){
        if (n%i==0){
            nprime=true;
            cout<<n<<" is not prime.";
        }
    }
    
    //If !nprime is prime 
    if (!nprime){
        cout<<n<<" is prime.";
    }

}
    

void problem4(){
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";

}
    
int collatz(int n){
    int i=1;
    
    while (n!=1){
        if (n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        i++;
    }
    return i;
}
   

void problem5(){
    //Declare Variables
    int n, ns;
   
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";

}
        
int collatz1(int n){
    int i=1;
    while (n!=1){
        cout<<n<<", ";
        
        if (n%2==0){
            n=n/2;
        }
        else{
            n=3*n+1;
        }
        i++;
    }
    
    cout<<"1"<<endl;;
    
    return i;
}


void problem6(){
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
    
}
    
void problem9(){
    //Declare Variables
    //Scores that will be taken as parameters for each func
    int score1, score2, score3, score4, score5; 
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    
    cout<<"Input the 5 test scores."<<endl;
    
    //Process/Map inputs to outputs
    
    //Call testScr func - use 5 different scores as parameters
    testScr(score1); 
    testScr(score2);
    testScr(score3);
    testScr(score4);
    testScr(score5);
    
    //Call avgScr func - take average of all test scores
    avgScr(score1, score2, score3, score4, score5); 

}

void testScr (int & score){
    //do while - will execute dependent on the score
    do{
        cin>>score;
        
        if (score<0 || score>100){
        cout<<"Invalid input.";
        }
    }
    
    while (score<0||score>100);

}

void avgScr (int score1, int score2, int score3, int score4, int score5){
    //Declare variables
    int lowest;
    float average;
    
    //Declare var "lowest" to initialize lwstScr fun, then take 5 score parameters
    lowest=lwstScr(score1, score2, score3, score4, score5);
    
    //Test each possible condition for score1, score2...
    if (lowest==score1)
        average=(score2+score3+score4+score5)/4;
    
    else if (lowest==score2)
        average=(score1+score3+score4+score5)/4;
    
    else if (lowest==score3)
        average=(score2+score1+score4+score5)/4;
    
    else if (lowest==score4)
        average=(score2+score3+score1+score5)/4;
    
    else
        average=(score2+score3+score4+score1)/4;
        cout<<"The average test score = "<<
                //Output has to have 1 precision point
                fixed<<showpoint<<setprecision(1)<<average;
}

int lwstScr(int score1, int score2, int score3, int score4, int score5){ 
    //Test each conditions where one score is less than/greater than the other 
    if (score1<score2 && score1 <score3 && score1<score4 && score1<score5)
    return score1;
    
    else if (score2<score1 && score2 <score3 && score2 <score4 && score2<score5)
    return score2;
    
    else if (score3<score2 && score3<score1 && score3<score4 && score3<score5)
    return score3;
    
    else if (score4<score2 && score4<score3 && score4<score1 &&score4<score5)
    return score4;
    
    else
    return score5;
}
