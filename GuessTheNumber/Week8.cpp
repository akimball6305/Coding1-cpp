// Week8.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
Ask the player if they prefer cheese or pepperoni pizza
use an if else if else to check input
have the computer agree or disagree with their choice
*/
/*
Have the computer choose a random number between 1-10 inclusive
start a while loop ask the player to guess the number
if the number is too high have the computer say lower and vice versa

have the player input a number and have the computer guess
*/


static void PizzaPreferences() {
	string input;

	cout << "Do you prefer cheese or pepperoni pizza?\n";
	getline(cin, input);
	if (input == "cheese" || input == "Cheese")
	{
		cout << "Boring thats the most basic thing on the menu.\n";
	}
	else if (input == "pepperoni" || input == "Pepperoni")
	{
		cout << "Boring also but i guess there is only two options so that makes it ok.\n";
	}
	else
	{
		cout << "That wasn't an option :|\n";
	}
}

static void ComputerGuessesNumber() {
	srand(time(0));
	string playerInput;
	cout << "What is your number\n";
	getline(cin, playerInput);
	int numberToGet = stoi(playerInput);
	if (numberToGet > 100 || numberToGet < 1)
	{
		cout << "Out of range try a number between 1-100\n";
		return;
	}
	int min_value = 1;
	int max_value = 100;
	do {
		int random_number = (rand() % (max_value - min_value + 1) + min_value);

		cout << "Is this number correct " << random_number << endl;
		cout << "respond with h, l, or y for higher, lower, or yes. Type anything else to quit.\n";
		string response;
		getline(cin, response);
		if (response == "h") {
			min_value = random_number;
		}
		else if (response == "l") {
			max_value = random_number;
		}
		else if (random_number == numberToGet || response == "y")
		{
			cout << "YES I DID IT\n";
			break;
		}
		else
		{
			cout << "quitting program;";
			break;
		}
	} while (true);
	return;
}

int main()
{
	ComputerGuessesNumber();
	return 0;
}
