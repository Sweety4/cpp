#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef Date_
#define Date_
class cDate
{
private:
	int day, month, year;
public:
	cDate();
	cDate(int,int,int);

	void Accept();
	void Display();

};
#endif
