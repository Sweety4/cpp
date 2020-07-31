#include<iostream>
using namespace std;

void Search(int a[], int size, int ele)
{
	int found = 0;
	try
	{
		for (int i = 0; i < size; i++)
		{
			if (a[i] == ele)
			{
				found = 1;
				break;
			}

		}
		if (found == 0)
			throw 100;
	}
	catch (int n)
	{
		cout <<"Array Element not Availabe";
	}

}

void Print(int a[], int size, int pos)
{
	try
	{
		if (pos > size)
			throw 101;
		cout <<"\n\n\t Element : " << a[pos];
	}
	catch (int n)
	{
		cout <<"Array Out of Bound";
	}
}
void main()
{
	int arr[4] = { 32,54,23,76 };
	int no;
	cout << "\n\n\t ********* Array Is ********* \n\n";
	for (int i = 0; i < 4; i++)
	cout << "   " << arr[i];
	cout << "\n\n\t Enter Posision to print value :";
	cin >> no;
	Print(arr, 4, no);
	cout << "\n\n\t Enter element to Search :";
	cin >> no;
	Search(arr, 4, no);

	cout << "\n\n";

}