#include"student.h"

Student::Student()
{
	noofsub = 0;
	marks = new int;
}
Student::Student(int no)
{
	noofsub = no;
	marks = new int[no];
}
Student::~Student()
{
	delete[]marks;
}

void Student::Accept()
{
	cout << "\n***************Accept marks******************";
	cout << "\n\n\t Enter mark for"<<" "<<noofsub<<" "<<"Subject :";
	for (int i = 0; i < noofsub; i++)
		cin >> marks[i];
}
void Student::display()
{
	cout << "\n\n*************display marks**************";
	cout << "\n\n\t Number of sub is:" << noofsub;
	for (int i = 0; i < noofsub; i++)
		cout<<"\n"<< marks[i];
}
