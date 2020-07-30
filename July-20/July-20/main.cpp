#include"complex.h"
int main()
{
	complex c1(2,3);
	complex c2(4,5);
	complex c3,c4;
	cout << "\n*************operator Add(+) *********************";
	c3 = c1 + c2;
	c3.display();
	cout << "\n************* operator Sub(-) *******************";

	c3 = c2 - c1;
	c3.display();
	cout << "\n************* operator pre(++) **********************";
	c3 = c1++;
	c3.display();
	cout << "\n************* operator post(++)**********************";
	c4 = ++c2;
	//c3.display();
	c4.display();
	

	//c1.show();
	//c2.show();
	cout << "\n\n";
	return 0;
}