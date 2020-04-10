#include<iostream.h>
#include<conio.h>
class student
{
    char name[20];
    int roll;
    int marks;
    static int count;
    public:
    student()
    {
        roll=0;
        marks=0;
    }
    student(inta,int b)
    {
        roll=a;
        marks=b;
    }
    student(student &s)
    {
        roll=s.roll;
        marks=s.marks;
    }
    void dis()
    {
        cout<<"\n Roll no\t:"<<roll;
        cout<<"\n Marks\t\t:"<<marks;
        cout<<"\n Count\t\t:"<<count++;
    }
};
intstudent::count=0;
void main()
{
    clrscr();
    student o1;
    student o2(4,5);
    student o3(o2);
    o1.dis();
    o2.dis();
    o3.dis();
    student(6,8).dis();
    getch();
}
