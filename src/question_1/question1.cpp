#include "question1.h"
#include <iostream>
using std::cin;
using std::cout;
using std::string;
bool test_config()
{
    return true;
}
string gpa_to_letter_grade(int grade)
{
    string gpa;

    if (grade <= 4 && grade > 3.5)
    gpa = "A";

    else if (grade <= 3.49 && grade >= 3)
    gpa = "B";

    else if (grade <= 2.99 && grade >= 2)
    gpa = "C";

    else if (grade <= 1.99 && grade >= 1)
    gpa = "D";

     else if (grade <= .99 && grade >= 0)
    gpa = "f";
    
    else
    gpa = "Error, not a valid GPA.";

return gpa;

}


