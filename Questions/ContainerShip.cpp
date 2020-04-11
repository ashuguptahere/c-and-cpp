#include<iostream>

using namespace std;

class A
{
    int a;
public:
    void input()
    {
        cout<<"Enter any number: ";
        cin>>a;
    }
    void output()
    {
        cout<<"The Number is: "<<a<<endl;
    }
};

class B
{
protected:
    int b;
public:
    void input()
    {
        cout<<"Enter any number: ";
        cin>>b;
    }
    void output()
    {
        cout<<"The Number is: "<<b<<endl;
    }
};

class C
{
    int c;
    A a1;
    B b1;
public:
    void input()
    {
        cout<<"Enter the number: ";
        cin>>c;
    }
    void output()
    {
        cout<<"The Number is: "<<c<<endl;
        a1.input();
        a1.output();
        b1.input();
        b1.output();
    }
};

int main()
{
    C c1;
    c1.input();
    c1.output();
}
