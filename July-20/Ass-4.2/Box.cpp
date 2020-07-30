#include"Box.h"
Box::Box()
{
	this->capacity = 0;

}
Box::Box(int c)
{
	this->capacity = c;

}

void Box::Accept(int obj)
{
	cout << "***************Accept Details****************:";
	cout << "\n\t Enter capacity :";
	cin >> capacity;


}
void Box:: Display()
{
	cout << "\n\n\t Capacity:"<<capacity;

}
int Box:: operator >(Box &obj)
{
	if (this->capacity > obj.capacity)
		return 1;
	else
		return 0;
}