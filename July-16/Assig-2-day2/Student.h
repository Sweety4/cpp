#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class cStudent
{
private:
	int rollNo;
	char name[20];
	float percentage;
public:
	//constructors
	cStudent();
	cStudent(int, const char[], float);

	//other functions
	void Accept();
	void Display();
	void show_result();
};