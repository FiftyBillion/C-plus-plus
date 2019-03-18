// this program simulate a digital clock for a day
// created by Po-I Wu on 01/30/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
			{
				cout.fill('0');
				cout << setw(2) << i << " : " << setw(2) << j << " : " << setw(2) << k << endl;
			}
		}
	}

	system("pause");
	return 0;
}