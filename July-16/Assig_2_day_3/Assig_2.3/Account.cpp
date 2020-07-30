#include"Account.h"
Account::Account()
{
	AcNo = 00;
	strcpy(this->name, " ");
	balance = 00;

}
Account::Account(int ac, const char* nm , float bal)
{
	AcNo = ac;
	strcpy(this->name, nm);
	balance =bal;

}
int Account::getAcNo()
{
	return AcNo;
}
char* Account::getName()
{
	return name;
}
float Account::getBalance()
{
	return balance;
}

void Account::setAcNo(int ac)
{
	AcNo = ac;

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
