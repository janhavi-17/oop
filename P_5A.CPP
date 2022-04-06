#include<iostream.h>
#include<conio.h>

class Test
{
	public:
	int x;
	void getx(){
		cout<<"Enter the value for X: ";
		cin>>x;
	}

	void operator --()
	{
		x = x + 2;
	}

	void display()
	{
		cout<<"X: "<<x<<endl;
	}

};

void main ()
{
	Test t1;
	t1.display();
	t1.getx();
	--t1;
	t1.display();
getch();
}
