/* 
 * File:   main.cpp
 * Author: Tony reyes
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Min/Max Number
 * Problem 2 -> Roman Numeral
 * Problem 3 -> Magic Date
 * Problem 4 -> Area of a Rectangle
 * Problem 5 -> Mass * Weight
 * Problem 6 -> Body Mass Index
 * Problem 7 -> Time Calculator
 * Problem 8 -> Dollar Game
 * Problem 9 -> Math Tutor
 * Problem 10 -> Software Sales
* Created on July 4 2014
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //General Menu Format
    bool loop=true;
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4 "<<endl;
        cout<<"Type 5 to solve problem 5 "<<endl;
        cout<<"Type 6 to solve problem 6 "<<endl;
        cout<<"Type 7 to solve problem 7 "<<endl;
        cout<<"Type 8 to solve problem 8 "<<endl;
        cout<<"Type 9 to solve problem 9 "<<endl;
        cout<<"Type 10 to solve problem 10 "<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
            
            case'1':{
        unsigned int num1,
                     num2;
         if (num1>=num2)
        cout<<" First Number Entered Is Larger, Second is Smaller ";
         else 
            cout<<" Second Number Is Max, First is Smaller";
            break;
            }
            case'2':{
            char romNum;
    
    //Enter a Number From 1 to 10
    cout<<"Enter a Number From 1 to 10(a - j for Menu) :";
    cin>>romNum;
    
//Switch Inputs & Display
    switch (romNum)
    {
        case 'a': cout<<"You Entered I:";
        break;
        case 'b': cout<<"You Entered II";
        break;
        case 'c': cout<<"You Entered III";
        break;
        case 'd': cout<<"You Entered IV";
        break;
        case 'e': cout<<"You Entered V";
        break;
        case 'f': cout<<"You Entered VI";
        break;
        case 'g': cout<<"You Entered VII";
        break;
        case 'h': cout<<"You Entered VIII";
        break;
        case 'i': cout<<"You Entered IX";
        break;
        case 'j': cout<<"You Entered X";
        break;
        default: cout<<"You Didn't Enter a Number From 1 to 10";
     }       
            break;
            }
            case'3':{
                 unsigned short mnth,       //Month for Magic Date Calculations
                   Day,       //Day for Magic Date Calculations
                   Year,       //Year for Magic Date Calculations
                   intDate=0;     //Product of Month*Day
    //Outputs
    unsigned short 
                   magDate=0;     //Magic Date Formula: Month*Day = Year
 
//Enter Month, Day & Year for Magic Date Calculations
    cout<<"Enter A Month For Magic Date Calculation: ";
    cin>>mnth;
    cout<<"Enter A Day For Magic Date Calculation: ";
    cin>>Day;
    cout<<"Enter A Year For Magic Date Calculation (YY): ";
    cin>>Year;

//Calculations for Magic Date
    
    intDate= mnth*Day;
    magDate= Year;
    
//Validate  Outputs
    
    //Validate if Entries Match Magic Date Formula
    {
        if (intDate == magDate)
            cout<<"Date Is Magic";
        else 
            cout<<"Date Is Not Magic";
    
    }
            break;   
            }
            case'4':{
                 int lenRe1,     //Length of Rectangle 1
        lenRe2,     //Length of Rectangle 2
        widRe1,     //Width of Rectangle 1
        widRe2;     //Width of Rectangle 2
    
    //Outputs
    int area1=0,    //Area of Rectangle 1
        area2=0;    //Area of Rectangle 2
    
    //Enter Length and Width of 2 Rectangles
    
    cout<<"Enter Length of Rectangle 1: ";
    cin>>lenRe1;
    cout<<"Enter Width of Rectangle 1: ";
    cin>>widRe1;
    cout<<"Enter Length of Rectangle 2 : ";
    cin>>lenRe2;
    cout<<"Enter Width of Rectangle 2: ";
    cin>>widRe2;
    
//Calculations
    
    //Calculate Area of Both Rectangles
    area1= lenRe1*widRe1;
    area2= lenRe2*widRe2;
   
    if (area1 == area2)
        cout<<"Area's Are Equal";
    else if (area1 > area2)
        cout<<"Area 1 Is Greater";
    else 
        cout<<"Area 2 Is Greater";
             break;
            }
            case'5':{
                float weigh,          //Enter Weight in Inches (in.)
          heigh;          //Enter Height in Pounds (lbs.)  
           
    //Outputs
    float bMi=0;           //Calculated Body Mass Index
    
    //Enter Weight and Height
    cout<<"Enter Your Height: (in.) ";
    cin>>heigh;
    cout << "Enter Your Weight: (lbs.) ";
    cin>>weigh;
    
//Calculations
    
    //Calculate Body Mass Index
    bMi= (weigh*703)/(heigh*heigh);   

//Validate Outputs
     
    //Set BMI Ranges & Validate Expressions
    if (bMi < 18.5)
        cout<<"You Are Underweight";
    else if (bMi > 25)
        cout<<"You Are Overweight";
    else if (bMi >= 18.5 < 25)
        cout<<"Your Are Optimal Weight";
            break;
            }
            case'6':{
                float mass;         //Input Mass in Kilograms (kg)
        
    //Outputs
   float weigh;         //Calculated Weight in Newton (N)
    
    //Enter Mass of Object to be Calculated
    cout<<"Enter Objects Mass: ";
    cin>>mass;
    
//Calculations 

    //Calculate using Newton Formula & Display
    weigh= mass*9.8f;
    cout<<"Calculated Weight= " <<weigh<<endl;
    
//Validate Outputs
    
    //Set Ranges & Validate Expressions
    if (weigh < 1e1f) 
       cout<<"Object Too Light";
    else if (weigh > 10e2f)
          cout<<"Object Too Heavy ";
    else if (weigh >=1e1f < 10e2f)
        break;
            }
            case'7':{
                
    //Inputs 
    float  minCalc= 60/1,          //Calculate Seconds in a Minute
            houCalc= 3600/1,        //Calculate Seconds in a Hour       
            dayCalc= 86400/1,      //Calculate Seconds in a Day

    
               numSec;       // Number Entered for Calc. 
    
    //Outputs
    float min,          //Calculation of Minutes in Sec.
          hour,         //Calculation of Hours in Sec.
          day;          //Calculation of Days in Sec. 
    
    //Enter a Number of Seconds to be  Calculated
    cout<<"Enter A Number of Seconds: ";
    cin>>numSec;
   
//Calculations
    
    //Calculate Minutes, Hours, Days
    min= numSec/60;
    hour= numSec/3600;
    day= numSec/86400;
    
//Set Ranges & Validate Expressions
   
    //Set Ranges for Minutes, Hours, Days & Display
   
    if (numSec >= minCalc && numSec < houCalc) 
    {   
         cout<<"Number of Minutes= " <<min<<endl;;
    }    
    else
    {
         if (numSec >= houCalc && numSec < dayCalc)
         {    
             cout<<"Number of Hours= "<<hour;
         }
         else
         {
             if (numSec >= dayCalc)
            {
                cout<<"Number of Days= "<<day;
             }
         }
    }   
            break;
            }
            case'8':{
                //Inputs
    int               penny,
                      nickel,
                        dime,
                     quarter;
  
    //Outputs
   int              dollr= 0;
    
    //Enter Number of (Pennies, Nickels, Dimes, Quarters)
    cout<<"Enter Number Pennies= ";
    cin>>penny;
    cout<<"Enter Number Nickels= ";
    cin>>nickel;
    cout<<"Enter Number Dimes= ";
    cin>>dime;
    cout<<"Enter Number Quarters= ";
    cin>>quarter;
 
//Calculations
    
    //Calculate Winning Ticket
    dollr= (penny*1)+(nickel*5)+(dime*10)+(quarter*25);
    
//Validate Expressions 
    
    //Validate Winning Amount & Display Outputs
    if (dollr < 100)
     cout<<"You Lose, Under $1.00 ";
    
    else if (dollr > 100)
     cout<<"You Lose Over $1.00 ";
    
    else 
        cout<<"You Win Congratulations";

    //Display if User "Won" or "Lost" the Game
    
     cout<<"Total Amount Entered ($) "<<dollr<<endl;
            break;
            }
            case'9':{
                //Inputs
    int sum1,
        sum2,
       numSum;
    
    //Outputs
    int totSum=0;
    
    //Enter First Number to be Added
    cout<<"Enter the First Number to be Added ";
    cin>>sum1;
    
    //Enter Second Number to be Added
    cout<<"Enter the First Number to be Added ";
    cin>>sum2;
    
    //Enter Your Answer for Total 
    cout<<"What is the Sum of the 2 numbers? ";
    cin>>numSum;
    
//Calculations
    
    //Calculate the Sum of Both Numbers Entered
    totSum= sum1+sum2;
    
//Validate Expressions & Display Outputs
    
    //Validate if Total of Numbers is Correct or Wrong
    cout<<"Answer: "<<totSum<<endl;
    if (totSum == numSum)
        cout<<"Correct Human!";
    else if (totSum > numSum) 
        cout<<"Sorry You Are Not Correct ";
    else if (totSum < numSum) 
        cout<<"Sorry You Are Not Correct ";
           
            break;
            }
            case '10':{
                float   numUni;             //Enter Number of Units Sold
      
    //Outputs
    float     totPur=0,         //$99.00 per Unit (Purchase Amount):
             totPur1=0,         //%20 on (10 - 19 Units Sold) 
            totPur2=0,          //%30 on (20- 49 Units Sold) 
            totPur3=0,          //%40 on (50 - 99 Units Sold) 
            totPur4=0;          //%50 on 100+ Units Sold
    
    //Enter Number of Units Sold
    cout<<"Enter Units Sold must be Greater than Zero= ";
    cin>>numUni;

//Calculations
    
    //Calculate Total Purchase
    totPur= (numUni*99);
    
    //Calculate Total Purchase + Discount Formula
   totPur1= (totPur)+(numUni*99*.2); 
   totPur2= (totPur)+(numUni*99*.3);
   totPur3= (totPur)+(numUni*99*.4);
   totPur4= (totPur)+(numUni*99*.5);
   
//Set Ranges & Validate Expressions
  
   //Set Ranges for (%20, %30, %40 and %50) & Display Outputs
  
   if (numUni == 10 || numUni < 19)
       cout<<"Total Purchase Amount Including %20 Discount= "<<totPur1;
   else if (numUni == 20 || numUni < 49)
       cout<<"Total Purchase Amount Including %30 Discount= "<<totPur2;
   else if (numUni == 50 || numUni < 99)
       cout<<"Total Purchase Amount Including %40 Discount= "<<totPur3;
   else if (numUni >= 100)
       cout<<"Total Purchase Amount Including %50 Discount= "<<totPur4;
   else if (numUni <= 9)
       cout<<"No Discount";
   
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


        