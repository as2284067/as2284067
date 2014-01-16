/*
 * Abel Salazar
 * January 7th, 2014
 * Homework 1 problem 7
Write a program that prints out C S ! in large block letters inside a
border of *'s followed by blank lines then the message Conputer Science
is cool stuff.
 */

//system libraries
#include <iostream>
using namespace std;

//global constants

//functional prototypes

//function main is where execution begins

int main(){
    
    //output message in block letters
    cout << "**********************************************************" <<endl;
    cout <<endl;
    cout << "       C C C                  S S S S          !!         " <<endl;
    cout << "     C       C              S         S        !!         " <<endl;
    cout << "    C                      S                   !!         " <<endl;
    cout << "   C                       S                   !!         " <<endl;
    cout << "   C                         S S S S           !!         " <<endl;
    cout << "   C                                 S         !!         " <<endl;
    cout << "    C                                 S        !!         " <<endl;
    cout << "     C       C             S         S                    " <<endl;
    cout << "       C C C                 S S S S           00         " <<endl;
    cout <<endl;
    cout << "**********************************************************" <<endl;
    cout <<endl;
    //output assigned message
    cout << "    Computer Science is Cool Stuff!!!" <<endl;
    
    return 0;
}