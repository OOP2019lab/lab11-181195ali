#include "faculty.h"

Faculty :: Faculty(string fname,string lname,int age,int cc, int ext):Person(fname,lname,age)
{
	course_count = cc;
	ext_num = ext;
	cout<<"Faculty() called"<<endl;
}
Faculty :: ~Faculty()
{
	cout<<"~Faculty() called"<<endl;
}
int Faculty :: getCCount()
{
	return course_count;
}
void Faculty :: setCCount(int c)
{
	course_count = c;
}
int Faculty :: getExtnum()
{
	return ext_num;
}
void Faculty :: setExtnum(int e)
{
	if(e>99 && e<=999)
		ext_num = e;
}
void Faculty::printFaculty()
{
	cout<<"Faculty member name: "<<getFname()<<" "<<getLname()<<", Age: "<<getAge<<", Number of courses: "<<getCCount()<<", Ext. "<<getExtnum()<<endl;
}