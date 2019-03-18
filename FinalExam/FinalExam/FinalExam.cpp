// Final Exam
// programing part
// the program demonstrate makingArray function and getTotal function
// created by Po-I Wu on 03/21/2018

#include <iostream>
using namespace std;

double *makingArray(int = 10);
double getTotal(const double[], int);

int main()
{
	int size;
	double *array1 = nullptr;
	cout << "Array size: ";
	cin >> size;
	array1 = makingArray(size);
	cout << "Elements in the array: ";
	for (int i = 0; i < size; i++)
		cout << array1[i] << " ";
	cout << "\nSum of the elements: " << getTotal(array1, size) << endl;
	system("pause");
	return 0;
}

double *makingArray(int size)
{
	double *myArray = new double[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter double for array element " << i + 1 << ": ";
		cin >> *(myArray + i);
	}
	return myArray;
}

double getTotal(const double myArray[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
		total += *(myArray + i);
	return total;
}