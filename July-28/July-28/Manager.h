#include"Employee.h"
#ifndef Manager_
#define Manager_
class cManager :public cEmployee
{
public:
	cManager();
	void Display();
	void CalculateSalary();
	~cManager();
};
#endif

