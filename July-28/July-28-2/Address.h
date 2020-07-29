#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#ifndef _ADD_
#define _ADD_
class cAddress
{
	int pin;
	char *area, *city;
public:
	cAddress();
	cAddress(const char*, const char*, int);
	
	void accept();
	
	void display()const;
	~cAddress();
};

#endif 



