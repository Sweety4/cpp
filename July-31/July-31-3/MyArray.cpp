#include"MyArray.h"
template<class T>
MyArray<T>::MyArray()
{
	size = 5;
	arr = new T[size];
}
template<class T>
MyArray<T>::MyArray(int sz)
{
	size = sz;
	arr = new T[size];
}
template<class T>
void MyArray<T>::Display()
{
	cout << "\n\n";
	for (int i = 0; i <size; i++)
		cout << "   " << arr[i];
}
template<class T>
void MyArray<T>::Accept()
{
	cout << "\n\n\t Enter " << size << " " << typeid(arr[0]).name() << " Elements :";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}
template<class T>
void MyArray<T>::Copy(MyArray &obj)
{
	this->size = obj.size;
	this->arr = new T[this->size];
	for (int i = 0; i < size; i++)
		this->arr[i] = obj.arr[i];
}
template<class T>
void MyArray<T>::Reverse()
{
	int i, j, temp;
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
}
template<class T>
void MyArray<T>::Sort()
{
	int i, j, temp;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j > 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
