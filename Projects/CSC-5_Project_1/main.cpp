/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: CSC-5 Project 1 World Cup Fever
*/

//System Libraries
#include <iostream>


#include<ctime>
#include<cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void intro (void);
int compLocation (void);
int userLocation (void);
void intPosition();
int choose();
int scoreGoal (int,int);
void def(int);
void problem1();
void problem2();

//Execution Starts Here!
int main(int argc, char** argv){
    intro();
    cout<<endl;
    int userCho;
    do{
        intPosition();
        userCho=choose();
        switch(userCho){
        case 1: problem1();break;
        case 2: problem2();break;
       default:;
        };
       
    
    
    }while(userCho<3);
    





return 0;
}
 void intro(){
    cout<<"Welcome to World Cup Fever: Penalty Shoot Out!... "
    <<"To Play this game some specific information will be asked about "
    <<"who you are...You will be asked to select the position "
    <<"of either GoalKeeper or GoalScorer...The Computer will Randomly "
    <<"Generate an option of the     location he thinks the ball will be "
    <<"no matter what Position (Keeper/Scorer) is selected...Can you out "
    <<"Smart your opponent and bring home a win!"<<endl;
}
//User Selects Position
void intPosition(){
    cout<<"Type 1 to Select Goal Scorer: "<<endl;
    cout<<"Type 2 to Select Goal Keeper"<<endl;
    cout<<"Type 3 to exit \n"<<endl;
}

//Choose problem number function
int choose(){
    int userCho;
    cin>>userCho;
    return userCho;
}
int compLocation (){
    return rand()%3+1;
}
int userLocation (){
    int pos;
    do{
        cout<<"Choose A Location From The Following: "<<endl
            <<"[1] Position: Left Side "<<endl
            <<"[2] Position: Center "<<endl
            <<"[2] Position: Right Side "<<endl; 
        cout<<"Enter A Position:  ";
        cin>>pos;
    }while (pos>3||pos<1);
        return pos;
}
int scoreGoal (int goalie,int keeper){
    
}
//Solution to problem 1
void problem1(){
    //Declare Variables
    char count[10];
    //Enter Your Country of Nationalization
    cout<<"What is Your First Name? "<<endl;
    cin>>count;
  
    
}
void problem2(){
    //Declare Variables
    char count[10];
   
    //Enter Your Country of Nationalization
    cout<<"What is Your First Name? "<<endl;
    cin>>count;
}
//Exit Game
void def(int userCho){
    cout<<"You typed "<<userCho<<" to exit the program"<<endl;
}