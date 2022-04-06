#include<iostream.h>
#include<conio.h>
class employee
{
   public:
       int eno, salary;
       char name[40];

   void get()
{
       cout<<"Enter your employee number: ";
       cin>>eno;

       cout<<"Enter your name: ";
       cin>>name;

       cout<<"Enter your salary: ";
       cin>>salary;
   }
   void display();
};

void employee::display()
{
   cout<<endl;
   eno<=9?cout<<"Employee ID: 0"<<eno<<endl:cout<<"Employee ID: "<<eno<<endl;

   cout<<"Name: "<<name<<endl;
   cout<<"Employee Salary: $"<<salary<<endl;
   cout<<endl;
}

void main()
{

   employee e1;
   e1.get();
   e1.display();

   employee e2;
   e2.get();
   e2.display();
}
