// HW5-4 Lowest Score Drop
// this program drop the lowest score and calculate the average
// created by Po-I Wu on 02/26/2018

#include <iostream>
using namespace std;

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int score1, score2, score3, score4, score5;
	getScore(score1);
	getScore(score2);
	getScore(score3);
	getScore(score4);
	getScore(score5);
	calcAverage(score1, score2, score3, score4, score5);
	cout << endl;
	system("pause");
	return 0;
}

void getScore(int & score)
{
	cout << "Please enter the Score: ";
	cin >> score;
	
	// if not in the range, keep asking
	if (score < 0 || score > 100)
		do {
			cout << "Invalid score, please re-enter: ";
			cin >> score;
		} while (score < 0 || score > 100);
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
	double average;
	// sum of five and subtract the lowest
	average = (score1 + score2 + score3 + score4 + score5 - findLowest(score1, score2, score3, score4, score5)) / 4.0;
	cout << "After droping the lowest score, the Average Score of four score is: " << average;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		return score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
		return score2;
	else if (score3 < score1 && score3 < score2 && score3 < score4 && score3 < score5)
		return score3;
	else if (score4 < score1 && score4 < score2 && score4 < score3 && score4 < score5)
		return score4;
	else if (score5 < score1 && score5 < score2 && score5 < score3 && score5 < score4)
		return score5;
}