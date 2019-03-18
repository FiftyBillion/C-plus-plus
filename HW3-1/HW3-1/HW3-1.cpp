// HW3-1 Software Sales
// this program calculate the price after discount depends on different amount
// created by Po-I Wu on 01/25/2018

#include <iostream>
using namespace std;

int main()
{
	int amount;
	double total, price = 99;	//price for one

	cout << "A package price is $99." << endl;
	cout << "Please enter how many you want to buy: ";
	cin >> amount;
	
	if (amount < 1)   // no less than 1
		cout << "Error! Invalid number." << endl;
	else if (amount < 10)		// 1-9
	{
		total = price * amount;
		cout << "No discount. Totoal cost: $ " << total << endl;
	}
	else if (amount < 20)		// 10-19
	{
		total = price * amount * 0.8;
		cout << "20% off discount. Totoal cost: $ " << total << endl;
	}
	else if (amount < 50)		// 20-49
	{
		total = price * amount * 0.7;
		cout << "30% off discount. Totoal cost: $ " << total << endl;
	}
	else if (amount < 100)		// 50-99
	{
		total = price * amount * 0.6;
		cout << "40% off discount. Totoal cost: $ " << total << endl;
	}
	else             // 100+
	{
		total = price * amount * 0.5;
		cout << "50% off discount. Totoal cost: $ " << total << endl;
	}

	system("pause");
	return 0;
}