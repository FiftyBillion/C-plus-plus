// this program calculate the geometry of rectangle
// created by Po-I Wu on 01/23/2018

#include <iostream>
using namespace std;

int main()
{
	char choice;
	double length, width;
	cout << "Please enter the length and width of the rectangle (seperate by space): ";
	cin >> length >> width;

	cout << "Please choose what you want to calculate:" << endl;
	cout << "\nA. Area\nB. Perimeter\nC. Both" << endl;
	cout << "\nYour choice: ";
	cin >> choice;

	switch (choice)
	{
	case 'a':
	case 'A':
		cout << "\nThe Area is " << length * width << endl;
		break;
	case 'b':
	case 'B':
		cout << "\nThe Perimeter is " << 2 * (length + width) << endl;
		break;
	case 'c':
	case 'C':
		cout << "\nThe Area is " << length * width << endl;
		cout << "The Perimeter is " << 2 * (length + width) << endl;
		break;
	// if enter not a,A,b,B,c,C
	default:
		cout << "You should enter A, B or C!!!" << endl;
	}

	system("pause");
	return 0;
}