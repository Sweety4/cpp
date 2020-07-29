#include"WageEmployee.h"
#include"SalesPerson.h"
int main()
{
	{
		cWageEmp e1;
		e1.Display();
		cWageEmp e2;
		e2.Accept();
		e2.Display();
	}
	{
		cSalesPerson s1;
		s1.Display();
		cSalesPerson s2;
		s2.Accept();
		s2.Display();

	}
	cout << "\n\n";
}
