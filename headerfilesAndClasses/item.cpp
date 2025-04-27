#include "item.h"
using namespace std;

item::item() {
	name = "Unknown";
	description = "No description.";
	loc = MARKET;
}

item::item(string n, string desc, location l) {
	name = n;
	description = desc;
	loc = l;
}

void item::examine() const {
	cout << "Name: " << name << "\n";
	cout << "Description: " << description << "\n";
	cout << "Location: ";
	switch (loc) {
	case GREATHALL: cout << "Great Hall\n"; break;
	case DUNGEON: cout << "Dungeon\n"; break;
	case COURTYARD: cout << "Courtyard\n"; break;
	case MARKET: cout << "Market\n"; break;
	}
	cout << "------------------\n";
}
