#include"Shape.h"

#ifndef _RE_
#define _RE_

class cRectangle :public cShape
{
	int length, breadth;
public:
	cRectangle();
	cRectangle(int, int);
	void Accept();
	void Display()const;
	void CalculateArea();
	void CalculatePerimeter();
};
#endif 

