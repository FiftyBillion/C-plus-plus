// HW4-3 Square Display
// this program display the square "X" which user enter the side
// created by Po-I Wu on 02/12/2018

#include <iostream>
using namespace std;

int main()
{
	int side;
	cout << "Please enter a integer from 1 to 15: ";
	cin >> side;
	if (side < 1 || side > 15)    // make sure user enter the side between 1 and 15
	{
		cout << "Not between 1 and 15 !!!" << endl;
		system("pause");
		return 0;
	}

	// nest loop create square of "X"
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
			cout << "X";
		cout << endl;
	}

	system("pause");
	return 0;
}