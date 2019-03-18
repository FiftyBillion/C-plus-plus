// HW2-14 Monthly Payment
// this program display and calculate the info of a loan
// created by Po-I Wu on 01/17/2018
// time spent: 30 min

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int numberPay;
	double loan, interestRate, monthPay, totalPay, interestPay;

	cout << "Please enter the loan Amount: $ ";
	cin >> loan;
	cout << "Please enter the annual interest rate in %: ";
	cin >> interestRate;
	interestRate = interestRate / 12 / 100.0;
	cout << "Please enter the number of payment: ";
	cin >> numberPay;

	monthPay = loan * (interestRate * pow(1 + interestRate, numberPay)) / (pow(1 + interestRate, numberPay) - 1);
	totalPay = monthPay * numberPay;
	interestPay = totalPay - loan;

	cout << fixed << setprecision(2) << showpoint;
	cout << "\n\nLoan Amount:                    $ " << setw(8) << loan << endl;
	cout << "Monthly Interest Rate:            " << setw(7) << interestRate * 100 << "%" << endl;
	cout << "Number of Payments:               " << setw(8) << numberPay << endl;
	cout << "Monthly Payment:                $ " << setw(8) << monthPay << endl;
	cout << "Amount Paid Back:               $ " << setw(8) << totalPay << endl;
	cout << "Interest Paid:                  $ " << setw(8) << interestPay << endl;

	system("Pause");
	return 0;
}