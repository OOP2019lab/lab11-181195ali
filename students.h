#include <iostream>
#include <string>
#include "person.h"
using namespace std;
#pragma once

class Student : private Person
{
	string fyp_name;
	float cgpa;
public:
	Student(string,string,int,float);
	~Student();
	string getFYP();
	void setFYP(string fyp);
	float getCgpa();
	void setCgpa(float gpa);
	void printStudent();
};