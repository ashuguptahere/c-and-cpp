#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int value[10],size,num,pos,flag=0;
    cout<<"\nEnter the size of the array:";
    cin>>size;
    cout<<"Enter "<<size<<" elements:";
    for(inti=1;i<=size;i++)
    cin>>value[i];
    cout<<"Enter the value which you want to search: ";
    cin>>num;
    for(i=1;i<=size;i++)
    {
        if(value[i]==num)
        {
            pos=i;
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"\n Record found at "<<pos<<" position...";
    else
        cout<<"\n Record not found...";
    getch();
}
