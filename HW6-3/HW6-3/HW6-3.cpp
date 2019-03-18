// HW6-3 2D-Array Test Data
// this program demonstrate the 2D-Array and display the information
// created by Po-I Wu on 03/07/2018

#include <iostream>
using namespace std;

const int ROW = 5;
const int COL = 4;
int getTotal(const int[][COL]);
double getAverage(const int[][COL]);
int getRowTotal(const int[][COL], int);
int getColumnTotal(const int[][COL], int);
int getHighestInRow(const int[][COL], int);
int getLowestInRow(const int[][COL], int);

int main()
{
	int myData[ROW][COL] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6}, {4,5,6,7}, {5,6,7,8} };
	cout << "Total of my data: " << getTotal(myData) << endl;
	cout << "Average of my data: " << getAverage(myData) << endl;

	// display for each row
	for (int i = 0; i < ROW; i++)
		cout << "Total of row #" << i + 1 << " in my data: " << getRowTotal(myData, i) << endl;
	for (int i = 0; i < COL; i++)
		cout << "Total of column #" << i + 1 << " in my data: " << getColumnTotal(myData, i) << endl;
	for (int i = 0; i < ROW; i++)
		cout << "The highest in row #" << i + 1 << " in my data: " << getHighestInRow(myData, i) << endl;
	for (int i = 0; i < ROW; i++)
		cout << "The lowest in row #" << i + 1 << " in my data: " << getLowestInRow(myData, i) << endl;
	
	system("pause");
	return 0;
}

int getTotal(const int data[][COL])
{
	int total = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			total += data[i][j];
		}
	}
	return total;
}

double getAverage(const int data[][COL])
{
	// call getTotal function
	int total = getTotal(data);
	return static_cast<double>(total) / (ROW * COL);
}

int getRowTotal(const int data[][COL], int row)
{
	int total = 0;
	for (int col = 0; col < COL; col++)
		total += data[row][col];
	return total;
}

int getColumnTotal(const int data[][COL], int col)
{
	int total = 0;
	for (int row = 0; row < ROW; row++)
		total += data[row][col];
	return total;
}

int getHighestInRow(const int data[][COL], int row)
{
	int highest = data[row][0];
	for (int col = 0; col < COL; col++)
	{
		if (data[row][col] > highest)
			highest = data[row][col];
	}
	return highest;
}

int getLowestInRow(const int data[][COL], int row)
{
	int lowest = data[row][0];
	for (int col = 0; col < COL; col++)
	{
		if (data[row][col] < lowest)
			lowest = data[row][col];
	}
	return lowest;
}