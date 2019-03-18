// HW 2-11 Ingredient Adjuster
// this program calculate the recipe for user enter amount
// created by Po-I Wu on 01/17/2018
// time spent: 10 min

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int cookie;
	double sugar, butter, flour;
	
	cout << "Please enter how many cookies you want to make: ";
	cin >> cookie;
	
	// calculation 
	sugar = cookie * (1.5/48);
	butter = cookie * (1.0/48);
	flour = cookie * (2.75 / 48);
	
	cout << fixed << setprecision(2);
	cout << "\n\nYou need:" << endl;
	cout << sugar << " cups of sugar\n" << butter << " cup of butter\n" << flour << " cups of flour" << endl;

	system("Pause");
	return 0;
}