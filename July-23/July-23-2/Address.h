#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cAddress
{
	char Area[30];
	char city[20];
	int pin;
public:
	cAddress();
	cAddress(const char*,const char*,int);
	
	void Accept();
	void Display();


};
