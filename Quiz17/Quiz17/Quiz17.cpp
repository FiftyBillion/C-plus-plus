// this program demonstrate functions
// created by Po-I Wu on 02/13/2018

#include <iostream>
using namespace std;

void print_star();
void print_message();

int main()
{
	cout << "     ";
	print_star();
	cout << endl << endl << "    ";
	print_message();
	cout << endl << endl << "     ";
	print_star();
	cout << endl;

	system("pause");
	return 0;
}

void print_star()
{
	cout << "**********";
}

void print_message()
{
	cout << "How do you do!";
}