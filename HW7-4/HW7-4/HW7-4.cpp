// HW7-4 Statistical data
// this program get amount of students and store their information in dynamical array
// created by Po-I Wu on 03/18/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int size, total = 0;
	int *movie = nullptr;
	
	cout << "How many students were surveyed? ";
	cin >> size;
	if (size < 0)
	{
		cout << "No negative number is allowed." << endl;
		system("pause");
		return 0;
	}
	movie = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "Movie watched by student " << i + 1 << ": ";
		cin >> *(movie + i);
		if (*(movie + i) < 0)
		{
			cout << "No negative number is allowed." << endl;
			system("pause");
			return 0;
		}
		total += *(movie + i);
	}
	cout << "Total movie watched: " << total << endl;
	// round to the nearest integer
	cout << fixed << setprecision(0) << "Average movie watched: " << static_cast<double>(total) / size << endl;

	system("pause");
	return 0;
}