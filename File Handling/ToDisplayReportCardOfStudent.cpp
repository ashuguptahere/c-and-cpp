#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    clrscr();
    char *name[50],*nm;
    intrno[50],marks[50],i,n,trn;
    cout<<"Enter no. of records:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Name of Student:";
        cin>>name[i];
        cout<<"Enter Roll No. of Student:";
        cin>>rno[i];
        cout<<"Enter Marks of Student:";
        cin>>(marks[i]);
    }
    char ch,ch1;
    int flag=0;
    cout<<"\n 1.Report card of student";
    cout<<"\n 2.List whole records";
    cout<<"\n 3.Exit";
    cout<<"\n   Select your option (1-3):";
    cin>>ch;
    do
    {
        switch(ch)
        {
            case '1':
            cout<<"\nEnter the Roll no.:";
            cin>>trn;
            flag=0;
            for(i=0;i<n;i++)
            if(trn==rno[i])
            {
                cout<<"\n Name:"<<name[i];
                cout<<"\n Roll No.:"<<rno[i];
                cout<<"\n Marks:"<<marks[i];
                flag=1;
            }
            if(flag==0)
            cout<<"Record not found";
            break;
            case '2':
            cout<<"\nRollno\tName\tMarks";
            for(i=0;i<n;i++)
            {
                cout<<"\n"<<rno[i]<<"\t"<<name[i]<<"\t"<<marks[i]<<"\t";
            }
            break;
        }
        cout<<"\n 1.Report card of student";
        cout<<"\n 2.List whole records";
        cout<<"\n 3.Exit";
        cout<<"\n   Select your option (1-3):";
        cin>>ch;
    }while(ch!='3');
    getch();
}
