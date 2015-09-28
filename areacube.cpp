// areacube.cpp
// nicolas roldos
// 9.25.2015
// C++ book: Liberty, Cadenhead

#include <iostream>
using namespace std;

// 'findArea()' prototype
// set default parameters for 'findArea()' function i.e. width of 20, height of 12 
int findArea(int length, int width = 20, int height = 12);


int main() {

		// initalize 'length' 'width' 'height' with values
		int length = 100;
		int width = 50;
		int height = 2;

		// initialize empty area variable as 'int'
		int area;

		area = findArea(length, width, height);
		cout << "First area:\t" << area << "\n\n";

		area = findArea(length, width);
		cout << "Second area is:\t" << area << "\n\n";

		area = findArea(length);
		cout << "Third area is:\t" << area << "\n\n";

		return 0;
}


int findArea(int length, int width, int height) {

	return (length * width * height);
}


/*Console output:
nicowavemountain:cpp nico$ g++ -o areacube areacube.cpp
nicowavemountain:cpp nico$ ./areacube
First area:	10000

Second area is:	60000

Third area is:	24000*/





