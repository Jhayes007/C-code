/*
	filename: BasicFileProcessing.cpp
	Author: J. Hayes
	Date: Sep, 26, 2019
	Purpose: To demonstrate how to write to and how to read from a sequential access
			test file in C++.

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// Writing to a file
	// 1. Create a file object of type of stream
	ofstream outFile;
	// 2. Open the file
	outFile.open("demo.txt");

	// Declare variables
	string name1, name2, name3, name4;
	cout << "Now writing to the file ...\n";
	// 3. Write to the file (Processing)
	outFile << "George Washington\n";
	outFile << "John Adams\n";
	outFile << "Abraham Lincoln\n";
	outFile << "Albert Einstein\n";

	// 4. Close the file
	outFile.close();
	cout << "Done writing to the file\n\n\n";


	// Reading from the file
	// 1. Open a file object of type ifstream
	ifstream inFile;
	// 2. Open the file
	inFile.open("demo.txt");
	// 3. Read from the file
	cout << "Now reading from the same file.\n";
	inFile >> name1;
	cout << name1 << endl;
	inFile >> name2;
	cout << name2 << endl;
	inFile >> name3;
	cout << name3 << endl;
	// 4. Close the file
	inFile.close();
	cout << "Done reading from the file\n\n";


}	// End main()