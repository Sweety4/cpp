#include"Rectangle.h"
#include"Square.h"

int main()
{
	/*cRectangle *r;
	r = new cRectangle;
	r->calculateArea();

	cSquare *s;
	s = new cSquare;
	s->calculateArea();*/

	cRectangle r(30, 20);
	r.calculateArea();
	cSquare s(10);
	s.calculateArea();

	cout << "\n\n";

}
