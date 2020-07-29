#include"Employee.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	id = cnt;
	salary = 00;
}
cEmployee::cEmployee(float sal, const char* str, int d, int m, int y)
{
	cnt++;
	id = cnt;
	salary = sal;
	e_name = cString(str);
	DOJ = cDate(d, m, y);

}
void cEmployee:: Accept()
{
	cout << "\n*************Enter Employee Details*************";
	cout << "\n\t Enter Id :"<<id;
	e_name.Accept();
	DOJ.Accept();
	cout << "\n\t salary :";	
	cin >> salary;

}
void cEmployee::Display()
{
	cout << "\n****************Employee Details*****************";
	cout << "\n\n\t Employee ID :" << id;
	e_name.Display();
	DOJ.Display();
	cout << "\n\t salary :" << salary;
}
