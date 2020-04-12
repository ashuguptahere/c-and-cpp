#include<iostream.h>
#include<conio.h>
class student
{
    char name[20];
    introllno;
    intmarks[3];
    public:
    void get();
    void dis();
}object;
void student::get()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll no.:";
    cin>>rollno;
    cout<<"Enter marks in Phusics, Chemistry and Mathematics:";
    for(inti=1;i<=3;i++)
    cin>>marks[i];
}
void student::dis()
{
    cout<<"\n Name\t\t\t:"<<name;
    cout<<"\n Roll no.\t\t:"<<rollno;
    for(inti=1;i<=3;i++)
    cout<<"\n Marks in "<<i<<" subject\t:"<<marks[i];
}
void main()
{
    clrscr();
    object.get();
    object.dis();
    getch();
}
