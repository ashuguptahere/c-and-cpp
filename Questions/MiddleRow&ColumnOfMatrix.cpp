#include<stdio.h>
#include<iostream.h>
#include<conio.h>
const M=10;
const N=10;
void disRowCol(intarr[M][N],intr,int c)
{
    int row = r/2;
    int col = c/2;
    cout<<" Middle Row\t: ";
    for(int j=0;j<c;j++)
    cout<<arr[row][j]<<"  ";
    cout<<endl;
    cout<<" Middle Column\t: ";
    for(j=0;j<c;j++)
    cout<<arr[j][col]<<"  ";
    getch();
}
void main()
{
    clrscr();
    intarr[M][N];
    inti,j;
    intr,c;
    cout<<"\nEnter odd number of rows:";
    cin>>r;
    cout<<"Enter odd number of columns:";
    cin>> c;
    if((r==c)&&((r%2==1)&&(c%2==1)))
    {
        cout<<"\n\Enter the element in the array\n";
        for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
        cin>>arr[i][j];
        }
    }
    else
    {
        cout<<"\n Input row and column not valid...";
        getch();
        return;
    }
    disRowCol(arr,r,c);
}
