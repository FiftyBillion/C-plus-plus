// HW7-2 Double size
// this program demonstrate a function that will create a double-size array
// created by Po-I Wu on 03/18/2018

#include <iostream>
using namespace std;

int *doubleSizeArray(int[], int);

int main()
{
	int myArray1[5] = { 1,2,3,4,5 };
	int *myArray2 = doubleSizeArray(myArray1, 5);
	cout << "My array 1: " << endl;
	for (int i = 0; i < 5; i++)
		cout << myArray1[i] << " ";
	cout << endl;
	cout << "My array 2: " << endl;
	for (int i = 0; i < 10; i++)
		cout << myArray2[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}

int *doubleSizeArray(int myArray[], int size)
{
	int *doubleSize = new int[size * 2];
	for (int i = 0; i < size * 2; i++)
	{
		// initialize as 0 when not greater than original size
		if (i < size)
			*(doubleSize + i) = *(myArray + i);
		else
			*(doubleSize + i) = 0;
	}
	return doubleSize;
}