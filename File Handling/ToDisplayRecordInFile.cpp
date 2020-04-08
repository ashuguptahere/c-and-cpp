#include<fstream.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<ctype.h>
class student
{
    char name[30];
    introllno;
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
        if(marks>=90)
        cout<<"Grade:A";
        else if(marks>=80)
        cout<<"Grade:B";
        else if(marks>=70)
        cout<<"Grade:C";
        else if(marks>=60)
        cout<<"Grade:D";
        else if(marks>=50)
        cout<<"Grade:E";
        else if(marks>=40)
        cout<<"Grade:F";
    }
};
void main()
{
    clrscr();
    student s;
    intn,i,j;
    fstreamofile,afile;
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
    getch();
}
