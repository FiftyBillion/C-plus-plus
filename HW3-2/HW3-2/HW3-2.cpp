// HW3-2 Days in a Month
// this program calculate the leap years
// created by Po-I Wu on 01/28/2018

#include <iostream>
using namespace std;

int main()
{
	int month, year, days;

	cout << "Enter a month (1-12): ";
	cin >> month;
	cout << "Enter a year: ";
	cin >> year;
	
	// should be between 1 and 12
	if (month < 1 || year < 1)
	{
		cout << "No negative number!!!" << endl;
		system("pause");
		return 0;
	}
	else if (month > 12)
	{
		cout << "No greater than 12!!!" << endl;
		system("pause");
		return 0;
	}
	else if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))		// leap years
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			days = 31;
		else if (month == 2)
			days = 29;
		else
			days = 30;
	}
	else
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			days = 31;
		else if (month == 2)
			days = 28;
		else
			days = 30;
	}

	cout << days << " days" << endl;

	system("pause");
	return 0;
}