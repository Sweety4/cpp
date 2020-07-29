#include"SalesManager.h"
cSalesManager::cSalesManager()
{

}
cSalesManager::cSalesManager(const char* nm, const char* Par, const char* Pcty, int Pp, const char* Car, const char* Ccty, int Cp, int d, int m, int y, float sal, int sales, float cm,int t,int daa) : cEmployee(nm, Par, Pcty, Pp, Car, Ccty, Cp, d, m, y, sal) , cSalesPerson(nm, Par, Pcty, Pp, Car, Ccty, Cp, d, m, y, sal, sales,cm),cManager(nm, Par, Pcty, Pp, Car, Ccty, Cp, d, m, y, sal,t,daa)
{

}
void cSalesManager::Display()
{

}