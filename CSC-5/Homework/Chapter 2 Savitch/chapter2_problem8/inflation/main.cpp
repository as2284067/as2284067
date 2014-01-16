/*
  Abel Salazar
  Savitch version 7, Chapter 2 - problem 8
  inflation
*/

//system libraries
#include <iostream>
#include <iomanip>

//global constants
const float cnv_perc = 100;

//function prototypes

//execution begins here
using namespace std;

int main()
{
    //variable declaration
    float price, inflation, time;
    //input price
    cout << "Enter starting price in dollars" <<endl;
    cin >> price;
    cout << "Enter inflation percentage" <<endl;
    cin >> inflation;
    cout << "Enter time in years" <<endl;
    cin >> time;
    inflation/=cnv_perc;


    for(int i = 0; i < time; i++){
    //adjust inflation
    price *= (1 + inflation);
    //output
    cout << "Price increase for is $" << fixed << setprecision(2) << price <<endl;
    }

    //exit stage right
    return 0;
}
