#pragma once
#include "Person.h"



class Student :public Person
{
	/*
	������ �������� ��� ��  Person
	string name;
	string phone;
public:
	Person();
	Person(const char* nm, const char* phn );/////"Name"

	void Print();
	void Set();/// �� ���������, �� ���������
	*/

	int stud_number;
	double mark;

public:
	Student();
	Student(const char* nm, const char* phn, int numbr, double mark);

	void Print();////��������������
	void Set(int nmbr, double mrk);////��������
	void Set();///��������������
	


};


void Func(); 