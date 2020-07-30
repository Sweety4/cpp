#include"Book.h"
int main()
{
	Book b[4];
	Book b1("let us c", 99.00);
	b1.Display();
		int maxprice = 0, i;

		for (i = 0; i < 4; i++)
			b[i].Accept();
		
		for (i = 0; i < 4; i++)
		{
			b[i].Display();
			if (b[i].getPrice() > maxprice)
				maxprice = b[i].getPrice();
		}
		cout << "\n\n\t Max Price :" << maxprice;
		cout << "\n\n";
		return 0;
}