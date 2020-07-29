#include"Shape.h"

#ifndef _SQ_
#define _SQ_

class cTriangle :public cShape
{
public:
	cTriangle();
	cTriangle(int,int,int);

	void Accept();
	void Display()const;

	void CalculateArea();
	void CalculatePerimeter();
};
#endif 

