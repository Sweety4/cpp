#include"Manager.h"
cManager::cManager()
{
	ta = 0;
	da = 0;
}
cManager::cManager(const char* nm, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, int d, int m, int y, float sal, int t, int daa) :cEmployee(nm, Par, Pcty, Pp, Car, Ccty, Cp, d, m, y, sal)

{
	ta = t;
	da = daa;
}
void cManager::Accept()
{
	cEmployee::Accept();
	cout << "\n\n\t Enter TA and DA";
	cin >> ta >> da;
}
void cManager::Display()
{
	cEmployee::Display();
	cout << "\n\t TA :" << ta;
	cout << "\n\t DA :" << da;
}