#include"SalesPerson.h"

cSalesPerson::cSalesPerson()
{
	sales = 333.00;
	comm = 22.00;
}
cSalesPerson::cSalesPerson(int id, const char *nm, int d, int m, int y, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, float sal, float sa, float com) :cEmployee(id, nm, d, m, y, Par, Pcty, Pp, Car, Ccty, Cp, sal)
{
	sales = sa;
	comm = com;
}
void cSalesPerson::Accept()
{
	cEmployee::Accept();
	cout << "\n\n\t Enter Number of sales  and commission ";
	cin >> sales >> comm;
}
void cSalesPerson::Display()
{
	cEmployee::Display();
	cout << "\n\t Sales      :" << sales;
	cout << "\n\t Commission : " << comm;
}
void cSalesPerson::CalculateSalary()
{
	cout << "\n\n\t Net Salary :" << salary + (sales + comm);
}