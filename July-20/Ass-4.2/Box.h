#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Box
{
private:
	int capacity;
public:
	Box();
	Box(int);
	//~Box();
	int operator >(Box&);
	void Accept(int);
	void Display();


};
