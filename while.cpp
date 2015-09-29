// custom countdown
// while.cpp
// nicolas roldos
// 9.28.2015
// C++ book: Liberty, Cadenhead

// while-loop: It behaves like a while-loop, 
//  except that condition is evaluated after the execution of statement instead of 
//  before, guaranteeing at least one execution of statement

#include <iostream>
#include <string>


using namespace std;

int main () {

	// inistialize string variable 'str'
	string str;

	// create do loop while 'str' != "goodbye"
	do {
		cout << "Enter text:\t";
		getline (cin, str);
		cout << "You entered:\t" << str << "\n";

	}	while (str != "goodbye");
}

/* console output: nicowavemountain:cpp nico$ g++ -o while while.cpp
nicowavemountain:cpp nico$ ./while
Enter text:	hello
You entered:	hello
Enter text:	goodbye           
You entered:	goodbye*/
