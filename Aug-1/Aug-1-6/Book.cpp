#include "Book.h"
#include <iostream>
using namespace std;

cBooks::cBooks()
{
	bkno = 0;
	name[0] = '\0';
	price = 0.0f;
}

void cBooks::display()
{
	cout << "Book No :: " << bkno << endl;
	cout << "Name    :: " << name << endl;
	cout << "Price   :: " << price << endl;
}

void cBooks::accept()
{

	cout << "Book No :: ";
	cin >> bkno;
	cout << "Name    :: ";
	cin >> name;
	cout << "Price   :: ";
	cin >> price; ;
}
