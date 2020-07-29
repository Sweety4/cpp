#include"Shape.h"
using namespace std;
#ifndef REC_
#define REC_
class cRectangle :public cShape
{
private:
	int length, breadth;
public:
	cRectangle();
	cRectangle(int, int);
	void Display();
	void calculateArea();

};
#endif 
