// HW6-4 Monkey Business
// this program store the amount that monkeys eat in 2D 3x7 array
// and display the information
// created by Po-I Wu on 03/11/2018

#include <iostream>
using namespace std;

int main()
{
	double monkeyFood[3][7];

	// user enter information
	for (int day = 0; day < 7; day++)
	{
		cout << "********************************" << endl;
		cout << "In day " << day + 1 << ","<< endl;
		for (int monkey = 0; monkey < 3; monkey++)
		{
			cout << "Please enter how many pounds monkey " << monkey + 1 << " eats: ";
			cin >> monkeyFood[monkey][day];
			if (monkeyFood[monkey][day] < 0)
			{
				cout << "No negative pounds !!!" << endl;
				system("pause");
				return 0;
			}
		}
	}
	cout << endl;
	
	// initialize the least and the greatest
	double least = monkeyFood[0][0], greatest = monkeyFood[0][0];

	// average each day and find the least & the greatest
	for (int day = 0; day < 7; day++)
	{
		double average = 0;
		if (monkeyFood[0][day] > greatest)
			greatest = monkeyFood[0][day];
		if (monkeyFood[0][day] < least)
			least = monkeyFood[0][day];
		for (int monkey = 0; monkey < 3; monkey++)
		{
			average += monkeyFood[monkey][day];
		}
		average = average / 3;
		cout << "Average amount of food eaten in day " << day + 1 << ": " << average << " pounds" << endl;
	}
	cout << "The least amount of food eaten during the week by monkey 1: " << least << " pounds" << endl;
	cout << "The greatest amount of food eaten during the week by monkey 1: " << greatest << " pounds" << endl;

	system("pause");
	return 0;
}