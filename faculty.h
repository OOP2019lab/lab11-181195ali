#include <iostream>
#include <string>
#include "person.h"
using namespace std;
#pragma once

class Faculty : private Person
{
	int course_count;
	int ext_num;
public:
	Faculty(string,string,int,int,int);
	~Faculty();
	int getCCount();
	void setCCount(int);
	int getExtnum();
	void setExtnum(int);
	void printFaculty();
};