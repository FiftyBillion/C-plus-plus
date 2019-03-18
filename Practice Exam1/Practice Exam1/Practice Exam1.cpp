// this program calculate the call charges for the user
// created by Po-I Wu on 01/31/2018

#include <iostream>
using namespace std;

int main()
{
	float start;
	int callMin;
	double hour, min, pay;
	cout << "Please enter your starting time and seperate the hour and minute by \".\"" << endl;
	cout << "Your starting time: ";
	cin >> start;

	if (start < 0 || start > 23.59)
	{
		cout << "Invalid start time !!" << endl;
		system("pause");
		return 0;
	}

	cout << "Please enter the number of minutes: ";
	cin >> callMin;

	if (callMin < 0)
	{
		cout << "Invalid call time !!" << endl;
		system("pause");
		return 0;
	}

	hour = static_cast<int>(start);
	min = start - static_cast<int>(start);

	if (hour < 7)
		pay = callMin * 0.05;
	else if (hour < 19 || (hour == 19 && min == 0))
		pay = callMin * 0.45;
	else
		pay = callMin * 0.20;
	cout << "Charge: $ " << pay << endl;

	system("pause");
	return 0;
}