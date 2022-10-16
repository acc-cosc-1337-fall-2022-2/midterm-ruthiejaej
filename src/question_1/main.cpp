
#include <iostream>
#include "question1.h"


using namespace std;
using std::cin;
using std::cout;

int main() 
{
	int do_selection; int grade; string GPA;
	cout << "\nWhat would you like to do\n\n1-Letter GPA using if\n2-Exit\n";
	cin >> do_selection;

	switch (do_selection)

		case 1:
			cout << "What was your GPA from 0 to 4? ";
			cin >> grade;
			GPA = gpa_to_letter_grade(grade);
			cout << "Your GPA letter grade: " << GPA;
			std::cout << "Restart? (y/n) ";
 			std::cin >> do_selection;
			return 0;
	}