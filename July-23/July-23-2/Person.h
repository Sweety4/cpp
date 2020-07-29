#define _CRT_SECURE_NO_WARNINGS
#include"String.h"
#include"Address.h"
class cPerson
{
	cString name;
	cAddress Padd;
public:
	cPerson(const char*, const char*, const char*,int);
	void Accept();
	void Display();

};