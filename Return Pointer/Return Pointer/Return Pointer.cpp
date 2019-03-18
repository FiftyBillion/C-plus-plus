// Return pointer to an argument
// 

#include <iostream>
#include <string>
using namespace std;

string *getFullName(string []);

int main()
{
	string fullName[3];
	string *name;
	name = getFullName(fullName);

	for (int i = 0; i < 3; i++)
	{
		cout << *(name + i) << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

string *getFullName(string fullName[])
{
	cout << "Enter your first name: ";
	getline(cin, fullName[0]);
	cout << "Enter your middle name: ";
	getline(cin, fullName[1]);
	cout << "Enter your last name: ";
	getline(cin, fullName[2]);

	return fullName;
}