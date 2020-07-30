#include"Employee.h"
Employee::Employee()
{
	id = 1;
	name = new char[1];
	name[0] = '\0';

}
Employee::Employee(int i, const char* nm)
{
	id = i;
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);

}
/*Employee::~Employee()
{
	delete[]name;
}*/
void Employee::Display()
{
	cout << "\n\n*************Employee Details**************************";
	cout << "\n\n\t Employee ID :" << id << "\n\t" << "Employee Name :" << name;

}
void Employee::Accept()
{
	cout << "\n\n*********************Employee details*********************";
	cout << "\n\n\t Employee ID:";
	cin >> id;
	cout << "\n\t Employee Name:";
	cin >> name;


}
/*void Employee::setName(const char* nm)
{
	strcpy(name ,nm);
}*/