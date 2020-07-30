#include"Employee.h"
void main()
{
	cEmployee e1;
	e1.Display();

	cEmployee e2("Sweety","Latur");
	e2.Display();

	cEmployee e3(e2);
	e3.Display();

	e2.setName("Sunidhi");
	e2.Display();
	
	cout << "\n\n";
	

}