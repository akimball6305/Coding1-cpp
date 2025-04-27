#pragma once
#include <string>
#include <iostream>
using namespace std;

enum location { GREATHALL, DUNGEON, COURTYARD, MARKET };

class item
{
private:
	string name;
	string description;
	location loc;

public:
	item();
	item(string n, string desc, location l);
	void examine() const;
};
