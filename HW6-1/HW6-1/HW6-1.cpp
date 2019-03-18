// HW6-1 Employee Information
// this program using array to store the information of employees
// created by Po-I Wu on 03/11/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long int empId[7] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
	int hours[7];
	double payRate[7], wages[7];

	for (int i = 0; i < 7; i++)
	{
		cout << "******************************************" << endl;
		cout << "Employee ID: " << empId[i] << endl;
		cout << "-------------------------" << endl;
		cout << "Please enter the information" << endl;
		cout << "Work hours: ";
		cin >> hours[i];
		cout << "Pay Rate (no less then $15.00): $ ";
		cin >> payRate[i];

		// no negative hours and no less then $15.00 pay rate
		if (hours[i] < 0 || payRate[i] < 15)
		{
			cout << "Invalid input !!" << endl;
			system("pause");
			return 0;
		}
		// wages calculation
		wages[i] = hours[i] * payRate[i];
	}
	// display two decimal place
	cout << fixed << setprecision(2) << endl << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Employee ID: " << empId[i] << endl;
		cout << "Wages: $ " << wages[i] << endl;
	}

	system("pause");
	return 0;
}