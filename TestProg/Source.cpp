//////#include "Person.h"
//////#include "Student.h"
//////
//////
//////void main()
//////{
//////	Student obj("Oleg", "222322", 1, 12);
//////	///obj.Person::Print();////���� ���������� ���� ����������� � �������������� private, ��� public Print()----private Print()
//////
//////	Student obj1;
//////	obj.Set(2, 10);
//////	
//////
//////	obj.Person::Set();///������� ���������� �� ������, ��� ���� �� ���� ������������ �� �������������, ���� �������� ������������� � �����������, ��� ���������� ������� ����� ������������� � Student ����� void Set();
//////	obj.Print();
//////}
////// FinalMyString.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//////
////
////
////#include <iostream>
////#include <string>
////
////
////using namespace std;
////
////class String
////{
////	friend void move(String&, int);
////	friend std::ostream& operator<<(std::ostream& out, const String& p);
////	friend std::istream& operator>>(std::istream& out, String& p);
////
////private:
////	char* a /*= new char[80]()*/;
////	static int count;
////	int Mylength;
////
////public:
////
////	String()
////	{
////		a = new char[80]();
////		count++;
////		Mylength = 80;
////	}
////
////
////
////
////	String(string s)//////
////	{
////		Mylength = s.length();
////		////////////////////////////////��� ����� ������� ������ �� ������� ������� �������!!!!!!!!!!!!!!!
////		copy(s.begin(), s.end(), a);
////		count++;
////	}
////
////	String(int length)
////	{
////		Mylength = length;
////		a = new char[length]();
////		count++;
////	}
////
////
////
////	String(const initializer_list<char>& T)
////	{
////		Mylength = T.size();
////		a = new char[Mylength];
////		int i = 0;
////		for (auto& element : T)
////		{
////			a[i] = element;
////			++i;
////		}
////		count++;
////	}
////
////	String( char* initString)//////////const char* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
////	{
////		Mylength = sizeof initString;
////		a = new char[Mylength];
////		for (int i = 0; i < Mylength; i++)
////		{
////			a[i] = initString[i];
////		}
////		count++;
////	}
////
////	String(String&& str)
////	{
////		cout << "Move constructor" << endl;
////		///////����� ��� �� ������������� �������� a, ����� ������� delete [] a;
////		a = str.a;
////		Mylength = str.Mylength;
////		count++;
////
////		str.a = nullptr;
////		str.Mylength = 0;
////
////	}
////
////	~String()
////	{
////		cout << "was removed" << endl;
////		delete[] a;
////		count--;
////	}
////
////	bool operator += (char x)
////	{
////
////		char* b = new char[Mylength + 1]();
////		for (int i = 0; i < Mylength; i++)
////		{
////			b[i] = a[i];
////		}
////		b[Mylength] = x;
////		Mylength++;
////		/////////////////////////////////////////
////
////		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11
////		delete[] a;
////		a = b;
////		//////////////// � ���!!!!!!!!!!!!!!!!!!!!
////
////
////		a = new char[Mylength];
////
////		for (int i = 0; i < Mylength; i++)
////		{
////			a[i] = b[i];
////		}
////		delete[] b;
////		return true;
////	}
////
////
////	bool operator + (const char* str)////////////� ��� ����������
////	{
////		int lengthSubstring = sizeof str;
////
////		char* b = new char[Mylength + lengthSubstring]();
////		for (int i = 0; i < Mylength; i++)
////		{
////			b[i] = a[i];
////		}
////
////		for (int i = 0; i < lengthSubstring; i++)
////		{
////			b[Mylength + i] = str[i];
////		}
////
////		Mylength += lengthSubstring;
////		a = new char[Mylength];
////
////		for (int i = 0; i < Mylength; i++)
////		{
////			a[i] = b[i];
////		}
////		delete[] b;
////		return true;
////	}
////
////	bool operator == (const String& p)
////	{
////		if (p.Mylength != Mylength) return false;
////
////		for (int i = 0; i < Mylength; i++)
////		{
////			if (p.a[i] != a[i]) return false;
////
////		}
////		return true;
////	}
////
////
////	bool operator > (const String& p)////////// strcmp   ������� �� ������� ������
////	{
////		return p.Mylength > Mylength;
////	}
////
////	bool operator < (const String& p)
////	{
////		return p.Mylength < Mylength;
////	}
////
////	char  operator [] (int index)
////	{
////		return a[index];
////	}
////
////	static int quantity()
////	{
////		return count;
////	}
////
////	void Show()
////	{
////		//////////   cout<<a<<endl;    !!!!!!!!!!!!!!!!!!!!!
////		for (int i = 0; i < Mylength; i++)
////		{
////			cout << a[i];
////		}
////		cout << endl;
////	}
////
////	int CharacterSearch(char x)
////	{
////		for (int i = 0; i < Mylength; i++)
////			if (a[i] == x)
////				return i;
////		return  -1;
////	}
////
////	int length()
////	{
////		return  Mylength;
////	}
////
////	bool SubstringSearch(const char* str)
////	{
////		int lengthSubstring = sizeof str;
////		int j;
////		for (int i = 0; i < Mylength; i++)
////		{
////			if (a[i] == str[0])
////			{
////				for (j = 0; j < lengthSubstring; j++)
////				{
////					if (a[i + j] != str[j])
////					{
////						break;
////					}
////				}
////				if (j = lengthSubstring && a[i + j] != str[j])
////				{
////					return true;
////				}
////			}
////		}
////		return false;
////	}
////
////	void Enter()
////	{
////		string s;
////		cin >> s;
////		Mylength = s.length();
////		copy(s.begin(), s.end(), a);
////		cout << endl;
////	}
////};
////
////void move(String& Fp, int step)
////{
////	if (step < Fp.Mylength - 1)
////	{
////		for (int i = step; i < Fp.Mylength; i++)
////		{
////			cout << Fp.a[i];
////		}
////	}
////	else
////	{
////		cout << "���� �����i����� �i����� �� ������� �����";
////	}
////	cout << endl;
////}
////
////std::ostream& operator<<(std::ostream& out, const String& p)
////{
////	out << "MyString {������� ��i��} (" << p.Mylength << ", " << p.a << ")" << endl;
////	return out;
////}
////
////std::istream& operator>> (std::istream& in, String& p)
////{
////	string s;
////	cout << "����i�� ....." << endl;
////	cin >> s;
////	p.Mylength = s.length();
////	copy(s.begin(), s.end(), p.a);
////	cout << endl;
////	return in;
////}
////
////int String::count = 0; //�� ���� ������� ���������� ������
////
////int main()
////{
////	setlocale(LC_ALL, "");
////	std::cout << "Hello World!\n";
////	String d = String("test");
////	cin >> d;
////	d.Show();
////	//cout << "���� ��������. ����i�� �� ������" << endl;
////	//d.Enter();
////	//d.Show();
////	//cout << "�i���i��� ����i� " << String::quantity() << endl;
////
////	//cout << "all is right" << endl;
////
////	//cout << "���� ������������ �����i�����" << endl;
////
////	//String NewD(move(d));// ����������� �����������
////	//NewD.Show();
////
////	//cout << "���� ������� �����ii �� ��������������� ��������� ������" << endl;
////	//move(NewD, 2);// ������� ���������� �� ���������� ���� �� �������
////	//cout << NewD;// �������������� ��������� ������
////	//cin >> NewD;// �������������� ��������� �����
////	//NewD.Show();
////
////	//cout << "still is all right" << endl;
////
////
////	//cout << "Final Tests" << endl;
////
////	////�������� ������������ � ������ ���� MyString ������ ���� �������� ������ 
////	////char �������� ���� �������
////	//String str = { 'a','b','c' };
////	//str.Show();
////
////	////�����������, ������� ��������� const char*
////	//char* array = new char[4]{ 'a','b','c','d' };
////	//String strr = String(array);
////	//strr.Show();
////
////	//char* Subarray = new char[4]{ 'b','c' };
////	//bool s;
////	//s = strr.SubstringSearch(Subarray);
////
////	////���� ������������� ����������
////	//s = strr += 's';
////	//strr.Show();
////
////	//s = strr + array;
////	//strr.Show();
////
////	//s = str == strr;
////	//s = str > strr;
////	//s = str < strr;
////	//char res = str[1];
////
////	//cout << "still is all right" << endl;
////}
////
////
////// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
////// ������� ���������: F5 ��� ���� "�������" > "��������� �������"
////
////// ������ �� ������ ������ 
//////   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//////   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//////   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//////   4. � ���� "������ ������" ����� ������������� ������.
//////   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//////   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.
//
//
//
//#include <iostream>
//#include <iomanip>
//#include "Person.h"
//#include "Student.h"
//using namespace std;
//
//void print(double number, int prec);//////  
//void print(double number, double prec);
//void print(double number);
//
//
//
//int main()
//{
//
//
//
//   int number = 2.2;//// ������ ������� ������, �������� ������������   number=2
//
//   number << number;///  << �������� ���� ���� �� 
//   
// 
//
//   int cout=2;
//   cout << cout;////  << �������� ���� ���� ��   ��� ����� cout
//   std::cout << cout;
//
//  //  cout << number;
//
//
//
//
//  //  double d = 3.141592653589;
//
//
//  //  print(d, 2);
//  //  print(d, 2.2);///  void print(double number, double prec);
//
//
//
//
//  //  print(d);
//
//   // Func();
//
//
//
//
//}
//
//void print(double number, int prec)
//{
//    //Initial precision = 6
//    cout << "Double Int" << endl;
//    int default_prec = 6;
//    cout << setprecision(prec);
//    cout << number << endl;
//    cout << setprecision(default_prec);
//}
//
//void print(double number, double prec)
//{
//    cout << "Double Double" << endl;
//    int default_prec = 6;
//    cout << setprecision(prec);
//    cout << number << endl;
//    cout << setprecision(default_prec);
//}
//
//void print(double number)
//{
//    cout << number << endl;;
//}
//
///*�������� ��� ���� ���������� ������� �������� �������� fixed:
//cout << fixed;   ���� ���������� �� setprecision(prec)
// ��������� �� ���������� ������ ����� �������, ����� ����� ���������� ����
//� ��� ����� � ���� ����� ����� */
//
///*���� ���������� ������� ������� � ���, ����� ��������� �������
// ������� ����� ������, ��-������� �����������
//��� ��������� � ��� � ������� ������������ �����������
//
//������������� ������������� ������� ��� ������ ����������� �� �� ����������.
// ������������� ������� ������ ����� ���������� �����,
//�� ������������ �� ���������� ������ �����������
//�� ���������� � (���) �� �����, � (���) �� ������������!!!!!!!!!!!!!*/


