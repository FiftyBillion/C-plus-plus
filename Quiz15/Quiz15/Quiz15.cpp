// this program shows the first and the last student from a file
// created by Po-I Wu on 02/08/2018

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile("LineUp.txt");
	string studentFirst, studentLast, student;
	if (inputFile)
	{
		// take a student name to initialize
		inputFile >> student;
		studentFirst = studentLast = student;
		while (inputFile >> student)
		{
			// compare
			if (student < studentFirst)
				studentFirst = student;
			if (student > studentLast)
				studentLast = student;
		}
		cout << "The First Student: " << studentFirst << endl;
		cout << "The Last Student: " << studentLast << endl;
	}
	else
		cout << "File is not opened sucessfully." << endl;

	system("pause");
	return 0;
}