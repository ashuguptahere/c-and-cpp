#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int *p = &a;
    cout<<"The value of a: "<<a<<endl;
    cout<<"Address of a: "<<p<<endl;
    cout<<"Address of p: "<<&p<<endl;
    cout<<"Next address of the memory is: "<<(p+1)<<endl;
    cout<<"Next to next address of the memory is: "<<(p+2)<<endl;
    cout<<"Next to next to next address of the memory is: "<<(p+3)<<endl;
    cout<<"The size of integer is: "<<sizeof(int)<<" bytes";
}
