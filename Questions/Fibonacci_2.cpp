#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else if(n == 0)
        return 0;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int n;
    cout<<"Enter the value for n: ";
    cin>>n;
    for(int i=0; i<n; i++)
        cout<<" "<<fibonacci(i);
}