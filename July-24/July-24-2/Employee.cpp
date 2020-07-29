#include"Employee.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	id = cnt;
	salary = 00;
}
cEmployee::cEmployee(const char* nm, const char* add, float sal):cPerson(nm, add)
{
	cnt++;
	id = cnt;
	salary = sal;
	
}
void cEmployee::Accept()
{
	cout << "\n*************Enter Employee Details*************";
	cout << "\n\t Enter Id :" << id;
	cPerson::Accept();
	cout << "\n\t salary :";
	cin >> salary;

}
void cEmployee::Display()
{
	cout << "\n****************Employee Details*****************";
	cout << "\n\n\t Employee ID :" << id;
	cPerson::Display();
	cout << "\n\t salary :" << salary;
}
