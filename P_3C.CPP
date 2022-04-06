#include<iostream.h>
#include<conio.h>

class Bank{
   public:
   static float interest;
   int accno, balance;
   char name;

   float ROI()
{
   float  calcInterest = balance * (5.6f/100);
       return calcInterest;
   }

   void display();
};







float Bank :: interest = 5.6f;

void Bank :: display()
{
   cout<<"Customer account Number: IDK00"<< accno   <<endl;
   cout<<"Customer Name: "<< name    <<endl;
   cout<<"Customer Balance: $"<< balance <<endl;
   cout<<"Interest: "<< ROI()  <<endl;
}

void main()
{

   Bank customer1;
   customer1.name    = "Thomas Matthew";
   customer1.accno   = 1234589;
   customer1.balance = 80000;
   customer1.display();
   cout<<"{PRESS ANY KEY TO END THE PROGRAM <--|}"<<endl;
   cin.get();
  getch();
}
