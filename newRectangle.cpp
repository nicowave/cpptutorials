// newRectangle.cpp
// nicolas roldos
// 9.22.2015
// C++ book: Liberty Cadenhead

#include <iostream>
using namespace std;

int main () {
// create a type definition using 'typedef' keyword
typedef unsigned short USHORT;

// setup width and length for the rectangle
// instead of using 'unsigned short' to describe the type...
//  use 'USHORT' typedef 
USHORT width = 5;
USHORT length = 10;

// create an unsigned short initialized with the result of multiplying
//  length by width...
USHORT area = width * length;

cout << "Width:\t" << width << "\n";
cout << "Length:\t" << length << "\n";
cout << "Area:\t" << area << "\n";

return 0;
}

