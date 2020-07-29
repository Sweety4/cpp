#include<iostream>
using namespace std;

#ifndef DATE_
#define DATE_
class cDate
{
	int dd, mm, yy;
public:
	cDate();
	cDate(int, int, int);
	void Accept();
	void Display();
};
#endif

