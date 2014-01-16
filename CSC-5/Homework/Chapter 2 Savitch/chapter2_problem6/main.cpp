/* 
 * File:   Savitch version 7, Chapter 2 - problem 6
 * Author: Abel Salazar
 * Created on January 13, 2014, 8:47 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //variable declaration
    int max_occ, cur_occ, extras;
    int x = 0;
    //infinite loop
    while(x == 0){
        //Input maximum occupancy and current occupancy
        cout << "Enter the maximum occupancy of current room" <<endl;
        cin >> max_occ;
        cout << "Enter the amount of people attending meeting" <<endl;
        cin >> cur_occ;
        //determine weather maximum occupancy is greater than current occupancy
        if(cur_occ <= max_occ)
        {
            //output message and how many more people may attend meeting
            cout << "It is legal to hold the meeting" <<endl;
            extras = max_occ - cur_occ;
            cout << extras << " more people may attend" <<endl;
        }
        else
        {
            //output warning about fire code
            cout << "The meeting cannot be held as planned due to" <<endl;
            cout << "fire regulations" <<endl;
            extras = cur_occ - max_occ;
            cout << extras << " people must leave the room to continue" <<endl;
        }
    
    //exit stage right
    }
    return 0;
}

