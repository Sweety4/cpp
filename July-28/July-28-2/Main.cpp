#include"SalesPerson.h"
#include"WageEmployee.h"

void main()
{
	cEmployee *e;
	e = new cSalesPerson();
	e->Display();
	e->CalculateSalary();
//	cout << "\n\t***********salary :" << e->CalculateSalary() << "****************";
	delete e;

	e = new cWageEmployee();
	e->Display();
	e->CalculateSalary();
//	cout << "\n\t***********salary :" << e->CalculateSalary() << "****************";
	delete e;

	/*cEmployee e1;
	cEmployee e2(101, "Seeta", 1, 1, 2020, 40000);
	e1.Display();
	e2.Display();

	cWageEmployee wg1;
	wg1.Display();
	cWageEmployee wg2(202, "Geeta", 2, 2, 2020, 30000, 400, 50);
	wg2.Display();
	wg2.CalculateSalary();

	cSalesPerson sp1;
	sp1.Display();
	cSalesPerson sp2(303, "Neeta", 3, 4, 2020, 55000, 500, 660);
	sp2.Display();
	wg2.CalculateSalary();*/

}