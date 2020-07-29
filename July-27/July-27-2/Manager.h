#include"Employee.h"
#ifndef Manager_
#define Manager_
class cManager:virtual public cEmployee
{
	int ta;
	int da;
public:
	cManager();
	cManager(const char*, const char*, const char*, int, const char*, const char*, int, int, int, int, float, int, int);
	void Accept();
	void Display();
};

#endif