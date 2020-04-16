#include<iostream>
using namespace std;
void main()
{
    int n,count=0;
    cout<<"Enter any Number: ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"Number is Prime...";
    else
        cout<<"Number is Not Prime...";
}
