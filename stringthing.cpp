// c++
// stringthing.cpp
// nicolas roldos
// Strings in c++: C++ Liberty Cadenhead

#include <iostream>
#include <string>
using namespace std;

int main () {
	// endl will print new-line at the end of the string
	string mystring;
	mystring = "This is the initial string content";
	cout << mystring << endl;


	mystring = "This is a DIFFERENT string content";
	cout << mystring << endl;
	return 0;
	
}

/* there are many ways to declare a string
c-like initialization:
string mystring = "This is a string";

constructor type initialization:
string mystring ("This is a string");

uniform initialization:
string mystring {"This is a string"}; 
*/