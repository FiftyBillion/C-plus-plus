// HW3-4 Geometry Calculator
// this program allow user to choose the geometry and caulate the area
// created by Po-I Wu on 01/28/2018

#include <iostream>
using namespace std;

int main()
{
	int choice;
	double area;
	const double PI = 3.14159;
	cout << "Geometry Calculator" << endl;
	cout << "\n1. Calculate the area of a circle" << endl;
	cout << "\n2. Calculate the area of a rectangle" << endl;
	cout << "\n3. Calculate the area of a triangle" << endl;
	cout << "\n4. Quit" << endl;
	cout << "\nEnter your choice (1-4): ";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:        // for circle
		double radius;
		cout << "Please enter the radius of a circle: ";
		cin >> radius;
		area = radius * radius * PI;
		break;
	case 2:     // for rectangle
		double width, length;
		cout << "Please enter the width and length of a rectangle (seperate by space): ";
		cin >> width >> length;
		area = width * length;
		break;
	case 3:      // for triangle
		double base, height;
		cout << "Please enter the base and height of a triangle (seperate by space): ";
		cin >> base >> height;
		area = base * height * 0.5;
		break;
	case 4:     // for quit
		system("pause");
		return 0;
	default:        // input other than 1,2,3,4
		cout << "Invalid Choice!!!" << endl;
		system("pause");
		return 0;
	}
	cout << "The area is " << area << endl;

	system("pause");
	return 0;
}