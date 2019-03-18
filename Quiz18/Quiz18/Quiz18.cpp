// this program solve quadratic equation
// created by Po-I Wu on 02/14/2018

#include <iostream>
#include <cmath>
using namespace std;

void roots(double, double, double);

int main()
{
	double a, b, c;

	cout << "To solve \"ax^2 + bx + c = 0\"" << endl;
	cout << "Please enter the numbers for a, b, c" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;

	roots(a, b, c);

	cout << endl;

	system("pause");
	return 0;
}

void roots(double a, double b, double c)
{
	double check = (pow(b, 2) - 4 * a*c);

	if (check < 0)
		cout << "No real root!!!";
	else if (check == 0)
	{
		double root = (-b + sqrt(check)) / (2 * a);
		cout << "Two roots are equal." << endl;
		cout << "Root: " << root;
	}
	else
	{
		double root1, root2;
		root1 = (-b + sqrt(check)) / (2 * a);
		root2 = (-b - sqrt(check)) / (2 * a);
		cout << "Root 1: " << root1 << endl;
		cout << "Root 2: " << root2;
	}
}