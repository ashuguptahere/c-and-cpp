#include<iostream.h>
#include<conio.h>
class stu
{
    inta,b;
    public:
    stu(intc,int d)
    {
        a=c;
        b=d;
        cout<<"a:"<<a<<"\nb:"<<b;
    }
    void print()
    {
        cout<<"\n\n The value of a:"<<a<<"\n The value of b:"<<b;
    }
};
void main()
{
    clrscr();
    stu c=stu(1,2);
    c.print();
    getch();
}
