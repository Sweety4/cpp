#include"Cdate.h"
int main()
{
	cDate d1;
	d1.display();

	cDate d2(04,04,1998);
	d2.display();


	d1.setDay(7);
	d1.display();

	d1.setMonth(6);
	d1.display();

	d1.setYear(2019);
	d1.display();

	cDate obj;
	obj.Accept();
	obj.display();


	cout << "\n\n";
}