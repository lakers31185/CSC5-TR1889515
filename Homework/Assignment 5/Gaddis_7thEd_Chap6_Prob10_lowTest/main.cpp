/* 
* File:   main.cpp
* Author: Tony Reyes
* June 25, 2014, 3:43 PM
* Purpose: Gaddis 7thEd Chap6 Prob10 Lowest Score Drop
*/

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes
void val(int &test1, int &test2, int &test3, int &test4, int &test5);
int findLow(int, int, int, int, int);
int calclAve(int, int, int, int, int,int);

//Execution Begins Here!
 int main(int argc, char** argv){
 
    //Declare Variables 
    int test1=0, test2=0, test3=0, test4=0, test5=0;    //Enter 5 Test Scores
    int low=0;                                         //Lowest Score
    int ave=0;                                        //Average Score
    
    //Call as Reference Function for Test Scores
    val(test1, test2, test3, test4, test5);

    //Call Function That Finds Lowest Test Score
    low=findLow(test1, test2, test3, test4, test5);
    //Display Output of Function Lowest Test Score
    cout << "The low test grade is " << low << endl;

    //Call Function That Drops Lowest Test Score & Calculates Average
    ave= calclAve(test1, test2, test3, test4, test5, low); 
    //Display Output of Average Test Score
    cout << "The average of the tests is "<<ave<<endl;
    return 0;
    }
//Reference Function For 5 Test Scores
//Entries of 5 Test Scores as Reference (0-100) ONLY!
void val(int &test1, int &test2, int &test3, int &test4, int &test5) 
{
//Do-While Loop For Input Validation
do{
    cout << "Please enter 5 test scores\n";
    cout << "Scores must not be less than 0 or greater than 100\n";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
}while(test1<0||test1>100||test2<0||test2>100||test3<0|test3>100||
       test4<0 || test4 >100 || test5<0 || test5>100);
}
//Function That Finds Lowest Test Score
int findLow(int test1, int test2, int test3, int test4, int test5) {
//Test Value For Lowest Test
int low=0; 
low=test1;

//If Test 1 Is Lower Return
if(test1<low) 
low=test1; 
//If Test 2 Is Lower Return
if(test2<low) 
low=test2;
//If Test 3 Is Lower Return
if(test3<low)
low=test3;
//If Test 4 Is Lower Return
if(test4<low)
low=test4;
//If Test 5 Is Lower Return
if(test5<low)
low=test5;
//Return Test 1,2,3,4 or 5
return low; 
}
//Function To Drop Lowest Test Score & Calculate Average
//5 Test Drop Lowest & Find Average
int calclAve(int test1,int test2,int test3,int test4,int test5,int low) {

//Variables  
int total=0;        //Total of 4 Scores
int average=0;      //Average of 4 Scores

//Calculate Total
total=test1+test2+test3+test4+test5;
//Find Lowest 
total-=low; 
//Calculate Average
average=total/4;
//Return Average Test Score
return average; //return the average to the main function
}