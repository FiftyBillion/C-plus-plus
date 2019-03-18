// This program reads data from a file into an array.
// modified by Po-I Wu 02/28/2018

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10; // Array size
	int numbers[ARRAY_SIZE];   // Array with 10 elements
	int count = 0;             // Loop counter variable
	ifstream inputFile;        // Input file stream object

							   // Open the file.
	inputFile.open("numbers.txt");

	// Read the numbers from the file into the array.
	while (count < ARRAY_SIZE && inputFile >> numbers[count])
		count++;

	// Close the file.
	inputFile.close();

	// Display the numbers read:
	cout << "The numbers are: ";
	for (count = 0; count < ARRAY_SIZE; count++)
		cout << numbers[count] << " ";
	cout << endl;

	int highest, lowest;
	highest = lowest = numbers[0];  // initialize

	// go through the array
	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] > highest)
			highest = numbers[i];
		if (numbers[i] < lowest)
			lowest = numbers[i];
	}
	cout << "The highest number: " << highest << endl;
	cout << "The lowest number: " << lowest << endl;

	system("pause");
	return 0;
}