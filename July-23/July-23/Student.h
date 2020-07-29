#define _CRT_SECURE_NO_WARNINGS
#include"Date.h"
class cStudent
{
private:
	static int cnt;
	int rollno;
	char name[20];
	cDate DOA;

public:
	//default constructor
	cStudent();

	//parameterised constructor
	cStudent(const char*,int,int,int);

	//other method
	void display();
	void Accept();

};
