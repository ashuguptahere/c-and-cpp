#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
void bubble(int a[],int n);
intmark[20];
char name[20][20];
int main(void)
{
    inti,j,n,temp;
    char c[20];
    clrscr();
    putchar('\n');
    cout<<"\nEnter number many students:";
    cin>> n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter marks:";
        cin>>mark[i];
        cout<<"Enter name:";
        gets(name[i]);
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(mark[j]>mark[j+1])
    {
        temp=mark[j];
        mark[j+1]=mark[j];
        mark[j]=temp;
        strcpy(c,name[j]);
        strcpy(name[j+1],name[j]);
        strcpy(name[j],c);
    }
    cout<<"\n\n\t  Sorted List\n";
    cout<<"\t  ===========\n"<<endl;
    cout<<"\tMarks"<<"\t\tName"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<mark[i]<<"\t\t"<<name[i]<<endl;
    }
    getch();
}
