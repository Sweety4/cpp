#define _CRT_SECURE_NO_WARNINGS
#include"String.h"
#include"Date.h"
class cEmployee
{
	static int cnt;
	int id;
	float salary;
	cString e_name;
	cDate DOJ;

public:
	cEmployee();
	cEmployee(float,const char*,int,int,int);
	void Accept();
	void Display();

};
