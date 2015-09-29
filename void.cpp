// void.cpp
// nicolas roldos
// 9.28.2015
// C++ book: Liberty, Cadenhead


//Functions with no type. The use of void:
// The syntax shown above for functions:
//			type name ( argument1, argument2 ...) { statements }

#include <iostream>
using namespace std;

void printmessage () {
	// notice the lack of a return statement at the end of this function
  cout << "This is a void function!\n\n";

}

int main () {
  printmessage ();
  return 0;
}