// HW3-3 Bank Charges
// this program calculate the service fee
// created by Po-I Wu on 01/28/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double CHECK20 = 0.1, CHECK39 = 0.08, CHECK59 = 0.06, CHECK60 = 0.04, EXTRAFEE = 15, FEE = 10;
	double balance, numCheck, serviceFee = 0;
	
	cout << "Please enter your balance: $ ";
	cin >> balance;
	cout << "Please enter your number of checks: ";
	cin >> numCheck;
	cout << fixed << setprecision(2);

	if (balance < 0)		// overdrawn
	{
		cout << "\nAccount Overdrawn!!!" << endl;
		system("pause");
		return 0;
	}
	else if (numCheck < 0)		// no negative numbers check
	{
		cout << "\nNo negative number!!!" << endl;
		system("pause");
		return 0;
	}
	else if ((balance-10) < 400)	// Extra fee for less than $400
	{
		serviceFee += 25;
		if (numCheck < 20)
			serviceFee += numCheck * CHECK20;
		else if (numCheck < 40)
			serviceFee += numCheck * CHECK39;
		else if (numCheck < 60)
			serviceFee += numCheck * CHECK59;
		else
			serviceFee += numCheck * CHECK60;
	}
	else
	{
		serviceFee += 10;
		if (numCheck < 20)
			serviceFee += numCheck * CHECK20;
		else if (numCheck < 40)
			serviceFee += numCheck * CHECK39;
		else if (numCheck < 60)
			serviceFee += numCheck * CHECK59;
		else
			serviceFee += numCheck * CHECK60;
	}

	cout << "\nService Fee : $ " << serviceFee << endl;

	system("pause");
	return 0;
}