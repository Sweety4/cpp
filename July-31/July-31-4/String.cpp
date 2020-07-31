#include"String.h"
cString::cString()
{
	len = 0;
	str = new char[len + 1];
	str[0] = '\0';
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
cString::cString(const char *nm)
{
	len = strlen(nm);
	str = new char[len + 1];
	strcpy(str, nm);
}
cString::cString(char ch, int ln)
{
	len = ln;
	str = new char[len + 1];
	for (int i = 0; i < ln; i++)
		str[i] = ch;
	str[ln] = '\0';
}
void cString::Display()
{
	cout << "\n\n\t String " << str;
}
cString::~cString()
{
	delete[]str;
}
istream& operator>>(istream &in, cString &obj)
{
	char temp[20];
	cout << "\n\t Enter String ";
	cin >> temp;
	obj.len = strlen(temp);
	obj.str = new char[obj.len + 1];
	strcpy(obj.str, temp);
	return in;
}
ostream& operator<<(ostream &out, cString &obj)
{
	out << "\n\t String " << obj.str;
	return out;
}

