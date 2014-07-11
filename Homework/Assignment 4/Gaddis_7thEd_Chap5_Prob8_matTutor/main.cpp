/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 9 2014
 * Purpose:Gaddis 7thEd Chap5 Prob8 Math tutor
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


//User Libraries


//Global Constants


//Function Prototypes


//Execution Starts Here!
int main(int argc, char** argv){
     
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
 //Exit stage right!
    return 0;
}


 
 