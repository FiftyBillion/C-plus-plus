// Final Project
// Group 4
// Ticket Sales for Theather
// this program allow user to see seat chart, price, and purchase ticket
// created by Po-I Wu, HaoChe Cheng, Zifeng Mo, Shi Haur Chong
// date started 03/12/2018

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
const int ROW = 15;
const int COL = 30;

void ticketPricesByRow(double []);
void seatingChart(char [][COL]);
void salesReport(char [][COL], double []);
void purchaseTicket(char [][COL], double[]);
void exit(char [][COL]);
void seatReset(char [][COL]);
void getSeatPrice(double[]);
bool loadSeatChart(char [][COL]);

int main()
{
	double seatPrice[ROW];
	char menuChoice;
	char seat[ROW][COL];

	// set all the element 'O' as default
	seatReset(seat);

	// below asking the user if want to import the file or enter the price by hand
	// and store the data to the array
	getSeatPrice(seatPrice);
	cout << endl;

	// ask the user if want to start a new seating chart or load the seat chart file from previous
	if (loadSeatChart(seat))
	{
		system("pause");
		return 0;
	}

	// display the menu option and ask user for choice
	do
	{
		cout << "¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸¡¹¡¸" << endl << endl;
		cout << "A. Display the seating chart" << endl;
		cout << "B. View the ticket price for each row" << endl;
		cout << "C. Purchase ticket" << endl;
		cout << "D. View ticket sales report (Total price for ticket purchased)" << endl;
		cout << "E. Exit the program" << endl;
		cout << "Your Choice: ";
		cin >> menuChoice;
		cout << endl;
		switch (menuChoice)
		{
		case 'a':
		case 'A':
			seatingChart(seat);
			cout << endl;
			break;
		case 'b':
		case'B':
			ticketPricesByRow(seatPrice);
			cout << endl;
			break;
		case 'c':
		case 'C':
			purchaseTicket(seat, seatPrice);
			break;
		case 'd':
		case 'D':
			salesReport(seat, seatPrice);
			cout << endl;
			break;
		case 'e':
		case 'E':
			exit(seat);
			break;
		default:
		{
			cout << "Please choose A,B,C,D,E" << endl;
			break;
		}
		}
	} while (menuChoice != 'e' && menuChoice != 'E');

	return 0;
}

// this function display ticket price by row
void ticketPricesByRow(double rowprices[])
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Ticket Prices For Each  Row" << endl;
	cout << "===========================" << endl;
	cout << "Row Price" << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << left << setw(3) << i + 1 << " $ " << right << setw(5) <<rowprices[i] << endl;
	}
}

// this function allow user to enter amount and seat information
// and return the array after seat sold
void purchaseTicket(char seats[][COL], double rowprice[])
{
	char confirm = 'n';
	do
	{
		int row, seat, numseats, totalSeat;
		double cost = 0, total = 0;
		int seatStore[900];    // this array store the selected seat, using for cancel purchase
		int myRow = 0;
		cout << "Purchase a Ticket" << endl;

		seatingChart(seats);   // call function display seat chart
		cout << endl;

		cout << "How many seats would you like to purchase? ";
		cin >> numseats;
		totalSeat = numseats;
		while (numseats < 0)
		{
			cout << "No less than 0, please re-enter: ";
			cin >> numseats;
		}
		while (numseats != 0)
		{
			cout << "Please select the row (1-15): ";
			cin >> row;
			while (row <= 0 || row > 15)
			{
				cout << "If you can find the row with negative or 0, I will sell you." << endl;
				cout << "Please re-enter the row (1-15): ";
				cin >> row;
			}
			row--;
			cout << "Please select the seat (1-30): ";
			cin >> seat;
			while (seat <= 0 || seat > 30)
			{
				cout << "If you can find the seat with negative or 0, I will sell you." << endl;
				cout << "Please re-enter the seat (1-30): ";
				cin >> seat;
			}
			seat--;
			if (seats[row][seat] == 'X')
				cout << "The seat has been sold. Please choose again" << endl << endl;
			else   // if seat available
			{
				seatStore[myRow++] = row;
				seatStore[myRow++] = seat;
				cost = rowprice[row];
				cout << fixed << showpoint << setprecision(2) << endl;
				cout << "Ticket costs: $ " << cost << endl << endl;
				total += cost;
				numseats--;
				seats[row][seat] = 'X';
			}
		}
		cout << "--------Purchase confirmation--------" << endl;
		cout << "Total number of tickets purchased: " << totalSeat << endl;
		cout << "Total cost of seats: $ " << total << endl;
		cout << "Enter (Y/y) for yes: ";
		cin >> confirm;
		if (confirm == 'Y' || confirm == 'y')
			cout << "Thank you for your purchase!!!\a" << endl;
		else
		{
			// undo: make the selected seat back to 'O'
			for (int i = 0; i < myRow; i += 2)
			{
				for (int j = 1; j < myRow; j += 2)
					seats[seatStore[i]][seatStore[j]] = 'O';
			}
		}
	} while (confirm != 'Y' && confirm != 'y');
}

