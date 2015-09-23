// initialization of variables

#include <iostream>
using namespace std;

int main () 

{
	// initial value: 5
 	// c-like initialization:
	int a = 5;
	
 	// initial value: 3
	// constructor type initialization:
	int b (3);

	// initial value: 2
	// uniform initialization:
	int c {2};

	// initial value: undetermined
	int result;
	

	a = a + b;
	result = a - c;
	cout << result;
	cout << "\n\n";
	

	return 0;
}
