// years.cpp
// nicolas roldos
// 9.22.2014
// C++ book: Liberty, Cadenhead

#include <iostream>
using namespace std;

int main() {

	int year = 2010;

	cout << "\nIt is now " << year << ".\n\n";
	cout << "The year " << ++year << " passes.\n";
	cout << "The year " << ++year << " passes.\n";
	cout << "The year " << ++year << " passes.\n";

	cout << "\nIt is now " << year << ".\n\n";

	cout << "Have the Seattle Mariners won the World Series yet?\n";

	cout << "\n\nThe year " << year++ << " passes.\n";
	cout << "The year " << year++ << " passes.\n";
	cout << "The year " << year++ << " passes.\n";

	cout << "\nIt is now " << year << ".";
	cout << "\nSurely the Mariners have won the World Series by " << year << "!\n";	

	return 0;
}

/*Console Output:
$ nicowavemountain:cpp nico$ g++ -o years years.cpp
$ nicowavemountain:cpp nico$ ./years

It is now 2010.

The year 2011 passes.
The year 2012 passes.
The year 2013 passes.

It is now 2013.

Have the Seattle Mariners won the World Series yet?


The year 2014 passes.
The year 2015 passes.
The year 2016 passes.

It is now 2016.
Surely the Mariners have won the World Series by 2016!*/