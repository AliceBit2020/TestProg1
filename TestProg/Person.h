#pragma once
#include<iostream>

using namespace std;



class Person {
protected:
	string name;
	string phone;
public:
	
	Person(const char* nm, const char* phn );/////"Name"
	Person();
	void Print();
	void Set();

};


//void Func() {
//	cout << "Person Func" << endl;
//
//}
