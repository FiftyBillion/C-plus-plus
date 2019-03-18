// HW7-5 Test Score
// this program ask user how many scores, then sorting the score and calcualte the average
// created by Po-I Wu on 03/18/2018

#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double[], int);
double getAverage(double[], int);

int main()
{
	int size;
	double *testScore = nullptr;
	
	cout << "How many test score? ";
	cin >> size;
	if (size <= 0)
	{
		cout << "No negative number or zero!!!!" << endl;
		system("pause");
		return 0;
	}
	testScore = new double[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> *(testScore + i);
		// score between 0 and 100 only
		if (*(testScore + i) < 0 || *(testScore + i) > 100)
		{
			cout << "Invalid score!!!" << endl;
			system("pause");
			return 0;
		}
	}
	bubbleSort(testScore, size);
	cout << "After sorting, the score from low to high: " << endl;
	for (int i = 0; i < size; i++)
		cout << *(testScore + i) << endl;
	// round to two decimal place
	cout << fixed << setprecision(2) << "Average: " << getAverage(testScore, size) << endl;

	system("pause");
	return 0;
}

// bubble sort
// move the greater number to the top
void bubbleSort(double myArray[], int size)
{
	double temp;
	bool swap;
	do
	{
		swap = false;
		for (int count = 0; count < (size - 1); count++)
		{
			if (*(myArray + count) > *(myArray + count + 1))
			{
				temp = *(myArray + count);
				*(myArray + count) = *(myArray + count + 1);
				*(myArray + count + 1) = temp;
				swap = true;
			}
		}
	} while (swap);
}

double getAverage(double myArray[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
		total += *(myArray + i);
	return total / size;
}