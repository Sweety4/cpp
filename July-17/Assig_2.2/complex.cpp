#include"complex.h"
int complex::cnt;
complex::complex()
{
	real = 0;
	img = 0;
	cnt++;
}
complex::complex(int r, int i)
{
	real = r;
	img = i;
	cnt++;
}
void complex::display()
{
	cout << "\n***********complex No************";
	if (img > 0)
		cout << "\n\n\t complex : " << real << "+" << img << "i";
	else
		cout << "\n\t complex : " << real << img << endl;
}
void complex::show()
{
	cout << "\n\n\t count  :" << cnt;
}