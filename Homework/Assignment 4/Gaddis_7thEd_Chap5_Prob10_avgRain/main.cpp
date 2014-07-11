/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap3 Prob10 avgRain
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv){
    
    //Declare Variables & Initialize Entries
    
    //Inputs
    int rain1,rain2,rain3,rain4,rain5,rain6,rain7,     //Rainfall Avg. 12 months
            rain8,rain9,rain10,rain11,rain12;
    //Outputs
    int avg,                    //Rainfall Average For Year                                  
         year,                  //Number of Years Calculated
         morYear;               //Prompt User For More Years
    
    //Enter Number of years fro Calculation
    cout<<"How Many Years of rainfall Will You Calculate?";
    cin>>year;
    
    //For-Loop of 12 Months         
    for(int months=1;months<=year; months++)
    { 
        //Calculate For Multiple Years
        int Years=12*year;
        //Calculate 12 Months Per Year
        Years*=months;
        //Display 12 Months For Every Year 
        cout<<Years;
   
        //Do-While Loop Each Months Rainfall & Yearly Average Calculation
        do{
            //Format Output for Rate & Year Increments
            cout<<"__________________"<<endl;
            cout<<"Months (1-12)          "<<endl;
            cout<<"________________            "<<endl;
           
            //Get 12 Months    
            cout<<"Enter Each Month Average Rainfall for Year: "<<endl;
            cin>>rain1>>rain2>>rain3>>rain4>>rain5;
            cin>>rain6>>rain7>>rain8>>rain9>>rain10>>rain11>>rain12;
           
            //cCalculate Average
            avg=(rain1+rain2+rain3+rain4+rain5+rain6+rain7+rain8+rain9
            +rain10+rain11+rain12)/12;
            //Display output of Average
            cout<<"Average for Year Is= "<<avg<<endl;
                
            //Calculate More Years
        }while (year == morYear);
            if(months >= year){
                //Display Total Months Calculated
                cout<<"                       \Months"<<Years<<endl;
            }
   }
    return 0;
}
    
   
 
            
            
            
            
            
            
            
            
        