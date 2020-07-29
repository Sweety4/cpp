#include"Employee.h"

#ifndef WAGE_
#define WAGE_
class cWageEmployee :public  cEmployee
{
	float hrs, rate;
public:
	cWageEmployee();
	cWageEmployee(int, const char*, int, int, int, const char*, const char*, int, const char*, const char*, int, float, float, float);
	void Accept();
	void Display();
	void CalculateSalary();
};
#endif
