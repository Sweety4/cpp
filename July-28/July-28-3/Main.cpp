#include"Rectangle.h"
#include"Triangle.h"
void main()
{
	cShape *s;
	s= new cRectangle();
	s->Display();
	s->CalculateArea();
	s->CalculatePerimeter();
	delete s;

	s= new cTriangle();
	s->Display();
	s->CalculateArea();
	s->CalculatePerimeter();
	delete s;

}