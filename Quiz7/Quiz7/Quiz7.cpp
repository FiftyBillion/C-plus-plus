// this program calculate the BMI for a person
// created by Po-I Wu on 01/18/2018

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double weight, height, userBMI;
	cout << "Please enter your weight in pounds: ";
	cin >> weight;
	cout << "Please enter your height in inches: ";
	cin >> height;

	// calculation
	userBMI = weight * 703 / pow(height, 2.0);

	if (userBMI < 18.5)
		cout << "\n\nUnderweight\n\n" << endl;
	else if (userBMI > 25)
		cout << "\n\nOverweight\n\n" << endl;

	// between 18.5 & 25
	else
		cout <<"\n\nOptimal weight\n\n" << endl;

	system("Pause");
	return 0;
}