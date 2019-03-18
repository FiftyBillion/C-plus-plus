// HW 2-12 Celsius to Fahrenheit
// this program convert C to F
// created by Po-I Wu on 01/17/2018
// time spent: 15 min

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double celsius, fahrenheit;
	
	cout << "Please enter the temperature in Celsius: ";
	cin >> celsius;

	// calculation
	fahrenheit = celsius * 9 / 5 + 32;

	cout << fixed << setprecision(0); // integer, rounded
	cout << "\n\nIt is " << fahrenheit << " Fahrenheit." << endl;
	
	system("Pause");
	return 0;
}