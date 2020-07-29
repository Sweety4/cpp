#include"Square.h"
cSquare::cSquare()
{
	side = 0;
}
cSquare::cSquare(int s)
{
	side = s;
}
void cSquare::calculateArea()
{
	int Area;
	Area = side * side;
	cout << "\n\t Area for Square :" << Area;

}
void cSquare::Display()
{

	//cout << "calculateArea for Square :" << Area;
}