#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;

#ifndef PER_
#define PER_
class cPerson
{
	char *name, *address;
public:
	cPerson();
	cPerson(const char*, const char*);
	~cPerson();

	void Accept();
	void Display();

};
#endif

