// leapYear.cpp
// nicolas roldos
// 9.25.2015
// C++ book: Liberty, Cadenhead



#include <iostream>
using namespace std;


bool isLeapYear(int year);


int main() {
	// local variable 'input' is defined
	int input;

	// get user input using 'cout' to prompt the user for a year
	//  capture user input by using 'cin' and storing it in the input variable
	cout << "Enter a year:\t";
	cin >> input;

		// if and else statements to adjust for leap-year, checks if 'condition' is 'true'
		//  using 'isLeapYear()' function, passes in 'input' local variable as 'year' (int) 
		if (isLeapYear(input)) {
			cout << input << "\tis a leap-year\n";
		}
		else
		{
			cout << input << "\tis not a leap-year\n";
		}

	return 0;
}

// write a function 'isLeapYear()' that takes in an integer 'input'
//  and returns a boolean value (yes OR no, true OR false)
bool isLeapYear(int year) {

	// set-up if statement with condition that 'year' is divisible by '4', '100', '400'...
	// using the '%' modulo operator
	if (year % 4 == 0) 
	{
			if (year % 100 == 0) 
			{
					if (year % 400 == 0) 
					{
						// if 'year' is divisible by 4, 100 and 400 then,
						return true;
					} 
					else
					{
						// if 'year' is divisible by 4 and 100 but NOT 400 then...
						return false;
					}
			}
			else 
			{
				// if 'year' is divisible by 4 but NOT 100 then...
				return true;
			}
	}
	else 
	{
		// if year is NOT divisble by 4 then...
		return false;
	} 
	// end of if-else statements that determine if 'year' is a leap-year 
}


/*Console output: 
nicowavemountain:cpp nico$ g++ -o leapyear leapYear.cpp
nicowavemountain:cpp nico$ ./leapyear
Enter a year:	2011
2011	is not a leap-year
nicowavemountain:cpp nico$ ./leapyear
Enter a year:	2012
2012	is a leap-year*/



