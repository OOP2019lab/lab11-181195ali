#include "person.h"

Person :: Person(string fname,string lname,int age)
{
	first_name = fname;
	last_name = lname;
	this->age = age;
	cout<<"Person() called"<<endl;
}
Person :: ~Person()
{
	cout<<"~Person() called"<<endl;
}
string Person :: getFname()
{
	return first_name;
}
void Person :: setFname(string f)
{
	first_name = f;
}
string Person :: getLname()
{
	return last_name;
}
void Person :: setLname(string l)
{
	last_name = l;
}
int Person :: getAge()
{
	return age;
}
void Person :: setAge(int a)
{
	if(a>0)
		age = a;
}
void Person :: printInformation()
{
	cout<<first_name<<" "<<last_name<<" is "<<age<<" years old"<<endl;
}