// this program display the color mixed by two colors
// created by Po-I Wu on 01/19/2018

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color1, color2;
	cout << "Please enter one of the color red, blue, and yellow: ";
	cin >> color1;
	cout << "Please enter another color different from the one you chose: ";
	cin >> color2;

	// nested if condition combine with logical operators
	// it can also solve without using nested
	if (color1 == "red" || color1 == "blue" || color1 == "yellow")
	{
		if (color2 == "red" || color2 == "blue" || color2 == "yellow")
		{
			if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
				cout << "\nPurple" << endl;
			else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
				cout << "\nOrange" << endl;
			else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
				cout << "\nGreen" << endl;
			else if (color1 == color2)
				cout << "\nError!!!!!" << endl;
		}
		else
			cout << "\nError!!!!!" << endl;
	}
	else
		cout << "\nError!!!!!" << endl;
	

	system("pause");
	return 0;
}