/*
	Filename: ClassesExample4.cpp
	Author: J.Hayes
	Date: Nov. 12, 2019
	Purpose: To demonstrate the use of classes.
*/

#include <iostream>
#include "rectangle.h"
using namespace std;

int main()
{
	Rectangle box(0,0);
	float wide, boxlong;

	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the width? ";
	cin >> wide;
	cout << "What is the length? ";
	cin >> boxlong;

		box.setData(wide, boxlong);

		cout << "\n\n Here is the rectangle's data.\n";
		cout << "Width: " << box.getWidth() << endl;
		cout << "Length: " << box.getLength() << endl;
		cout << "Area: " << box.getArea() << endl;



}	// end main