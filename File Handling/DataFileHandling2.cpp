#include<iostream>
#include<fstream>
#include<stdio.h>
#include<process.h>
#include<ctype.h>
using namespace std;
class student
{
    char name[30];
    int rollno;
    int marks;
    public:
    void input()
    {
        cout<<"\nEnter Name:";
        gets(name);
        cout<<"Enter Rollno:";
        cin>>rollno;
        cout<<"Enter Marks:";
        cin>>marks;
    }
    void display()
    {
        cout<<"\n"<<name<<"\t"<<rollno<<"\t"<<marks<<"\t";
        if(marks>=96)
        cout<<"computer sc.";
        else if(marks>=91&&marks<=95)
        cout<<"Electronics";
        else if(marks>=86&&marks<=90)
        cout<<"Mechanical";
        else if(marks>=81&&marks<=85)
        cout<<"Electrical";
        else if(marks>=76&&marks<=80)
        cout<<"Chemical";
        else if(marks>=71&&marks<=75)
        cout<<"Civil";
    }
};
int main()
{
    student s;
    int n,i,j;
    fstream ofile,afile;
    char ch,ch1;
    do
    {
        cout<<"1.Add records\n2.Show Records\n3.Exit\n";
        cout<<"Enter your choice (1-3):";
        cin>>ch;
        switch(ch)
        {
            case '1' :
            ofile.open("temp4.dat",ios::app|ios::binary);
            cout<<"\nEnter no. of records to be entered:";
            cin>>n;
            for(i=0;i<n;i++)
            {
                s.input();
                ofile.write((char*)&s,sizeof(student));
            }
            ofile.close();
            break;
            case'2':cout<<"\nName\tRollno\tMarks\tStream";
            afile.open("temp4.dat",ios::in);
            while(afile)
            {
                afile.read((char *)&s,sizeof(student));
                if (!afile)
                break;
                s.display();
            }
            afile.close();
            break;
            case'3':exit(0);
        }
        cout<<"\n\t Do you want to continue (y/n):";
        cin>>ch1;
    }while(tolower(ch1)!='n');
}
