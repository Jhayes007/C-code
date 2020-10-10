/*
	Filename: EnumExample1.cpp
	Author: J. Hayes
	Date: Nov. 7, 2019
	Purpose: To demonstrate how to create and use enumerations in C/C++. Also how to pass enums to and return enums from functions
*/

#include <iostream>
using namespace std;

// Enumeration 
enum color { red, green, blue, yellow};	// Defintion of the enum color
// This enum can take 4 values: red = 0, green = 1, blue = 2, and yellow = 3.

// Function prototypes
void writeColor(color);	// passing an enum to a function as an argument
color readColor();	// returning an enum from a function

// The main function
int main()
{

	color eyeColor, hairColor;	// enum variables

	cout << "Reading eye color: " << endl;
	eyeColor = readColor();
	cout << endl << "Reading hair color: " << endl;
	hairColor = readColor();

	cout << endl << "Eye color = ";
	writeColor(eyeColor);
	cout << ", hair color = ";
	writeColor(hairColor);
	cout << endl;
}	// end main()

// The writeColor() function
void writeColor(color thisColor)
{
	// Display color value as a string
	switch (thisColor)
	{
	case red:
		cout << "Red";
		break;
	case green:
		cout << "Green";
		break;
	case blue:
		cout << "Blue";
		break;
	case yellow:
		cout << "Yellow";
		break;
	default:
		cout << "ERROR: Invalid color value." << endl;
		break;
	}	// end switch
}	// end writeColor()

color readColor()
{
	
	char colorChar; // local variable

	// Continue reading until data character entered is valid
	do
	{
		cout << "Enter the first letter of color (R, G, B, or Y): ";
		cin >> colorChar;
		colorChar = toupper(colorChar);
		// return color value if valid character is entered
		switch (colorChar)
		{
		case 'R': return red;
		case 'G': return green;
		case 'B': return blue;
		case 'Y': return yellow;
		default: cout << "Try again! " << endl;
			break;
		}	// end switch
	} while (true); // end do while
}	// end readColor()

