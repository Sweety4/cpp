#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void main()
{
	int no1, no2;
	float res;
	try
	{
		cout << "\n\n\t Enter two nos :";
		cin >> no1 >> no2;
		if (no2 == 0)
			throw 100;
		res = no1 / no2;
		cout << "\n\n\t Result :" << res;
	}
	catch (int no)
	{
		cout << "\n\n\t Divide By Zero not allowed ";
	}
	cout << "\n\n\n";
}