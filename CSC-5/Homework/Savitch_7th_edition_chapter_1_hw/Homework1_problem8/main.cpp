/*
 * Abel Salazar
 * January 7th, 2014
 * Homework 1 problem 8
Write a program that allows the user to enter a number of quarters, dimes
and nickels and then outputs the monetary value of the coins in cents. For
example, if the user enters 2 for the number of quarters, 3 for the number
of dimes, and 1 for the number of nickels, then the program should output
that the coins are worth 85 cents.
 */

//system libraries
#include <iostream>
using namespace std;

//global constants
const int quarter = 25;
const int dime = 10;
const int nickel = 5;

int main(){
    
    int quarters, dimes, nickels, total_change;
    
    cout << "Enter the amount of quarters you are depositing" <<endl;
    cin >> quarters;
    cout << "Enter the amount of dimes you are depositing" <<endl;
    cin >> dimes;
    cout << "Enter the amount of nickles you are depositing" <<endl;
    cin >> nickels;
    //process add quarters, dimes and nickles
    total_change = quarters * quarter + dimes * dime + nickels * nickel ;
    //output total change in cents
    cout << "You have " << total_change << " cents" <<endl;
    //exit stage right
    return 0;
}