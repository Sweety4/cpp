#include<fstream>
#include<iostream>
using namespace std;

void main()
{
	ofstream fout("Abc.txt");
	fout << "sweety";
	//fout.close();

	fout << "\n\n";
	for (int i = 65; i <= 90; i++)
	fout.put((char)i);
	fout.close();
	cout << "\n\n";
}