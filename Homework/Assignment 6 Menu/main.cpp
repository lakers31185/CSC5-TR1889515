//Tony Reyes
//July 18th, 2014
//Menu for Assignment 5
//

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        default:;
        };
    }while(inN<11);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
     cout<<"Type 4 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    //Declare Variables
    int values[ 10 ];    //Declares array and how many elements
    int small,big;      //Declares Biggest & Smallest Integer
  

    //Counts to 10 and prompts user for value and stores it
    for ( int i = 0; i < 10; i++ ) 
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }
        //Assign Element to be Biggest or Smallest
        big=small=values[0]; 
    
    //For-Loop for Biggest Number
    for (int i = 0; i < 10; i++) 
    {
        //Compares Biggest Value with Current Element
        if(values[i]>big)
        {
           big=values[i];
        }
    }
    //For-Loop for Smallest Number
    for (int i = 0; i < 10; i++) 
    {
        //Compares Small Value with Current Element
        if(values[i]<small) 
        {
           small=values[i];
        }
    }
    //Print Output of Biggest & Smallest Value
    cout << "The Biggest Value is " << big << endl;
    cout << "The Smallest Value is " << small << endl;
}
    //Solution to problem 2
    void problem2(){
    //Declare Variables
     int values[ 12 ];    //Declares array and how many elements
      int small,big,total=0,aver;      //Declares Biggest & Smallest Integer
      
      //Counts to 12 and prompts user for value and stores it
    
      for ( int i = 0; i < 12; i++ ) 
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }
        //Assign Element to be Biggest or Smallest
        big=small=values[0]; 
     //For-Loop for Biggest Number
    for (int i = 0; i < 12; i++) 
    {
        //Compares Biggest Value with Current Element
        if(values[i]>big)
        {
           big=values[i];
        }
    }
    //For-Loop for Smallest Number
    for (int i = 0; i < 12; i++) 
    {
        //Compares Small Value with Current Element
        if(values[i]<small) 
        {
           small=values[i];
        }
    }    
    for (int i=0;i<12;i++ )
    {
        total+=values[i];
    }
    for (int i=0;i<12;i++ )
    {
        total+=values[i];
        aver=total/12;
        
    }
     //Print Output of Biggest & Smallest Value
    cout << "The Biggest Value is " << big << endl;
    cout << "The Smallest Value is " << small << endl; 
    cout << "The Total Value is " << total << endl;
    cout << "The Average Value is " << aver << endl;       
    }
 //Solution to problem 1
void problem3(){  
    
    //Declare Array of Valid Numbers
    int array[] = {5,6,5,8,8,4,5};
    
    //Declare Variables 
    int pin=-1;             //User Pin (-1 is Error)
    //Counter Through Each Index In Array
    int index=-1;
    bool found = false;
    
    //Enter a Pin Number 
    cout<<"Enter A Pin Number";
    cin>>pin;
   
    //For-Loop to Search Through Each Index of Array
    for (index=0;index <7;index++)
    {
        //Compare Index To User Input 
        if(pin==array[index])
        {
        //If True Number is Valid
        found=true;
        //Display Output of Valid Number
        cout<<"Number Is Valid";
        }
    }
    //If Not Found Display Number Is Invalid
    if (!found)cout<<"Invalid Input!"<<endl;


}

