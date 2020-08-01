#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include<iostream>
using namespace std;

class cEmployee
{
	static int cnt;
	int eno;
	char name[20];
	int sal;
public:
	cEmployee();
	cEmployee(const char*, int);
	void Accept();
	void Display();
};
