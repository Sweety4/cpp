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
	cString( const cString &);
	cString operator=(const cString &);

	void display();
	//getter method
	char* getStr();
	//setter method
	void setStr(const char*);

};
