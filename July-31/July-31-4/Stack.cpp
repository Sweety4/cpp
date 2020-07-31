#include"Stack.h"
template<class T>
Stack<T>::Stack()
{
	this->size = 5;
	arr = new T[size];
	top = -1;
}
template<class T>
Stack<T>::Stack(int size)
{
	this->size = size;
	arr = new T[size];
	top = -1;
}
template<class T>
void Stack<T>::Push()
{
	T ele;
	cout << "\n\n\t Enter Element ";
	cin >> ele;
	arr[++top] = ele;
}
template<class T>
void Stack<T>::Pop()
{
	T ele = arr[top--];
	cout << "\n\n\t  Element " << ele;
}
template <class T>
void Stack<T>::Display()
{
	cout << "\n\n\t Array Is \n\n";
	for (int i = top; i >= 0; i--)
		cout << "\n\n " << arr[i];

}