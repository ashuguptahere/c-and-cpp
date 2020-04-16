#include<iostream>

using namespace std;

int left(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int right(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int pyramid(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*";
        }
        for(int l=1;l<i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter any integer number: ";
    cin>>n;
    left(n);
    right(n);
    pyramid(n);
}
