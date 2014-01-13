/*
 * Abel Salazar
 * January 7th, 2014
 * Homework 1 problem 2
Further modify the C++ program project 1. Change the
multiplication sign * in your C++ program to an addition
sign +. Recompile and run the changed program.
 */

//system libraries
#include <iostream>

using namespace std;

//global constants

//functional prototypes

//function main is where execution begins

int main(){
    
    int number_of_pods, peas_per_pod,total_peas;
    
    //addition of output
    cout << "Hello\n";
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    //multiplication changed to division
    total_peas = number_of_pods / peas_per_pod;
    
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    //addition of output
    cout << "Good-bye\n";
    
    return 0;
}
