// Practice Exam 2
// this program calculate the bill for the company
// created by Po-I Wu on 03/02/2018

#include <iostream>
using namespace std;

void getInfo(int &, int &, double &);
void totalInfo(int, int, double, double = 10.00);

int main()
{
	int spoolOrder, spoolStock;
	double specCharge;
	getInfo(spoolOrder, spoolStock, specCharge);
	if (spoolOrder < 1 || spoolStock < 0 || specCharge < 0)
	{
		cout << "Invalid input !!!" << endl;
		system("pause");
		return 0;
	}
	totalInfo(spoolOrder, spoolStock, specCharge);
	system("pause");
	return 0;
}

void getInfo(int & spOrder, int & spStock, double & specCharge)
{
	char answer;
	cout << "Please enter number of spools ordered: ";
	cin >> spOrder;
	cout << "Please enter number of spools in stock: ";
	cin >> spStock;
	cout << "Please enter sepcial shipping and handling charge(Above the regular $10 rate): ";
	cin >> specCharge;
}

void totalInfo(int spOrder, int spStock, double specCharge, double shipCharge)
{
	int orderReady, orderBackorder;
	double productPrice, shipPrice, totalPrice;
	if (spOrder < spStock)
	{
		orderReady = spOrder;
		orderBackorder = 0;
	}
	else
	{
		orderReady = spStock;
		orderBackorder = spOrder - spStock;
	}
	productPrice = orderReady * 100;
	shipPrice = orderReady * shipCharge + specCharge;
	totalPrice = productPrice + shipPrice;
	cout << "The number of ordered spools ready to ship from current stock: " << orderReady << endl;
	cout << "The number of ordered spools on backorder: " << orderBackorder << endl;
	cout << "Total selling price of the portion ready to ship: $" << productPrice << endl;
	cout << "Total shipping and handling charges on the portion ready to ship: $" << shipPrice << endl;
	cout << "Total of the order ready to ship: $ " << totalPrice << endl;
}