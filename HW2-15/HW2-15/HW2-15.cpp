// HW2-15 Pizza Pi
// this program calculate how many slices of pizza can be cut in given diameter
// created by Po-I Wu on 01/18/2018
// time spent: 10 min

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double diameter, area, numSlices;
	const double PI = 3.14159;

	cout << "Please enter the diameter of the pizza (inches): ";
	cin >> diameter;

	// calculation
	area = pow(diameter / 2, 2.0) * PI;
	numSlices = area / 14.125;

	cout << fixed << setprecision(1);
	cout << "\nYou will need to cut " << numSlices << " slices." << endl;
	
	system("pause");
	return 0;
}