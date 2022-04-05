#include<iostream.h>
#include<conio.h>
class book
{
    private:
    int b_id;
    char title[10];
    char author[16];
    public:
void get()
    {
	cout<<"Enter Book id, title, author:";
	cin>>b_id>>title>>author;
    }
    void put()
    {
	cout<<"Book id:"<<b_id<<"title:"<<title<<"\t author:"<<author;
    }
};
void main()
{
  book b;
  b.get();
  b.put();
    getch();
}