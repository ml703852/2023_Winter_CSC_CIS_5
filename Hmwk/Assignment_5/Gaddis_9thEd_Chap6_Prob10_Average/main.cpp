/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 01, 2023, 1:23 PM
 * Purpose: Read 5 Average 4 Remove the Lowest Score
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void testScr(int &);
void avgScr(int, int, int, int, int);
int lwstScr(int, int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    
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
    return 0;
}

//function calls
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