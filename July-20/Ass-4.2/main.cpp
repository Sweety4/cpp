#include"Box.h"
int main()
{
	Box b1(1);
	Box b2(3);
	Box b3;
	//Box = b1 > b2;
	

	int i= b1 > b2;
	if ( i > 0)
	{
		cout << "Box 1 is greater:";
		b1.Display();
	}
	else
	{
		cout << "Box 2 is greater:";
		b2.Display();
	}
	

	//b3.Display();
	//b1.Accept(13);
	//b1.Display();
	cout << "\n\n";
	return 0;
}