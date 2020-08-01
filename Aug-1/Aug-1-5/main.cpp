#include"Stack.h"


void main()
{
	Stack s1(3);
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
			try
			{
				s1.Push();
			}
			catch (StackOverFlowException &ex)
			{
				cout << "\n\t" << ex.what();
			}
			break;
		case 2:
			try {
				s1.Pop();
			}
			catch (StackUnderFlowException &ex)
			{
				cout << "\n\t" << ex.what();
			}
			break;
		case 3:
			s1.Display();
			break;
		}
	} while (ch != 0);
	cout << "\n\n\n";
}