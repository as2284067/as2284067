/* 
 * File:   Savitch version 7, Chapter 2 problem 10
 * Author: Abel Salazar
 * Created on January 13, 2014, 10:30 PM
 */

//system libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//global constants

//function prototype

//execution begins here
int main(int argc, char** argv) {
    
    //variable declaration
    int x;
    int sumPos, sumNeg;
    //for loop to populate 10 integers
    for(int j; j<9; j++){
        cout << "Enter an integer" <<endl;
        cin >> x;
        if(x >= 0)
        {
            sumPos = sumPos + x;
            //cout << sumPos <<endl; - line test
        }
        else if(x < 0)
        {
            sumNeg = sumNeg + x;
            //cout << sumNeg <<endl; - line test
        }
        else
        {
            cout << "You have enter and invalid character" <<endl;
        }
        //output totals
        cout << "Positive total = " << sumPos <<endl;
        cout << "Negative total = " <<sumNeg <<endl;
    }
    
    return 0;
}

