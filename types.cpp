// types.cpp
// 9.19.2015
// nicolas roldos
// C++ book: Liberty, Cadenhead
// c++ tutorial on literals, integer numerals, floating point numerals,
//  character literals, string literals

#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';


int main ()	{
	// radius for circle
	double r = 5.0;
	double circle;

	circle = 2 * pi * r;
	cout << circle;
	cout << newline;
}
