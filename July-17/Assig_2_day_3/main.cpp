#include"Person.h"
int main()
{
	Person p1;
	p1.Display();
	char name[20], city[10];
	int age;
	cout << "\n\n\t Enter Name:";
	cin >> name;
	cout << "\n\t Enter Age :";
	cin >> age;
	cout << "\n\t Enter city :";
	cin >> city;
	Person p2(name, age, city);
	p2.Display();
	cout << "\n\n";
	return 0;
}