#include "Person.h"

Person::Person()
{
	name = "Unknown";
	phone= "Unknown";
}

Person::Person(const char* nm, const char* phn)
{
	name = nm;
	phone = phn;

}

void Person::Print()
{
	cout << "Name: " << name<<endl;
	cout << "Phone: " << phone << endl;
}

void Person::Set()
{
	name = "Unknown";
	phone = "Unknown";
}
