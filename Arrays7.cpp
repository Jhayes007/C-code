/*
	Filename: Arrays7.cpp
	Author : J.Hayes
	Date : October 10, 2019
	Purpose : To demonstrate the use of two dimensional arrays.
	*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declare a 2-D array with 3 rows and 4 columns
	float sales[3][4];
	float totalSales = 0;	// Accumulator to hold total sales
	int div, qtr;

	cout << "This program will calculate the total sales of all the company's divisions.\n";
	cout << "Enter the following sales information:\n\n";

	// Nested loops to fill the array with quarterly sales figures for each division.
	for (div = 0; div < 3; div++)	// Loop for the row dimension (divisions)
	{

		for (qtr = 0; qtr < 4; qtr++)	// Loop for the column dimension (quarters)
		{
			cout << "Divsion " << (div + 1);
			cout << ", Quarter " << (qtr + 1) << ": $";
			cin >> sales[div][qtr];
		}	// end inner loop
	}	// end outer loop

	// Nested loops to add all the elements of the array
	for (div = 0; div < 3; div++)
		for (qtr = 0; qtr < 4; qtr++)
			totalSales += sales[div][qtr];

	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "The total sales for the company are: $" << totalSales << endl;

	// Date: OCt. 15, 2019
	// Two 1-D arrays to store the totals of rows and columns
	const int ROWS = 3, COLS = 4;
	float rowTotals[ROWS] = { 0 }, colTotals[COLS] = { 0 };
	// Using 2 nested for loops to do the row and column sums
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
		{
			rowTotals[i] += sales[i][j];	// Sums of rows
			colTotals[j] += sales[i][j];	// Sums of columns
		}
	// Display the row and column totals
	cout << "\nDivision totals: ";
	for (int r : rowTotals)
		cout << setw(7) << r;
	cout << endl << endl;
	cout << "\nQuarter totals: \n";
	for (int c : colTotals)
		cout << setw(7) << c;
	cout << endl << endl;

}	// end main()