#include"Space.h"

void main()
{
	Shape::Circle::CalculateCircum(10);
	Shape::Circle::CalculateAreaofCircle(10);

	Shape::Rectangle::CalculateArea(3,5);
	Shape::Rectangle::PerimeterOfRectangle(4,7);

	Shape::Square::CalculateAreaOfSquare(2);
	Shape::Square::PerimeterOfSquare(4);

	cout << "\n\n";
}