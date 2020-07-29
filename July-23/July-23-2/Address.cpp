#include"Address.h"
cAddress::cAddress()
{
	strcpy(Area, " ");
	strcpy(city, "NA");
	pin = 1440;

}
cAddress::cAddress(const char* a, const char* cty, int p)
{
	strcpy(Area, a);
	strcpy(city, cty);
	pin = p;

}
void cAddress::Accept()
{
	//cout << "\n********Enter Address detail***************";
	cout << "\n\t Enter Area :";
	cin >> Area;
	cout << "\n\t Enter city :";
	cin >> city;
	cout << "\n\t Enter pin :"; 
	cin >> pin;

}
void cAddress::Display()
{
	cout << "\n\n\t Area:" << Area;
	cout << "\n\n\t city:" << city;
	cout << "\n\n\t pin:" << pin;

}
