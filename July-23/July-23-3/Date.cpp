#include"Date.h"
cDate::cDate()
{
	day = month = 1;
	year = 2019;
}
cDate::cDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;

}

void cDate::Accept()
{
	cout << "\n\t Enter day,month and year :";
	cin >> day >> month >> year;
}
void cDate::Display()
{
	cout << "\n\t Date of Joining :" << day << "/" << month << "/" << year;

}