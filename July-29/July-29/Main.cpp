#include"Test.h"
#include<typeinfo.h>
int main()
{
	cTest t1;
	t1.Display();
	cout << "\n\n\t Type Of obj : " << typeid(t1).name();

	cout << "\n\n";
}