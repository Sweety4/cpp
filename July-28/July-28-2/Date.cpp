#include"date.h"

cDate::cDate()
{
	dd = mm = 1;
	yy = 2020;
}

cDate::cDate(int d, int m, int y)
{
	dd = d;
	mm = m;
	yy = y;
}
void cDate::Accept()
{
	cout << "\n\n\t Enter Day Month and Year ";
	cin >> dd >> mm >> yy;
}

void cDate::Display()
{
	cout << "\n\t Date    : " << dd << "/" << mm << "/" << yy;
}