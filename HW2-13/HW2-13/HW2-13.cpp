// HW 2-13 Monthly Sales Tax
// this program calculate the monthly income tax
// created by Po-I Wu on 01/17/2018
// time spent: 30 min

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int year;	// information
	string month;
	double totalCollect, totalTax, sales, stateTax, countyTax;
	const double TOTAL_TAX_RATE = 0.06;
	const double STATE_TAX_RATE = 0.04;
	const double COUNTY_TAX_RATE = 0.02;

	cout << "Please enter the year: ";
	cin >> year;
	cout << "Please enter the month (in English): ";
	cin >> month;
	cout << "Please enter the total amount collected: $ ";
	cin >> totalCollect;

	// calculation
	sales = totalCollect / (1 + TOTAL_TAX_RATE);
	totalTax = totalCollect - sales;
	stateTax = sales * STATE_TAX_RATE;
	countyTax = sales * COUNTY_TAX_RATE;

	cout << "\n\nYear: " << year << endl;		// display year information
	cout << "Month: " << month << endl;			// display month information
	cout << "\n-----------------------\n";
	cout << fixed << showpoint << setprecision(2);
	cout << "Total Collected:            $ " << setw(8) << totalCollect << endl;
	cout << "Sales:                      $ " << setw(8) << sales << endl;
	cout << "County Sales Tax:           $ " << setw(8) << countyTax << endl;
	cout << "State Sales Tax:            $ " << setw(8) << stateTax << endl;
	cout << "Total Sales Tax:            $ " << setw(8) << totalTax << endl;

	system("Pause");
	return 0;
}