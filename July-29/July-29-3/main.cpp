#include"Const.h"

int main()
{
	cBook b(99);
	cout << "\nOld roll number: " << b.getId() << endl;

	b.Fun();

	cout << "\nNew roll number: " << b.getId() << endl;
	cout << "\n\n";
	return 0;
}