// HW7-3 Move one index
// this program demonstrate a function that move the array elements to the right one index unit
// created by Po-I Wu on 03/18/2018

#include <iostream>
using namespace std;

int *moveArray(int[], int);

int main()
{
	int myArray1[5] = { 1,2,3,4,5 };
	int *myArray2 = moveArray(myArray1, 5);
	cout << "My array 1:" << endl;
	for (int i = 0; i < 5; i++)
		cout << myArray1[i] << " ";
	cout << endl;
	cout << "My array 2:" << endl;
	for (int i = 0; i < 6; i++)
		cout << myArray2[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}

int *moveArray(int myArray[], int size)
{
	int *moved = new int[size + 1];
	// initailize the first element
	*moved = 0;
	for (int i = 1; i < size + 1; i++)
		*(moved + i) = *(myArray + i - 1);
	return moved;
}