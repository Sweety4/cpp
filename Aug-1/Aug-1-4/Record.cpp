#include"Record.h"
void Student::getdata()
{
	cout << "\n\n\ Enter Roll no and Name ";
	cin >> roll >> name;
}
void Student::update(int rno)
{
	fstream fs("student.dat", ios::binary | ios::in | ios::out);
	int pos, flag = 0;

	while (!fs.eof())
	{
		pos = fs.tellg();
		fs.read((char*)this, sizeof(Student));
		if (rno == roll)
		{
			flag = 1;
			getdata();
			// placing the put(writing) pointer 
			// at the starting of the  record 
			fs.seekp(pos);
			// writing the object to the file 
			fs.write((char*)this, sizeof(Student));

			break;
		}

	}
	fs.close();

	if (flag == 1)
		cout << "\nrecord successfully modified \n";
	else
		cout << "\nrecord not found \n";
}
void Student::putdata()
{
	cout << "\n\n\t" << roll << "\t" << name;
}
void Student::Delete(int rno)
{

	int pos, flag = 0;

	ifstream ifs;
	ifs.open("student.dat", ios::in | ios::binary);

	ofstream ofs;
	ofs.open("temp.dat", ios::out | ios::binary);

	while (!ifs.eof())
	{

		ifs.read((char*)this, sizeof(Student));
		// comparing the roll no with 
		// roll no of record to be deleted 
		if (rno == roll)
		{
			flag = 1;
			cout << "The deleted record is \n";
			putdata();
		}
		else {
			// copy the record of "student" file to "temp" file 
			ofs.write((char*)this, sizeof(Student));
		}

	}

	ofs.close();
	ifs.close();

	// delete the old file 
	remove("student.dat");

	// rename new file to the older file 
	rename("temp.dat", "student.dat");

	if (flag == 1)
		cout << "\nrecord successfully deleted \n";
	else
		cout << "\nrecord not found \n";
}


void Student::Add()
{
	ofstream fout("student.dat", ios::binary | ios::app);
	cout << "\n\n\t Enter Roll No and Name ";
	cin >> roll >> name;
	fout.write((char*)this, sizeof(Student));
	fout.close();
}
void Student::Display()
{
	ifstream fin("student.dat", ios::binary);

	while (fin)
	{
		if (fin)
		{

			fin.read((char*)this, sizeof(Student));
			cout << "\n\t" << roll << "\t" << name;
		}
	}
	fin.close();
}