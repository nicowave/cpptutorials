// newgrader.cpp
// nicolas roldos
// 9.22.2014
// C++ book: Liberty, Cadenhead

#include <iostream>
using namespace std;

int main ()
{
		int grade;

		cout << "Enter a grade (1 - 100):\t";
		std::cin >> grade;

		if (grade >= 70) 
		{
			if (grade >= 90)
			{
					cout << "\nPass with an A grade\n";
					return 0;
			}
			if (grade >= 80)
			{
					cout << "\nPass with a B grade\n";
					return 0;
			}
			cout << "\nPass with a C grade\n";
		}
		else 
			cout << "Fail, try again next time...\n\n";
				
		return 0;
}