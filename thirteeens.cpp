// thirteens.cpp
// nicolas roldos
// 9.25.2015
// C++ book: Liberty, Cadenhead

#include <iostream>
using namespace std;



int main() {

	// to begin we set counter to 0
	int counter = 0;

	while (counter < 500) {
			// increment the value stored in the counter variable by 1
			counter++;
		
			// create conditional statement to see if value stored by counter is
			//  divisible by 13...
			if (counter % 13 == 0) {

				cout << counter << "\t";
			}
	}

	cout << "\n";
	return 0;
}