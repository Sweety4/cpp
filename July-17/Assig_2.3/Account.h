#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Account
{
private:
	static int cnt;
	int AcNo;
	char name[10];
	float balance;
public:
	//constructor
	Account();
	Account(const char*, float);

	//getter
	char* getName();
	float getBalance();

	//setter
    void setName(const char*);
	void setBalance(float);

	void display();
};