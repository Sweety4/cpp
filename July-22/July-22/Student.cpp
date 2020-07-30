#include"Student.h"
int cStudent::cnt;
cStudent::cStudent()
{
	cnt++;
	no = cnt;
	strcpy(name, " ");
}
cStudent::cStudent(const char* nm)
{
	cnt++;
	no = cnt;
	strcpy(name, nm);
}
void cStudent::display()
{
	cout << "\n\t No :" << no << "\n\t Name :" << name;
}
cStudent::cStudent(cStudent &obj)
{
	cnt++;
	no = cnt;
	strcpy(name, obj.name);

}
char* cStudent:: getName()
{
	return name;

}
void cStudent::setName(const char* nm)
{
	strcpy(name, nm);

}