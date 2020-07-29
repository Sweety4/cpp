#include"Person.h"

#ifndef Student_
#define Student_
class cStudent :public cPerson
{
private:
	int rollno;
	char *college_name;
public:
	cStudent();
	cStudent(const char*,const char*,int,const char*);
	~cStudent();

	void Accept();
	void Display();

};
#endif
