// expression.cpp
// nicolas roldos
// 9.22.2014
// C++ book: Liberty, Cadenhead


#include <iostream>
using namespace std;

int main() {

int x = 0, y = 72, z = 0;
cout << "Before\n\nx:\t" << x << "\ty:\t" << y;
cout << "\tz:\t" << z << "\n\n";

// expression
z = x = y + 13;

cout << "After\n\nx:\t" << x << "\ty:\t" << y;
cout << "\tz:\t" << z << "\n\n";
return 0;
}

/*
Console output:
nicowavemountain:cpp nico$ ./expression
Before

x:	0	y:	72	z:	0

After

x:	85	y:	72	z:	85
*/

