#include"Student.h"
cStudent::cStudent()
{
	rollNo = 0;
	strcpy(name, " ");
	percentage = 0;

}
cStudent::cStudent(int rn,const char nm[], float per)
{
	rollNo=rn;
	strcpy(name, nm);
    percentage=per;

}
void cStudent::Accept()
{
	cout << "\n***************Accept data*************";
	cout << "\n\n\t Enter rollNo:";
	cin >> rollNo;
	cout << "\n\t Enter a name :";
	cin >> name;
	cout << "\n\t Enter percentage:";
	cin >> percentage;

	
}
void cStudent::Display()
{
	cout << "\n*********Display Accepted DAta***********";
	cout << "\n\n\tRollNo:" << rollNo << "\n\n\t" << "Name:" << name << "\n\n\t" << "Percentage:" << percentage;

}
void cStudent::show_result()
{
	cout << "\n\n**************Show Result**************";
	int m1,m2,m3,m4,perc;
	cout << "\n\n Enter marks in four sub:";

	cin >> m1 >> m2 >> m3 >> m4;
	perc = (m1 + m2 + m3 + m4) / 4;
	//int perc=0;

	if ((perc >=35 )&& (perc <= 50))
	{
		cout << "\n\tResult is : pass";
	}
	else if ((perc >= 50) && (perc <= 60))
	{
		cout << "\n\tResult is : Pass with second division";
	}
   else if ((perc >= 60) && (perc <= 75) &&(perc>=75))
	{
		cout << "\n\tResult is : Pass with first class";
	}
   else
	{
		cout << "\n\tResult is: Distinction";
    }
}   



