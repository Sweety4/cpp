#include"SalesPerson.h"
#include"Manager.h"
int main()
{
	//cEmployee e1;
	//e1.Display();

	cEmployee *e;
	e = new cEmployee();
	e->Display();
	delete e;
}