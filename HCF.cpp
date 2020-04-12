#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout<<"Enter any two Numbers: ";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
            m-=n;
        else
            n-=m;
    }
    cout<<"HCF of the two numbers is: "<<m;
    return 0;
}
