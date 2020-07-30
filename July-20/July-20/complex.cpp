#include"complex.h"

complex::complex()
{
	real = 0;
	img = 0;
	
}
complex::complex(int r, int i)
{
	real = r;
	img = i;
	
}
void complex::display()const
{

	if (img > 0)
		cout << "\n\n\t complex No: " << real << "+" << img << "i";
	else
		cout << "\n\n\t complex No : " << real << img << "i";
}
complex complex::operator +(complex &obj)
{
	complex temp;
	temp.real = this->real + obj.real;
	temp.img = this->img + obj.img;
	return temp;

}
complex complex::operator -(complex &obj )
{
	complex temp;
	temp.real = this->real -obj.real;
	temp.img = this->img - obj.img;
	return temp;


}
complex complex::operator ++( int no)
{
	complex temp;
	temp.real = ++this->real;
	temp.img = ++this->img ;
	return temp;


}
complex complex::operator ++()
{
	complex temp;
	temp.real = ++this->real;
	temp.img = ++this->img;
	return temp;


}