#include"Student.h"
void main()
{
	cStudent s1;
	s1.display();
	cStudent s2("sweety");
	s2.display();

	cStudent s3(s2);
	s3.display();

	s2.setName("seeta");
	s2.display();

	cStudent s4=s2;
	s4.display();
	cout << "\n\n";


}