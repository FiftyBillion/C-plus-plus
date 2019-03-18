// this program will display the information of a investment
// created by Po-I Wu on 01/12/2018

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int  main()
{
	int times;
	double rate, principal, amount, interest;

	cout << "Enter your principal: ";
	cin >> principal;
	cout << "Enter the interest rate (%): ";
	cin >> rate;
	cout << "Enter times compounded: ";
	cin >> times;
	
	// calculation
	amount = principal * pow(1 + rate / 100.0 / times, times);
	interest = amount - principal;

	// format the numbers
	cout << setprecision(2) << fixed;

	cout << "\n\nInterest Rate:            " << setw(10) << rate << "%" << endl;
	cout << "Times Compounded:          " << setw(10) << times << endl;
	cout << "Pricipal:                 $" << setw(10) << principal << endl;
	cout << "Interest:                 $" << setw(10) << interest << endl;
	cout << "Amount in Savings:        $" << setw(10) << amount << endl;

	system("pause");
	return 0;
}