#include<iostream>
using namespace std;
int PrimeNo(int a, int b)
{
    int array[100];
    for(int i=a;i<b;i++)
    {
        int n=i;
        int c=0;
        for(int j=2;j<n/2;j++)
        {
            if(n%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
            cout<<n<<" ";
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter any Two Numbers:";
    cin>>a>>b;
    cout<<"\nPrime Numbers are: "<<endl;
    PrimeNo(a,b);
}
