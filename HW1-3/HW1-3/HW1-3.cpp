// this program calculates and display the information of stock transaction
// created by Po-I Wu on 01/09/2018

#include <iostream>
using namespace std;

int main()
{
	int amountOfStock = 750;
	double priceOfStock = 35.00;  // price per share of stock
	const double COMMISSION_RATE = 2 / 100.0; // 2% commission
	
	cout << "The amount paid for the stock: $" << amountOfStock * priceOfStock << endl;
	cout << "The amount of the commission: $" << amountOfStock * priceOfStock * COMMISSION_RATE << endl;
	cout << "The total amount paid: $" << amountOfStock * priceOfStock * (1 + COMMISSION_RATE) << endl;
	// total = total price of stocks * (102%)

	system("pause");

	return 0;
}