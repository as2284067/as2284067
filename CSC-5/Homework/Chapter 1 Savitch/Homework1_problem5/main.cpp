/*
 * Abel Salazar
 * January 7th, 2014
 * Homework 1 problem 5
Write a program that reads two integers and then outputs
both their sum and their product. One way to proceed is to
start with the program in display 1.8 and modify it to 
produce the program for this project. The last output 
statement might be the following.
cout << "this is the end of the program\n";
 */
//system libraries
#include <iostream>

using namespace std;

//global constants

//functional prototypes

//function main is where execution begins

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
