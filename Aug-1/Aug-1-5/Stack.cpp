#include"Stack.h"
Stack::Stack()
{
	this->size = 5;
	arr = new int[size];
	top = -1;
}


Stack::Stack(int size)
{
	this->size = size;
	arr = new int[size];
	top = -1;
}

void Stack::Push()
{
	int  ele;
	if (top == size - 1)
	{
		StackOverFlowException ex;
		throw ex;
	}
	cout << "\n\n\t Enter Element ";
	cin >> ele;
	arr[++top] = ele;
}
void Stack::Pop()
{
	if (top == -1)
	{
		StackUnderFlowException ex;
		throw ex;
	}
	int ele = arr[top--];
	cout << "\n\n\t  Element " << ele;
}

void Stack::Display()
{
	cout << "\n\n\t Array Is \n\n";
	for (int i = top; i >= 0; i--)
		cout << "\n\n " << arr[i];

}