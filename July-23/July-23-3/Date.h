#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cDate
{
	int day, month, year;
public:
	cDate();
	cDate(int,int,int);

	void Accept();
	void Display();

};
