// Word Game
// this program ask user to enter information then display
// created by Po-I Wu on 01/10/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, age, city, college, profession, animal, petName;

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your age: ";
	getline(cin, age);
	cout << "Enter the name of a city: ";
	getline(cin, city);
	cout << "Enter the name of a college: ";
	getline(cin, college);
	cout << "Enter a profession: ";
	getline(cin, profession);
	cout << "Enter a type of animal: ";
	getline(cin, animal);
	cout << "Enter a pet's name: ";
	getline(cin, petName);

	cout << "\n\n\nThere once was a person named " << name << " who lived in " << city
		<< ".\nAt the age of " << age << ", " << name << " went to college at " << college
		<< ".\n" << name << " graduated and went to work as a " << profession << ".\nThen, "
		<< name << " adopted a(n) " << animal << " named " << petName << ".\n"
		<< "They both lived happliy after!" << endl;

	system("pause");
	return 0;
}