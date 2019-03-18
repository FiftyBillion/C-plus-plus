// this program print all the ASCII code
// created by Po-I Wu on 01/26/2018

#include <iostream>
using namespace std;

int main()
{
	char theCode = 0;
	int num = 0;
	while (num <= 127)
	{
		cout << theCode << ((num % 16 == 0)? "\n" :"");
		theCode++;
		num++;
	}
	cout << endl;
	system("pause");
	return 0;
}