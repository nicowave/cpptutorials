// countdown using a 'for' loop
// forloop.cpp
// nicolas roldos
// 9.28.2015

// The for loop is designed to iterate a number of times. Its syntax is:
// 		for (initialization; condition; increase) statement;
// Like the while-loop, this loop repeats statement while condition is true. 
// But, in addition, the for loop provides specific locations to contain an 
//  initialization and an increase expression, executed before the loop begins
//  the first time


#include <iostream>
using namespace std;

int main() {
	
	// The three fields in a for-loop are optional.
	// They can be left empty, but in all cases the semicolon signs between them 
	//  are required.
	for (int n = 10; n>0; n--) {

		// prints out the current value of int 'n'
		cout << n << ", ";
	}

	cout << "liftoff!\n";
}
