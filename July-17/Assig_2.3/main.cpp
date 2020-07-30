#include"Account.h"
int main()
{
	Account a1;
	Account a2("Sweety", 100);
	a1.display();
	a2.display();

	Account a3;
	a3.setName("seeta");
	a3.setBalance(200);
	a3.display();

	a3.getName();
	a3.getBalance();
	a3.display();
	cout << "\n\n";
	return 0;

}