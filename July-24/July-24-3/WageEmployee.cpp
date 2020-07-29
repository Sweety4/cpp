#include"WageEmployee.h"
cWageEmp::cWageEmp()
{
	NoHrs = 0;
	ratePerHrs = 0;
}
cWageEmp::cWageEmp(const char* nm, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, int d, int m, int y, float sal, int hr, float rate) :cEmployee(nm, Par, Pcty, Pp, Car, Ccty, Cp, d, m, y, sal)
{
	NoHrs = hr;
	ratePerHrs = rate;
}

void cWageEmp::Accept()
{
	cEmployee::Accept();
	cout << "\nEnter Noof Hrs:";
	cin >> NoHrs;
	cout << "\nEnter rate per Hrs :";
	cin >> ratePerHrs;
}
void cWageEmp::Display()
{
	cEmployee::Display();
	cout << "\nNo of extra hrs :" << NoHrs;
	cout << "\nRate Per hrs:" << ratePerHrs;
	cout << "\nTotal salary:" << calculateSalary();

}
int cWageEmp:: calculateSalary()
{
	float salary;
	salary = sal + (NoHrs*ratePerHrs);
	return salary;
}