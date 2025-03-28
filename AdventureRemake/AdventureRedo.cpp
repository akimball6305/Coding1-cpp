#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int health;
int totalTreasure = 0;

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

bool AskYesNo(string question) {
    string answer;
    while (true) {
        cout << question << " (y/n)\n";
        cin >> answer;

        if (answer == "y" || answer == "Y") return true;
        if (answer == "n" || answer == "N") return false;

        cout << "Invalid input. Please enter 'y' or 'n'.\n";
    }
}

// Roll attack and block, return them
void rollDie(int& attack, int& block) {
    attack = randNum(4);
    block = randNum(4);
    totalTreasure += randNum(10);

    cout << "The attack is " << attack << endl;
    cout << "You blocked " << block << endl;
    cout << "Treasure gained " << totalTreasure << endl;
}

void Ending(int turns) {
    if (health > 0) {
        cout << "You survived " << turns << " rounds.\n";
        cout << "You gained: " << totalTreasure << " gold\n";
    }
    else {
        cout << "You have sadly passed away\n";
        cout << "You lost: " << totalTreasure << " gold\n";
    }
}

void Game(string dif) {
    health = 10;
    int attack = 0, block = 0;
    int turns = 0;

    if (dif == "easy") {
        health = 15;
    }
    else if (dif == "med") {
        health = 10;
    }
    else if (dif == "hard") {
        health = 5;
    }

    while (health > 0) {
        turns++;
        cout << "Round: " << turns << endl;

        rollDie(attack, block); // Get new values for attack and block

        if (attack > block) {
            cout << "You didn't block enough! You took " << attack << " damage.\n";
            health -= attack;
        }
        else {
            cout << "You blocked it! On to the next round!\n";
        }

        if (health <= 0) {
            Ending(turns);
            return;
        }

        cout << "Your current health: " << health << endl;
        cout << "Your current gold: " << totalTreasure << endl;

        // Ask the player if they want to continue
        if (!AskYesNo("Do you wish to proceed?")) {
            Ending(turns);
            return;
        }
    }
    Ending(turns);
}

int main() {
    srand(time(0));
    string difficulty;
    intro();
    cin >> difficulty;
    Game(difficulty);

    return 0;
}