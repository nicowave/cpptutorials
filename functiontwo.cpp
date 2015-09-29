// functiontwo.cpp
// nicolas roldos
// 9.28.2015
// C++ book: Liberty, Cadenhead


#include <iostream>
using namespace std;



int subtraction (int a, int b) {
	 
	 int r;
	 r = a - b;
	 return r;
}


int main () {

	int x = 5, y = 3, z;

	z = subtraction(7, 2);
	cout << "The first result is\t" << z << "\n";	
	cout << "The second result is\t" << subtraction(7, 2) << "\n";
	cout << "The third result is\t" << subtraction(x, y) << "\n";

	z = 4 + subtraction (x, y);
	cout << "The fourth result is\t" << z << "\n";

	return 0;
}

/*Console Output: 
nicowavemountain:cpp nico$ g++ -o functiontwo functiontwo.cpp
nicowavemountain:cpp nico$ ./functiontwo
The first result is	5
The second result is	5
The third result is	2
The fourth result is	6
*/

