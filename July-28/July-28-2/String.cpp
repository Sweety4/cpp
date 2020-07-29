#include"String.h"

cString::cString()
{
	str = new char[5];
	str[0] = '\0';
}
cString::cString(const char *str)
{
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
}
void cString::Accept()
{
	char nm[10];
	cout << "Enter name:";
	cin >> nm;
	str = new char[strlen(nm) + 1];
	strcpy(str, nm);
}
void cString::Display()const
{
	cout << "\n\t Name    : " << str;
}
cString::~cString()
{
	delete[] str;
}