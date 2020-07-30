#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
template<class T>
void  Sort(T a[], int size)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
template<class T>
int Search(T a[], int size,T key)
{
	T temp;
	for (int i = 0; i < size; i++)
	{
		if (a[i] == key)
		{
			return 1;
		}
	}
	return -1;
}


template<class T>
void Accept(T a[], int size)
{
	cout << "\n\n\t Enter " << size << " " << typeid(a[0]).name() << "Element";
	for (int i = 0; i < size; i++)
		cin >> a[i];


}
template<class T>
void Display(T a[], int size)
{
	cout << "\n\n\t *********** Array is*************\n\n";
	for (int i = 0; i < size; i++)
	cout <<a[i];
}
int main()
{
	int p, s;
	char a[10];
	char key;
	cout << "\nEnter size :";
	cin >> p;
	cout << "\nEnter Array :";
	Accept<char>(a, p);
	Sort<char>(a, p);
	Display<char>(a, p);
	cout << "\n Enter searching element:";
	cin >> key;
	
	s=Search<char>(a, p, key);
	if (s > 0)
	{
		cout << "\n Element is found";

	}
	else
	{
		cout << "\n Element not found";
	}
	cout << "\n\n";
}
