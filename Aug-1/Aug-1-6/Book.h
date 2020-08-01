#include <iostream>
#include <fstream>
using namespace std;

class cBooks
{
	int bkno;
	char name[50];
	float price;
public:
	void accept();
	void display();
	cBooks();
};

