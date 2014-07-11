/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob5 Membership Fee Increase
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {
    
    //Declare Variables & Format for Program
    
    //Outputs
    int charg=0;         //Rate Amount Each Year
    
    //Format Output for Rate & Year Increments
    cout<<"Rates for Years 1 - 6 ($)     1 Year Increments"<<endl;
    cout<<"________________________    ________________"<<endl;
 
    //For-Loop of Year Increments (1-6)
    for(float year= 1; year <=6; year++){
        //Calculate Rate For 1 Year
        float rate= 0.04f*2.5e3f;
        //Calculate Rate For Years (1-6)
        rate*=year;
        //Calculate Amount($) Charged For Years (1-6)
        charg= 2.5e3f+rate;
        //Display Output of Year Rate Amount ($)
        cout<<charg;
            //Display Output of Up To Six years
            if (year<7){
            cout<<"\t                        \Year"<<year<<endl;
            }
    }
    return 0;
}
    