#include"Test.h"
cTest::cTest()
{
	a = 1;
	b = 'b';
	var = 30.20;
	strcpy(nm, "");
}
cTest::cTest(int a, char b, float var, const char* nm)
{
	a = a;
	b = b;
	var = var;
	strcpy(this->nm,nm);
}

void cTest::Accept()
{

	cout << "\n\n\t Enter your total marks :";
	cin >> a;
	cout << "\n\n\t Enter your names first letter:";
	cin >> b;
	cout << "\n\n\t Enter your percentage :";
	cin >> var;
	cout << "\n\n\t Enter your name :";
	cin >> nm;
}
void cTest::Display()
{
	//cout << "\n\n\t integer marks:" << a;
	//cout << "\n\t your names 1st letter :" << b;
	//cout << "\n\t your percentage :" << var;
	//cout << "\n\t your name :" << nm;
	cout << "\n\n\t Type Of A : " << typeid(a).name();
	cout << "\n\n\t Type Of B : " << typeid(b).name();
	cout << "\n\n\t Type Of Var : " << typeid(var).name();
	cout << "\n\n\t Type Of str : " << typeid(nm).name();
	//cout << "\n\n\t Type Of str : " << typeid(str[0]).name();
	if (typeid(a) == typeid(b))
		cout << "\n\n\t Same ";
	else
		cout << "\n\n\t Not same ";
}
