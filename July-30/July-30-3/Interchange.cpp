#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T>
void swap1(T a, T b)
{
	T temp;
	cout << "\n\n\t Before Swap :" << a << "\t" << b;
	temp = a;
	a = b;
	b = temp;
	cout << "\n\n\t After Swap :" << a << "\t" << b;
}
template<class T>
void swap2(T a, T i1, T b, T i2)
{
	T temp1, temp2, temp3, temp4;
	cout << "\n\t Before swap :" << a << "+" << i1 << "i\t" << b << "+" << i2 << "i\t";

	temp1 = a;
	temp2 = i1;
	temp3 = b;
	temp4 = i2;

	a = temp3;
	i1 = temp4;
	b = temp1;
	i2 = temp2;
	cout << "\n\t After swap :" << a << "+" << i1 << "i\t" << b << "+" << i2 << "i\t";
}
	
void main()
{
		int i = 30, j = 20;
		float a = 45.38f, b = 14.46f;
		double k = 19.94, l = 19.88;
		swap1(i, j);
		swap1(a, b);
		swap1(k, l);
		swap2(30, 40, 50, 60);
	
}