#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int arr[10];
    int j;
    cout<<"Enter the value of a & b: ";
    cin>>a>>b;
    for(int i=1; i<=a; i++)
    {
        if(a%i == 0)
        {
            arr[j]=i;
        }
    }
    for(int i=1; i<=10; i++)
    cout<<arr[j];
}
