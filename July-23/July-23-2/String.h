#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cString
{
private:
	int len;
	char *str;
public:
	cString();
	cString(const char*);
	~cString();
	
	void display();
	void Accept();

};

