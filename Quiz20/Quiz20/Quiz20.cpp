// ths program determines the greatest sales for the company
// rewrite
// created by Po-I Wu on 02/21/2018

#include <iostream>
#include <string>
using namespace std;

void getSales(string, double &);
void findHighest(double, double, double, double);

int main()
{
	double ne, se, nw, sw;
	getSales("Northeast", ne);
	getSales("Southeast", se);
	getSales("Northwest", nw);
	getSales("Southwest", sw);
	findHighest(ne, se, nw, sw);
	cout << endl;

	system("pause");
	return 0;
}

void getSales(string division, double & sales)
{
	cout << "Please enter the sales for " << division << " division: $ ";
	cin >> sales;
}

void findHighest(double ne, double se, double nw, double sw)
{
	if (ne > se && ne > nw && ne > sw)
		cout << "The highest grossing division is Northeast !!! $ " << ne;
	else if (se > ne && ne > nw && ne > sw)
		cout << "The highest grossing division is Southeast !!! $ " << se;
	else if (nw > ne && nw > se && nw > sw)
		cout << "The highest grossing division is Northwest !!! $ " << nw;
	else
		cout << "The highest grossing division is Southwest !!! $ " << sw;
}