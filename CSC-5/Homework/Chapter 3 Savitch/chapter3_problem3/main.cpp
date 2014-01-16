/* 
 * File:   Savitch version 7, Chapter 3 - problem 3
 * Author: Abel Salazar
 * Created on January 15, 2014, 11:36 PM
 */

//system libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//global constants

//prototype functions

//execution begins here
int main(int argc, char** argv) {
    //variable declaration
    int month;
    int day;
    int x = 0;
    while(x == 0){
    //input month
    cout << "Enter your birth month number" <<endl;
    cin >> month;
    cout << "Enter your birth day" <<endl;
    cin >> day;
    
    
    if(month == 3)
    {
        if(day > 20)
        {
            cout << "You are and Aries" <<endl;
        }
        else
        {
            cout << "You are a Pisces" <<endl;
        }
    }
    else if(month == 4)
    {
        if(day > 19)
        {
            cout << "You are a Taurus" <<endl;
        }
        else
        {
            cout << "You are an Aries" <<endl;
        }
    }
    else if(month == 5)
    {
        if(day > 20)
        {
            cout << "You are a Gemini" <<endl;
        }
        else
        {
            cout << "You are a Taurus" <<endl;
        }
    }
    else if(month == 6)
    {
        if(day > 21)
        {
            cout << "You are a Cancer" <<endl;
        }
        else
        {
            cout << "You are a Gemini" <<endl;
        }
    }
    else if(month == 7)
    {
        if(day > 22)
        {
            cout << "You are a Leo" <<endl;
        }
        else
        {
            cout << "You are a Cancer" <<endl;
        }
    }
    else if(month == 8)
    {
        if(day > 22)
        {
            cout << "You are a Virgo" <<endl;
        }
        else
        {
            cout << "You are a Leo" <<endl;
        }
    }
    else if(month == 9)
    {
        if(day > 22)
        {
            cout << "You are a Libra" <<endl;
        }
        else
        {
            cout << "You are a Virgo" <<endl;
        }
    }
    else if(month == 10)
    {
        if(day > 22)
        {
            cout << "You are a Scorpio" <<endl;
        }
        else
        {
            cout << "You are a Libra" <<endl;
        }
    }
    else if(month == 11)
    {
        if(day > 21)
        {
            cout << "You are a Sagittarius" <<endl;
        }
        else
        {
            cout << "You are a Scorpio" <<endl;
        }
    }
    else if(month == 12)
    {
        if(day > 21)
        {
            cout << "You are a Capricorn" <<endl;
        }
        else
        {
            cout << "You are a Sagittarius" <<endl;
        }
    }
    else if(month == 1)
    {
        if(day > 19)
        {
            cout << "You are an Aquarius" <<endl;
        }
        else
        {
            cout << "You are a Capricorn" <<endl;
        }
    }
    else if(month == 2)
    {
        if(day > 18)
        {
            cout << "You are a Pisces" <<endl;
        }
        else
        {
            cout << "You are an Aquarius" <<endl;
        }
    }
    //error check
    else
    {
        cout << "Input month and day in correct format" <<endl;
    }
    }
    //exit stage right
    return 0;
}

