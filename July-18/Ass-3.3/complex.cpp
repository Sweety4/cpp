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
void complex::display()const
{
	cout << "\n***********complex No************";
	if (img > 0)
		cout << "\n\n\t complex : " << real << "+" << img << "i";
	else
		cout << "\n\n\t complex : " << real << img <<"i";
}
void complex::show()
{
	cout << "\n\n\t count  :" << cnt;
}
int complex::getReal()
{
	return real;
}
int complex::getImg()
{
	return img;
}
void complex::setReal(int r)
{
	real = r;

}
void complex::setImg(int i)
{
	img = i;
}