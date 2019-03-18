// HW5-3 Overload Hospital
// this program calculate the total charge depends on different patient
// created by Po-I Wu on 02/26/2018

#include <iostream>
using namespace std;

double charge(int, double, double, double);
double charge(double, double);

int main()
{
	int choice;
	double totalCharge;
	cout << "1. In-patient" << endl;
	cout << "2. Out-patient" << endl;
	cout << "Your choice: ";
	cin >> choice;
	if (choice == 1)    // in-patient
	{
		int day;
		double rate, medCharge, testCharge;

		cout << "Please enter the information------------" << endl;
		cout << "Number of days: ";
		cin >> day;
		cout << "Daily rate: $ ";
		cin >> rate;
		cout << "Hospital medication charges: $ ";
		cin >> medCharge;
		cout << "Charges for hospital test: $ ";
		cin >> testCharge;

		// no negative data
		if (day < 0 || rate < 0 || medCharge < 0 || testCharge < 0)
		{
			cout << "No negative number!!!" << endl;
			system("pause");
			return 0;
		}

		totalCharge = charge(day, rate, medCharge, testCharge);
		cout << "Total charge: $ " << totalCharge << endl;
	}
	else if (choice == 2)    // out-patient
	{
		double medCharge, serviceCharge;
		cout << "Please enter the information------------" << endl;
		cout << "Charges for hospital service: $ ";
		cin >> serviceCharge;
		cout << "Hospital medication charges: $ ";
		cin >> medCharge;

		// no negative data
		if (medCharge < 0 || serviceCharge < 0)
		{
			cout << "No negative number!!!" << endl;
			system("pause");
			return 0;
		}

		totalCharge = charge(serviceCharge, medCharge);
		cout << "Total charge: $ " << totalCharge << endl;
	}
	else       // if not enter 1 or 2
		cout << "Invalid input !!" << endl;

	system("pause");
	return 0;
}

double charge(int day, double rate, double medCharge, double testCharge)
{
	return rate * day + medCharge + testCharge;
}

double charge(double serviceCharge, double medCharge)
{
	return serviceCharge + medCharge;
}