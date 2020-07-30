#include"String.h"
void main()
{
	cString s1;
	cString s2("Sweety");

	cString s3(s2);

	cString s4 = s2;
	cString s5;
	s5.setStr("Sweety Jangale");

	s1.display();
	s2.display();
	s3.display();
	s4.display();
	s5.display();

	cout << "\n\n";

}