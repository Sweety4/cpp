#include"Employee.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	id = cnt;
	sal = 00;
}
cEmployee::cEmployee(const char* str, const char* par , const char* pcty, int pp, const char* car, const char* ccty, int cp, int d, int m, int y, float sal):name(str),DOJ(d,m,y),Per_addr(par,pcty,pp),cur_addr(car,ccty,cp)

{
	cnt++;
	id = cnt;
	sal = sal;
	
}

void cEmployee:: Accept()
{
	cout << "\n*************Enter Employee Details*************";
	cout << "\n\t Enter Id :" << id;
	//cout << "\nEnter Employee name :";
	name.Accept();
	cout << "\nEnter Permnant addr:";
	Per_addr.Accept();
	cout << "\nEnter Current addr:";
	cur_addr.Accept();
	//cout << "\nEnter date of Joining :";
	DOJ.Accept();
	
	cout << "\nEnter salary :";
	cin >> sal;
}
void cEmployee:: Display()
{
	cout << "\n****************Employee Details*****************";
	cout << "\n\n\t Employee ID :" << id;
	//cout << "\nEmployee name :";
	name.Display();
	cout << "\nPermanat addr :";
	Per_addr.Display();
	cout << "\nCurrent addr :";
	cur_addr.Display();
	//cout << "\nDate of joining :";
	DOJ.Display();
	cout << "\n\n\t salary :" << sal;
}

int  cEmployee::calculateSalary()
{
	return 1;
}