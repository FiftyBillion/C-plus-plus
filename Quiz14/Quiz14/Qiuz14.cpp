// This program read the friend.txt file to the variable
// created by Po-I Wu on 02/05/2018

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// open the file "Friends.txt"
	ifstream inputFile("Friends.txt");
	string name1, name2, name3;

	// read one line print one line
	inputFile >> name1;
	cout << "Name 1: " << name1 << endl;
	inputFile >> name2;
	cout << "Name 2: " << name2 << endl;
	inputFile >> name3;
	cout << "Name 3: " << name3 << endl;

	// Close the file
	inputFile.close();
	system("pause");
	return 0;
}
