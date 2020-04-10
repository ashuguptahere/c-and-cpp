#include<iostream>

using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout<<"Values of x & y is: "<<x<<" "<<y<<endl;
}

void swapWithAdd(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout<<"Values of x & y is: "<<*x<<" "<<*y<<endl;
}

int main()
{
    int a, b;
    cout<<"Enter the value of a & b: ";
    cin>>a>>b;
    cout<<"Values of a & b before swapping is: "<<a<<" "<<b<<endl;
    swap(a, b);
    cout<<"Values of a & b after swapping is: "<<a<<" "<<b<<endl;
    swapWithAdd(&a, &b);
    cout<<"Values of a & b after swapping with pointers is: "<<a<<" "<<b<<endl;
    /*
    char *name[] = {"Hello", "Hell", "Hello World"};
    cout<<*(name + 1) + 2<<endl;
    cout<<*name + 1;
    */
}
