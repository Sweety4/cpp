#include"SalesManager.h"
void main()
{
	cEmployee e1;
	e1.Display();

	cEmployee e2("sweety", "Korangala", "Latur", 413520, "Hinjwadi", "Pune", 4568, 4, 4, 2021, 50000.00);;
	e2.Display();

	cSalesPerson sp1;
	sp1.Display();

	cSalesPerson sp2("sweety", "Korangala", "Latur", 413520, "Hinjwadi", "Pune", 4568, 4, 4, 2021, 50000.00, 33, 55);;
	sp2.Display();

	cManager mg1("sweety", "Korangala", "Latur", 413520, "Hinjwadi", "Pune", 4568, 4, 4, 2021, 50000.00, 66, 77);
	mg1.Display();

	cSalesManager sm1("sweety", "Korangala", "Latur", 413520, "Hinjwadi", "Pune", 4568, 4, 4, 2021, 50000.00, 33, 55, 66, 77);;
	sm1.Display();

	cout << "\n\tSize of Employee :" << sizeof(cEmployee);
	cout << "\n\tSize of salesperson :" << sizeof(cSalesPerson);
	cout << "\n\tSize of Manager :" << sizeof(cManager);
	cout << "\n\tSize of Salesmanager :" << sizeof(cSalesManager);
	cout << "\n\n";

}