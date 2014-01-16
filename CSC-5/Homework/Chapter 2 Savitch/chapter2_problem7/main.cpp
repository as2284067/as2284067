/* 
 * File:   Savitch version 7, Chapter 2 - problem 7
 * Author: Abel Salazar
 * Created on January 13, 2014, 9:07 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//global constant
const float ss = .06;
const float fedTax = .14;
const float unionFee = 10;

//function prototype

//execution begins here
int main(int argc, char** argv) {
    
    //variable declaration
    float dependents, hours, tot_pay, temp_tot, ot, payTemp;
    float wage = 16.78;
    float dep_tax = 35;
    
    int x = 0;
    //infinite loop
    while(x == 0){
        //get input for hours and dependents
        cout << "Enter amount of hours you worked this week" <<endl;
        cin >> hours;
        cout << "Enter amount of dependents you have" <<endl;
        cin >> dependents;
        
        if(hours <= 40 && dependents < 3)
        {
            temp_tot = wage * hours;
            tot_pay =temp_tot-(temp_tot*ss)-(temp_tot*fedTax)-(unionFee);
            cout << "Your total pay is " << tot_pay <<endl;
        }
        else if(hours > 40 && dependents < 3)
        {
            ot = wage * (hours - 40) * 1.5;  
            temp_tot = wage * 40;
            payTemp = ot + temp_tot;
            tot_pay = payTemp - (payTemp * ss) - (payTemp * fedTax)-(unionFee);
            cout << "Your total pay is " << tot_pay <<endl;
        }
        else if(hours <= 40 && dependents >=3)
        {
            temp_tot = wage * hours;
            tot_pay =temp_tot-(temp_tot*ss)-(temp_tot*fedTax)-(unionFee)
                    - dep_tax;
            cout << "Your total pay is " << tot_pay <<endl;
        }
        else if(hours > 40 && dependents >= 3)
        {
            ot = wage * (hours - 40) * 1.5;  
            temp_tot = wage * 40;
            payTemp = ot + temp_tot;
            tot_pay = payTemp - (payTemp * ss) - (payTemp * fedTax)-(unionFee)
                    - dep_tax;
            cout << "Your total pay is " << tot_pay <<endl;
        }
        else
        {
            cout << "Please enter a valid amount of hours worked and dependents"
                    << endl;
        }
        
    }
    //exit stage right
    return 0;
}

