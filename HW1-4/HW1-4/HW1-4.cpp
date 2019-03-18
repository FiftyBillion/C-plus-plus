// this program calculate the sum of numbers and average value
// created by Po-I Wu on 01/09/2018

#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, num4, num5;
	num1 = 28;
	num2 = 32;
	num3 = 37;
	num4 = 24;
	num5 = 33;

	double sum = num1 + num2 + num3 + num4 + num5;

	cout << "The average of numbers: " << sum / 5.0 << endl;

	system("pause");

	return 0;
}