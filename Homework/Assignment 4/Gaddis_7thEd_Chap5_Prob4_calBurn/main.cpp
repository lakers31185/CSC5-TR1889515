/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob4 Ocean Levels
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {


//Declare variables & Initialize Entries
  
   //Outputs
    int calBurn= 0,
    a=0;
    
    for (int min = 10; min <= 30;min++){
        float calMin= 3.9;
    calMin*=min;
    a++;
    cout<<calMin<<endl;
    }
    return 0;
}