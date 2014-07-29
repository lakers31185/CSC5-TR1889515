/* 
* File:   main.cpp
* Author: Tony Reyes
* July, 21 2014
* Purpose: CSC-5 Project 1 Soccer: World Cup Fever ; Penalty Kicks
*/

//System Libraries
#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void intro ();
int userLocation ();

//Execution Starts Here!
int main(int argc, char** argv){
     string name; 
      char count[3]; 
    int sum=0;
    //Display Introduction of Game
    intro();
    cout<<endl;

    //General Menu Format
    bool loop=true;
     for (int win =0;win<5;win++)
     {
    do{
       
   
    //Prompt User for Name
    cout<<"what is Your First Name:  ";
    cin>>name;

    //What is your Country of Nationalization?
    cout<<"what is Your Country of Nationalization?: (XXX)  ";
    cin>>count;
    
    //Display Option To Play as Keeper or Scorer
    cout<<"Type 1 to Play as Goal Keeper: "<<endl;
    cout<<"Type 2 to Play as  Goal Scorer: "<<endl;


    //Read the choice
    char choice;
    cin>>choice;
    //Choose Either Keeper/Scorer VS. Computer
    switch(choice){

    //Play as Keeper
    case'1':{

    //Instruct User About Scenario
    cout<<"Block the Shot"<<endl;
    cout<<"________________"<<endl;
    
    //Declare Variables & Initialize Entries
    //Inputs
                                       //Enter Name of User
    unsigned short keep,shot;        //Selection of Scorer or Keeper
                                      //Enter 3 Character Nation  EX:(usa)
    short wins;                      //1 point for win
    float sum;
    
    //Set Random Seed
    srand(static_cast<unsigned int>(time(0)));

    //Set Computer Location to Random
    keep=rand()%3+1;
    
    //Use Function for User Selection
    shot=userLocation();

    //Set Up Parameters of Goal or No Goal
    for (int win=0;win<1;win++)
    {
    if (shot==1){
        if(keep==1){
      
          fstream newfile;
          newfile.open("block.txt");
          newfile<<"You Blocked The Shot!";
          newfile.close();
      
        wins=1;
        cout<<":Point For:"<<name<<":From:"<<count<<endl;
        cout<<"This Is Round Number: "<<win<<endl;
        }             
        else if (keep==2){
        cout<<" __________________"<<endl
            <<" |                |"<<endl
            <<" |  o             |"<<endl
            <<" |   _|/_         |"<<endl 
            <<" |   /            |"<<endl 
            <<"           o       "<<endl
            <<"          |        "<<endl    
            <<"         o         "<<endl
            <<"        |          "<<endl 
            <<"Goal..They Scored.."<<endl;
            cout<<"Your Opponent Gets Point"<<endl;
            wins=1;
        }
        else{
        cout<<" __________________"<<endl
            <<" |                |"<<endl
            <<" |  o             |"<<endl
            <<" |   _|/_         |"<<endl 
            <<" |   /            |"<<endl 
            <<"              o   "<<endl
            <<"             |    "<<endl    
            <<"            o      "<<endl
            <<"Goal..They Scored.."<<endl;
            cout<<"Your Opponent Gets Point"<<endl;
             wins=1;
        }
    }  
    else if (shot==2){
        if (keep==1){
        cout<<"  __________________ "<<endl
            <<" |                 |"<<endl
            <<" |        O        |"<<endl
            <<" |        _|/_     |"<<endl 
            <<" |         /       |"<<endl 
            <<"     o               "<<endl
            <<"      |             "<<endl    
            <<"        o           "<<endl
            <<"          |         "<<endl 
            <<"Goal..They Scored.."<<endl;
            cout<<"Your Opponent Gets Point"<<endl;
             wins=1;
        }
        else if(keep==2){
        cout<<"  __________________"<<endl
            <<" |                 |"<<endl
            <<" |        O        |"<<endl
            <<" |        _|/_     |"<<endl 
            <<" |         /       |"<<endl 
            <<"          o         "<<endl
            <<"          |         "<<endl    
            <<"          o         "<<endl
            <<"         |          "<<endl 
            <<"You Blocked The Shot!"<<endl;
           wins=1;
            cout<<":Point For:"<<name<<":From:"<<count<<endl;
             cout<<"This Is Round Number: "<<win<<endl;
        } 
        else{
        cout<<" _________________"<<endl
            <<"|                 |"<<endl
            <<"|    o            |"<<endl
            <<"|   _|/_          |"<<endl 
            <<"|    /            |"<<endl
            <<"               o  "<<endl
            <<"              |   "<<endl    
            <<"             o    "<<endl
            <<"            |     "<<endl 
            <<" THEY MISS!!!!     "<<endl;
           wins=1;
            cout<<":Point For:"<<name<<":From:"<<count<<endl;
             cout<<"This Is Round Number: "<<win<<endl;
        }
    }
    else if (shot==3)
        if (keep==1){
        cout<<" __________________"<<endl
            <<"|                  |"<<endl
            <<"|             o    |"<<endl
            <<"|             _|/_ |"<<endl 
            <<"|              /   |"<<endl
            <<"     o                 "<<endl
            <<"        |              "<<endl    
            <<"          o            "<<endl
            <<"           |           "<<endl 
            <<"Goal..They Scored..    "<<endl;
            cout<<"Your Opponent Gets Point"<<endl;
             wins=1;
    }
    else if (keep==2){
        cout<<"__________________"<<endl
        <<"   |                  |"<<endl
        <<"   |             o    |"<<endl
        <<"   |             _|/_ |"<<endl 
        <<"   |              /   |"<<endl
        <<"            o         "<<endl
        <<"            |         "<<endl    
        <<"            o         "<<endl
        <<"           |          "<<endl 
        <<"Goal..They Scored..   "<<endl;
        cout<<"Your Opponent Gets Point"<<endl;
         wins=1;
        }
        else{
        cout<<" __________________"<<endl
            <<"|                  |"<<endl
            <<"|             o    |"<<endl
            <<"|             _|/_ |"<<endl 
            <<"|              /   |"<<endl
            <<"                  o  "<<endl
            <<"                  |  "<<endl    
            <<"                 o   "<<endl
            <<"                |    "<<endl
            <<"You Blocked The Shot!"<<endl;
            wins=1;
            cout<<":Point For:"<<name<<":From:"<<count<<endl;
             cout<<"This Is Round Number: "<<win<<endl;
    }
    sum+=win;
    cout<<""<<sum<<endl;;
    }
    
            cout<<endl;
    }
    case'2':{
    //Declare Variables & Initialize Entries
    //Inputs
    string name;                     //Enter Name of User
    int keep,shot;                  //Selection of Scorer or Keeper
    char count[3];                  //Enter 3 Character Nation EX:(usa)
    short win;                      //1 point for win
    
    //Instruct User About Scenario
    cout<<"Shoot a Goal for Your Country!"<<endl;
    cout<<endl;

    //Set Random Seed
    srand(static_cast<unsigned int>(time(0)));

    //Set Computer Location to Random
    keep=rand()%3+1;
    //Use Function for User Selection
    shot=userLocation();

    //Set Up Parameters of Goal or No Goal
    if (shot==1){
        if(keep==1){
        cout<<" __________________"<<endl
            <<" |                |"<<endl
            <<" |    o           |"<<endl
            <<" |   _|/_         |"<<endl 
            <<" |    /           |"<<endl 
            <<"     o             "<<endl
            <<"       |           "<<endl    
            <<"        o          "<<endl
            <<"         |         "<<endl 
            <<"They Blocked Your Shot..   "<<endl;
            cout<<"Your Opponent Gets Point"<<endl;
            }             
        else if (keep==2){
        cout<<"__________________"<<endl
            <<" |                 |"<<endl
            <<" |        O        |"<<endl
            <<" |        _|/_     |"<<endl 
            <<" |         /       |"<<endl 
            <<"     o              "<<endl
            <<"       |            "<<endl    
            <<"        o           "<<endl
            <<"         |          "<<endl 
            <<" You Scored For Your Country!"<<endl;
            }
        else{
        cout<<" __________________"<<endl
            <<"|                  |"<<endl
            <<"|             o    |"<<endl
            <<"|             _|/_ |"<<endl 
            <<"|              /   |"<<endl
            <<"     o            "<<endl
            <<"       |           "<<endl    
            <<"        o          "<<endl
            <<"         |          "<<endl 
            <<" You Scored For Your Country!"<<endl;
            }
        }  
    else if (shot==2){
        if (keep==1){
        cout<<" __________________"<<endl
            <<" |                |"<<endl
            <<" |    o           |"<<endl
            <<" |   _|/_         |"<<endl 
            <<" |    /           |"<<endl 
            <<"          o         "<<endl
            <<"          |         "<<endl    
            <<"          o         "<<endl
            <<"         |          "<<endl 
            <<" You Scored For Your Country!"<<endl;
            }
        else if(keep==2){
        cout<<"  __________________"<<endl
            <<" |                 |"<<endl
            <<" |        O        |"<<endl
            <<" |        _|/_     |"<<endl 
            <<" |         /       |"<<endl 
            <<"          o         "<<endl
            <<"          |         "<<endl    
            <<"          o         "<<endl
            <<"         |          "<<endl 
            <<"They Blocked Your Shot..   "<<endl;
            cout<<"Your Opponent Gets Point"<<endl;   
            } 
        else{
        cout<<" __________________"<<endl
            <<"|                  |"<<endl
            <<"|             o    |"<<endl
            <<"|             _|/_ |"<<endl 
            <<"|              /   |"<<endl
            <<"          o          "<<endl
            <<"          |         "<<endl    
            <<"          o         "<<endl
            <<"         |          "<<endl 
            <<" You Scored For Your Country!"<<endl;
            }
        } 
    else if (shot==3)
        if (keep==1){
        cout<<"__________________"<<endl
            <<"|                |"<<endl
            <<"|    o           |"<<endl
            <<"   _|/_          |"<<endl 
            <<"|    /           |"<<endl 
            <<"              o   "<<endl
            <<"              |   "<<endl    
            <<"             o    "<<endl
            <<"            |     "<<endl
            <<" You Scored For Your Country!"<<endl;
            }
        else if (keep==2){
        cout<<"  __________________"<<endl
            <<" |                 |"<<endl
            <<" |        O        |"<<endl
            <<" |        _|/_     |"<<endl 
            <<" |         /       |"<<endl 
             <<"              o   "<<endl
            <<"              |   "<<endl    
            <<"             o    "<<endl
            <<"            |     "<<endl
            <<" You Scored For Your Country!"<<endl;
            }
        else{
        cout<<"____________________"<<endl
            <<"|                  |"<<endl
            <<"|             o    |"<<endl
            <<"|             _|/_ |"<<endl 
            <<"|              /   |"<<endl
            <<"                o    "<<endl
            <<"               |    "<<endl    
            <<"             o     "<<endl
            <<"            |      "<<endl
            <<"They Blocked Your Shot.."<<endl;
            cout<<"Your Opponent Gets Point"<<endl;
            }
        }
        default:{
        cout<<"Exit?"<<endl;
        loop=false;
        break;
        }
        };
    }while(loop);//Upper do-while
    sum+=win;
    cout<<"You Have: "<<sum<<endl;
     }
    return 0;
    }
void intro(){
cout<<"Welcome to World Cup Fever: Penalty Shoot Out!... "
<<"To Play this game some specific information will be asked about "
<<"who you are...You will be asked to select the position "
<<"of either GoalKeeper or GoalScorer...The Computer will Randomly "
<<"Generate a Shot Location or   Guess Your Shot Location... "
<<"You Must Decide To Either Defend or Score Goals...."
<<"Can You Out Smart your Opponent!"
<<"                                                   "<<endl
<<"               _______________________             "<<endl
<<"              |                       |            "<<endl        
<<"              |                       |            "<<endl
<<"              |   1       2       3   |            "<<endl        
<<"              |                       |            "<<endl        
<<"                                                   "<<endl;

}
int userLocation (){
int pos;
do{
cout<<"Choose A Shot Location From The Following: "<<endl
<<"[1] Position: Left  "<<endl
<<"[2] Position: Center "<<endl
<<"[3] Position: Right  "<<endl; 
cout<<"Enter A Position:  ";
cin>>pos;
}while (pos>3||pos<1);
return pos;
}