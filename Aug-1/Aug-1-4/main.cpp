#include"Record.h"
void main()
{
	Student s;
	int ch, no;
	do
	{
		cout << "\n\n\t 1. Add\
			     \n\t 2. Display\
                 \n\t 3. Modify \
                \n\t 4. Delete\
                  \n\t 0. Exit\
				\n\nEnter Your chocie ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			s.Add();
			break;
		case 2:
			s.Display();
			break;
		case 3:
			cout << "\n\n\t enter Roll no TO Modify ";
			cin >> no;
			s.update(no);
		case 4:
			cout << "\n\n\t enter Roll no TO Modify ";
			cin >> no;
			s.Delete(no);

		}
	} while (ch != 0);
	cout << "\n\n\n";
}