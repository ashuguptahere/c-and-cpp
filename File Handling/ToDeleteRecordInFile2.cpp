#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
using namespace std;
class stu
{
    int rollno;
    float marks;
    char name[25];
    char grade;
    public:
    void getdata()
    {
        cout<<"\nEnter Roll no:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Marks:";
        cin>>marks;
        if(marks>=80)
        grade='A';
        else if(marks>=60)
        grade='B';
        else if(marks>=40)
        grade='C';
        else if(marks>=20)
        grade='D';
        else grade='F';
    }
    void putdata()
    {
        cout<<"\n Roll no:"<<rollno<<"\tName:"<<name;
        cout<<"\n Marks:"<<marks<<"\tGrade:"<<grade<<endl;
    }
    int getrno()
    {
        return rollno;
    }
}s1,stud;
void main()
{
    ifstream fio("stu.txt",ios::in);
    ofstream file("temp6.txt",ios::out);
    int rno;
    char found='f';
    char confirm='n';
    cout<<"Enter the Roll no of student to deleted record:";
    cin>>rno;
    while(!fio.eof())
    {
        fio.read((char*)&s1,sizeof(s1));
        if(s1.getrno()==rno)
        {
            s1.putdata();
            found='f';
            cout<<"Do you want to delete record permanantly (y/n):";
            cin>>confirm;
            if(confirm=='n')
            file.write((char*)&s1,sizeof(s1));
        }
        else
        file.write((char*)&s1,sizeof(s1));
    }
    if(found=='f')
    cout<<"\n\n  Record not found...";
    fio.close();
    file.close();
    remove("stu.txt");
    rename("temp6.txt","stu.txt");
    fio.open("stu.txt",ios::in);
    cout<<"\n\n\tRemaining files\n";
    cout<<"\t===============\n";
    while(!fio.eof())
    {
        fio.read((char*)&stud,sizeof(stud));
        if(fio.eof())
        break;
        stud.putdata();
    }
    fio.close();
}
