//
//  Game21.cpp
//
//
//  Created by Zeeshan Abidi on 5/8/18.
//
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <iomanip>
using namespace std;

class Game21{
    int value;
public:
    Game21(){
        srand(time(NULL));
    }
    void toss(){                        //simulates a dice roll
        value = (rand() % 6) + 1;       //random number between 1-6
    }
    int getValue(){                     //returns value of die
        return value;
    }
};

int main(){
    int playerScore = 0, compScore = 0;
    int counter = 0;
    char userAnswer;
    Game21 dice1 = Game21();        //two dice objects
    Game21 dice2 = Game21();
    while(true)
    {
        int playerScore = 0;
        int compScore= 0;
        cout << "Welcome to the game of 21! " << endl;
        while(playerScore <=21 && compScore <=21){
            //toss dice for computer
            dice1.toss();
            dice2.toss();
            compScore += dice1.getValue() + dice2.getValue();
            //toss dice for player
            dice1.toss();
            dice2.toss();
            playerScore += dice1.getValue() + dice2.getValue();

            cout << "Round " << ++counter << endl;
            //if either play goes above 21, end the game
            if(playerScore > 21 || compScore > 21)
            {
                cout << "Game over" << endl;
                cout << "The score has exceeded above 21." << endl;
                break;
            }

            cout << "Your score: " << playerScore << endl << endl;
            cout << "Do you wish to roll again? (Y/N) : ";
            char userChoice;
            cin >> userChoice;
            if(userChoice == 'N' || userChoice == 'n')
                break;
        }

        cout << "Player Score: " << playerScore << endl;
        cout << "Computer Score: " << compScore << endl;
        if((playerScore > 21 && compScore > 21) || (playerScore == compScore)){
            cout << "Its a tie!\nNo winner today...\n"<< endl;
        }
        else if (playerScore <= 21 && compScore > 21) //player wins
        {
            cout << "You win!\n" << endl;
        }
        else if ( playerScore > 21 && compScore <= 21){  //computer wins
            cout << "Sorry, the computer won this time.\n" << endl;
        }
        else if (playerScore > compScore){  //not reached 21 and player score is greater
            cout << "You won!\n" << endl;
        }
        else if(playerScore < compScore){
            cout << "Sorry, the computer wins\n" << endl;
        }
        cout << "Do you wish to play again? (Y/N):  ";
        cin >> userAnswer;
        if(userAnswer == 'N' || userAnswer == 'n'){
            cout << "Exiting program, goodbye "<< endl;
            break;
        }

    }
}

