// HW7-1 Reverse array
// this program demonstrate the function that copy the array into reverse order
// created by Po-I Wu on 03/18/2018

#include <iostream>
using namespace std;

int *copyReverse(int[], int);

int main()
{
	int myArray[5] = { 1,2,3,4,5 };
	int *myArray2 = copyReverse(myArray, 5);
	cout << "My Array 1: " << endl;
	for (int i = 0; i < 5; i++)
		cout << myArray[i] << " ";
	cout << endl;
	cout << "My Array 2: " << endl;
	for (int i = 0; i < 5; i++)
		cout << myArray2[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}

int *copyReverse(int myArray[], int size)
{
	int *copyArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		// copy the element from myArray in Reverse order
		*(copyArray + size - i - 1) = *(myArray + i);
	}
	return copyArray;
}