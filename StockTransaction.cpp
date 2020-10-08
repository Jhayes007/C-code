/*
	Filename: StockTransaction.cpp
	Author: J. Hayes
	Date: Sep. 5, 2019
	Purpose: This is the solution to Programming Challenge 23 @
		the end of chapter 3 in the text.
		In this problem Joe buys stock of a company and sells them.
		We need to calculate the amount of stocks were bought for, the
		commission paid, amount sold for, the commission paid, and the 
		profit.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	// Constants
	const int SHARESBOUGHT = 1000;
	const int SHARESSOLD = 1000;
	const double COMMISSIONRATE = 0.02;
	const double BUYPERSHARE = 45.50;
	const double SELLPERSHARE = 56.90;
	// Variables
	double buyingPrice; // To hold buying price
	double buyingComission; // To hold buying commission
	double sellingPrice; // To hold selling price
	double sellingCommission; // To hold selling commission
	double profit; // To hold the profit (if any)

	// Calculate the amount paid for buying the stock
	buyingPrice = BUYPERSHARE * SHARESBOUGHT;
	// Calculate the commission paid for buying the stock
	buyingComission = buyingPrice * COMMISSIONRATE;
	// Calculate the amount paid for selling the stock
	sellingPrice = SELLPERSHARE * SHARESSOLD;
	// Calculate the commission paid for selling the stock
	sellingCommission = sellingPrice * COMMISSIONRATE;
	// Calculate the profit after commission and purchase price
	profit = sellingPrice - buyingPrice - buyingComission -
		sellingCommission; 

	cout << setprecision(2) << fixed << showpoint;
	cout << "\nPurchase Price:       $ " << setw(8) << buyingPrice
		<< "\nPurchase Commission    $ " << setw(8) << buyingComission
		<< "\nSale Price:            $ " << setw(8) << sellingPrice
		<< "\nSale Commission        $ " << setw(8) << sellingCommission
		<< "\nProfit                 $ " << setw(8) << profit
		<< endl << endl;


}	// end main()

