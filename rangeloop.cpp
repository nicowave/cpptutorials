// rangeloop.cpp
// nicolas roldos
// 9.28.2015
// C++ book: Liberty, Cadenhead

// Range-based for loop
// The for-loop has another syntax, which is used exclusively with ranges:
//		for 	( declaration : range ) 	statement;		


// This kind of for loop iterates over all the elements in range


#include <iostream>
#include <string>

using namespace std;


	int main() {
		// the string 'hellostring' is initialized with the string "Hello!"
		string hellostring = "Hello!";

		// in this 'for' loop the elements in the for loop are iterating over
		//  all of the characters in the "Hello!" string.
		// The code in the loop places an open square bracket before the character
		//  in "Hello!" string and a closing-square bracket after the character
		//  that is printed and in iteration at the moment.
		
		for (char c : hellostring) {

			cout << "[" << c << "]";
		}

	cout << "\n";
	return 0;
}

/*console output:
1 warning and 1 error generated.
NOTE: g++ assumes you are running the standard C++ version 3...
 you need to swith it to version 11 for the 'fro-range-loop' syntax to compile
 use '-std=c++11' before making a name for the object file in the 'g++' command

nicowavemountain:cpp nico$ g++ -std=c++11 -o rangeloop rangeloop.cpp
nicowavemountain:cpp nico$ ./rangeloop
[H][e][l][l][o][!]
[H][e][l][l][o][!]
*/




