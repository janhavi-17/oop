#include<iostream.h>
#include<conio.h>

class Science
{
	public:
	int sub_id;
	char sub_name[10];

};

class Commerce
{
	public:
	int sub_id;
	char sub_name[10];
};


class Student: public Science, public Commerce{
	public:
	char name[10];
	long int roll_no;
	void display();
};





void Student :: display()
{
	roll_no<=9?cout<<"Roll number of the student : \t"<<"0"<<endl;

	cout<<"Roll number of the student : \t"<<endl;
	cout<<"Name of the student : \t"<<endl;
	cout<<"Subject ID: \t"<<"SUB00"<<sub_id<<endl;
	cout<<"Subject Name: \t"<<sub_name<<endl;

}

void main()
{

	Student s1;

	s1.name = "Harold";
	s1.roll_no = 89;

	s1.sub_id = 546;
	s1.sub_name = "Python";

	s1.display();
        getch();

} 
