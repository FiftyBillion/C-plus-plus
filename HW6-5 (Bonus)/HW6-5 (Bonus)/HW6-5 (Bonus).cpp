// HW6-5 (Bonus) The Lo Shu Magic Square
// this program determine if the 2D array a Lo Shu Magic Square or not
// created by Po-I Wu on 03/11/2018

#include <iostream>
using namespace std;

const int ROW = 3;
const int COL = 3;
bool isLoShu(const int [][COL]);
void printSquare(const int[][COL]);

int main()
{
	int square1[ROW][COL] = { {4,9,2}, {3,5,7}, {8,1,6} };
	int square2[ROW][COL] = { {1,2,3}, {4,5,6}, {7,8,9} };
	
	// display the square
	cout << "Square 1:" << endl;
	printSquare(square1);
	cout << endl;
	cout << "Square 2:" << endl;
	printSquare(square2);
	cout << endl;

	// check the square
	cout << "Is square 1 a Lo Shu Magic Square? " << (isLoShu(square1) ? "Yes" : "No" ) << endl;
	cout << "Is square 2 a Lo Shu Magic Square? " << (isLoShu(square2) ? "Yes" : "No" ) << endl;

	system("pause");
	return 0;
}

bool isLoShu(const int square[][COL])
{
	int sum[8] = { 0,0,0,0,0,0,0,0 };   // initialize
	int i = 0;   // counter for array sum[]

	// store the row sum to the sum array
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
			sum[i] += square[row][col];
		i++;
	}

	// sotre the column sum to the sum array
	for (int col = 0; col < COL; col++)
	{
		for (int row = 0; row < ROW; row++)
			sum[i] += square[row][col];
		i++;
	}
	
	// sum of diagonal
	sum[i++] = square[0][0] + square[1][1] + square[2][2];
	sum[i] = square[2][0] + square[1][1] + square[0][2];

	// check if every element has the same value
	// if not, not a lo shu magic square
	for (int j = 1; j < 8; j++)
	{
		if (sum[0] != sum[j])
			return false;
	}

	return true;
}

// my display square function
void printSquare(const int square[][COL])
{
	for (int i = 0; i < COL; i++)
	{
		for (int j = 0; j < ROW; j++)
			cout << square[j][i] << "  ";
		cout << endl;
	}
}