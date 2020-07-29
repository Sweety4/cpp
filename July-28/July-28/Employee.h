#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef EMP_
#define EMP_
class cEmployee
{
public:
	cEmployee();
	void virtual Display();
	//void CalculateSalary();	
	~cEmployee();

};
#endif