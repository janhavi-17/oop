#include<iostream.h>
#include<conio.h>
class Library
{
   public:
       char b_name;
       int b_id, b_year, b_price;

       Library()
{
           cout<<"Library Constructor was invoked."<<endl;
           cout<<"Enter the id of the book: ";
           cin>>b_id;
           cout<<"Enter the name of the book: ";  
           cin>>b_name;
           cout<<"Enter the publication date for the book: ";
           cin>>b_year;
           cout<<"Enter the price of the book: "; 
           cin>>b_price;
       }
       void print();
};
void Library :: print()
{
       cout<<endl;
b_id<=9?cout<<"Book ID:\t0"<<b_id<<endl:cout<<"Book ID:\t"<<b_id<<endl;
       cout<<"Book Name:\t"<<b_name<<endl;
       cout<<"Book Price:\t$"<<b_price<<endl;
       cout<<"Published Year:\t"<<b_year<<endl;
       cout<<endl;
}

void main()
{
   Library l1;
   l1.print();
   getch();

}
