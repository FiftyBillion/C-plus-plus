// This program has two functions: main and displayMessage
// modified by Po-I Wu on 02/12/2018
#include <iostream>
using namespace std;

//*****************************************
// Definition of function displayMessage  *
// This function displays a greeting.     *
//*****************************************

void displayMessage()
{
	cout << "Hello from the function displayMessage.\n";
}

//*****************************************
// Function main                          *
//*****************************************

int main()
{
	cout << "Hello from main.\n";
	for(int i = 0; i < 5; i++)
		displayMessage();
	cout << "Back in function main again.\n";
	system("pause");
	return 0;
}