#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class complex
{
private:
	static int cnt;
	int real, img;
public:
	//constructors
	complex();
	complex(int, int);

	//other functions
	void display();
	void show();
};
