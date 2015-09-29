// functionexample.cpp
// nicolas roldos
// 9.28.2015
// C++ book: Liberty, Cadenhead

// function example
#include <iostream>
using namespace std;


// example of function that returns an 'int' and takes two 'int' parameters
int addition (int a, int b) {

	int r;
	r = a + b;
	return r;

}


int main () {

	// initialize integer 'z'
	int z;

	// store the return value of 'addition()' for params 5 and 3
	// print the result to the screen
	z = addition(5, 3);
	cout << "The result is\t" << z;
	cout << "\n\n";
	return 0;
}

/*Console Output:
nicowavemountain:cpp nico$ g++ -o functionexample functionexample.cpp
nicowavemountain:cpp nico$ ./functionexample
The result is	8
*/