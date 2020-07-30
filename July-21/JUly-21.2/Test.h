#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Test
{
	const int i;
	const int &j;

public:
	Test(int);

	void Display()const;
	
};

