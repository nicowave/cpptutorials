// sizer.cpp

#include <iostream>
using namespace std;


int main () {
	// this series of output will use the sizeof() function to list the sizes
	//  of various data types used in C++
	cout << "The size of an integer:\t\t\t";
	cout << sizeof(int) << " bytes\n";
	cout << "The size of a short integer:\t\t";
	cout <<	sizeof(short) << " bytes\n";
	cout << "The size of a long integer:\t\t";
	cout << sizeof(long) << " bytes\n";
	cout << "The size of a char:\t\t\t";
	cout << sizeof(char) << " bytes\n";
	cout << "The size of an bool:\t\t\t";
	cout << sizeof(bool) << " bytes\n";
	cout << "The size of a float:\t\t\t";
	cout << sizeof(float) << " bytes\n";
	cout << "The size of a double:\t\t\t";
	cout << sizeof(double) << " bytes\n";
	cout << "The size of a float:\t\t\t";
	cout << sizeof(double) << " bytes\n";	
	cout << "The size of a long long int:\t\t";
	cout << sizeof(long long int) << " bytes\n";	

	return 0;

}

/*nicowavemountain:cpp nico$ g++ -o sizer sizer.cpp
nicowavemountain:cpp nico$ ./sizer
The size of an integer:			4 bytes
The size of a short integer:		2 bytes
The size of a long integer:		8 bytes
The size of a char:			1 bytes
The size of an bool:			1 bytes
The size of a float:			4 bytes
The size of a double:			8 bytes
The size of a float:			8 bytes
The size of a long long int:		8 bytes*/