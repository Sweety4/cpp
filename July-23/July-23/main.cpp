#include"Student.h"
int main()
{
	cStudent s1;
	cStudent s2("Sweety", 04 , 04 , 1998);
	s1.display();
	s2.display();
	int no, i;
	cStudent *s;
	cout << "\n\n\t Enter number of Student :";
	cin >> no;
	s = new cStudent[no];
	for (i = 0; i < no; i++)
		s[i].Accept();
	for (i = 0; i < no; i++)
		s[i].display();

	delete[]s;
	cout << "\n\n";

 }