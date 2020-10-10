/*
	Filename: Time.cpp
	Author: J.Hayes
	Date: Nov. 21, 2019
	Purpose: To implement the class Time.
*/

#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

// Constructor
Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second);

}	// end constructor

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}	// end setTime()

// The 3 set member functions
void Time::setHour(int h)
{

	hour = (h >= 0 && h < 24) ? h : 0;	// Validate hour and set its value
}	// end setHour()

void Time::setMinute(int m)
{


	minute = (m >= 0 && m < 60) ? m : 0;	// Validate and set its value
}	// end setMinute()

void Time::setSecond(int s)
{

	second = (s >= 0 && s < 60) ? s : 0;	// Validate and set its value
}	// end setSecond()

// The 3 get member functions
// Nov. 26, 2019
int Time::getHour() const
{
	return hour;
}	// end getHour()

int Time::getMinute() const
{
	return minute;
}	// end getMinute()

int Time::getSecond() const
{
	return second;

}	// end getSecond()

// Print member functions
void Time::printStandard()
{
	cout << setfill('0') << setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12)
		<< ":" << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM") << endl;
}	// end printStandard() 

void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2)
		<< second << endl;
}	// end printUniversal()

