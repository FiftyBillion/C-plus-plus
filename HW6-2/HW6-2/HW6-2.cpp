// HW6-2 Driver's License Office Answer Check
// this program using array to check if the student answers are correct and display the result
// created by Po-I Wu on 03/11/2018

#include <iostream>
using namespace std;

int main()
{
	const char answerKey[] = { "ADBBCBABCDACDBDCCADB" };
	char studentAnswer[20];
	int correct = 0;

	cout << "Please enter students answer ('A', 'B', 'C', 'D' only)" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << i + 1 << ": ";
		cin >> studentAnswer[i];
		// make sure user enter ABCD
		if (studentAnswer[i] != 'A' && studentAnswer[i] != 'B' && studentAnswer[i] != 'C' && studentAnswer[i] != 'D')
		{
			cout << "ABCD only!!!!" << endl;
			system("pause");
			return 0;
		}
	}

	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		if (studentAnswer[i] == answerKey[i])
			correct += 1;   // count correct
	}
	
	// passed at least 15 correct
	if (correct >= 15)
		cout << "Student PASSED !!!";
	else
		cout << "Student FAILED !!!";

	cout << "\nNumber correct: " << correct << endl;
	cout << "Number incorrect: " << 20 - correct << endl;
	cout << "Wrong question#: ";
	// show the wrong question number
	for (int i = 0; i < 20; i++)
	{
		if (studentAnswer[i] != answerKey[i])
			cout << i + 1 << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}