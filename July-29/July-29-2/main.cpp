#include"Programmer.h"
#include"DataBaseAdministrator.h"
#include"SystemAdministrator.h"
void check(cEmployee *e[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "\n\tname of class is :" << typeid(*e[i]).name();


		e[i]->Display();

		if (typeid(*e[i]) == typeid(cProgrammer))
			dynamic_cast<cProgrammer*>(e[i])->Codding();

		else if (typeid(*e[i]) == typeid(cDBA))
			dynamic_cast<cDBA*>(e[i])->CreateDataBase();

		else if (typeid(*e[i]) == typeid(cSyA))
			dynamic_cast<cSyA*>(e[i])->SystemUpdate();

		else
		{
			cout << "\n\t Error";
		}
	}

}
int main()
{
	cEmployee *e[5];
	e[0] = new cProgrammer();
	e[1] = new cDBA();
	e[2] = new cSyA();
	e[3] = new cProgrammer();
	e[4] = new cDBA();
	check(e, 5);


	cout << "\n\n\n";
}