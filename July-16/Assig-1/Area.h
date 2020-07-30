#pragma once
#include<iostream>
using namespace std;
class cArea
{
private:
	float length, breadth;//data members
public:
	//constructors
	cArea();      
	cArea(float,float);

	//display function
	void Display();

	//calculate function
	float calculateArea();
};
