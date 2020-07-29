#include"Employee.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	eid = cnt;
	salary = 50000.00;
}
cEmployee::cEmployee(int id, const char *nm, int d, int m, int y, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, float sal) :name(nm), doj(d, m, y),Per_addr(Par,Pcty,Pp),Cur_addr(Car, Ccty, Cp)
{
	cnt++;
	eid = id;
	salary = sal;
}
void cEmployee::Accept()
{
	cout << "\n\n\t Enter Id ";
	cin >> eid;
	name.Accept();
	doj.Accept();
	cout << "\n\t Enter Salary ";
	cin >> salary;
}
void cEmployee::Display()
{
	cout << "\n\n\t ******* Emp Id " << eid << " *******";
	name.Display();
	doj.Display();
	cout << "\n\t Salary  : " << salary;
}


