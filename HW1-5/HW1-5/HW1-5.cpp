// this program display the memory used for the data types: char, int, float, double
// created by Po-I Wu on 01/09/2018

#include <iostream>
using namespace std;

int main()
{
	// size of each data type
	cout << "The amount of memory used for \"char\": " << sizeof(char) << " byte" << endl;
	cout << "The amount of memory used for \"int\": " << sizeof(int) << " bytes" << endl;
	cout << "The amount of memory used for \"float\": " << sizeof(float) << " bytes" << endl;
	cout << "The amount of memory used for \"double\": " << sizeof(double) << " bytes" << endl;

	system("pause");
	
	return 0;
}