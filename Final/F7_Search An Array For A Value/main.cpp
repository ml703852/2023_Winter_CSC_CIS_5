/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 8th, 2023 9:24 AM
 * Purpose:  Searching for multiple occurrence of patterns
 *  Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays
void print(const int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}

//Function Calls

//Function to search for ONE occurence
int srch1(const char sntnce[], const char pattern[], int count)
{
    //Declare Variables
    int i, j;
    
    //Get the length of both sentence and pattern
    int strlen1 = strlen(sntnce);
    int strlen2 = strlen(pattern);
    
    for (i = count; i <= strlen1 - strlen2; i++) {
        for (j = 0; j < strlen2; j++) {
            if (sntnce[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == strlen2) {
            return i;
        }
    }
    return -1;
}

//Function to search for ALL occurences
void srchAll(const char sntnce[], const char pattern[], int match[])
{
    //Declare Variables
    int i, j, n;
        
    //Get the length of both sentence and pattern
    int strlen1 = strlen(sntnce);
    int strlen2 = strlen(pattern);
    
    for (i = 0, j = 0; i <= strlen1 - strlen2; i++) {
        n = srch1(sntnce, pattern, i);
        if (n != -1) {
            match[j++] = n;
            i = n;
        }
    }
    match[j] = -1;
}

//Function to print the characters from the input
void print(const char x[])
{
    //Display the characters
    cout<<x<<endl;
}

//Function to print the number of matches
void print(const int match[])
{
    //Declare variables
    int i;
    
    for (i = 0; match[i] != -1; i++) {
        cout<<match[i]<<endl;
    }
    
    //If the counter = 0, then there were no matches found
    if (i == 0)
    {
        cout<<"None"<<endl;
    }
}
