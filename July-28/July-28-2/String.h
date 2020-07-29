#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#ifndef String_
#define String_
class cString
{
	char *str;
public:
	cString();
	cString(const char*);
	void Accept();
	void Display()const;
	~cString();
};

#endif 



