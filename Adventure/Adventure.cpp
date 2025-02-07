/*
welcome the player
set up the game
    int health = 10, attack, block, turns = 0
    seed the random number generator
start the loop
    add 1 to turns
    start the encounter
        randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
        if block is greater or equal to attack, successful block
        otherwise, subtract attack value from health.
        ask the player if they would like to keep adventuring. if they don't, break out of the loop.
keep looping while health is greater than zero and fewer than 4 turns have happened

if health is greater than 0, congratulate player
otherwise, tell the player they're dead.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void intro() {
    string name = "";

    cout << "What's your name?\n";
    cin >> name;
    cout << "Welcome " << name << endl;
    cout << "Please enter easy, med, or hard for your difficulty selection\n";
}

int randNum(int max) {
    return rand() % max + 1;
}

void Game(string dif) {
    int health = 10;  
    int attack, block;
    int turns = 0;
    string Answer;

    if (dif == "easy") {
        health = 15;
    }
    else if (dif == "med") {
        health = 10;
    }
    else if (dif == "hard") {
        health = 5;
    }

    while (health > 0 && turns < 4) {
        turns++;
        cout << "Round: " << turns << endl;

        attack = randNum(4);
        block = randNum(4);

        cout << "The attack is " << attack << endl;
        cout << "You blocked " << block << endl;

        if (attack > block) {
            cout << "You didn't block enough! You took " << attack << " damage.\n";
            health -= attack;
            cout << "Your current health: " << health << endl;
        }
        else {
            cout << "You blocked it! On to the next round!\n";
        }

        if (health <= 0) {
            cout << "You have sadly passed away\n";
            return;
        }

        // Ask the player if they want to continue
        cout << "Do you wish to proceed? Press y to go forward or n to stop.\n";
        cin >> Answer;

        if (Answer == "n") {
            return;
        }
    }

    if (health > 0) {
        cout << "You won!! You survived " << turns << " rounds.\n";
    }
}

int main() {
    srand(time(0)); 
    string difficulty;
    intro();
    cin >> difficulty;
    Game(difficulty);

    return 0;
}
