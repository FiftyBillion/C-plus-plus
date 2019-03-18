// this program ask user to enter five test score and store in to an array
// then display the sum of the total
// created by Po-I Wu on 03/01/2018

#include <iostream>
using namespace std;

void getTestScores(double[], int);
double getTotal(double[], int);

int main()
{
	const int ARRAY_SIZE = 5;
	double score[ARRAY_SIZE];

	// ask user to enter
	getTestScores(score, ARRAY_SIZE);

	cout << "The five test score: ";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << score[i];

		// seperate the elements
		if (i == 4)
			cout << endl;
		else
			cout << ", ";
	}

	// display total
	cout << "Sum of the five scores: " << getTotal(score, ARRAY_SIZE) << endl;

	system("pause");
	return 0;
}

void getTestScores(double score[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Test Score " << i + 1 << " : ";
		cin >> score[i];
	}
}

double getTotal(double score[], int size)
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += score[i];
	}
	return total;
}