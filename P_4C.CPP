#include<iostream.h>
#include<conio.h>



class Saving
{
	public: 
		float saving_interest_rate = 10;
};


class Current
{
	public: 
		float current_interest_rate = 5; 

};

class Recurring
{
	public: 
		float recurring_interest_rate = 9;

};

class Customer : public Saving, public Current, public Recurring
{
	public:
	  double acno, balance;
	  char name;



	void accountDetails()
{ 
		cout<<"+ Account Number : \t"<<"DRM00"<<acno<<endl; 
		cout<<"+ Customer Name  : \t"<<name<<endl; 
		cout<<"+ Balance        : \t"<<"$"<<balance<<endl; 
											}

	void displayInterest()
{	
		double calcuted_savingInterest    =	balance +	(balance * (saving_interest_rate    /100));

		double calcuted_currentInterest   =	balance +	(balance * (current_interest_rate   /100));

		double calcuted_recurringInterest =	balance +	(balance * (recurring_interest_rate /100));
		
	cout<<"Calcuted Saving Interest    : \t"<<"$"<< calcuted_savingInterest<<endl;
	cout<<"Calcuted Current Interest   : \t"<<"$"<< calcuted_currentInterest<<endl;
	cout<<"Calcuted Recurring Interest : \t"<<"$"<< calcuted_recurringInterest <<endl;
										}													};
void main()
{
	Customer c1; 
	c1.name = "Johanathan";
	c1.acno = 3234;
	c1.balance = 239847.78;
	c1.accountDetails();
	c1.displayInterest();
	Customer c2; 
	c2.name = "Blake Lively";
	c2.acno = 8933;
	c2.balance = 99999.99;
	c2.accountDetails();
	c2.displayInterest();
	getch();
} // main


