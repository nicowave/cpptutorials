// customcountdown.cpp
// nicolas roldos
// 9.28.2015
// C++ book: Liberty, Cadenhead

// custom coundown using while
#include <iostream>
using namespace std;


int main () {
	
	// initialize n to have an initial value of 10
	// so that it will countdown from 10 to 0
	int n = 10;

	// while loop that keeps running until numbers have count down to 0
	while (n>0) {

		// prints value for n and decrease the value of n by -1
		cout << n << ", ";
		--n;
	}
	// prints liftoff once 'n' has reached 0
	cout << "liftoff!\n";
}



/*
'console output: 
nicowavemountain:cpp nico$ g++ -o customcountdown customcountdown.cpp
nicowavemountain:cpp nico$ ./customcountdown
10, 9, 8, 7, 6, 5, 4, 3, 2, 1, liftoff!
*/
