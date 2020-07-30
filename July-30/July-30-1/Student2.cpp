#include"Student2.h"
Seeta::cStudent2::cStudent2()
{
	rollno = 99;
	height = 158;
	weight = 48;

}
Seeta::cStudent2::cStudent2(int rn, int h, int w)
{
	rollno = rn;
	height = h;
	weight = w;
}
void Seeta::cStudent2::Accept()
{
	cout << "\n************Enter Student2 Detail*****************";
	cout << "\n\n\t Enter rollno :";
	cin >> rollno;
	cout << "\n\t Enter height  :";
	cin >> height;
	cout << "\n\t Enter weight :";
	cin >> weight;
}
void Seeta::cStudent2::Display()
{
	cout << "\n************Student2 Detail************************";
	cout << "\n\n\t Rollno :" << rollno;
	cout << "\n\t Height   :" << height;
	cout << "\n\t Weight   :" << weight;
}