#include"Const.h"
cBook::cBook(int i)
{
	id = i;
}
void cBook::Fun()const
{
	(const_cast<cBook*>(this))->id = 88;
}

int cBook::getId()
{ 
	return id;
}