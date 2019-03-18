// HW 2-16 Angle Calculator
// this program ask user to enter angle and display sin cos tan
// created by Po-I Wu on 01/19/2018
// time spent: 10 min

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double radian;
	cout << "Please enter the angle in radian: ";
	cin >> radian;

	cout << fixed << setprecision(4);
	cout << "\nsin(" << radian << ") = " << sin(radian) << endl;
	cout << "\ncos(" << radian << ") = " << cos(radian) << endl;
	cout << "\ntan(" << radian << ") = " << tan(radian) << endl;

	system("pause");
	return 0;
}