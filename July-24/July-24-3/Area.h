#include"String.h"
#ifndef Addr_
#define Addr_
class cAddress
{
	char Area[30];
	char city[20];
	int pin;
public:
	cAddress();
	cAddress(const char*, const char*, int);

	void Accept();
	void Display();


};
#endif

