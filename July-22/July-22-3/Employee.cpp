#include"Employee.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	id = cnt;
	name = new char[1];
	name[0] = '\0';


}
cEmployee::cEmployee(const char* nm, const char* cty)
{
	cnt++;
	id = cnt;
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
	strcpy(city, cty);

}
cEmployee::~cEmployee()
{
	delete[]name;
}
cEmployee::cEmployee(const cEmployee & obj)
{
	cnt++;
	id = cnt;
	name= new char[strlen(obj.name) + 1];
	strcpy(name, obj.name);
	
}

void cEmployee::Accept()
{
	cout << "\n***************Enter Employee Details**************";
	cout << "\n\t Emploee ID :";
	cin >> id;
	cout << "\n\t Employee Name :";
	cin >> name;
	cout << "\n\t Employee location :";
	cin >> city;
}
void cEmployee::Display()
{
	cout << "\n*************Employee Details*****************";
	cout << "\n\t Employee ID :" << id << "\n\t Employee Name :" << name << "\n\t Employee city :" << city;
}

char* cEmployee::getName()
{
	return name;
}
void cEmployee::setName(const char* nm)
{
	cnt++;
	id = cnt;
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
}
