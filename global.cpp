// global.cpp
// nicolas roldos
// 9.25.2015
// C++ book: Liberty, Cadenhead

#include <iostream>
using namespace std;


// declare a function with a null or 'void' return type
void convert();


// use global variables for fahrenheit and celsius
// this way you will not need to pass them in as parameters for the function 'convert'
float fahrenheit;
float celsius;

// notice there is a bit less code called in the 'main()' function
// 'convert()' is called and not used within a statement to assign celsius
//  to the converted fahrenheit temperature value...
//  ...as in the preivious 'temperature.cpp' program
int main () {

	cout << "Please enter the temperature in Fahrenheit:\t";
	cin >> fahrenheit;
	convert();
	cout << "\nHere is the temperature in Celsisus:\t";
	cout << celsius << " degrees Celsius\n";

	return 0;

}

// now the 'convert()' function can be written simply as this (see below)
// no paramaters necessary to pass in since fahrenheit and celsius are global variables
//  for this program...

void convert() {
	celsius = ((fahrenheit - 32) * 5) / 9;
}


/*Console output:
nicowavemountain:cpp nico$ g++ -o global global.cpp
nicowavemountain:cpp nico$ ./global
Please enter the temperature in Fahrenheit:	104

Here is the temperature in Celsisus:	40 degrees Celsius
*/








