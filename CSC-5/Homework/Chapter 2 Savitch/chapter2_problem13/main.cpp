/* 
 * File:   Savitch version 7, Chapter 2 - problem 13
 * Author: Abel Salazar
 * Created on January 14, 2014, 8:59 AM
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//global constants
const int sec_cvn = 3600;
const int min_cvn = 60;

//function prototype

//execution begins here
int main(int argc, char** argv) {
    //variable declaration
    float speed, newSpeed, remainder, temp;
    //input speed in MPH;
    cout << "Enter speed in miles per hour" <<endl;
    cin >> speed;
    
    newSpeed = (sec_cvn / (static_cast<float>(min_cvn) * speed))*60;
    remainder = newSpeed / 60;
    temp = (remainder / 60) * 10;
    
    //tester output
    //cout << "Your speed is " << fixed << setprecision(3) <<
    //        newSpeed << " seconds per mile" <<endl;
    
    //output minutes and seconds
    cout << "minutes = " << fixed << setprecision(0) 
            << remainder <<endl;
    cout << "and " << fixed << showpoint << setprecision(3)
            << temp << " seconds" <<endl;
    //exit stage right
    return 0;
}

