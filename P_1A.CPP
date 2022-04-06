#include<iostream.h>
#include<conio.h>



class Student 
{
   public:
       int rollno, marks;
       char name;

       void accept(){
           cout<<"Enter your roll no: ";
           cin>>rollno;
           cout<<"Enter your name: ";
           cin>>name;
           cout<<"Enter your marks: ";
           cin>>marks;
       }

       void accept(int rno, char n, int m)
{
           rollno = rno;
           name = n;
           marks = m;
       }



       void display()
{
           cout<<"Name of the Student: "<<name<<endl;
           cout<<"Roll no of Student is: "<<rollno<<endl;
           cout<<"Marks scored by the student is: "<<marks<<endl;
       }
};

void main ()
{
 Student s1,s2; 
   s1.accept();
   s2.accept();
   s1.display();
   s2.display();
   getch();

}
