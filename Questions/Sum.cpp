#include<iostream>
using namespace std;

int sum(int a)
{
    if(a == 1)
        return a;
    int s;
    s = a + sum(a-1);
    return s;
}

int main()
{
    int a[5];       // 1D array
    int b[3][3];    // 2D Array
    int k;
    k = sum(10);
    cout<<"k: "<<k;
}