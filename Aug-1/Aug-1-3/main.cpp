#include"Employee.h"

void main()
{
	cEmployee e1;
	int ch;
	do
	{
		cout << "\n\n\t\t1. Add Record\
                \n\t\t2. Display\
                 \n\t\t0.Exit\
                   \n\t Enter your choice :";
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			e1.Accept();
			ofstream fout("Employee.dat", ios::binary | ios::app);
			fout.write((char*)&e1, sizeof(cEmployee));
			fout.close();
		}
			break;
		case 2:
		{
			ifstream fin("Employee.dat", ios::binary );
			fin.read((char*)&e1, sizeof(cEmployee));
			fin.close();
			e1.Display();
		}
			break;
		default:
			cout << "\n\t wrong choice !!!";
		}
	} while (ch != 0);
}