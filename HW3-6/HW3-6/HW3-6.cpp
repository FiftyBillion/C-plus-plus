// HW3-6 Mobile Service Provider, Part 2
// this program calculate the bill per month and give user suggestion
// created by Po-I Wu on 01/30/2018

#include <iostream>
using namespace std;

int main()
{
	char choice;
	int min;

	cout << "Please choice the package you purchased.\n" << endl;
	cout << "Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $ 0.45 per minute." << endl;
	cout << "Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $ 0.40 per minute." << endl;
	cout << "Package C: For $69.99 per month unlimited minutes provided." << endl;
	cout << "Your choice (Enter A, B, C): ";
	cin >> choice;

	switch (choice)
	{
	case 'a':
	case 'A':
		// base $39.99
		cout << "Please enter how many minute you used: ";
		cin >> min;
		if (min < 0)
			cout << "Invalid Number!!!" << endl;
		else if (min > 450)
			cout << "Total Bill: $ " << 39.99 + 0.45 * (min - 450) << endl;
		else
			cout << "Total Bill: $ " << 39.99 << endl;
		if (min > 494)
			cout << "If you change to Package B, you can save $ " << (39.99 + 0.45 * (min - 450)) - 59.99 << endl;
		if (min > 516)
			cout << "If you change to Package C, you can save $ " << (39.99 + 0.45 * (min - 450)) - 69.99 << endl;
		break;
	case 'b':
	case 'B':
		// base $59.99
		cout << "Please enter how many minute you used: ";
		cin >> min;
		if (min < 0)
			cout << "Invalid Number!!!" << endl;
		else if (min > 900)
			cout << "Total Bill: $ " << 59.99 + 0.4 * (min - 900) << endl;
		else
			cout << "Total Bill: $ " << 59.99 << endl;
		if (min > 925)
			cout << "If you change to Package C, you can save $ " << (59.99 + 0.4 * (min - 900)) - 69.99 << endl;
		break;
	case 'c':
	case 'C':
		// $69.99
		cout << "This is unlimited minutes.\nYour Bill: $ " << 69.99 << endl;
		break;
	default:
		cout << "Please enter A, B or C" << endl;
	}

	system("pause");
	return 0;
}