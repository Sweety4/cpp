#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

namespace Sweety
{
	class cStudent1
	{
	private:
		int rollno;
		char name[20];
		float per;
	public:
		cStudent1();
		cStudent1(int, const char*, float);
		void Accept();
		void Display();
		
    };
	
}
