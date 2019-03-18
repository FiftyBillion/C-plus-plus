// 
// Created by Po-I Wu on 01/16/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string password, userEnter;
	password = "20182018"; // the password is 20182018

	cout << "Welcome to security system! Please enter your password: ";
	getline(cin, userEnter);

	if (userEnter == password)
	{
		cout << "Congratulations! Access granted! " << endl;
		cout << "You will be directed to homepage shortly..." << endl;
	}
	else
	{
		cout << "\aSorry, wrong code." << endl;		// '\a' for alarm
		cout << "Access denied.\nPlease try again." << endl;
	}

	system("Pause");
	return 0;
}