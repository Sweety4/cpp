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
	Account(int,const char*, float);

	//getter
	int getAcNo();
	char* getName();
	float getBalance();

	//setter
	void setAcNo(int);
    void setName(const char*);
	void setBalance(float);

	void display();
};