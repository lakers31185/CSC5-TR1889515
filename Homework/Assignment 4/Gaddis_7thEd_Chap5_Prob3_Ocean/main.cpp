/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose:Gaddis 7thEd Chap5 Prob3 Ocean Levels
 */

//System Libraries
#include <iostream>

using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv) {

    //Write Program to Display Ocean Level Rise For Years Up to 25   
   
    //Format Output of Loop

    //Ocean Level Rise & Year Format
    cout<<"1.5 mm of Rise per Year     1 Year Increments"<<endl;
    cout<<"________________________    ________________"<<endl;
  
    //For-Loop Incrementing 1.5 mm Every Year
    for (int year=1; year <= 25; year++) {
        //Rise Level Per Year 1.5mm
        float levRis= 1.5;           
        //Calculate Rise For Years Up to 25
        levRis*=year;             
        //Display Output Rise Levels
        cout<<levRis;
            //Display Output Up to 25 Years
            if(year<26){
            cout<<"\t                        \Year"<<year<<endl;
        }
    }
//Exit Stage Right! 
return 0;
}