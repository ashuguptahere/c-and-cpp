#include<fstream>
#include<string>
#include<cstdio>
#include<iostream>
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
int main()
{
    //clrscr();
    ifstream fi("stu.txt",ios::in);
    ofstream fo("temp6.txt",ios::out);
    char last='y';
    cout<<"Enter the detail of student whose record is to be inserted\n";
    s1.getdata();
    while(!fi.eof())
    {
        fi.read((char*)&stud,sizeof(stud));
        if(s1.getrno()<=stud.getrno())
        {
            fo.write((char*)&s1,sizeof(s1));
            last='n';
            break;
        }
        else
        fo.write((char*)&stud,sizeof(stud));
    }
    if(last=='y')
    fo.write((char*)&s1,sizeof(s1));
    else if(!fi.eof())
    {
        while(!fi.eof())
        {
            fi.read((char*)&stud,sizeof(stud));
            fo.write((char*)&stud,sizeof(stud));
        }
    }
    fi.close();
    fo.close();
    remove("stu.txt");
    rename("temp6.txt","stu.txt");
    fi.open("stu.txt",ios::in);
    cout<<"\n\n\tRemaining files";
    cout<<"\n\t===============\n";
    while(!fi.eof())
    {
        fi.read((char*)&stud,sizeof(stud));
        if(fi.eof())
        break;
        stud.putdata();
    }
    fi.close();
}
