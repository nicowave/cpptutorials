// area.cpp
// nicolas roldos
// 9.24.2015
// C++ book: Liberty, Cadenhead


#include <iostream>
using namespace std;
 

// define a function 'findArea()' that determines the area of a rectangle by multiplying
//  its length by its width
// create a function prototype that defines each parameter name and its type
 int findArea(int length, int width);

 int main() {
 	int length;
 	int width;
 	int area;

 	cout << "\nHow wide is your yard?\t"; 
 	cin >> width;
 	cout << "\nHow long is your yard?\t";
 	cin  >> length;

 	area = findArea(length, width);

 	cout << "\nYour yard is\t";
 	cout << area;
 	cout <<  " square feet\n\n";

 	return 0;
 	
 }

 // function definition
 int findArea(int l, int w) {
 	return l * w;

 }

 /* nicowavemountain:cpp nico$ g++ -o area area.cpp
nicowavemountain:cpp nico$ ./area

How wide is your yard?	11

How long is your yard?	11

Your yard is	121 square feet */