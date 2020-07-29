#include"Employee.h"
class cWageEmp :cEmployee
{
	int NoHrs;
	float ratePerHrs;
public:
	cWageEmp();
	cWageEmp(const char*,const char*,const char*,int,const char*,const char*,int,int,int,int,float,int,float);

	void Accept();
	void Display();
	int calculateSalary();

};
