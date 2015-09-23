// rectangle.cpp
// nicolas roldos
// 9.22.2015
// C++ book: Liberty, Cadenhead

#include <iostream>

int main() {
	//set up length and width
	unsigned short width = 5, length;
	length = 10;

	// create an unsigned short initialized with the reuslt of multiplying
	//  width by length
	unsigned short area = width * length;

	std::cout << "Width:\t" << width << "\n";
	std::cout << "Length:\t" << length << "\n";
	std::cout << "Area:\t" << area << "\n";
	return 0;
}

/*Console output:
$ nicowavemountain:cpp nico$ g++ -o rectangle rectangle.cpp
$ nicowavemountain:cpp nico$ ./rectangle
Width:	5
Length:	10
Area:	50
*/