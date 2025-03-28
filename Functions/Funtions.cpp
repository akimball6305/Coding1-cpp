// Funtions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Week 9 

#include <iostream>
#include <string>
using namespace std;

//global variables dont use often
int currentSize = 0;
//function must be declared before it is used
void Greet()
{
	cout << "Hello\n";
}

void sayGoodBye()
{
	cout << "See ya later\n";
}

//adding two numbers with parameters
void add(int num1 = 1, int num2 = 1)
{
	int answer = num1 + num2;
	cout << "Sum is " << answer << endl;
}

void add(float num1 = 1, float num2 = 1)
{
	int answer = num1 + num2;
	cout << "Sum is " << answer << endl;
}

void add(string word1, string word2)
{
	string answer = word1 + word2;
	cout << "Concatinated word is " << answer << endl;
}


bool askYN(string question = "y/n?")
{
	/*
	in a do while loop
	ask to use the question
	if y return true vice verse
	else loop again
	*/
	do {
		cout << question << " (y/n)" << endl;
		string input;
		getline(cin, input);
		if (input == "y")
			return true;
		else if (input == "n")
			return false;
		else
			cout << "Type y or n";
	} while (true);
}

void show(string* array, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << array[i] << endl;
	}
}

// create  a func that accepts poitner of array of string
//let it add element as long as there are spaces
void addShirtSize(string* array)
{
	string input;
	const int MAX_SIZE = 10;
	
	while(true)
	{
		cout << "Pls add a shirt shize to the array or type DONE to quit\n";
		getline(cin, input);
		if (input == "DONE")
		{
			cout << "quitting\n";
			break;
		}
		else if (currentSize == MAX_SIZE)
		{
			cout << "Hit max size quitting\n";
			break;
		}
		else {
			array[currentSize++] = input;
		}
	}
}
//assignment
/*
add a while loop to addshirtsize that lets the user add sizes until they say DONE
or if they fill up the array
*/
int main()
{
	string playerName = "aiden";
	//calling the greet function
	Greet();
	string shirtsizes[10]; // create array of shirt sizes
	addShirtSize(shirtsizes);
	show(shirtsizes, currentSize);
	string names[3];
	int size = sizeof(names) / sizeof(names[0]);
	names[0] = "Bob";
	names[1] = "Bob1";
	names[2] = "Bob2";
	sayGoodBye();
	add(124, 37);
	add(124.1f, 37.1f);
	add("ru", "sure");
	show(names, size);
	if (askYN("Do you like pizza?"))
	{
		cout << "Lets get some pizza for lunch\n";
	}
	else {
		cout << "Freak!?\n";
	}
}
