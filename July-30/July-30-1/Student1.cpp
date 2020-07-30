#include"Student1.h"
Sweety::cStudent1::cStudent1()
{
	rollno = 88;
	strcpy(name, "");
	per=99.00;
}
Sweety::cStudent1::cStudent1(int rn, const char*nm, float p)
{

	rollno = rn;
	strcpy(name,nm);
	per = p;
}
void Sweety::cStudent1::Accept()
{
	cout << "\n\n\t Enter rollno :";
	cin >> rollno;
	cout << "\n\t Enter name  :";
	cin >> name;
	cout << "\n\t Enter Percentage :";
	cin >> per;
}
void Sweety::cStudent1::Display()
{
	cout << "\n\n\t Rollno :" << rollno;
	cout << "\n\t Name     :" << name;
	cout << "\n\t Percentage:" << per;
}
