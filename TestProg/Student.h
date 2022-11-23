#pragma once
#include "Person.h"



class Student :public Person
{
	/*
	Неявно отримаємо все від  Person
	string name;
	string phone;
public:
	Person();
	Person(const char* nm, const char* phn );/////"Name"

	void Print();
	void Set();/// не доступний, він заміщається
	*/

	int stud_number;
	double mark;

public:
	Student();
	Student(const char* nm, const char* phn, int numbr, double mark);

	void Print();////перевизначення
	void Set(int nmbr, double mrk);////заміщення
	void Set();///перевизначення
	


};


void Func(); 