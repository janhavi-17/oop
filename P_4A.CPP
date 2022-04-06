#include<iostream.h>
#include<conio.h>
class Student
{
	public: 
		int rollno, standard;
		char name; 
};
class Result : public Student
{
	public:
		int m1,m2,m3;
		void display();	
		Result()
{
			cout<<"Enter your Name: ";
			cin>>name;
			cout<<"Enter your class: ";
			cin>>standard;
			cout<<"Enter your rollno: ";
			cin>>rollno;
			cout<<"Enter your Marks for subject 1: ";
			cin>>m1;
			cout<<"Enter your Marks for subject 2: ";
			cin>>m2;
			cout<<"Enter your Marks for subject 3: ";
			cin>>m3;
										}
											};

void Result :: display()
{
				cout<<"Name: "<<name<<endl;
				cout<<"class: "<<standard<<endl;
				cout<<"rollno: "<<rollno<<endl;
				cout<<"Marks for subject 1: "<<m1<<endl;
				cout<<"Marks for subject 2: "<<m2<<endl;
				cout<<"Marks for subject 3: "<<m3<<endl;
}

void main()
{
				Result r1;
				r1.display();
                                           getch();

}

