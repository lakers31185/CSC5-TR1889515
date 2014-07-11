/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob1 Sum of Numbers
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

    //Inputs
    int posNum;             //Positive Integer MUST BE Entered
    
    //Outputs
    int sumInt=0;           //Sum of All Integers Up to Entry Number
                
    //Do-While Loop For Positive Integer Only
    do{
        cout<<"Enter Positive Integer= "<<endl;
        cin>>posNum;
            if (posNum < 1)
            cout<<"Enter Positive Number! "<<endl;
    }while(!(posNum>0&&posNum<1e9));

        //For Loop to Increment and Sum
        for (int b=1; b <= posNum; b++) {
            sumInt+=b;
            cout<<sumInt<<endl;
    }
    //Display Sum of All Incremented Integers
    cout << "The sum is: " << sumInt << endl;
    
    //Exit Stage Right!
    return 0;
}
