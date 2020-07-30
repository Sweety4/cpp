#include"Person.h"
Person::Person()
{
	strcpy(this->name, " ");
	age = 22;
	strcpy(this->city, " ");

}
Person::Person(char* nm,int ag, char* cty)
{
	strcpy(this->name, nm);
	age = ag;
	strcpy(this->city, cty);
}
void Person::Display()
{
	cout <<" \n**************Person Detail************";
	cout << "\n\tName:" << name 
		<< "\n\t" << "Age:" << age 
		<< "\n\t" << "City:" << city;
}

