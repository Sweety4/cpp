#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class cString
{
	int len;
	char *str;
 public:
	cString();
	cString(char, int);
	cString(char const*);
	cString(const cString&);
	cString operator=(const cString&);
	void Display();
	friend istream& operator>>(istream&, cString&);
	friend ostream& operator<<(ostream&, cString&);
	~cString();
};


