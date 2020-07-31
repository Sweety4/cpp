#include"MyArray.cpp"
void main()
{
	MyArray<int> a(5);
	a.Accept();
	cout << "\n\n\t  ************ Array Is **********\n\n";
	cout << a;
	cout << "\n\n\t ********** Reverse Array ********** \n\n";
	a.Reverse();
	a.Display();

	cout << "\n\n\t ********** Sorted Array ********** \n\n";
	a.Sort();
	a.Display();
	MyArray<int> a1;
	cout << "\n\n\t ********** Copyed Array ********** \n\n";

	a1.Copy(a);
	a1.Display();

	cout << "\n\n\n";


}