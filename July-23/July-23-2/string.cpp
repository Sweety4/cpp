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

void cString::display()
{
	cout << "\n**********Person Detail*******";
	cout << "\n\t Person name:" << str;
}

void cString::Accept()
{
	cout << "\n********** Enter Person info*******";
	cout << "\n\t Enter Person name:";
	cin >> str;

}