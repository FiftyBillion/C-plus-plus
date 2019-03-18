// HW4-2 Pennies for Pay
// this program calculate the salary for the user
// created by Po-I Wu on 02/12/2018

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int days, salaryPenny = 0;
	double salary;

	cout << fixed << setprecision(2) << showpoint;
	cout << "Enter the number of days: ";
	cin >> days;
	if (days < 0)     // check negative value
	{
		cout << "Invalid input!!!" << endl;
		system("pause");
		return 0;
	}

	// double salary by using power function
	for (int i = 0; i < days; i++)
	{
		cout << "Salary for day " << i+1 << ": $ " << pow(2, i)/100 << endl;
		salaryPenny += pow(2, i);
	}

	salary = salaryPenny / 100.0;
	cout << "Total salary: $ " << salary << endl;

	system("pause");
	return 0;
}