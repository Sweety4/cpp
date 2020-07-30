#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
private:
	char name[20];
	int age;
	char city[20];
public:
	//constructors
	Person();
	Person( char*,int, char*);
	
	//display function
	void Display();
 };