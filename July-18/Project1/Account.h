#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Account
{
private:
	static int cnt;
	static int interestrate;
	int Acno;
	char name[30];
	float balance;
public:
	//constructors
	Account();
	Account(const char*,float);
	static void setInterestrate(int);

	//getter
	char* getName();
	float getBalance();

	//setter
	void setName(const char*);
	void setBalance(float);

	void display();

};

