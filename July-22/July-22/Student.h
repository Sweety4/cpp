#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class cStudent
{
private:
	static int cnt;
	int no;
	char name[20];
public:
	//default constructor
	cStudent();

	//parameterised constructor
	cStudent(const char*);

	//copy constructor
	cStudent(cStudent &);

	//getter method
	char* getName();

	//setter method
	void setName(const char*);

	//other method
	void display();

};
