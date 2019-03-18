// HW 2-10 Test Average
// this programg take five score average
// create by Po-I Wu on 01/17/2018
// time spent: 8 min

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double score1, score2, score3, score4, score5, average;

	cout << "Please enter five score and seperate by (space) key: " << endl;
	cin >> score1 >> score2 >> score3 >> score4 >> score5;		// user input

	average = ((score1 + score2 + score3 + score4 + score5) / 5.0 );

	cout << fixed << setprecision(1);		// one decimal place
	cout << "The average score: " << average << endl;

	system("Pause");
	return 0;
}