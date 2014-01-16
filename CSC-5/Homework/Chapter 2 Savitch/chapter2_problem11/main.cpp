/* 
 * File:   Savitch version 7, Chapter 2 problem 10
 * Author: Abel Salazar
 * Created on January 14, 2014, 7:48 AM
 */

//system libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

//global constants

//function prototype

//execution begins here
int main(int argc, char** argv) {
    
    //variable declaration
    int x, count1 = 0, count2 = 0;
    float sumPos = 0, sumNeg = 0, avPos, avNeg;
    //for loop to populate 10 integers
    for(int j; j<10; j++){
        cout << "Enter a number" <<endl;
        cin >> x;
        if(x > 0)
        {   
            sumPos = sumPos + x;
            count1++;//count function counts each decision in loop
            avPos = sumPos /(count1);//process average
            cout << "The average positive value is now " << avPos <<endl;// - line test
        }
        else if(x <= 0)
        {
            sumNeg = sumNeg + x;
            count2++;//count function counts each decision in loop
            avNeg = sumNeg /(count2);//process average
            cout << "The average positive value is now " << avNeg <<endl;// - line test
        }
        else
        {
            cout << "You have enter and invalid character" <<endl;
        }
    }
        
        //output totals
        cout << "Positive total = " << sumPos <<endl;
        cout << "Negative total = " << sumNeg <<endl;
    
    
    return 0;
}

