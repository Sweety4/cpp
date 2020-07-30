#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Student
{
private:
	int noofsub;
	int *marks;
public:
	Student();
	Student(int);
	~Student();
	void Accept();
	void display();

};
