#define _CRT_SECURE_NO_WARNINGS
#include"Person.h"

class cEmployee:public cPerson
{
	static int cnt;
	int id;
	float salary;
	
public:
	cEmployee();
	cEmployee(const char*,const char*,float);
	void Accept();
	void Display();

};

