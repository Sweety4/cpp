#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int id;
	char *name;
public:
	Employee();
	Employee(int, const char*);
	//~Employee();
	void Display();
	void Accept();
	//void setName(const char*);

};
