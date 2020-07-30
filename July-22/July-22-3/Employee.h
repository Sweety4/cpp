#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cEmployee
{
private:
	static int cnt;
	int id;
	char *name;
	char city[20];
public:
	cEmployee();
	cEmployee(const char*,const char*);
	~cEmployee();
	cEmployee(const cEmployee &);

	void Accept();
	void Display();

	char* getName();
	void setName(const char*);


};
