// HW5-5 Judge Score calculator
// this prgram drop the highest score and lowest score from judge and calculate the average
// created by Po-I Wu on 02/26/2018

#include <iostream>
using namespace std;

void getJudgeData(double &);
double calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
	double score1, score2, score3, score4, score5, average;

	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);

	average = calcScore(score1, score2, score3, score4, score5);

	cout << "The average after dropping the highest and lowest: " << average << endl;
	
	system("pause");
	return 0;
}

void getJudgeData(double & score)
{
	cout << "What is the judge score? : ";
	cin >> score;
	if (score < 0 || score > 10)
	{
		// ask until user enter the right number
		do
		{
			cout << "Please enter the score between 0 and 10: ";
			cin >> score;
		} while (score < 0 || score > 10);
	}
}

double calcScore(double score1, double score2, double score3, double score4, double score5)
{
	// sum subtract the lowest and highest
	return (score1 + score2 + score3 + score4 + score5
		- findLowest(score1, score2, score3, score4, score5) - findHighest(score1, score2, score3, score4, score5)) / 3.0;
}

double findLowest(double score1, double score2, double score3, double score4, double score5)
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

double findHighest(double score1, double score2, double score3, double score4, double score5)
{
	if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
		return score1;
	else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
		return score2;
	else if (score3 > score1 && score3 > score2 && score3 > score4 && score3 > score5)
		return score3;
	else if (score4 > score1 && score4 > score2 && score4 > score3 && score4 > score5)
		return score4;
	else if (score5 > score1 && score5 > score2 && score5 > score3 && score5 > score4)
		return score5;
}