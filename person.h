#include <iostream>
#include <string>
using namespace std;
#pragma once

class Person
{
	string first_name;
	string last_name;

protected:
	int age;

public:
	Person(string,string,int);
	~Person();
	string getFname();
	void setFname(string);
	string getLname();
	void setLname(string);
	int getAge();
	void setAge(int);
	void printInformation();
};
