#include"Employee.h"
#ifndef SALES_
#define SALES_
class cSalesPerson :public  cEmployee
{
	float sales, comm;
public:
	cSalesPerson();
	cSalesPerson(int, const char*, int, int, int, const char*, const char*, int, const char*, const char*, int, float, float, float);
	void Accept();
	void Display();
	void CalculateSalary();
};

#endif
