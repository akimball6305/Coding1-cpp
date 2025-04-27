#include "filemgmt.h"
using namespace std;

void ReadFromFile() {
	string fileContents; 
	ifstream file("file.txt");

	while (getline(file, fileContents))
	{
		cout << fileContents << endl;
	}

	file.close(); 
}

void WriteFromFile() {
	//opening the file.txt file if it doesn't exist it creates it
	ofstream file("file.txt");

	//write a line to the file 
	file << "Play Ocarina of Time!\n";

	file.close();
}

void WriteArrayToFile(string* arr, int size)
{
	ofstream file("favs.txt");
	if (!file.is_open())
	{
		return;
	}
	for (int i = 0; i < size; i++)
	{
		file << arr[i] << endl;
	}
	file.close();
}

void ReadArrayFromFile(string* arr, int& size) {
	ifstream file("file.txt");
	if (!file.is_open()) {
		cout << "Failed to open file.\n";
		return;
	}

	string line;
	size = 0;
	while (getline(file, line)) {
		arr[size] = line;
		size++;
	}
	file.close();
}
