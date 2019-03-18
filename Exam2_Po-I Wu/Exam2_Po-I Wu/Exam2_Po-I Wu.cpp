// Exam 2
// this program determine the lowest accident region of a city and display the information
// created by Po-I Wu on 03/05/2018

#include <iostream>
#include <string>
using namespace std;

int getNumAccidents(string);
void findLowest(int, int, int, int, int);
int calcAverage(int, int, int, int, int);

int main()
{
	int north, south, east, west, central, average;
	north = getNumAccidents("North");
	south = getNumAccidents("South");
	east = getNumAccidents("East");
	west = getNumAccidents("West");
	central = getNumAccidents("Central");
	if (north < 0 || south < 0 || east < 0 || west < 0 || central < 0)
	{
		cout << "No less then 0 !!!" << endl;
		system("pause");
		return 0;
	}
	average = calcAverage(north, south, east, west, central);

	cout << "Traffic accident in North region: " << north << endl;
	cout << "Traffic accident in South region: " << south << endl;
	cout << "Traffic accident in East region: " << east << endl;
	cout << "Traffic accident in West region: " << west << endl;
	cout << "Traffic accident in Central region: " << central << endl;
	cout << "The average number of accidents in last year: " << average << endl;
	findLowest(north, south, east, west, central);
	cout << endl;

	system("pause");
	return 0;
}

int getNumAccidents(string region)
{
	int numAcci;
	cout << "Please enter the number of traffic accident of " << region << " region (integer) : ";
	cin >> numAcci;
	return numAcci;
}

void findLowest(int north, int south, int east, int west, int central)
{
	if (north < south && north < east && north < west && north < central)
		cout << "North region has the lowest accidents: " << north;
	else if (south < north && south < east && south < west && south < central)
		cout << "South region has the lowest accidents: " << south;
	else if (east < north && east < south && east < west && east < central)
		cout << "East region has the lowest accidents: " << east;
	else if (west < north && west < south && west < east && west < central)
		cout << "West region has the lowest accidents: " << west;
	else if (central < north && central < south && central < east && central < west)
		cout << "Central region has the lowest accidents: " << central;
}

int calcAverage(int north, int south, int east, int west, int central)
{
	return (north + south + east + west + central) / 5.0;
}