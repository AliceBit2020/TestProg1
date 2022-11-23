#include "Student.h"

Student::Student():Person()
{
	stud_number = 0;
	mark = 0;
}

Student::Student(const char* nm, const char* phn, int numbr, double mark):Person(nm,phn)
{
	///Person::name = nm;
	stud_number = numbr;
	this->mark = mark;

	///mark = mark;
}

void Student::Print()
{
	Person::Print();
	cout << "Student number: " << stud_number << endl;
	cout << "Average mark: " << mark << endl;
}

void Student::Set(int nmbr, double mrk)
{
	stud_number = nmbr;
	mark = mrk;
}

void Student::Set()
{
	Person::Set();
	stud_number = 0;
	mark = 0;
}
void Func()
{
	cout << " Student Func" << endl;
}

