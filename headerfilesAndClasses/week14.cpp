// week14.cpp : A539T439 Aiden Kimball, April 22nd, 2025

#include <iostream>
#include <string>
#include "item.h"
using namespace std;





int main()
{
	item itemArray[5] = {
		item("Sword", "A sharp blade forged in fire.", GREATHALL),
		item("Potion", "Heals 50 HP.", DUNGEON),
		item("Shield", "Blocks enemy attacks.", COURTYARD),
		item("Map", "Shows hidden treasure spots.", MARKET),
		item("Lantern", "Lights up dark areas.", DUNGEON)
	};

	for (int i = 0; i < 5; i++) {
		itemArray[i].examine();
	}


	/*

	string favs[100];
	int nextIndex = 0;
	cout << "Type out your favorites\n";
	while (true) {
		string input;
		cout << ">> ";
		getline(cin, input);
		if (input == "done")
		{
			break;
		}
		favs[nextIndex] = input;
		nextIndex++;
	} */

	//cout << "test";
	//ReadFromFile();
	//WriteFromFile();
	//WriteArrayToFile(favs, nextIndex);
	//readArratFromFile();
}
