/* 
 * File:   Savitch Version 7, Chapter 2 - problem 1
 * Author: Abel Salazar
 * Created on January 13, 2014, 6:50 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>

using namespace std;

//global constants
const float m_ton = 35276.92;

//prototype function

//execution begins here
int main(int argc, char** argv) {

    //variable declaration
    float num_ounce, num_boxes, tot_weight;
    //int x is place holder for loop
    int x = 0;
    //loops infinitely 
    while(x == 0){
    //output options
    cout << "Enter the weight of your cereal box in ounces" <<endl;
    //get input in ounces
    cin >> num_ounce;
    tot_weight = num_ounce / m_ton;
    num_boxes = m_ton / num_ounce ;
    //output total weight in metric tons and amount of boxes 
    cout << "Your cereal box weighs " << tot_weight << " metric tons" <<endl;
    cout << "You can make a metric ton with " << num_boxes << " boxes" <<endl
            << "of cereal" <<endl;
    }
    //exit stage right
    return 0;
}

