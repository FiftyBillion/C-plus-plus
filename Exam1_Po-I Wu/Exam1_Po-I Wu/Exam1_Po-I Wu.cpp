// Exam 1
// this program calculate the percentage of calories from fat
// created by Po-I Wu on 02/02/2018

#include <iostream>
using namespace std;

int main()
{
	double totalCal, fatGram, fatCal, percentCal;

	cout << "Please enter the total calories in a food: ";
	cin >> totalCal;
	if (totalCal < 0)   // avoid total calories is negative
	{
		cout << "No negative calories!" << endl;
		system("pause");
		return 0;
	}
	cout << "Please enter the fat grams in food: ";
	cin >> fatGram;
	
	fatCal = fatGram * 9;

	if (fatGram < 0)   // avoid negative grams
	{
		cout << "No negative grams!!" << endl;
		system("pause");
		return 0;
	}
	if (fatCal > totalCal)   // avoid fat calories greater than total calories
	{
		cout << "No greater than total calories!" << endl;
		system("pause");
		return 0;
	}
	percentCal = fatCal / totalCal;
	cout << "There are " << percentCal * 100 << "% of calories from fat." << endl;
	if (percentCal < 0.3)
		cout << "The food is low in fat." << endl;
	system("pause");
	return 0;
}