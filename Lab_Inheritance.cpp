#include "faculty.h"
#include "person.h"
#include "students.h"
#pragma once

int main()
{
	Student S1("Ted","Thompson",22,3.91);
	Faculty F1("Richard","Karp",45,2,420);
	S1.printInformation();
	S1.printStudent();
	F1.printFaculty();
}
/*
Output of Exercise 5:

Person() called
Student() called
Person() called
Faculty() called
~Faculty() called
~Person() called
~Student() called
~Person() called
*/
/*
Faculty member name: Richard Karp, Age: 45, Number of courses: 2, Ext. 420
*/