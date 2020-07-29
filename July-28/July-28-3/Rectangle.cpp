#include"Rectangle.h"

cRectangle::cRectangle()
{
	length = breadth = 0;
}
cRectangle::cRectangle(int l, int b)
{
	length = l;
	breadth = b;
}
void cRectangle::Accept()
{
	cout << "\n\n\tEnter length and breadth:";
	cin >> length >> breadth;
}
void cRectangle::Display()const
{
	cout << "\n\n\tlength of rectangle:" << length << "\n";
	cout << "\n\n\tBreadth of rectangle:" << breadth << "\n";
}
void cRectangle::CalculateArea()
{
	
	cout << "\n\n\tArea of rectangle:" << (this->length *this-> breadth)<< "\n";
}

void cRectangle::CalculatePerimeter()
{
	cout << "\n\n\tPerimeter of rectangle:" << 2*(this->length *this->breadth) << "\n";
}