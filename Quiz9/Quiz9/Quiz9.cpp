// this program calculate the time of sound wave traval in air, water or steel
// created by Po-I Wu on 01/22/2018

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int AIR = 1;
	const int WATER = 2;
	const int STEEL = 3;
	int selection, speed_air, speed_water, speed_steel;
	speed_air = 1100;
	speed_water = 4900;
	speed_steel = 16400;
	double distance, time;

	cout << "Please select what medium you want to calculate the sound wave in " << endl;
	cout << "\n1. Air" << endl;
	cout << "\n2. Water" << endl;
	cout << "\n3. Steel" << endl;
	cout << "\nYour selection: ";
	cin >> selection;

	// stop if they type other than 1,2,3
	if (!(selection == AIR || selection == WATER || selection == STEEL))
	{
		cout << "\nPlease enter 1,2,3 only!!" << endl;
		system("pause");
		return 0;
	}

	cout << "\nAnd please enter the distance you want to calculate in the medium in feet: ";
	cin >> distance;

	cout << fixed << setprecision(4);
	if (distance < 0)
		cout << "\nInvalid Value!!" << endl;
	else if (selection == AIR)
	{
		time = distance / speed_air;
		cout << "\nThe time travel in air is " << time << " second(s)" << endl;
	}
	else if (selection == WATER)
	{
		time = distance / speed_water;
		cout << "\nThe time travel in water is " << time << " second(s)" << endl;
	}
	else if (selection == STEEL)
	{
		time = distance / speed_steel;
		cout << "\nThe time travel in steel is " << time << " second(s)" << endl;
	}

	system("pause");
	return 0;
}