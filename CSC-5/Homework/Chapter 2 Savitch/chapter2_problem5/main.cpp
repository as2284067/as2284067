/* 
 * File:   Savitch version 7, Chapter 2 - problem 5
 * Author: Abel Salazar
 * Created on January 13, 2014, 8:22 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//global constants

//function prototype

//execution starts here
int main(int argc, char** argv) {
    
    //declare variables
    float loan, faceVal, interest, interestNew, months, payments;
    int x = 0;
    //infinite loop
    while(x == 0){
        //gather input for loan, interest and amount of time
        cout << "Enter the amount you wish to get a loan for in dollars" <<endl;
        cin >> loan;
        cout << "Enter the interest rate of the loan" <<endl;
        cin >> interest;
        cout << "Enter the duration of the loan in months" <<endl;
        cin >> months;
        
        interestNew = interest * 1/100;
        faceVal = loan + (loan * interestNew);
        payments = faceVal / months;
        //output face value and monthly payments rounded to nearest penny
        cout << "The face value of your loan must be $" << fixed <<
                setprecision(2) << faceVal <<endl;
        cout << "The monthly payments are $" << fixed << setprecision(2) <<
                payments << " dollars" <<endl;
        cout <<endl;
    //exit stage right
    }
    return 0;
}

