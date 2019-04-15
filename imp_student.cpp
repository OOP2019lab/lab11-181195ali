#include "students.h"

Student :: Student(string fname,string lname,int age,float cgpa):Person(fname,lname,age)
{
	this->cgpa = cgpa;
	cout<<"Student() called"<<endl;
}
Student :: ~Student()
{
	cout<<"~Student() called"<<endl;
}
string Student :: getFYP()
{
	return fyp_name;
}
void Student :: setFYP(string fyp)
{
	fyp_name = fyp;
}
float Student :: getCgpa()
{
	return cgpa;
}
void Student :: setCgpa(float gpa)
{
	if(gpa<4.0 && gpa>0.0)
		cgpa =gpa;
	else cout<<"Invalid CGPA"<<endl;
}
void Student :: printStudent()
{
	cout<<getFname()<<" "<<getLname()<<" is "<<getAge()<<" years old, his cgpa is "<<getCgpa()<<endl;
}