/*
 * Abel Salazar
 * January 6th, 2014
 * Homework 1 problem 1
Using the text editor, enter the C++ program shown in Display
1.8. Be certain to type the first line exactly as shown in
display 1.8. In particular, be sure that the first line begins
at the the left-handend of the line with no space before or
after the # symbol. Compile and run the program. If the compiler
gives you an error message, correct the program and recompile
the program. Do this until the compiler gives no error messages.
 */

//system libraries
#include <iostream>

using namespace std;

//global constants

//functional prototypes

//function main is where execution begins

int main(){
    
    int number_of_pods, peas_per_pod,total_peas;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    
    total_peas = number_of_pods * peas_per_pod;
    
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    return 0;
}
