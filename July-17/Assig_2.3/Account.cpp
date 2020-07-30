#include"Account.h"
int Account::cnt;
Account::Account()
{
	AcNo = cnt;
	strcpy(this->name, " ");
	balance = 00;
	cnt++;
}
Account::Account( const char* nm , float bal)
{
	AcNo = cnt;
	strcpy(this->name, nm);
	balance =bal;
	cnt++;
}
char* Account::getName()
{
	
	return name;
}
float Account::getBalance()
{
	
	return balance;
}

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
	cout << "\n\t Account No :" << AcNo;
	cout << "\n\t Name :" << name;
	cout << "\n\t Balance :" << balance;

}
