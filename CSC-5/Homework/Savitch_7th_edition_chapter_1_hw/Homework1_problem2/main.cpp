/*
 * Abel Salazar
 * January 7th, 2014
 * Homework 1 problem 2
Modify the C++ program you entered in program project 1.
Chang the program so that if first writes the word Hello
to the screen and then goes on to do the same things that
the program in Display 1.8 does. You will only have to add
one line to the program and run the changed program. Then
change the program even more. Add one more line that will
make the program wtire the word Good-bye to the screen at 
the end of the program.
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
    
    //addition of output
    cout << "Good-bye\n";
    
    return 0;
}
