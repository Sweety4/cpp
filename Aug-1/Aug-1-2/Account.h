#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Pan_card_details :public exception
{
public:
	const char* what()
	{
		return "\n\n\t pan details Req. !!!";
	}
};

class minimum_balance : public exception
{
public:
	const char* what()
	{
		return "\n\n\t minimum balance !!!";
	}
};

class cAccount
{
	static int cnt;
	int acno;
	char name[20];
	float balance;
public:
	cAccount();
	cAccount(const char*,float);
	void Accept();
	void Deposit(int);
	void withdraw(int);
	void Display();
};
