#include<iostream>
using namespace std;

int quick_sort(int a[])
int main()
{
    int a[50],n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
