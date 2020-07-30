#include"Cdate.h"
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
void cDate:: Accept()
{
	cout << "\n**************Accept Data***************";
	cout << "\n\n\t Enter day:";
	cin >> day;
	cout << "\n\t Enter month:";
	cin >> month;
	cout << "\n\t Enter year:";
	cin >> year;

}
void cDate::display()
{
	
	cout<<"\n"<< day << "/" << month << "/"<< year;

}
int cDate::getDay()
{
	
	return day;
}
int cDate::getMonth()
{

	return month;
}

int cDate::getYear()
{

	return year;
}


void cDate::setDay(int dd)
{
	day = dd;
}
void cDate::setMonth(int mm)
{
	month = mm;

}
void cDate::setYear(int yy)
{
	year = yy;
}