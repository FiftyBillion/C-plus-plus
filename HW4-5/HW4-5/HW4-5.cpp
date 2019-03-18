// HW4-5 The Greatest and Least of These
// this program display the largest and smallest number
// created by Po-I Wu on 02/12/2018

#include <iostream>
using namespace std;

int main()
{
	int input, largest, smallest;
	
	cout << "Please enter a series of integers(enter -99 to stop): " << endl;
	cin >> input;
	largest = smallest = input;      // initialize the largest and smallest
	if (input == -99)      // if enter -99 for first number
		cout << "No thing is compared!!" << endl;
	else
	{
		do
		{
			cin >> input;
			if (input == -99)
				break;      // avoid -99 replace the smallest number
			else if (input > largest)
				largest = input;
			else if (input < smallest)
				smallest = input;
		} while (input != -99);
		cout << "Largest number: " << largest << endl;
		cout << "Smallest number: " << smallest << endl;
	}

	system("pause");
	return 0;
}