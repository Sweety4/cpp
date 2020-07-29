#include"SalesPerson.h"
cSalesPerson::cSalesPerson()
{
	totalSales = 0;
	comm = 0;
}
cSalesPerson::cSalesPerson(const char* nm, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, int d, int m, int y, float sal, int sales , float cm) :cEmployee(nm, Par, Pcty, Pp, Car, Ccty, Cp, d, m, y, sal)
{
	totalSales = sales;
	comm = cm;
}
void cSalesPerson::Accept()
{
	cEmployee::Accept();
	cout << "\nEnter tatalSales:";
	cin >> totalSales;
	cout << "\nEnter commision :";
	cin >> comm;
}
void cSalesPerson::Display()
{
	cEmployee::Display();
	cout << "\n\n\tTotal Sales :" << totalSales;
	cout << "\n\n\tTotal commision:" << comm;
	cout << "\n\n\tTotal salary:" << calculateSalary();

}
int cSalesPerson::calculateSalary()
{
	float salary;
	salary = sal + (totalSales + comm);
	return salary;
}