#include"WageEmployee.h"

cWageEmployee::cWageEmployee()
{
	hrs = 33.00;
	rate =52.00;
}
cWageEmployee::cWageEmployee(int id, const char *nm, int d, int m, int y, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, float sal, float hr, float ra) :cEmployee(id, nm, d, m, y,Par,Pcty, Pp, Car, Ccty, Cp, sal)
{
	hrs = hr;
	rate = ra;
}
void cWageEmployee::Accept()
{
	cEmployee::Accept();
	cout << "\n\n\t Enter Number of hours  and rate pre hour ";
	cin >> hrs >> rate;
}
void cWageEmployee::Display()
{
	cEmployee::Display();
	cout << "\n\t Total Hrs :" << hrs;
	cout << "\n\t Rate      : " << rate;
}
void cWageEmployee::CalculateSalary()
{
	cout << "\n\n\t Net Salary :" << salary + (hrs*rate);
}