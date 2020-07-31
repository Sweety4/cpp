#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Employee
{
	int id;
	char name[20];
 public:
	Employee();
	Employee(int, const char*);
	void Display();
	friend istream& operator>>(istream&, Employee&);
	friend ostream& operator<<(ostream&, Employee&);
};

