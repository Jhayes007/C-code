/*
	Filename: cpploops.cpp
	Author: J. Hayes
	Date: sep 17, 2019
	Purpose: To demonstrate the functioning of C/C++ loops. We will
		have examples of 1) conditional loops (both while and do-while) and 
		2) counter loop.
*/

#include <iostream>
using namespace std;

int main()
{

	double num;
	char again;

	// Get input
	cout << "This code uses the while loop.";
	cout << "\nIt uses a sentinel value to control the loop. \n";
	cout << "The sentinel value being used is -99. ";
	cout << "\n\nEnter a number: ";
	cin >> num;
	// The while loop
	while (num != -99)
	{

		cout << num << " cubed is " << pow(num, 3) << endl;
		cout << "\nEnter an integer, or -99 to quit: ";
		cin >> num;
	}	// end while

	// The do-while loop
	cout << "the following code uses the posttest do-while loop. ";
	cout << "\nIt uses the character loop variable, 'again'. ";

	do {
		cout << "\nEnter an integer: ";
		cin >> num;
		cout << num << " To the power of four is " << pow(num, 4.0) << endl;
		cout << "Do you want to find the 4th power of another number? (Y/N) ";
		cin >> again;
	} while (again == 'Y' || again == 'Y'); // end do-while
		cout << endl << endl;
	

	// Example of the counter loop (the for loop)
	// The loop control variable (in this case i) will be declared and
	// intialized in the loop. The scope of this variable is just the for loop.
	// It has the block scope.
	cout << "The following code uses a for loop that iterates 10 times.\n";
	for (int i = 0; i < 10; i++)
		cout << ++i << "squared = " << pow(i, 2.0) << endl;

	cout << "\n\nAll the loops just ended." << endl;




}	// end main()