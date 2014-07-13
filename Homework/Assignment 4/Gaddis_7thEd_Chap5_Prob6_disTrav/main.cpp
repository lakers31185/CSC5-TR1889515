/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob6 Distance Traveled
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {
     
    //Declare Variables & Initialize Entries
    
    //Variables
    int speed=0,            //Speed in MPH Entered   (MPH)
         time=0;            //Time Traveled In Hours (HR.)
    
    //Enter Hours Traveled (HR.)
    cout<<"Enter Hours Traveled On Car: ";
    cin>>time;
    
    //Enter Speed Traveled (MPH)
    cout<<"Enter Speed Traveled in MPH: ";
    cin>>speed;
    
    //Format Output for Rate & Year Increments
    cout<<"_______________________________________________"<<endl;
    cout<<"Distance (miles)            Hours Traveled"<<endl;
    cout<<"________________             ________________"<<endl;
 
    //Calculations & Loops
    
    //For-Loop of Hours Traveled
    for(float hour= 1; hour <=time; hour++){
        //Calculate Distance Traveled
        float dist= speed*time/time;
        //Calculate Distance Traveled Each Hour
        dist*=hour;
        //Display Output of Distance Traveled in Miles
        cout<<dist;
            //Display Output of Hours Traveled
            if(hour<dist){
            cout<<"\t                        \Hour"<<hour<<endl;
            }
        
    }
    return 0;
}
    