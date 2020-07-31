#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
	int *arr;
	int size;
public:
	MyArray();
	MyArray(int);
	void Display();
	void Accept();
	void Copy(MyArray&);
	void Reverse();
	void Sort();
	friend ostream& operator<<(ostream &out, MyArray &obj)
	{
		for (int i = 0; i < obj.size; i++)
			out << "   " << obj.arr[i];
		return out;
	}
	friend istream& operator>>(istream &in, MyArray &obj)
	{
		cout << "\n\n\t Enter " << obj.size << " " << typeid(obj.arr[0]).name() << " Elements : ";
		for (int i = 0; i < obj.size; i++)
			in >> obj.arr[i];
		return in;
	}
};
