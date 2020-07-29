#include"Date.h"
cDate::cDate()
{
	day = 0;
	month = 0;
	year = 0;
}
cDate::cDate(int dd, int mm, int yy)
{
	day = dd;
	month = mm;
	year = yy;

}

void cDate::Accept()
{
	cout <<"\n Enter day,month and year :";
	cin >> day >> month >> year;

}
void cDate::Display()
{
	cout << "\n\t Date of Joining :" << day << "/" << month << "/" << year;

}