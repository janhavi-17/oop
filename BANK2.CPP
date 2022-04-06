#include<iostream.h>
#include<conio.h>

class Time
{
   public:
   int hours,minutes,seconds;
   Time(){
       hours = 0;
       minutes = 0;
       seconds = 0;
   }

   Time(int h, int m, int s)
 {
       hours = h;
       minutes = m;
       seconds = s;
   }

   void display()
{
       cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
   }
    



   void add(Time T1 , Time T2)
{
       hours = T1.hours   + T2.hours;
       minutes = T1.minutes + T2.minutes;
       seconds = T1.seconds + T2.seconds;
   }

};

void main()
{
   Time t1(12 , 12, 12), t2(10, 10, 10);
   Time t3;

   cout<<"Clock Format: hh:mm:ss"<<endl;
   t1.display();
   t2.display();
   t3.add(t1,t2);
   t3.display();
   getch();
}

