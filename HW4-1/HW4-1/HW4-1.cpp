// HW4-1 Ocean Levels
// this program display the ocean level after each year
// created by Po-I Wu on 02/09/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double oceanLevel = 0;
	const double RISING = 1.5;
	cout << showpoint << fixed << setprecision(1);
	
	// show ocean level after each year
	for (int i = 1; i <= 25; i++)
	{
		cout << "Ocean Level after " << i << " year will rise " << RISING * i << "mm" << endl;
	}
	
	system("pause");
	return 0;
}

