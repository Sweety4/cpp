#include"Rectangle.h"
cRectangle::cRectangle()
{
	length = 0;
	breadth = 0;
}

cRectangle::cRectangle(int l, int b)
{
	length = l;
	breadth = b;

}
void cRectangle::Display()
{
	//cout << "Calculated Area :"<<calculateArea();
}
void cRectangle::calculateArea()
{
	int Area;
	Area = length * breadth;
	cout << "\n\t Area of Rectangle :" << Area;

}

