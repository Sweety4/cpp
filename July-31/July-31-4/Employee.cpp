#include"Employee.h"
Employee::Employee()
{
	id = 0;
	strcpy(name, " ");
}
Employee::Employee(int i, const char *nm)
{
	id = i;
	strcpy(name, nm);
}
void Employee::Display()
{
	cout << "\n\t" << id << "\t" << name;
}
istream& operator>>(istream &in, Employee &obj)
{
	cout << "\n\t Enter Id And Name ";
	in >> obj.id >> obj.name;
	return in;
}
ostream& operator<<(ostream &out, Employee &obj)
{
	out << "\n\t" << obj.id << "\t" << obj.name;
	return out;
}