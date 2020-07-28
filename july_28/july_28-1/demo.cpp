#include<iostream>
using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
	cout << "\n This is constructor ";
}

MyClass::~MyClass()
{
	cout << "\n This is Destructor ";
}
void main()
{
	MyClass m1;

	cout << "\n\n";
}