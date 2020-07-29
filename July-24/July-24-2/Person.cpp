#include"Person.h"
cPerson::cPerson()
{
	name = new char[6];
	strcpy(name, " ");
	name[0] = '\0';
	address = new char[8];
	strcpy(address, " ");
	address[0] = '\0';
}
cPerson::cPerson(const char* nm , const char* add)
{
	name = new char[strlen(nm) + 1];
	strcpy(name,nm);
	address = new char[strlen(add) + 1];
	strcpy(address, add);
}
cPerson::~cPerson()
{
	delete[] name;
	delete[] address;
}

void cPerson::Accept()
{
	//cout << "\n*************** Enter Person Details ********************";
	cout << "\n\t Person name :";
	cin >> name;
	cout << "\n\t Person Address :";
	cin >> address;
}
void cPerson::Display()
{
//cout<<"\n=================== Person Details ===============================";
cout << "\n\t Person Name :" << name;
cout << "\n\t Person Address :" << address;
}