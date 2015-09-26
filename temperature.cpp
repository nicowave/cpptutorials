// temperature.cpp
// nicolas roldos
// 9.25.2015
// C++ book: Liberty, Cadenhead


// "A variable created in a function is called a local variable because it exists only
//  locally within the function itself.
// When a program returns, all of its local varaiables are no longer available for use in 
//  the program



#include <iostream> 
using namespace std;

// prototype 'declaration' for function
float convert(float);

int main () {

	float fahrenheit;
	float celsius;

	cout << "Please enter the temperature in Fahrenheit:\t";
	cin >> fahrenheit;
	celsius = convert(fahrenheit);
	cout << "\nHere is the temperature in Celsisus:\t";
	cout << celsius << " degrees Celsius\n";

	return 0;
}

// write a function 'defintion' called 'convert()' to convert Fahrenheit to Celsius
// in declaration use equation: find equation online or use one provided in book...
// convert()'s return type is float, parameter is a Fahrenheit temp (float)

float convert(float fahrenheit) {

	float celsius;
	celsius = ((fahrenheit - 32) * 5) / 9;
	return celsius;

}

/*Console output: 
nicowavemountain:cpp nico$ g++ -o temperature temperature.cpp
nicowavemountain:cpp nico$ ./temperature
Please enter the temperature in Fahrenheit:	108

Here is the temperature in Celsisus:	42.2222 degrees Celsius*/











