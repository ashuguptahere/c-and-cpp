#include<iostream.h>
#include<conio.h>
class student
{
    introllno;
    int marks;
    public:
    student(int a ,int b)
    {
        marks=a;
        rollno=b;
    }
    void dis()
    {
        cout<<"\n Marks of student\t:"<<marks;
        cout<<"\n Roll no of student\t:"<<rollno;
    }
};
void main()
{
    clrscr();
    intc,d;
    cout<<"Enter the Roll no\t:";
    cin>>c;
    cout<<"Enter the Marks\t\t:";
    cin>>d;
    student s1(c,d);
    s1.dis();
    getch();
}
