#include"Stack.cpp"
#include"Employee.h"
#include"String.h"

void main()
{
	{
		Stack<Employee>s1(3);
		int ch;
		do
		{
			cout << "\n\n\t1. Push\
                 \n\t2. Pop\
                 \n\t3. Display\
                 \n\t0. Exit\
                 \n\t Enter Your choice ";
			cin >> ch;
			switch (ch)
			{
			case 1:
				s1.Push();
				break;
			case 2:
				s1.Pop();
				break;
			case 3:
				s1.Display();
				break;
			}
		} while (ch != 0);
		cout << "\n\n\n";
	}
	{
		Stack<cString> s1(3);
		int ch;
		do
		{
			cout << "\n\n\t1. Push\
                 \n\t2. Pop\
                 \n\t3. Display\
                 \n\t0. Exit\
                 \n\t Enter Your choice ";
			cin >> ch;
			switch (ch)
			{
			case 1:
				s1.Push();
				break;
			case 2:
				s1.Pop();
				break;
			case 3:
				s1.Display();
				break;
			}
		} while (ch != 0);
		cout << "\n\n\n";
	}
}