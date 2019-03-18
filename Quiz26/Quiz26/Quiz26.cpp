// This program uses a pointer to display the contents
// of an integer array.
// finished by Po-I Wu on 03/09/2018

#include <iostream>
using namespace std;

int main()
{
	int set[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int *nums = set;     /* define a pointer named 'nums',
							  and make it points to 'set' */


							  // Display the numbers in the array.
	cout << "The numbers in set are:\n";
	cout << *nums << " ";   // Display first element using pointer
	while (nums < set+7) /* Make sure the address is not greater than the address of
							  the last element */
	{
		// Advance nums to point to the next element.
		nums++;
		// Display the value pointed to by nums.
		cout << *nums << " ";
	}

	// Display the numbers in reverse order.
	cout << "\nThe numbers in set backward are:\n";
	cout << *nums << " ";   // Display the last element
	while (nums > set) /* Make sure the address is not less than the address of
							  the first element */
	{
		// Move backward to the previous element.
		nums--;
		// Display the value pointed to by nums.
		cout << *nums << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}
