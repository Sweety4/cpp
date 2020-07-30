#include"Account.h"
int main()
{
	Account a1;
	Account a2(45, "Sweety", 100);
	a1.display();
	a2.display();

	Account a3;
	a3.setAcNo(89);
	a3.setName("shreya");
	a3.setBalance(200);
	a3.display();

	//Account a4;
	a3.getAcNo();
	a3.getName();
	a3.getBalance();
	a3.display();
	cout << "\n\n";
	return 0;

}