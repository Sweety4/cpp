#include"Triangle.h"

cTriangle::cTriangle()
{
	length, width, height = 0;
}
cTriangle::cTriangle(int len ,int wid,int hei)
{

	length = len;
	width = wid;
	height = hei;
}
void cTriangle::Accept()
{
	cout << "\n\n\tEnter length:";
	cin >> length;
	cout << "\n\n\tEnter Width:";
	cin >> width;
	cout << "\n\n\tEnter height:";
	cin >> height;
}
void cTriangle::Display()const
{
	cout << "\n\n\t length of Triangle:" << length << "\n";
	cout << "\n\n\t width of Triangle:" << width << "\n";
	cout << "\n\n\t height of Triangle:" << height << "\n";
}
void cTriangle::CalculateArea()
{
	
	cout << "\n\n\tArea of Triangle:" << (this->width)*(this->height)/2<< "\n";

}
void cTriangle::CalculatePerimeter()
{
	cout << "\n\n\tArea of Triangle:" << (this->length + this->width + this->height) << "\n";
}