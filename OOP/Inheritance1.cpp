#include<fstream.h>
#include<conio.h>
class student
{
    char name[20];
    introllno;
    int marks;
    public:
    void get();
    void dis();
}o1;
void student::get()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll no:";
    cin>>rollno;
    cout<<"Enter Marks:";
    cin>>marks;
}
void student::dis()
{
    cout<<"\n Name\t:"<<name;
    cout<<"\n Roll no:"<<rollno;
    cout<<"\n Marks\t:"<<marks;
}
void main()
{
    clrscr();
    ofstreamfo;
    fo.open("temp1.txt",ios::binary|ios::binary);
    o1.get();
    fo.write((char*)& o1,sizeof o1);
    fo.close();
    ifstream f1;
    f1.open("temp.txt",ios::binary);
    f1.read((char*)& o1,sizeof o1);
    o1.dis();
    f1.close();
    getch();
}
