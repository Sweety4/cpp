#include"Person.h"

cPerson::cPerson(const char* s, const char* a, const char* cty, int p)
{
	name = cString(s);
	Padd = cAddress(a,cty,p);

}
void cPerson::Accept()
{
	name.Accept();
	Padd.Accept();
}
void cPerson::Display()
{
	name.display();
	Padd.Display();

}