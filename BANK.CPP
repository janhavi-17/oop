#include <iostream.h>
#include <conio.h>
class bank{
	int ano;
	char anm[40];
	public:
	void get(){
	cout<<"enter account number: ";
	cin>>ano;
	cin.ignore();
	cout<<"enter name: ";
	cin.getline(anm,40);
	}
	void put();
};
class fixed: public bank{
	int ci,pa,fa,r,n,t;
	public:
	fixed(){
	cout<<"enter principal ammount: ";
	cin>>pa;
	cout<<"enter intrest rate: ";
	cin>>r;
	cout<<"enter intrest to be applied per time period(n): ";
	cin>>n;
	cout<<"enter time period: ";
	cin>>t;
	}
      /*	void calc(){
	fa=p*(pow((1+r/n),n*t));
	ci=p-fa;
	cout<<ci<<endl;
	}
	*/
};
class current: public bank{
	protected:
	int amt;
	int rramt;
	public:
	current(){
	cout<<"enter current amount: ";
	cin>>amt;
	cout<<"enter recurring amount: ";
	cin>>rramt;
	}
	void show();
};
class loan: public current{
	int p,r,t,s;
	public:
	loan(){
	p=amt;
	cout<<"enter intrest rate: ";
	cin>>r;
	cout<<"enter time period: ";
	cin>>t;
	s=p*r*t/100;
	cout<<s<<endl;
	}
};
class recurring: public current{
	recurring(){
	cout<<"\nthis code is working"<<endl;
	}
};
void bank::put(){
	cout<<"account name: "<<ano<<endl;
	cout<<"account number: "<<anm<<endl;
}
void current::show(){
cout<<amt<<endl<<rramt<<endl;
}
void main(){
clrscr();
fixed c;
c.get();
c.put();
loan l;
l.show();
getch();
}