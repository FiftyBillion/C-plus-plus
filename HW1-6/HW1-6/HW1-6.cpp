// this program display the information of a transaction in a store
// created by Po-I Wu on 01/09/2018

#include <iostream>
using namespace std;

int main()
{
	double item1, item2, item3, item4, item5;
	item1 = 15.95;
	item2 = 24.95;
	item3 = 6.95;
	item4 = 12.95;
	item5 = 3.95;
	const double SALE_TAX = 0.07;

	// display price of each item
	cout << "The price of item 1: $" << item1 << endl;
	cout << "The price of item 2: $" << item2 << endl;
	cout << "The price of item 3: $" << item3 << endl;
	cout << "The price of item 4: $" << item4 << endl;
	cout << "The price of item 5: $" << item5 << endl;

	// display subtotal (without tax)
	cout << "The subtotal of the sale: $" << item1 + item2 + item3 + item4 + item5 << endl;

	cout << "Sale tax: " << SALE_TAX * 100 << "%" << endl;	// display sale tax

	cout << "Total: $" << (item1 + item2 + item3 + item4 + item5) * (1 + SALE_TAX) << endl;

	system("pause");

	return 0;
}
