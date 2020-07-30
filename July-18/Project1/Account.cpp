#include"Account.h"
int Account::cnt=100;
int Account::interestrate;
Account::Account()
{
	Acno = cnt;
	strcpy(this->name, " ");
	balance = 00;
	cnt++;

}
Account::Account(const char* nm, float bal)
{
	Acno = cnt;
	strcpy(this->name, nm);
	balance = bal;
	cnt++;
}
/*int Account::getAcNo()
{
return AcNo;
}*/
char* Account::getName()
{
	return name;
}
float Account::getBalance()
{
	return balance;
}

/*void Account::setAcNo(int ac)
{
AcNo = ac;

}*/
void Account::setName(const char* nm)
{
	strcpy(this->name, nm);
}
void Account::setBalance(float bal)
{
	balance = bal;
}

void Account::display()
{
	cout << "\n\n***************Account Detail*******************";
	cout << "\n\t Account No :" << Acno;
	cout << "\n\t Name :" << name;
	cout << "\n\t Balance :" << balance;

}
void Account::setInterestrate(int i)
{
	interestrate = i;
cout<<"\n\n Interestrate is :"<< interestrate;

}