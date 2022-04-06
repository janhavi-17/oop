#include <iostream.h>
#include<conio.h>

class Sport{
	public:
	char sport_name[10];
};

class Result : public Sport
{
	public:
	int marks;
};

class Student : public Result
{
	public:
		int roll_no;
		char name[10];

	void display()
{
		cout<<"Name        \t: "	<< name << endl;
		cout<<"Roll No     \t: "	<< roll_no << endl;
		cout<<"Sports Name \t: "	<< sport_name << endl;
		cout<<"Marks       \t: "	<< marks << endl;
	}

};


void main()
{

	Student s1;
	s1.name="xyz";
	s1.roll_no = 12;
	s1.sport_name="abc";
	s1.marks=76;
	s1.display();
getch();
}
