// HW4-7 Population Bar Chart
// this program display the population of the town
// created by Po-I Wu on 02/13/2018

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile("People.txt");
	int people, star;
	if (inputFile)
	{
		cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
		for (int i = 0; i <= 100; i += 20)      // i will be 0,20,40,60,100
		{
			inputFile >> people;
			if (people % 1000 >= 500)
				star = people / 1000 + 1;      // rounded
			else
				star = people / 1000;
			cout << 1900 + i << "  ";         // every 20 years
			for (int j = 0; j < star; j++)
				cout << "*";
			cout << endl;
		}
	}

	system("pause");
	return 0;
}