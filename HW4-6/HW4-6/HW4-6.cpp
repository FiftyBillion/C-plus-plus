// HW4-6 Using Files- Numeric Processing
// this program read the file and do the calculation of numbers
// created by Po-I Wu on 02/13/2018

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile("Random.txt");
	int numOfNum = 0, sumOfNum = 0, num;
	double average;
	if (inputFile)      // make sure inputFile readable
	{
		while (inputFile >> num)
		{
			numOfNum++;      // count num
			sumOfNum += num;
		}
		average = static_cast<float>(sumOfNum) / numOfNum;
		cout << "The number of numbers in the file: " << numOfNum << endl;
		cout << "The sum of all the numbers in the file (a running total): " << sumOfNum << endl;
		cout << "The average of all the numbers in the file: " << average << endl;
	}
	
	system("pause");
	return 0;
}