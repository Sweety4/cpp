#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cString
{
	int len;
	char *str;
public:
	cString();
	cString(const char*);
	~cString();
	cString(cString &);
	const cString operator+(cString &obj);
	cString operator=(const cString &);
	
	void setString(const char*);

	void Accept();
	void Display();

};