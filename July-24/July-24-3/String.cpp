#include"String.h"
cString::cString()
{
	len = 0;
	str = new char[len + 1];
	str[0] = '\0';
}
cString::cString(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);

}
cString::~cString()
{
	delete[]str;
}
cString::cString(cString &s)
{
	len = s.len;
	str = new char[len + 1];
	strcpy(str, s.str);

}
const cString cString::operator+(cString &obj)
{
	cString temp;
	temp.len = this->len + obj.len;
	temp.str = new char[temp.len + 1];
	strcpy(temp.str, this->str);
	strcat(temp.str, obj.str);
	return temp;
}
cString cString::operator=(const cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str, obj.str);
	return *this;
}

void cString::setString(const char* s)
{
	strcpy(str, s);
}

void cString::Accept()
{
	cout << "\n\t Enter employee name :";
	cin >> str;

}
void cString::Display()
{
	cout << "\n\t Employee name:" << str;
}
