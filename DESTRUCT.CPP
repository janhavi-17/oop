#include<iostream.h>
#include<conio.h>
class Employee
{
   public:
       int eno, salary;
       char name;

   Employee()
{
       cout<<"Enter your employee number: ";
       cin>>eno;

       cout<<"Enter your name: ";
       cin>>name;

       cout<<"Enter your salary: ";
       cin>>salary;
   }
   Employee(int id, char n, int s)
{
       eno = id;
       name = n;
       salary = s;
   }

   void display();
};

void Employee :: display()
{
   cout<<endl;
   eno<=9?cout<<"Employee ID: 0"<<eno<<endl:cout<<"Employee ID: "<<eno<<endl;

   cout<<"Name: "<<name<<endl;
   cout<<"Employee Salary: $"<<salary<<endl;
   cout<<endl;
}
void main()
{
   Employee e1;
   e1.display();
   Employee e2(2, "Blake", 180000);
   e2.display();
   getch();
}
