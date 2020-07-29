#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<typeinfo>
using namespace std;

class cTest
{
private:
	int a;
	char b;
	float var;
	char nm[20];
public:
	cTest();
	cTest(int, char, float, const char*);

	void Accept();
	void Display();

};
