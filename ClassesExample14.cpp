/*
	Filename: ClassesExample14.cpp
	Author: J. Hayes
	Date: Dec. 3, 2019
	Purpose: To demonstrate the existence of the "this" pointer (sometimes called the hidden argument).
			We will use "this" pointer to refer to object members in this program.
*/

#include <iostream>
using namespace std;

// Class Test
class Test
{
private:
	int x;
public:
	Test(int = 0);	// Constructor
	void print() const;
};

Test::Test(int value)
{
	x = value;
}	// end constructor

void Test::print() const
{
	cout << "   x = " << x;


	// Explicitly using the this pointer and the arrow operator to access x
	cout << "\n     this->x = " << this->x;

	// Explicitly using the dereferenced this pointer and the dot operator to access x
	cout << "\n   (*this).x = " << (*this).x << endl;
}	// end print()

int main()
{

	Test testObj(12);		// Instantiate and intialize testObj

	testObj.print();

	return 0;
}	// end main()