// display the 2D array of seat chart
// X for sold, O for available
void seatingChart(char chart[][COL])
{

	cout << "                                                Seats" << endl;
	cout << "         1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30" << endl;

	for (int i = 0; i < ROW; i++)
	{
		cout << "Row " << left << setw(2) << i + 1 << "  ";
		for (int x = 0; x < COL; x++)
		{
			cout << " " << chart[i][x] << " ";
		}
		cout << endl;
	}
}

// calculate the total income of seats sold
// and information about seat status
void salesReport(char chart[][COL], double price[])
{
	double total[ROW];
	double ftotal = 0;
	int soldseat = 0;
	int rowsold = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int x = 0; x < COL; x++)
		{
			if (chart[i][x] == 'X')
			{
				rowsold++;
				soldseat++;
			}
		}
		total[i] = rowsold * price[i];
		rowsold = 0;
	}

	for (int y = 0; y < ROW; y++)
		ftotal += total[y];
	cout << "The current sold seat amount : " << soldseat << endl;
	cout << "The seats still available : " << 450 - soldseat << endl;
	cout << "The total income by sold seat : $ " << ftotal << endl;
}

// this program will be call when exit option is selected
// it will write the seat chart 2D array to the output txt file (SeatAvailibility.txt)
void exit(char arr[][COL])
{
	ofstream outputFile;
	outputFile.open("SeatAvailability.txt");
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			outputFile << arr[i][j];
		}
		outputFile << endl;
	}
	outputFile.close();
}

// this function initialize the seat chart array to all "O"
void seatReset(char seat[][COL])
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
			seat[row][col] = 'O';
	}
}

// this function ask user to enter the import file for seat price
// can also enter seat price by hand
void getSeatPrice(double seatPrice[])
{
	ifstream seatPriceFile;
	char user;
	string fileName;

	cout << "Do you want to import file instead of enter the seat price for each row? (Y/N): ";
	cin >> user;
	while (user != 'Y' && user != 'y' && user != 'N' && user != 'n')
	{
		cout << "Please enter Y/N: ";
		cin >> user;
	}
	cin.ignore();
	if (user == 'Y' || user == 'y')
	{
		do
		{
			cout << "What is the file's name? (???.txt): ";
			getline(cin, fileName);
			seatPriceFile.open(fileName);
			if (seatPriceFile)
			{
				for (int i = 0; i < ROW; i++)
				{
					seatPriceFile >> seatPrice[i];
				}
			}
			else
				cout << "File not found. Please re-enter." << endl;
		} while (!seatPriceFile);
	}
	else if (user == 'N' || user == 'n')
	{
		cout << "Please enter the seat price by manual" << endl;
		for (int i = 0; i < ROW; i++)
		{
			cout << "Price for row number " << i + 1 << " : ";
			cin >> seatPrice[i];
		}
	}
}

// this function load the seat chart file
// if error, return false to shut down program
bool loadSeatChart(char seat[][COL])
{
	ifstream seatChartFile;
	string seatFile = "SeatAvailability.txt";
	char newSeat;
	

	cout << "Do you want to start a new seating chart? (Y/N)" << endl;
	cout << "(If no, it will read the \"SeatAvailability.txt\" file): ";
	cin >> newSeat;
	while (newSeat != 'N' && newSeat != 'n' && newSeat != 'Y' && newSeat != 'y')
	{
		cout << "Please enter Y/N: ";
		cin >> newSeat;
	}
	if (newSeat == 'n' || newSeat == 'N')
	{
		seatChartFile.open(seatFile);
		if (seatChartFile)
		{
			for (int row = 0; row < ROW; row++)
			{
				for (int col = 0; col < COL; col++)
					seatChartFile >> seat[row][col];
			}
		}
		else
		{
			cout << "Error with opening the file." << endl;
			return 1;
		}
	}
	return 0;
}