// this program calculate the average mile per tank
// created by Po-I Wu on 01/08/2018

#include <iostream>
using namespace std;

int main()
{
	double mpgTown = 305 / 18.0;
	double mpgHighway = 355 / 17.0;
	int numberOfGallons = 20;


	// total value : Distance * Average Miles
	cout << "Distance the car can travel on one tank of gas when driven in town: ";
	cout << numberOfGallons * mpgTown << " miles" << endl;
	cout << "Distance the car can travel on one tank of gas when driven on highway: ";
	cout << numberOfGallons * mpgHighway << "miles" << endl;

	system("pause");

	return 0;
}