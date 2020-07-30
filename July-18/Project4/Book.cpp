#include"Book.h"
int Book::cnt;
Book::Book()
{
	BookNo = cnt;
	strcpy(this->B_name, " ");
	price =0;
	cnt++;

}
Book::Book(const char* nm, float p)
{
	BookNo = cnt;
	strcpy(this->B_name,nm);
	price = p;
	cnt++;

}
void Book::Accept()
{
	cout << "\n*****************Accept Book info******************";
	//char nm[20];
	cout << "\n\n\t Enter Book details :";
	cout << "\n\n\t Book Name:" << B_name;
	cin>> B_name;
	//strcpy(this->B_name, nm);
	cout << "\n\t Book Price :" << price;
	cin>> price;
}
void Book::Display()
{
	cout << "\n*************Book Details***************************";
	cout << "\n\n\t Book No :" << BookNo;
	cout << "\n\n\t Book name :" << B_name;
	cout << "\n\n\t Book Price :" << price;

}
void Book::setPrice(float p)
{
	price = p;

}
float Book:: getPrice()
{
	return price;
}