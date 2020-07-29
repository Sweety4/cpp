#pragma once
#include<iostream>
using namespace std;
class cDate
{
private:
	int day, month, year;
public:
	//constructors
	cDate();
	cDate(int, int, int);

	//other functions
	void Accept();
	void display();

	

};
