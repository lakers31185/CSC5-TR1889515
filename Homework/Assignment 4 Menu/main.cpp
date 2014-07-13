/*
 * File:   main.cpp
 * Author: Tony reyes
 * Purpose:  To Illustrate the code for
 * developing a menu for Chapter 5
 * Problem 1 -> Sum of Numbers
 * Problem 2 ->ASCII Conversion
 * Problem 3 ->  Ocean Levels
 * Problem 4 -> Calories Burned
 * Problem 5 -> Membership Fee Increase
 * Problem 6 -> Distance Traveled
 * Problem 7 -> Math tutor
 * Problem 8 -> Average Rain
 * Problem 9 -> Celsius/Fahrenheit
 * Created on Jul,13,2014
*/
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 1 to solve Sum of Numbers Prob.1: "<<endl;
        cout<<"Type 2 to solve ASCII Conversion Prob.2: "<<endl;
        cout<<"Type 3 to solve Ocean Levels Prob.3 "<<endl;
        cout<<"Type 4 to solve Calories Burned Prob.4 "<<endl;
        cout<<"Type 5 to solve Membership Fee Increase Prob.5 "<<endl;
        cout<<"Type 6 to solve Distance Traveled Prob.6 "<<endl;
        cout<<"Type 7 to solve Math Tutor Prob.7 "<<endl;
        cout<<"Type 8 to solve Average Rain Prob.8 "<<endl;
        cout<<"Type 9 to solve celsius/fahrenheit "<<endl;
       
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            
            case'1':{
                //Inputs
                int posNum;          //Positive Integer MUST BE Entered
    
                //Outputs
                int sumInt=0;       //Sum of All Integers Up to Entry Number
                
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
                break; 
                }
             case'2':{
                for(unsigned char num=0;num<=127;num++){
                //Display ASCII Code
                cout<<num;
                //Display Output of 16 Characters Per Line
                if (num%16==15)cout<<endl;
                }
            break;
            }
           case'3':{
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
            }
            case '4':{
                //Format For-Loop of Calories Burned On Treadmill for 10,15,20,25,30 Minutes
    
                //Calorie & Minute Format 
                cout<<"Calories Burned    Minutes on Treadmill"<<endl;
                cout<<"on Treadmill"<<endl;
                cout<<"_____________      ____________________"<<endl;
    
                //For Loop of Calories per Minute for (10,15,20,25,30)Min.
                for (int min = 10; min <= 30;min+=5){
                //Number of Calories Burned Per Minute
                float calMin= 3.9;             
                //Calculate Calories Per Minute
                calMin*=min;
                //Display Output of Calories Per Minute Burned on Treadmill
                cout<<calMin;
                //Display Minutes(10,15,20,25,30)
                if (min < 31){
                cout<<"\t            \t"<<min<<endl;   
                    }
                }
           }
            case'5':{
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
            }
            case'6':{
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
            }
            case'7':{
                //Declare Variables
                char choice;     //Select From Addition, Subtraction, Multiplication or Div.
                char playAgn;    //Prompt User for Another Topic
    
                //Loop to Play Again
                do{
                //Loop Menu to Find Select Program 
                do{
                //Output the menu and input the choice of (+,-,*,/)
                cout<<"___________________"<<endl;
                cout<<"Type 1 for Addition"<<endl;
                cout<<"Type 2 for Subtraction"<<endl;
                cout<<"Type 3 for Multiplication"<<endl;
                cout<<"Type 4 for Division"<<endl;
                cin>>choice;
        
                //Place problem solutions in the switch statement
                cout<<endl;
                switch(choice){
                case  '1' :{
                    //Inputs
                    int sum1,
                    sum2,
                    numSum;
                    //Outputs
                    int totSum=0;
    
                    //Enter First Number to be Added
                    cout<<"Enter the First Number to be Added: ";
                    cin>>sum1;
                    //Enter Second Number to be Added
                    cout<<"Enter the First Number to be Added: ";
                    cin>>sum2;
    
                    //Enter Your Answer for Total 
                    cout<<"What is the Sum of the 2 numbers? ";
                    cin>>numSum;

                    //Calculate the Sum of Both Numbers Entered
                     totSum= sum1+sum2;
    
                    //Validate if Total of Numbers is Correct or Wrong
                    cout<<"Answer: "<<totSum<<endl;
                    if (totSum == numSum)
                    cout<<"Correct Human!"<<endl;
                    else if (totSum > numSum) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    else if (totSum < numSum) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    break;
                }case '2':{
                    //Inputs
                    int sub1,
                    sub2,
                    numSub;
                    //Outputs
                    int totSub=0;
    
                    //Enter First Number to be Added
                    cout<<"Enter the First Number to be Subtracted: ";
                    cin>>sub1;
                    //Enter Second Number to be Added
                    cout<<"Enter the First Number to be Subtracted: ";
                    cin>>sub2;
    
                    //Enter Your Answer for Total 
                    cout<<"What is the Answer? ";
                    cin>>numSub;

                    //Calculate the Sum of Both Numbers Entered
                    totSub= sub1-sub2;
    
                    //Validate if Total of Numbers is Correct or Wrong
                    cout<<"Answer: "<<totSub<<endl;
                    if (totSub == numSub)
                    cout<<"Correct Human!"<<endl;
                    else if (totSub > numSub) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    else if (totSub < numSub) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    break;  
                }case '3':{
                    //Inputs
                    int mult1,
                    mult2,
                    nummult;
                    //Outputs
                    int totmult=0;
    
                    //Enter First Number to be Added
                    cout<<"Enter the First Number to be Multiplied: ";
                    cin>>mult1;
                    //Enter Second Number to be Added
                    cout<<"Enter the First Number to be Multiplied: ";
                    cin>>mult2;
    
                    //Enter Your Answer for Total 
                    cout<<"What is the Answer? ";
                    cin>>nummult;

                    //Calculate the Sum of Both Numbers Entered
                    totmult= mult1*mult2;
    
                    //Validate if Total of Numbers is Correct or Wrong
                    cout<<"Answer: "<<totmult<<endl;
                    if (totmult == nummult)
                    cout<<"Correct Human!"<<endl;
                    else if (totmult > nummult) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    else if (totmult < nummult) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    break;
                }case '4':{
                    //Inputs
                    float div1,
                    div2,
                    numdiv;
                    //Outputs
                    float totdiv=0;
    
                    //Enter First Number to be Added
                    cout<<"Enter the First Number to be Divided: ";
                    cin>>div1;
                    //Enter Second Number to be Added
                    cout<<"Enter the First Number to be Divided: ";
                    cin>>div2;
    
                    //Enter Your Answer for Total 
                    cout<<"What is the Answer? ";
                    cin>>numdiv;

                    //Calculate the Sum of Both Numbers Entered
                    totdiv= div1/div2;
    
                    //Validate if Total of Numbers is Correct or Wrong
                    cout<<"Answer: "<<totdiv<<endl;
                    if (totdiv == numdiv)
                    cout<<"Correct Human!"<<endl;
                    else if (totdiv > numdiv) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                    else if (totdiv < numdiv) 
                    cout<<"Sorry You Are Not Correct "<<endl;
                break;
                }
                default:{
                cout<<"Exit Menu"<<endl<<endl;
                    }
                } 
                cout<<"Would you like to play again"<<endl;
                cout<<"Type Y for yes"<<endl;
                cin>>playAgn;
                }while(choice>='1'&&choice<='4');
                }while(playAgn=='Y');
            }
            case'8':{
                //Inputs
                int rain1,rain2,rain3,rain4,rain5,rain6,rain7,    //Rainfall 12
                rain8,rain9,rain10,rain11,rain12;                // Months
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
            }
            case '9':{
                //Format Output for Rate & Year Increments
                cout<<"Celsius (c)            Fahrenheit (f)"<<endl;
                cout<<"___________            ________________"<<endl;
  
                //For-Loop of Fahrenheit (0-20)
                for (int fahr=0;fahr<=20;fahr++){
                //Partial Fahrenheit Formula
                float cels= 1.8f;
                //Calculate Fahrenheit and Celsius Conversion
                cels*=fahr;
                //Add 32 to Calculation and Display Output
                cout<<cels+32;
                //Set Celsius Range 0 - 20   
                if(fahr<21){
                //Display Output of Celsius Conversion
                cout<<"\t          \t"<<fahr<<endl;
                    }
                }
            }
            default:{
                        cout<<"Exit?"<<endl;
                        loop=false;
                        break;
                }
        };
    }while(loop);//Upper do-while
    return 0;
}