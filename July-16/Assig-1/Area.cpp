#include"Area.h"
cArea::cArea()
{
	length = 3;
	breadth = 6;
}
cArea::cArea(float len, float bre)
{
	length = len;
	breadth = bre;
}
void cArea::Display()
{
	cout << "\n\n Area is :" << calculateArea()<<endl;
}
float cArea::calculateArea()
{
	cout << "\n\n*************Calculated Area**************";
	float Area = length * breadth;
	return Area;
}