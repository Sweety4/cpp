#include"Student.h"
int main()
{
	cStudent obj;
	obj.Accept();
	obj.Display();
	obj.show_result();

	cStudent s2(88,"sweety",55.99);
	s2.Display();
	 
	cout << "\n\n";
	
	return 0;
}