// this program store how many fish is caught by fishermen
// created by Po-I Wu on 02/27/2018

#include <iostream>
using namespace std;

int main()
{
	const int NUM_FISH = 20;
	int fish[NUM_FISH];

	// ask for input
	for (int i = 0; i < 20; i++)
	{
		cout << "How many fish are caught by fisherman " << i + 1 << " ?  : ";
		cin >> fish[i];
	}
	cout << "------------------------------------------------" << endl;

	// show what is stored
	for (int i = 0; i < 20; i++)
			cout << "Fisherman " << i + 1 << " caught " << fish[i] << " fish." << endl;

	system("pause");
	return 0;
}