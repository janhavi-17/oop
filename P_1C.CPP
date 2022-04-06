#include<iostream.h>
#include<conio.h>
class Book{
   public:
       char bname, author;
       int price;

       void take(char bn, char an, int p)
{
	   bname = bn;
	   author = an;
	   price = p;
       }

       void print()
{
	   cout<<"Book name: "<<bname<<endl;
	   cout<<"Book author: "<<author<<endl;
	   cout<<"Book price: $"<<price<<endl;

       }

};



void main()
{
   Book b1;
   b1.take("xyz", "abc", 3);
   b1.print();
   getch();
}
