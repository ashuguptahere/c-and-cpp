#include<iostream.h>
#include<conio.h>
int flag=0,pos;
void main()
{
    clrscr();
    intarr[5],size,item,option;
    cout<<"\nEter the size of array:";
    cin>>size;
    cout<<"\nEnter "<<size<<" values in ascending order:";
    for(inti=0;i<size;i++)
    cin>>arr[i];
    cout<<"\nEnter item which you want to search:";
    cin>>item;
    void bsearch(intarr[5],intitem,int size);
    bsearch(arr,item,size);
    getch();
}
void bsearch(intarr[5],intitem,int size)
{
    int beg=0,last=size-1,mid;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(arr[mid]==item)
        {
            pos=mid;
            flag=1;
            break;
        }
        else if(item>arr[mid])
        beg=mid+1;
        else
        last=mid-1;
    }
    if(flag==1)
    cout<<"\n Item found at "<<mid+1<<" position...";
    else
    cout<<"Item not found...";
}
