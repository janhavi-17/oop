#include<iostream.h>
#include<conio.h>

class Depart
{
   private:
   char dept_name, manager_name;
   int dept_id;

   public:
   //parametrized constructor ...
   Depart(int d_id, char d_n, char m_name)
{

       cout<<"Department constructor was invoked."<<endl;
       dept_id = d_id;
       dept_name = d_n;
       manager_name = m_name;


   }

   void display();
};

void Depart :: display()
{

   dept_id<=9?cout<<"Department ID: 0"<<dept_id<<endl:cout<<"Department ID:"<<dept_id<<endl;
   cout<<"Department Name: "<<dept_name<<endl;
   cout<<"Manager Name: "<<manager_name<<endl;

}

void main()
{

   Depart test(1,"Management","Morris");
   test.display();
   getch();

}
