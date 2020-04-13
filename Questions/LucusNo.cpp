#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long a=4;
    for(int i=1;i<=5;i++)
    {
        cout<<pow(a,2)-2<<endl;
        a=pow(a,2);
    }
}
