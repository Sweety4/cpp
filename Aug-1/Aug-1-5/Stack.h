#include<iostream>
using namespace std;

class StackUnderFlowException :public exception
{
public:
	const char* what()
	{
		return "Stack Is Underflow !!! ";
	}

};

class StackOverFlowException :public exception
{
public:
	const char* what()
	{
		return "Stack Is Overflow !!! ";
	}

};


class Stack
{
	int *arr;
	int top, size;
public:
	Stack();
	Stack(int);
	void Push();
	void Pop();
	void Display();
};


