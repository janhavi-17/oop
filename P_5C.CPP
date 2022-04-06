
#include<iostream.h>
#include<conio.h>

class Test
{
   public:
   char s1;
   char s2;


   void operator +()
{
     char s3 = s1 + s2;
       cout<<s3<<endl;
       
   }
};

void main ()
{
   Test t1;
   +t1;
getch();

}



