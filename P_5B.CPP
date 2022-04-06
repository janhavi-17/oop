#include<iostream.h>
#include<conio.h>
class Clock
{
	public:
	int hours, minutes, seconds;
	Clock(){
		hours   = 12;
		minutes = 0;
		seconds = 0;

	}

	Clock(int h,int m,int s)
{
		hours   = h;
		minutes = m;
		seconds = s; 
	}

	void operator +(Clock c1)
{
		hours   = hours	       + c1.hours;
		minutes = minutes      + c1.minutes;  
  		seconds	= seconds      + c1.seconds;

	}
	





	void clockAdder (Clock c1 , Clock c2)
{
		hours   = c1.hours		 + c2.hours;
		minutes = c1.minutes   + c2.minutes;
		seconds = c1.seconds   + c2.seconds;

	}

	void display();

};

class test
{
	public:
	void format(){
	cout<<"FORMAT: hh:mm:ss"<<endl;}
};

void Clock :: display()
{ 
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

void main()
{
	test t;
	t.format();
	Clock c1, c2(13, 14, 5);
	Clock c3(0,0,10);
	cout<<"Clock 1"<<endl;
	c1.display();
	cout<<"Clock 2"<<endl;
	c2.display();
	cout<<"Clock 3"<<endl;
	c3.display();
	c3.clockAdder(c1,c2);
	cout<<"Clock 3"<<endl;
	c3.display();
	cout<<"Clock 1 after adding c3"<<endl;
	c1.display();
	c3.display();
	c1+(c3);
	c1.display();
getch();

}
