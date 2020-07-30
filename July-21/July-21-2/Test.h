#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Test
{
	const int no;
	int day;
	int &month = day;

public:
	Test();
	Test( const int, int, int);
	Test() :no(15)
	{
		cout << "\n number set:" << no;
	}
	//Test(const int, int, int );
	void Display();


};