//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//#define FILE_NAME "dictionary.txt"
//#define END_WORD "|"
//
//int main()
//{
//	map<string, vector<string>> dictionary;
//
//	//���� � �������
//	ifstream file(FILE_NAME);
//
//	if (file.is_open()) {
//
//		string buffer;
//
//		string TempName;
//		vector<string> TempTrans;
//
//		//���������� ������ �����
//		if (!file.eof()) {
//			file >> buffer;
//			TempName = buffer;
//		}
//
//		while (!file.eof())
//		{
//			//������ ������ �����
//			if (buffer == END_WORD) {
//				file >> buffer;
//				TempName = buffer;
//			}
//
//			file >> buffer;
//
//			//���������� ���� � �� ���������
//			if (buffer == END_WORD) {
//				TempTrans.shrink_to_fit();
//				dictionary.insert(map<string, vector<string>>::value_type(move(TempName), move(TempTrans)));
//			}
//			//������ ��������
//			else {
//				TempTrans.push_back(buffer);
//			}
//		}
//
//		file.close();
//	}
//	else {
//		cout << "File not found;" << endl;
//		return false;
//	}
//
//	string find;
//	while (true)
//	{
//		cout << "Enter word: ";
//		cin >> find;
//
//		//������ ���������
//		auto word = dictionary.find(find)->second;
//
//		for (auto i = word.begin(); i != word.end(); ++i) {
//			cout << *i << endl;
//		}
//		cout << endl;
//	}
//
//	return true;
//}

#include <iostream> 
#include <string> 
#include <map> 
#include <Windows.h> 
#include <vector> 
#include <cstdlib> 
#include <conio.h>    
using namespace std;
multimap<string, string> imenas;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    imenas.insert(pair<string, string>("cake", "����"));
    imenas.insert(pair<string, string>("imena", "�����"));
    multimap<string, string>::iterator i;
    multimap<string, string>::iterator m;
    i = imenas.find("imena");
    m = imenas.find("cake");

    cout << endl;
    if (i == imenas.end())
    {
        cout << "����� �� ��������" << endl;

    }
    else
    {

        cout << "�������� ����� \"imena\": " << i->second << endl;

        cout << "�������� ����� \"cake\": " << m->second << endl;
    }




    return 0;
}