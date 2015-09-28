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


/*Console output:
nicowavemountain:cpp nico$ g++ -o thirteens thirteens.cpp
nicowavemountain:cpp nico$ ./thirteens
13	26	39	52	65	78	91	104	117	130	14156	169	182	195	
208	221	234	247	260	273	28299	312	325	338	351	364	377	390	
403	416	42442	455	468	481	494	*/