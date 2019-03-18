// HW4-4 Triangle Stars
// this program demonstrate nested loop to show triangle stars
// created by Po-I Wu on 02/12/2018

#include <iostream>
using namespace std;

int main()
{
	int m = 5;    // for space go from 5,4,3,2,1
	for (int i = 1; i <= 11; i+=2)    // use for printing star 1,3,5,7,9,11
	{                                 // also for 6 times loop
		for (int k = 0; k < m; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
		m--;
	}

	system("pause");
	return 0;
}