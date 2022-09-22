/* How dynamic objects are created and destroyed using new and delete operators. Write a C++
program to demonstrate. */

#include<iostream>
using namespace std;

class Test
{
	int a, b;
	public:
	
		// Constructor to initialize
		// data members of class
		Test()
		{
			cout << "Constructor is called" <<
					endl;
			a = 1;
			b = 2;
		};
	
		// Destructor
		~Test()
		{
			cout << "Destructor is called" <<
					endl;
		}
	
		// Function to print values
		// of data members
		void show()
		{
			cout << "a = " <<
					a << endl;
			cout << "b = " <<
					b << endl;
		}
};

int main()
{
	// pointer to object
	Test *ptr;		
	
	// dynamic object creation
	ptr = new Test;
	
	// Accessing member through
	// pointer to object
	ptr->show();	
	
	// Destroying object dynamically
	delete ptr;	
	return 0;
}


