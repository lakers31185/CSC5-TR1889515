/* 
 * File:   main.cpp
 * Author: Tony Reyes
 * July, 2 2014
 * Purpose: Gaddis 7thEd Chap6 Prob2 Complete Program
 */


//System Libraries
#include <iostream>
#include<cstdlib>
using namespace std;

//User Libraries


//Global Constants


//Function Prototypes
int getLen(int);
int getWid(int);
void getArea(int,int);
//Execution Starts Here!
    int main(int argc, char** argv){
    //Declare Variables & Initialize Entries
    //Inputs
    int length,         //Enter a Length
        width ;         //Enter a Width
      
    //User Enter A Rectangle Length to be Doubled
    cout<<"Rectangle Length= ";
    cin>>length;
     //Call Function Twice the Length
    getLen(length);

    //User Enter a Rectangle Width to be Doubled
    cout<<"Rectangle Width= ";
    cin>>width;
    //Call Function Twice the Width
    getWid(width);

    //Call Function and Display Area
    cout<<"Length * Width = ";
    getArea(length,width);

    return 0;
}
//Twice The Length Function
//Formula used to Equate Double the Length 
//=Length*2
int getLen(int length)
{
    cout<<"Double That Length Is: "<<length*2<<endl;
}
//Twice The Width Function
//Formula used to Equate Double the Width 
//=Width*2
int getWid(int width)
{
    cout<<"Double That Width Is: "<<width*2<<endl;
}   
//Function to Find Area
//Formula Used To Equate Area of Rectangle
void getArea(int len, int wid)
{    
    cout<<" Area = "<<(len*2*wid*2)<<endl;
}

