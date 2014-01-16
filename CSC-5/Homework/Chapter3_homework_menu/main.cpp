/*name: Savitch version 7, Chapter 3 menu based operation
 * author: Abel Salazar
 * 1/16/2014
 */

//system libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//global constants
const short cvn_min = 60;

//function prototype

//execution
int main(){
    
    //beginning of rock, paper, scissors game variables
    char rock = 'r';
    char paper = 'p';
    char scissor = 's';
    char player1, player2;
    //end of rock paper scissors variables
    
    //beginning of balance calculation variables
    float intrst, total, minPymnt, accBal, temp, totTemp;
    float rate1 = .015;
    float rate2 = .01;
    //end of balance calculation variables
    
    //beginning of sign calculation
    int month;
    int day;
    //end of sign caluculation
    
    //beginning of phone bill calculation variables
    string user;
    char a;
    char user_new;
    int hours, minutes;
    float tottemp;
    float mon_fri_peek = .40;
    float mon_fri_nonp = .25;
    float weekend = .15;
    int end_call;
    //end of phone bill variables
    
    //end of phon bill calc variables
    
    int x = 0;//used for while loops]
    
    int menu;
    cout << "Enter the number you would like to complete" <<endl;
    cout << "#1  " << setfill('-') << setw(30) << "" << 
            "Rock Paper Scissors" <<endl;
    cout << "#2  " << setfill('*') << setw(30) << "" <<
            "Payment Calculation" <<endl;
    cout << "#3  " << setfill('-') << setw(30) << "" <<
            "Astrological sign" << endl;
    cout << "#4  " << setfill('*') << setw(30) << "" <<
            "Long distance bill" <<endl;
    cout << "#5  " << setfill('-') << setw(30) << "" << 
            "" <<endl;
    cout << "#6  " << setfill('*') << setw(30) << "" <<
            "" <<endl;
    cout << "#7  " << setfill('-') << setw(30) << "" <<
            "" << endl;
    cout << "#8  " << setfill('*') << setw(30) << "" <<
            "" <<endl;
    cout << "#9  " << setfill('-') << setw(30) << "" << 
            "" <<endl;
    cout << "#10 " << setfill('*') << setw(30) << "" <<
            "" <<endl;
    cout << "#11 " << setfill('-') << setw(30) << "" <<
            "End program" << endl;
    
    cin >> menu; 
    
    //menu for homework problems
    switch(menu){
// Savitch chapter 3 problem 1        
        case 1:
            //char rock = 'r';
            //char paper = 'p';
            //char scissor = 's';
            //char player1, player2;
    
                cout << "You are going to be playing rock paper scissors" <<endl;
                x = 0;
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
            break;
//Savitch chapter 3 problem 2            
        case 2:
                //get input for initial balance
                while(x == 0){
                cout << "Enter balance on account" <<endl;
                cin >> accBal;
        
        if(accBal <= 1000)
        {
                intrst = (accBal * rate1);
                temp = accBal + intrst;
                minPymnt = temp * rate2;
                total = accBal + intrst;
                //output minimum payment
                if(temp < 10)
                {
                cout << "Your minimum payment is $" << fixed << setprecision(2)
                        << temp <<endl; 
                cout << "Your total balance is $" << fixed << setprecision(2) <<
                        total <<endl;
                }
                else if(minPymnt <= 10)
                {
                cout << "The minimum possible payment is $10" << endl <<
                    "Your payment is $10" <<endl;
                cout << "Your total balance is $" << fixed << setprecision(2) <<
                        total <<endl;
                }
                else
                {
                cout << "Your minimum payment is $" << fixed << setprecision(2) 
                        << minPymnt <<endl;
                }
                cout << "Total balance with interest is $" << fixed << 
                        setprecision(2) << total <<endl;
                }
                else if(accBal > 1000)
                {
                temp = 1000 * rate1;
                totTemp = (accBal - 1000) * rate2;
                total = accBal + temp + totTemp;
                minPymnt = total * rate2;
                //output total and minimum payment
                cout << "The total owed is $" << fixed << setprecision(2) <<
                        total <<endl;
                cout << "Your minimum payment is $" << fixed << setprecision <<
                        minPymnt <<endl;
        }
                //error checking for non numbers
        else
        {
            cout << "enter a valid number" <<endl;
        }
    }
            break;
//Savitch chapter 3 problem 3           
        case 3:
            while(x == 0){
                //input month
                cout << "Enter your birth month number" <<endl;
                cin >> month;
                cout << "Enter your birth day" <<endl;
                 cin >> day;
    
    
        if(month == 3)
        {
                if(day > 20)
                {
                        cout << "You are and Aries" <<endl;
                }
                else
                {
                        cout << "You are a Pisces" <<endl;
                }
        }
        else if(month == 4)
        {
                if(day > 19)
                {
                        cout << "You are a Taurus" <<endl;
                }
                else
                {
                        cout << "You are an Aries" <<endl;
                }
        }
        else if(month == 5)
        {
                if(day > 20)
                {
                        cout << "You are a Gemini" <<endl;
                }
                else
                {
                        cout << "You are a Taurus" <<endl;
                }
        }
        else if(month == 6)
        {
                if(day > 21)
                {
                        cout << "You are a Cancer" <<endl;
                }
                else
                {
                        cout << "You are a Gemini" <<endl;
                }
        }
        else if(month == 7)
        {
                if(day > 22)
                {
                        cout << "You are a Leo" <<endl;
                }
                else
                {
                        cout << "You are a Cancer" <<endl;
                }
        }
        else if(month == 8)
        {
                if(day > 22)
                {
                        cout << "You are a Virgo" <<endl;
                }
                else
                {
                        cout << "You are a Leo" <<endl;
                }
        }
        else if(month == 9)
        {
                if(day > 22)
                {
                        cout << "You are a Libra" <<endl;
                }
                else
                {
                        cout << "You are a Virgo" <<endl;
                }
        }
        else if(month == 10)
        {
                if(day > 22)
                {
                        cout << "You are a Scorpio" <<endl;
                }
                else
                {
                        cout << "You are a Libra" <<endl;
                }
        }
        else if(month == 11)
        {
                if(day > 21)
                {
                        cout << "You are a Sagittarius" <<endl;
                }
                else
                {
                        cout << "You are a Scorpio" <<endl;
                }
        }
        else if(month == 12)
        {
                if(day > 21)
                {
                        cout << "You are a Capricorn" <<endl;
                }
                else
                {
                        cout << "You are a Sagittarius" <<endl;
                }
        }
        else if(month == 1)
        {
                if(day > 19)
                {
                        cout << "You are an Aquarius" <<endl;
                }
                else
                {
                        cout << "You are a Capricorn" <<endl;
                }
        }
        else if(month == 2)
        {
                if(day > 18)
                {
                        cout << "You are a Pisces" <<endl;
                }
                else
                {
                        cout << "You are an Aquarius" <<endl;
                }
        }
        //error check
        else
        {
                cout << "Input month and day in correct format" <<endl;
        }
        }
            break;
//Savitch version 7, chapter 3 problem 5            
        case 4:
            //input time 
            cout << "Enter the day of the week you made a call" <<endl;
            cin >> user;
            cout << "Enter the time of day you began" <<endl;
            cin >> hours;
            cout << "Enter the length of the call in minutes" <<endl;
            cin >> end_call;
            //gets first character from string
            a = user[0];
            //test output of character
            cout << a << endl;
            
            
            //output test to determine rate
            switch(a){
                case 'm':
                    if(hours > 8 || hours > 6)
                    {
                        cout << "Non peek hour" <<endl;
                    }
                    else
                    {
                        cout << "Peek hours" <<endl;
                    }
                    break;
                case 't'://tuesday and thursday both have a t
                    if(hours > 8 || hours > 6)
                    {
                        cout << "Non peek hour" <<endl;
                    }
                    else
                    {
                        cout << "Peek hours" <<endl;
                    }
                    break;
                case 'w':
                    if(hours > 8 || hours > 6)
                    {
                        cout << "Non peek hour" <<endl;
                    }
                    else
                    {
                        cout << "Peek hours" <<endl;
                    }
                    break;
                case 'f':
                    if(hours > 8 || hours > 6)
                    {
                        cout << "Non peek hour" <<endl;
                    }
                    else
                    {
                        cout << "Peek hours" <<endl;
                    }
                    break;
                case 's'://saturday and sunday both start with s
                    
                    cout << "Amount due is " << tottemp <<endl;
                    break;
            }
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
    }
    
    return 0;
}