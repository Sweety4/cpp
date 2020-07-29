#include"Shape.h"
class cSquare :public cShape

{
private:
	int side;
public:
	cSquare();
	cSquare(int);
    void calculateArea();
	void Display();
};

