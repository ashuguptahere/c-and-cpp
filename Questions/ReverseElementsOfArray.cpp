#include<iostream>
using namespace std;
int main()
{
    int a[50],size;
    cout<<"Enter the size of the array:";
    cin>>size;
    cout<<"Enter the elements of array:";
    for(int i=0;i<size;i++)
        cin>>a[i];
    cout<<"The reversed array is: ";
    for(int j=size-1;j>=0;j--)
        cout<<a[j]<<" ";
    return 0;
}
