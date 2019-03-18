// HW5-1 Kinetic Energy
// this program use a function to calculate KE for user
// created by Po-I Wu on 02/22/2018

#include <iostream>
#include <cmath>
using namespace std;

// prototype
double kineticEnergy(double, double);

int main()
{
	double mass, velocity, kE;

	// user input
	cout << "Please enter the mass (kg): ";
	cin >> mass;
	cout << "Please enter the velocity (m/s): ";
	cin >> velocity;

	kE = kineticEnergy(mass, velocity);    // call function

	cout << "Kinetic Energy is " << kE << " J" << endl;

	system("pause");
	return 0;
}

double kineticEnergy(double mass, double velocity)
{
	return 0.5 * mass * pow(velocity, 2.0);
}