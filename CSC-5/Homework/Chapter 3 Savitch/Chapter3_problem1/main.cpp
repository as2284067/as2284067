/* 
 * File:   Savitch version 7, Chapter 3 - problem 1
 * Author: abel
 *Created on January 15, 2014, 10:00 PM
 */

//system libraries
#include <iostream>
#include <cstdlib>

using namespace std;

//global constants

//prototype function

//execution starts here
int main(int argc, char** argv) {
    
    //variable declaration
    char rock = 'r';
    char paper = 'p';
    char scissor = 's';
    char player1, player2;
    
    cout << "You are going to be playing rock paper scissors" <<endl;
    int x = 0;
    while(x == 0){
        //get input from both users
        cout << "Rock = r" << endl << "Paper = p" << endl <<
                "Scissors = s" <<endl;
        cout << "Player one enter your character" <<endl;
        cin >> player1;
        cout << "Player two enter your character" <<endl;
        cin >> player2;
        
        //filter player input to find winner
        //output message declaring winner
        if(player1 == 'r' && player2 == 's')
        {
            cout << "Rock breaks scissors" <<endl;
            cout << "Player one is the winner" <<endl;
            cout <<endl;
        }
        else if(player1 == 'p' && player2 == 'r')
        {
            cout << "Paper covers rock" <<endl;
            cout << "Player one is the winner" <<endl;
            cout <<endl;
        }
        else if(player1 == 's' && player2 == 'p')
        {
            cout << "Scissors cut paper" <<endl;
            cout << "Player one is the winner" <<endl;
            cout <<endl;
        }
        if(player2 == 'r' && player1 == 's')
        {
            cout << "Rock breaks scissors" <<endl;
            cout << "Player two is the winner" <<endl;
            cout <<endl;
        }
        else if(player2 == 'p' && player1 == 'r')
        {
            cout << "Paper covers rock" <<endl;
            cout << "Player two is the winner" <<endl;
            cout <<endl;
        }
        else if(player2 == 's' && player1 == 'p')
        {
            cout << "Scissors cut paper" <<endl;
            cout << "Player two is the winner" <<endl;
            cout <<endl;
        }
        else if(player1 == player2)
        {
            cout << "Nobody wins" <<endl;
            cout <<endl;
        }
        else
        {
            cout << "enter r, s, or p" <<endl;
            cout <<endl;
        }
        
    }
    
    //exit stage right
    return 0;
}

