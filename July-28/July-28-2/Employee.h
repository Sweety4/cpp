#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
#include"String.h"
#include"Address.h"

#ifndef EMP
#define EMP
class cEmployee
{
	static int cnt;
	int eid;
	cString name;
	cDate doj;
	cAddress Per_addr, Cur_addr;
protected:
	float salary;
public:
	cEmployee();
	cEmployee(int, const char*, int, int, int,const char*,const char*,int, const char*, const char*, int, float);
	void Accept();
	void Display();
	virtual void CalculateSalary() = 0;
};
#endif

