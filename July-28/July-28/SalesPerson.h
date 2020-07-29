#include"Employee.h"
#ifndef SalesPerson_
#define SalesPerson_
class cSalesPerson:public cEmployee
{
public:
	cSalesPerson();
	void Display();
	void CalculateSalary();
	~cSalesPerson();
};
#endif
