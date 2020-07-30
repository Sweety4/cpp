#include"complex.h"
int main()
{
	complex c1;
	complex c2(2,3);
	complex c3(3, -5);
	c1.display();
	//c1.show();
	c2.display();
	c3.display();
	c2.show();
	//c1.show();
	//c2.show();
	cout << "\n\n";
	return 0;
}