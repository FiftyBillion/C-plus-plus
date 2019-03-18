// this program calculate the average score for each test
// created by Po-I Wu

#include <iostream>
using namespace std;

int main()
{
	const int NUM_STUDENTS = 3;
	const int NUM_SCORES = 5;
	double total;
	double average;
	double scores[NUM_STUDENTS][NUM_SCORES] = { {88, 97, 79, 86, 94}, {86, 91, 78, 79, 84}, {82, 73, 77, 82, 89} };

	for (int col = 0; col < NUM_SCORES; col++)
	{
		total = 0;
		for (int row = 0; row < NUM_STUDENTS; row++)
			total += scores[row][col];
		average = total / NUM_STUDENTS;
		cout << "Average of test #" << (col + 1) << ": " << average << endl;
	}

	system("pause");
	return 0;
}