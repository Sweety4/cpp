#include"Employee.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	eno = cnt;
	strcpy(name,"");
	sal = 00;

}
cEmployee::cEmployee(const char* nm, int s)
{
	cnt++;
	eno = cnt;
	strcpy(name, nm);
	sal = s;
}
void cEmployee::Accept()
{
	int n=0;
	cout << "\n Enter number of employee :";
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		cout << "\n\n\t Employee no :" << eno;
		cout << "\n\t Enter employee name :";
		cin >> name;
		cout << "\n\t Enter employee salary:";
		cin >> sal;
    }
}
void cEmployee :: Display()
{

	cout << "\n*********** Employee Details ***************";
	int n=2;
	cout << "\n Number of Employee :" << n;
	for (int i = 0; i <=n; i++)
	{
		cout << "\n\n\t" << eno << "\t" << name << "\t" << sal;
	}
}