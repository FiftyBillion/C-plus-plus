// this program displays a weekly payrall report and ask user to input the information
// created by Po-I Wu on 01/29/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double netPay = 0, totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, employeeID = 1;
	
	cout << "***Enter 0 for employee ID to stop***" << endl;
	cout << fixed << setprecision(2);

	while (employeeID != 0)
	{
		double grossPay, stateTax, federalTax;
		do
		{
			cout << "Please enter the employee ID: ";
			cin >> employeeID;
			if (employeeID < 0)        // show message if ID less than 0
				cout << "Negative ID ???" << endl;
		} while (employeeID < 0);      // while ID less than 0, keep asking
		if (employeeID == 0)        // if ID is 0, display info and end program
		{
			// final info
			cout << "Total Gross Pay: $ " << totalGrossPay << endl;
			cout << "Total State Tax: $ " << totalStateTax << endl;
			cout << "Total Fereral Tax: $ " << totalFederalTax << endl;
			cout << "Net Pay: $ " << netPay << endl;
			system("pause");
			return 0;
		}
		cout << "Gross Pay: $ ";
		cin >> grossPay;
		cout << "State Tax: $ ";
		cin >> stateTax;
		cout << "Federal Tax: $ ";
		cin >> federalTax;
		
		// negative value is not allowed
		if ((grossPay < 0) || (stateTax < 0) || (federalTax < 0))
		{
			cout << "No negative value!!!" << endl;
			system("pause");
			return 0;
		}
		// tax can't be greater than gross pay
		else if ((stateTax > grossPay) || (federalTax > grossPay))
		{
			cout << "Taxes no greater than Gross Pay!!!" << endl;
			system("pause");
			return 0;
		}
		totalGrossPay += grossPay;
		totalStateTax += stateTax;
		totalFederalTax += federalTax;
		netPay = totalGrossPay - totalStateTax - totalFederalTax;
	}

	system("pause");
	return 0;
}