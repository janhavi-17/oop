#include<iostream.h>
#include<conio.h>
class employee
{
    private:
    int eno;
    char ename[10];
    int esalary;
    public:
    employee()
    {
        esalary=1000;
    }
    void get();
    void put();
};
void employee::get()
    {
        cout<<"Enter the Employee No:";
        cin>>eno;
        cout<<"Enter the Employee Name:";
        cin>>ename;
        
    }
    void employee::put()
    {
        cout<<endl<<eno<<"\t"<<ename<<"\t"<<esalary;
    }


void main()
{
    employee e[3];
    cout<<"Enter the employee information:"<<endl;
    for(int i=0; i<3; i++)
    {
        e[i].get();
    }
    cout<<endl<<"The employee information is:";
    cout<<endl<<"eno \t name \t esalary";

    {
        e[i].put();
    }
    getch();
}