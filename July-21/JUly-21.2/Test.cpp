#include"Test.h"
Test::Test(int k) :i(k), j(i)
{
	
}

void Test::Display()const
{
	cout << "\n===============Display info==========================";
	cout << "\nConstructor member :" << i << endl;
	cout << "Reference Member :" << j << endl;
}