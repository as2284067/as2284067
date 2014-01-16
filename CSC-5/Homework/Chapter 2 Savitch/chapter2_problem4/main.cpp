/* 
 * File:   Savitch version 7, Chapter 2 - problem 4
 * Author: Abel Salazar
 * Created on January 13, 2014, 8:14 PM
 */

//system libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//global constants
const float pay_inc = .076;
const float month = 12;

//prototype function

//execution begins here
int main(int argc, char** argv) {
    //variable declaration
    float old_sal, temp_sal, new_sal, new_month;
    //get input of last years salary
    int x = 0;
    //infinite loop
    while(x == 0){
    //gather input for anual salary and amount of months    
    cout << "Enter last years annual salary" <<endl;
    cin >> old_sal;
    cout << "Enter amount of months that are beings retroactively paid" <<endl;
    cin >> new_month;
    temp_sal = old_sal * pay_inc * (new_month/month);
    
    new_sal = (old_sal * pay_inc + old_sal) / month;
    //output retroactive pay for only the past 6 months
    cout << "Your retroactive pay increase of the past " << fixed <<
            setprecision(0) << new_month << " months" << endl;
    cout << fixed << setprecision(2) << temp_sal << " dollars" <<endl;
    //output the new month salary
    cout << "Your new monthly salary is " << fixed << setprecision(2) <<
            new_sal << " dollars" <<endl;
    //creates 5 blank spaces
    for(int i = 0; i < 5; i++){
        cout <<endl;
    }
    }
    
    //exit stage right
    return 0;
}
 
