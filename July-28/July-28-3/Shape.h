#include<iostream>
using namespace std;
#ifndef SHAPE_
#define SHAPE_
class cShape
{
protected:
	int length, width, height;
public:
	virtual void CalculateArea();
	virtual void CalculatePerimeter() ;
	virtual void Display();

};
#endif
