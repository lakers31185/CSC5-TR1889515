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
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void intro ();
int userLocation ();
void print(int the[5][2],int sizeRow,int sizeCol);
void myRank(int &goals, int &block);
int topPlay(int goals, int block, int draw=0);
//Execution Starts Here!
int main(int argc, char** argv){

    //Declare Variables & Initialize Entries
    //Inputs
    string name;    //User First Name Variable
    char count[3];  //User Country Initials  
    int useRnk;
    int goal=0,blk=0;
    //Display Introduction of Game
    intro();
    cout<<endl;

    //Prompt User for Name
    cout<<"what is Your First Name:  ";
    cin>>name;
   
    //Enter 3 Character Nation  EX:(usa)
    cout<<"what is Your Country of Nationalization?: (XXX)  ";
    cin>>count;
    cout<<endl;
    
    //Set Random Seed Country Generator
    srand(time(0));

    //Random Country Generator Display Any of 5 Country's
    short choose = rand()%5;

    //String Array of 5 Country's With Professional Soccer Teams
    string List[5]={"Mexico","Canada","Italy","Germany","Spain"};

    //Variable To Display Random Country Name 
    string word = List[choose];
    
    //Beginning Of Game Boolean Loop
    bool loop=true;

    //For Loop for Number of Rounds To Be Played 
    for (int win =0;win<5;win++)
    {
        //Do-While Loop For Both Scenario Implementation* (GAME LENGTH)
        do{

            //Display Output of Random Opponent
            cout<<count<<"'VS'"<<word<<endl;
            cout<<endl;
            //Display Option To Play as Keeper or Scorer
            cout<<"Type 1 to Play as Goal Keeper: "<<endl;
            cout<<"Type 2 to Play as  Goal Scorer: "<<endl;
            cout<<"Type Anything Else To Forfeit Round"<<endl;
            //Read the choice
            char choice;
            cin>>choice;
            cout<<endl;
            
            //Choose Either Keeper/Scorer VS. Computer
            switch(choice){

            //Play as Keeper; First Simulation
            case'1':{

                //Instruct User About Scenario
                cout<<"Block Your Opponent's Shot "<<endl;
                cout<<"__________________________"<<endl;

                //Declare Variables & Initialize Entries
                //Inputs
                unsigned short keep,shot;        //Variables of Scorer or Keeper
                short wins;                      //1 point for win

                //Set Random Seed For Shot Generator
                srand(static_cast<unsigned int>(time(0)));

                //Set Computer Shot Location to Random
                keep=rand()%3+1;
                
                //Use Function for User Location
                shot=userLocation();

                //Set Up Parameters of Goal or No Goal

                //If User=Left & Comp=Left "You Win"
                if (shot==1)
                {
                    if(keep==1)
                    {
                        //Read From A File For Simple Graphic 
                       fstream leftLeft;
                        leftLeft.open("leftLeft.txt");
                        //Open & Close This Specific Graphic File
                        if (leftLeft.is_open())
                        {
                            string temp;
                            while(getline(leftLeft,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"You Blocked The Shot!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        leftLeft.close();
                        //Set Win=1
                        wins=1;
                    }
                    //If User=Left & Comp=Center "You Lose"
                    else if (keep==2)
                    {
                        //Read From A File For Simple Graphic 
                        fstream leftCenter;
                        leftCenter.open("leftCenter.txt");
                        //Open & Close This Specific Graphic File
                        if (leftCenter.is_open())
                        {
                            string temp;
                            while(getline(leftCenter,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Scored A Goal..."<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        leftCenter.close();
                        //Set Loss=0
                        wins=0;
                    }
                    //Else User=Left & Comp=Right "You Lose"
                    else
                    {
                        //Read From A File For Simple Graphic 
                        fstream leftRight;
                        leftRight.open("leftRight.txt");
                        //Open & Close This Specific Graphic File
                        if (leftRight.is_open())
                        {
                            string temp;
                            while(getline(leftRight,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Scored A Goal..."<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        leftRight.close();
                        //Set Loss=0
                        wins=0;
                    }
                } 
                //Else If User=Center & Comp=Left "You Lose"
                else if (shot==2)
                {
                    if (keep==1)
                    {
                        //Read From A File For Simple Graphic 
                        fstream centerLeft;
                        centerLeft.open("centerLeft.txt");
                        //Open & Close This Specific Graphic File
                        if (centerLeft.is_open())
                        {
                            string temp;
                            while(getline(centerLeft,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Scored A Goal..."<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        centerLeft.close();
                        //Set Loss=0
                        wins=0;
                    }
                    //Else If User=Center & Comp=Center "You Win"
                    else if(keep==2)
                    {
                        //Read From A File For Simple Graphic 
                        fstream centerCenter;
                        centerCenter.open("centerCenter.txt");
                        //Open & Close This Specific Graphic File
                        if (centerCenter.is_open())
                        {
                            string temp;
                            while(getline(centerCenter,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"You Blocked The Shot!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        centerCenter.close();
                        //Set Win=1
                        wins=1;
                    }
                    //Else If User=Center & Comp=Right "You Win"    
                    else
                    {
                        //Read From A File For Simple Graphic
                        fstream centerRight;
                        centerRight.open("centerRight.txt");
                        //Open & Close This Specific Graphic File
                        if (centerRight.is_open())
                        {
                            string temp;
                            while(getline(centerRight,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Scored A Goal..."<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        centerRight.close();
                        //Set Win=1
                        wins=0;
                    }
                }
                //Else If User=Right & Comp=Left "You Lose"   
                else if (shot==3)
                    if (keep==1)
                    {
                        //Read From A File For Simple Graphic
                        fstream rightLeft;
                        rightLeft.open("rightLeft.txt");
                        //Open & Close This Specific Graphic File
                        if (rightLeft.is_open())
                        {
                            string temp;
                            while(getline(rightLeft,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Scored A Goal..."<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        rightLeft.close();
                        //Set Loss=0
                        wins=0;
                    }
                    //Else If User=Right & Comp=Center "You Lose"
                    else if (keep==2)
                    {
                        fstream rightCenter;
                        rightCenter.open("rightCenter.txt");
                        if (rightCenter.is_open())
                        {
                            string temp;
                            while(getline(rightCenter,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Scored A Goal..."<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        rightCenter.close();
                        //Set Loss=0
                        wins=0;
                    }
                    //Else If User=Right & Comp=Right "You Win"
                    else
                    {
                        fstream rightRight;
                        rightRight.open("rightRight.txt");
                        if (rightRight.is_open())
                        {
                            string temp;
                            while(getline(rightRight,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"You Blocked The Shot!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                            
                        }
                        rightRight.close();
                        //Set Win=1
                        wins=1;
                    }
                    //Display Output Of Winner For Each Round
                    if (wins==1)
                    {
                        cout<<"You Win Round"<<endl;
                    }
                    else if (wins==0)
                    {
                        cout<<"You Lose Round"<<endl;
                    }
                       
            }
            case'2':{
                //Instruct User About Scenario
                cout<<"It's Time To Shoot A Goal For Your Country! "<<endl;
                cout<<"____________________________________________"<<endl;
                cout<<endl;
                
                //Declare Variables & Initialize Entries
                //Inputs
                unsigned short keep,shot;        //Variables of Scorer or Keeper
                short wins;                      //1 point for win

                //Set Random Seed For Shot Generator
                srand(static_cast<unsigned int>(time(0)));

                //Set Computer Shot Location to Random
                keep=rand()%3+1;
                
                //Use Function for User Location
                shot=userLocation();

                //Set Up Parameters of Goal or No Goal

                //If User=Left & Comp=Left "You Win"
                if (shot==1)
                {
                    if(keep==1)
                    {
                        //Read From A File For Simple Graphic 
                       fstream leftLeft;
                        leftLeft.open("leftLeft.txt");
                        //Open & Close This Specific Graphic File
                        if (leftLeft.is_open())
                        {
                            string temp;
                            while(getline(leftLeft,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Blocked Your Shot!"<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        leftLeft.close();
                        //Set Win=1
                        wins=0;
                    }
                    //If User=Left & Comp=Center "You Lose"
                    else if (keep==2)
                    {
                        //Read From A File For Simple Graphic 
                        fstream leftCenter;
                        leftCenter.open("leftCenter.txt");
                        //Open & Close This Specific Graphic File
                        if (leftCenter.is_open())
                        {
                            string temp;
                            while(getline(leftCenter,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"You Scored A Goal For:"<<count<<"!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        leftCenter.close();
                        //Set Loss=0
                        wins=1;
                    }
                    //Else User=Left & Comp=Right "You Lose"
                    else
                    {
                        //Read From A File For Simple Graphic 
                        fstream leftRight;
                        leftRight.open("leftRight.txt");
                        //Open & Close This Specific Graphic File
                        if (leftRight.is_open())
                        {
                            string temp;
                            while(getline(leftRight,temp))
                            cout<<temp<<endl;
                            cout<<"You Scored A Goal For:"<<count<<"!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        leftRight.close();
                        //Set Loss=0
                        wins=1;
                    }
                } 
                //Else If User=Center & Comp=Left "You Lose"
                else if (shot==2)
                {
                    if (keep==1)
                    {
                        //Read From A File For Simple Graphic 
                        fstream centerLeft;
                        centerLeft.open("centerLeft.txt");
                        //Open & Close This Specific Graphic File
                        if (centerLeft.is_open())
                        {
                            string temp;
                            while(getline(centerLeft,temp))
                            cout<<temp<<endl;
                            cout<<"You Scored A Goal For:"<<count<<"!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        centerLeft.close();
                        //Set Loss=0
                        wins=1;
                    }
                    //Else If User=Center & Comp=Center "You Win"
                    else if(keep==2)
                    {
                        //Read From A File For Simple Graphic 
                        fstream centerCenter;
                        centerCenter.open("centerCenter.txt");
                        //Open & Close This Specific Graphic File
                        if (centerCenter.is_open())
                        {
                            string temp;
                            while(getline(centerCenter,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Blocked Your Shot!"<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        centerCenter.close();
                        //Set Win=1
                        wins=0;
                    }
                    //Else If User=Center & Comp=Right "You Win"    
                    else
                    {
                        //Read From A File For Simple Graphic
                        fstream centerRight;
                        centerRight.open("centerRight.txt");
                        //Open & Close This Specific Graphic File
                        if (centerRight.is_open())
                        {
                            string temp;
                            while(getline(centerRight,temp))
                            cout<<temp<<endl;
                            cout<<"You Scored A Goal For:"<<count<<"!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        centerRight.close();
                        //Set Win=1
                        wins=1;
                    }
                }
                //Else If User=Right & Comp=Left "You Lose"   
                else if (shot==3)
                    if (keep==1)
                    {
                        //Read From A File For Simple Graphic
                        fstream rightLeft;
                        rightLeft.open("rightLeft.txt");
                        //Open & Close This Specific Graphic File
                        if (rightLeft.is_open())
                        {
                            string temp;
                            while(getline(rightLeft,temp))
                            cout<<temp<<endl;
                            cout<<"You Scored A Goal For:"<<count<<"!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        rightLeft.close();
                        //Set Loss=0
                        wins=1;
                    }
                    //Else If User=Right & Comp=Center "You Lose"
                    else if (keep==2)
                    {
                        fstream rightCenter;
                        rightCenter.open("rightCenter.txt");
                        if (rightCenter.is_open())
                        {
                            string temp;
                            while(getline(rightCenter,temp))
                            cout<<temp<<endl;
                            cout<<"You Scored A Goal For:"<<count<<"!"<<endl;
                            cout<<count<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        rightCenter.close();
                        //Set Loss=0
                        wins=1;
                    }
                    //Else If User=Right & Comp=Right "You Win"
                    else
                    {
                        fstream rightRight;
                        rightRight.open("rightRight.txt");
                        if (rightRight.is_open())
                        {
                            string temp;
                            while(getline(rightRight,temp))
                            cout<<temp<<endl;
                            cout<<endl;
                            cout<<"They Blocked Your Shot!"<<endl;
                            cout<<word<<":Gets Point"<<endl;
                            cout<<endl;
                        }
                        rightRight.close();
                        //Set Win=1
                        wins=0;
                    }
                    //Display Output Of Winner For Each Round
               
                    int sums=0;
                    if (wins==1)
                    {
                        cout<<"You Win Round"<<endl;
                        sums+=wins;
                    }
                    else 
                    {
                        cout<<"You Lose Round"<<endl;
                        sums+=wins;
                    }
               
                
                }
                
                
                default:{
                //Exit Loop 
                loop=false;
                break;
                }
            };
        }while(loop);//Upper do-while
    }
    //Call User Ranking Function
    myRank(goal,blk);

    //Display Format For 2 Dimensional Array
    cout<<"          Rank # / Total Points (ALL TIME)"<<endl;
    cout<<"         _______________________________"<<endl;
    
    //2 Dimensional Array For Top Scores
    int myarray [5][2]={{1,5},
                        {2,5},
                        {3,4},
                        {4,4},
                        {5,3}};
    //Call Print Array Function
    print(myarray,5,2);
    cout<<endl;
    //Call All Time Winners Function
    topPlay(goal,blk);

//Exit Stage Right!    
return 0;
}
//Introduction Function
//Displays Rules & General Game Information by Reference
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

//User Location Function Passed By Value
//pos= Left, Center, Right (Location Choices)
int userLocation (){
//User Location Variable   
int pos;
//Do While Loop For User Location Input
do{
    cout<<"Choose A Shot Location From The Following: "<<endl
        <<"[1] Position: Left  "<<endl
        <<"[2] Position: Center "<<endl
        <<"[3] Position: Right  "<<endl; 
    cout<<"Enter A Position:  ";
    cin>>pos;
}while (pos>3||pos<1);
//Return User Entry
return pos;
}

//Top Ranking Players 2 Dimensional Array Passed Through Function
//2 columns = Rank & # Rounds
//5 Rows of Ranked Players
void print(int the[5][2],int sizeRow,int sizeCol)
{
    //For Loop For Array Rows
    for(int row=0;row<sizeRow;row++)
    {
        //For Loop For Array Columns
        for(int col=0;col<sizeCol;col++)
        {
            cout<<"            "<<the[row][col];
        }
        cout<<endl;
    }                           
    cout<<endl;
}
//User Top rank Function
//goals= Goals Scored  blocks= shots blocked
void myRank(int &goals, int &block )
{   
   
    cout<<"Where Do You Rank Among The Top PLayers? "<<endl;
    cout<<endl;
    cout<<"Lets Find Out...How Many Goals Did You Score Total During Your Match ? ";
    cin>>goals;
    cout<<endl;
    cout<<"Lets Find Out...How Many Blocks Did You Have Total During Your Match? ";
    cin>>block;
}
//All Time Winners Function
//goals= Goals Scored  blocks= shots blocked  draw= 0 Never a Draw (default Parameter) 
int topPlay(int goals, int block, int draw)
{   int sum=0;
    //Find Total Points Earned
    sum=(goals-block);
    if(sum>10)
    {
    cout<<"This Is Where You Stand...You Thought You Were Good... "<<endl;
   
    }
    else 
    {
       cout<<"This Is Where You Stand...Not Bad Rookie!... "<<endl; 
    } 
    cout<<"You Had:"<<sum<<" :Total Points This Game"<<endl;
    return sum;
}
