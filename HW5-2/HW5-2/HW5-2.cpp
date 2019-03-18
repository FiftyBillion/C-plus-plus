// HW5-2 isPrime Function
// this program determine if it is a prime number or not
// created by Po-I Wu on 02/22/2018

#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int number;

	cout << "Please enter a int number: ";
	cin >> number;
	
	// make sure user enter positive integer
	if (number < 1)
	{
		cout << "Invalid !!!" << endl;
		system("pause");
		return 0;
	}

	if (isPrime(number))
		cout << "It is a prime number!!!" << endl;
	else
		cout << "It is not a prime number!!!" << endl;

	system("pause");
	return 0;
}

bool isPrime(int number)
{
	// check the remainder
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)    // number can be divided by number other than 1 and itself
		{
			return false;
		}
	}
	return true;
}