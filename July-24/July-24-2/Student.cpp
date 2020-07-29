#include"Student.h"
cStudent::cStudent()
{
	rollno = 88;
	college_name = new char[4];
	strcpy(college_name, " ");
	college_name[0] = '\0';

}
cStudent::cStudent(const char* nm, const char* add, int rn, const char* clg_nm):cPerson(nm,add)
{
	rollno = rn;
	college_name = new char[strlen(clg_nm)+1];
	strcpy(college_name,clg_nm);
	
}
cStudent::~cStudent()
{
	delete[] college_name;
}
void cStudent::Accept()
{
	cout << "\n****************************** Enter Student Details ********************";
	cout << "\n\t Enter Roll No. :";
	cin >> rollno;
	cPerson::Accept();
	cout << "\n\t Enter college Name :";
	cin >> college_name;
	delete[] college_name;
	college_name = new char[strlen(college_name) + 1];
	strcpy(college_name, college_name);
	
}
void cStudent::Display()
{
	cout << "\n****************STudent Details***************";
	cout << "\nStudent Roll No."<<rollno;
	cPerson::Display();

	cout << "\n\t collage name :" << college_name;

}