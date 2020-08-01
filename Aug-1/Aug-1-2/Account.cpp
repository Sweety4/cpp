#include"Account.h"
int cAccount::cnt=101;
cAccount::cAccount()
{
	cnt++;
	acno = cnt;
	strcpy(name, "");
	balance = 00;

}

cAccount::cAccount(const char* nm, float bal)
{
	cnt++;
	acno = cnt;
	strcpy(name,nm);
	balance =bal;
}

void cAccount::Accept()
{
	cout << "\n\n*********** Enter Account Details ***********";
	cout << "\n\n\t Account number:"<<acno;
	cout << "\n\n\t Enter Account Holder name:";
	cin >> name;
	cout << "\n\t Enter current balance :";
	cin >> balance;

}

void cAccount::Deposit(int amt)
{
	if (amt >= 50000)
	{
		Pan_card_details pd;
		throw pd;
    }
	balance = balance + amt;
}

void cAccount::withdraw(int amt)
{
		if (amt <= 10000)
		{
			minimum_balance mb;
			throw mb;
		}
		balance = balance + amt;
}

void cAccount::Display()
{
	cout << "\n*********** Account Details ***********";
	cout << "\n\n\t" << acno << "\t" << name << "\t" << balance;
}