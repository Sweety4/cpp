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
	cout << "\n Constructor ";
}

MyClass::~MyClass()
{
	cout << "\n Destructor ";
}
void main()
{
	MyClass m1;

	cout << "\n\n";
}