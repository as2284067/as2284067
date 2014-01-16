/*
 * Abel Salazar
 * January 7th, 2014
 * Homework 1 problem 6
The purpose of this exercise is to produce a catalog of typical
syntax errors and error messages that will be encountered by a
beginner.
 */

//system libraries

//space in iostream - no such directory
//omit < in iostream - scope issue and filename expected
#include <iostream>

using namespace std;

//global constants

//functional prototypes

//function main is where execution begins

//omit int program still runs
//misspelled main - undefined reference
//omit '(' or ')'- missed initializer, cin & cout not a type 
int main(){
    
    //one = first integer
    //two = second integer
    int one, two, sum, product;
    
    cout << "Hello" <<endl;
    cout << "Enter and integer" <<endl;
    cin >> one;
    cout << "Enter another integer" <<endl;
    cin >> two;
    
    sum = one + two;
    product = one * two;
    
    //outputs sum
    cout << "The sum of the two integers is " <<endl;
    cout << sum <<endl;
    //outputs product
    cout << "The product of the two integers is " <<endl;
    cout << two <<endl;
    cout << "This is the end of the program" <<endl;
    
    return 0;
}
