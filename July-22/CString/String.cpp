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
	str =new char[len + 1];
	strcpy(str, s);

}
cString::~cString()
{
	delete[]str;
}
cString::cString(const cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str, obj.str);

}
cString cString::operator=(const cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str, obj.str);
	return *this;
}

void cString:: display()
{
	cout << "\n\t String len :" << len << "\n\t string name:" << str;
}
char* cString:: getStr()
{
	return str;
}

void cString::setStr(const char* s)
{
	len = strlen(s);
	str = new char[len + 1];
	strcpy(str, s);

}