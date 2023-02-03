//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int nums[3];
    int min, max;
    
    //Initialize Variables
    min = 0;
    max = 0;
   
    for(int i = 0; i < 3; i++)
        cin>>nums[i];
    
    //Process/Map inputs to outputs
    minmax(nums[0], nums[1], nums[2], min, max);
    
    cout << 
    "Input 3 numbers" << endl <<
    "Min = " << min << endl << 
    "Max = " << max;
    //Output data
    
    //Exit stage right!
    return 0;
}

void minmax(int num1,int num2,int num3,int& min,int& max){
    
    for(int i = 0; i < 3; i++){
        //FIND MAXIMUM VALUE
        if( num1 >= num2 && num1 >= num3 )
            max = num1;
        else if( num2 >= num1 && num2 >= num3 )
            max = num2;
        else if( num3 >= num1 && num3 >= num2 )
            max = num3;
        
        //FIND MINIMUM
        if( num1 <= num2 && num1 <= num3 )
            min = num1;
        else if( num2 <= num1 && num2 <= num3 )
            min = num2;
        else if( num3 <= num1 && num3 <= num2 )
            min = num3;
    }
}