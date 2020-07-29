#include"Address.h"

cAddress::cAddress()
{
	area = new char[1];
	area[0] = '\0';
	city = new char[1];
	city[0] = '\0';
	pin = 0;
}
cAddress::cAddress(const char *a, const char *c, int p)
{
	area = new char[strlen(a) + 1];
	strcpy(area, a);
	city = new char[strlen(c) + 1];
	strcpy(city, c);
	pin = p;
}
void cAddress::accept()
{
	char ar[10], ct[10];
	cout << "Enter area";
	cin >> ar;
	area = new char[strlen(ar) + 1];
	strcpy(area, ar);
	cout << "Enter city";
	cin >> ct;
	city = new char[strlen(ct) + 1];
	strcpy(city, ct);
	cout << "Enter pin";
	cin >> pin;
}
void cAddress::display()const
{
	cout << "Area :" << area << "\n";
	cout << "City :" << city << "\n";
	cout << "Pin  :" << pin << "\n";
}
cAddress::~cAddress()
{
	delete[] area;
	delete[] city;
}