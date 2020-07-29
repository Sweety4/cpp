#include<iostream>
using namespace std;
#ifndef Book_
#define Book_
class cBook
{
private:
	int id;
public:
	//constructor
	cBook(int);

	//const function
	void Fun()const;

	//getter method
	int getId();

};
#endif  // !Book_