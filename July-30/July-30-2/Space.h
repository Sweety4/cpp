#include<iostream>
using namespace std;

namespace Shape
{
	namespace Circle
	{
		void CalculateCircum(int r)
		{
			cout << "\n\n\t Circumference of Circle :" << 2 * 3.14*r;
		}
		void CalculateAreaofCircle(int r)
		{
			cout << "\n\n\t Area of Citrcle :" << 3.14*r*r;
		}
	}
	namespace Rectangle
	{
		void CalculateArea(int w, int h)
		{
			cout << "\n\n\t Area of Rectangle:" << w * h;

		}
		void PerimeterOfRectangle(int l, int b)
		{
			cout << "\n\n\t Perimeter of Rectangle :" << 2 * (l + b);
		}
    }

	namespace Square
	{
		void  CalculateAreaOfSquare(int side)
		{
			cout << "\n\n\t Area of Square :" << side * side;
		}
		void PerimeterOfSquare(int s)
		{
			cout << "\n\n\t Perimeter Of Square:" << 4 * s;
		}
	}
}
