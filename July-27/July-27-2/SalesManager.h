#include"Manager.h"
#include"SalesPerson.h"

#ifndef SalesManager_
#define SalesManager_

class cSalesManager:public cManager, public cSalesPerson
{
public:
	cSalesManager();
	cSalesManager(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float, int, float,int,int);
	void Display();
};

#endif