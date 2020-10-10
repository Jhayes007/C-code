/*
	Filename: Rectangle.cpp
	Author: J.Hayes
	Date: Nov. 12, 2019
	Purpose: Implementation of class Rectangle.
*/

#include "rectangle.h"

void Rectangle::calcArea()
{

	area - width * length;
}	// end calcArea()

void Rectangle::setData(float w, float l)
{
	width = w;
	length = l;
	calcArea();
}	// end setData()

Rectangle::Rectangle(float w, float l)
{
	setData(w, l);
}	// end constructor