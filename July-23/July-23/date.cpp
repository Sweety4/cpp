#include"date.h"
cDate::cDate()
{
	day = 1;
	month = 1;
	year = 2020;

}

cDate::cDate(int dd, int mm, int yy)
{
	day = dd;
	month = mm;
	year = yy;
}
void cDate::Accept()
{
	//cout << "\n**************Accept Data***************";
	cout << "\n\t Enter day month and year:";
	cin >> day >> month >> year;
	

}
void cDate::display()
{

	cout << "\n\t Date of Admission :" << day << "/" << month << "/" << year;

}
