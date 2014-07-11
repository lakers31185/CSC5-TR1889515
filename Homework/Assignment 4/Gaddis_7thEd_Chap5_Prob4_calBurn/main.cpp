/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob4 Calories Burned
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Format For-Loop of Calories Burned On Treadmill for 10,15,20,25,30 Minutes
    
    //Calorie & Minute Format 
    cout<<"Calories Burned    Minutes on Treadmill"<<endl;
    cout<<"on Treadmill"<<endl;
    cout<<"_____________      ____________________"<<endl;
    
    //For Loop of Calories per Minute for (10,15,20,25,30)Min.
    for (int min = 10; min <= 30;min+=5){
        float calMin= 3.9;              //Number of Calories Burned Per Minute
        calMin*=min;                    //Calculate Calories Per Minute
        cout<<calMin;
            //Display Calories per Minute For (10,15,20,25,30)Min
            if (min < 31){
            cout<<"\t            \t"<<min<<endl;   
            }
        }
    //Exit Stage Right!
    return 0;
}