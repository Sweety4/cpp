#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class complex
{
private:

	int real, img;
public:
	complex();
	complex(int, int);
	complex operator +(complex &);
	complex operator -(complex &);
	complex operator ++(int );
	complex operator ++();
	void display()const;
	

	

};


