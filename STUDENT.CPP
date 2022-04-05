#include<iostream.h>
#include<conio.h>
class student
{
    private:
    int r_no;
    char name[10];
    int marks;
    public:
    void get()
    {
        cout<<"Enter your name, r_no, marks"<<endl;
	cin>>name>>r_no>>marks;
    }
    void put()
    {
        cout<<"\n Roll No:"<<r_no;
        cout<<"Name:"<<name;
        cout<<"marks:"<<marks;
    }

};
void main()
{
    student s;
    s.get();
    s.put();
    getch();
}