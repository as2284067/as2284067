/*
 * Abel Salazar
 * January 8th, 2014
 * homework 1 problem 9
Write a program that allows the user to enter a time in seconds and then
outputs how far an object would drop if it is in freefall for that length of
time. Assume that the object starts at rest, there is no friction or resistance
from the air, and there is a constant acceleration of 32 feet per second due to
gravity. Use the equation: d = at^2 / 2
 */

#include <iostream>
using namespace std;
//global constants
const float acceleration = 32;//in feet per second
//prototype function N/A

//system begins here
int main(){
    
    float distance_traveled;
    int seconds;//for input
    //gather time traveled
    cout << "Enter amount of time traveled in seconds" <<endl;
    cin >> seconds;
    //process distance = (acceleration x time ^ 2)/ 2
    distance_traveled = acceleration * seconds * seconds / 2;
    
    cout << "The object has fallen " << distance_traveled <<
            " feet" <<endl;
            
    return 0;
}