#include"Date.h"
#include"Area.h"
#ifndef EMP_
#define EMP_
class cEmployee
{
private:
	static int cnt;
	int id;
	cString name;
	cDate DOJ;
	cAddress Per_addr, cur_addr;
protected:
	float sal;
public:
	cEmployee();
	cEmployee(const char*,const char*,const char*,int,const char*,const char*,int,int,int,int,float);

	void Accept();
	void Display();

	int calculateSalary();


};
#endif