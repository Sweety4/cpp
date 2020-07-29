#include"Student.h"
int cStudent::cnt;
cStudent::cStudent()
{
	cnt++;
	rollno = cnt;
	strcpy(name, " ");
}
cStudent::cStudent(const char* nm,int d,int m,int y)
{
	cnt++;
	rollno = cnt;
	strcpy(name, nm);
	DOA = cDate(d, m, y);
}
void cStudent::display()
{
	cout << "\n***************Student Detsils******************";
	cout << "\n\t Roll No :" << rollno << "\n\t Name :" << name;
	DOA.display();
}
void cStudent::Accept()
{
	cout << "\n***************Enter Student info******************";
	cout << "\n\t Roll No :" << rollno;
	cout<< "\n\t Name :";
	cin >> name;
	DOA.Accept();

}



