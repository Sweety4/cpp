#include"Account.h"
void main()
{
	try
	{
		cout << "\n\n\t~~~~~~~ Account 1 ~~~~~~~~";
		cAccount ac1("sweety", 20000);
		ac1.Accept();
		ac1.Display();
		ac1.Deposit(60000);
		ac1.withdraw(100000);

	}
	catch (Pan_card_details &pd)
	{
		cout << "\t\t" << pd.what();
	}
	catch (minimum_balance &mb)
	{
		cout << "\t\t" << mb.what();
	}
	try
	{
		cout << "\n\n\t~~~~~~~ Account 2 ~~~~~~~";
		cAccount ac2("seeta", 20000);
		ac2.Accept();
		ac2.Display();
		ac2.Deposit(10000);
		ac2.withdraw(2345);
		

	}
	catch (Pan_card_details &pd)
	{
		cout << "\t\t" << pd.what();
	}
	catch (minimum_balance &mb)
	{
		cout << "\t\t" << mb.what();
	}
		cout << "\n\n\n";

}