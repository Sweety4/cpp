#include"Employee.h"
int main()
{
	int no, i;
	cEmployee *e;

	cout << "\n\n\t Enter No of employee details :";
	cin >> no;

	e = new cEmployee[no];

	for (i = 0; i < no; i++)
		e[i].Accept();

	for (i = 0; i < no; i++)
		e[i].Display();

	delete[]e;

	cout << "\n\n";
		

}