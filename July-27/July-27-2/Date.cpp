#include"Date.h"
cDate::cDate()
{ 
	day = 27;
	month = 07;
	year = 2020;
	
}
cDate::cDate(int d, int m, int y)
{
	day = d;
	month =m;
	year = y;
	


}
void cDate::Accept()
{
	cout << "\nEnter day month and year:";
	cin >> day >> month >> year;

}
void cDate::Display()
{
	cout << "\n Date of joinning :" << day << "/" << month << "/" << year;
}