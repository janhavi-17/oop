#include<iostream.h> 
#include<conio.h>

class Bank
{
	public : 
	char bank_name, branch_name;

};

class Interest : public Bank
{
	public: 
		int interest_rate; 

};

class Customer :public Interest
{
	public: 
		int accno;
		char name; 
		void display();
};

void Customer :: display(){
	cout<<"Bank name               : \t"<<bank_name     <<endl;
	cout<<"Branch name             : \t"<<branch_name   <<endl;
	cout<<"Customer Account Number : \t"<<accno         <<endl;
	cout<<"Customer name           : \t"<<name          <<endl;
	cout<<"Rate Of Interest        : \t"<<interest_rate <<endl;
}

void main ()
{
	Customer c1;
	c1.bank_name;
  c1.branch_name;
  c1.accno;
  c1.name;
  c1.interest_rate;


	c1.display();
           getch();
}
